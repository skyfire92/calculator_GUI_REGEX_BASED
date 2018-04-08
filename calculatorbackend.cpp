#include "calculatorbackend.h"

#include <QString>
#include <string>
#include <regex>

using namespace std;

CalculatorBackend::CalculatorBackend()
{

}

void CalculatorBackend::get_input_string(string _input_string)
{
    input_string = _input_string;
}

QString CalculatorBackend::calculate_expression()
{
    QString error1 = "Please enter correct expression";
    QString error2 = "Division by zero error";

    input_string = std::regex_replace(input_string, std::regex("[[:space:]]*"), ""); //delete spaces in input string
    string initial_input = input_string;

    if (!fast_sanity_check(input_string))
    {
        return error1;
    }

    input_string = find_and_calculate_parentheses(input_string);

    if (input_string == "error")
    {
        return error2;
    }

    input_string = calculate_mult_and_div(input_string);

    if (input_string == "error")
    {
        return error2;
    }

    input_string = calculate_add_and_subtr(input_string);

    return QString::fromStdString(input_string);
}

string CalculatorBackend::find_and_calculate_parentheses(string _input_string)
{
    regex extract_parenthesis
    (
        "(\\()([^\\(]+?)(\\))"
    );

    smatch res;

    string full_match;
    string matched_group;

    while (regex_search(_input_string, res, extract_parenthesis))
    {
        full_match = res[0];
        matched_group = res[2];

        matched_group = calculate_mult_and_div(matched_group);
        if (matched_group == "error")
        {
            return "error";
        }
        matched_group = calculate_add_and_subtr(matched_group);

        size_t f = _input_string.find(full_match);
        _input_string.replace(f, string(full_match).length(), matched_group);
    }
    return _input_string;
}

string CalculatorBackend::calculate_mult_and_div(string _input_string)
{
    regex extract_mult_and_div
    (
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
        "(\\*|/)"
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
    );

    smatch res;

    while (regex_search(_input_string, res, extract_mult_and_div))
    {
        string group_before_calculation_mult_and_div = res[0];

        double operation_result;

        double operand1 = std::atof(res[1].str().c_str());      //OPERAND1
        double operand2 = std::atof(res[4].str().c_str());      //OPERAND2
        char operation_sign = res[3].str()[0];                  //SIGN

        if (operand2 == 0 && operation_sign == '/')
        {
            return "error";
        }

        switch (operation_sign)
        {
        case '*':
            operation_result = operand1 * operand2;
            break;
        case '/':
            operation_result = operand1 / operand2;
            break;
        default:
            break;
        }

        size_t f = _input_string.find(group_before_calculation_mult_and_div);
        _input_string.replace(f, string(group_before_calculation_mult_and_div).length(), std::to_string(operation_result));
    }
    return _input_string;
}

string CalculatorBackend::calculate_add_and_subtr(string _input_string)
{
    smatch res;

    std::regex extract_add_and_subtr
    (
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
        "(\\+|-)"
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
    );

    while (regex_search(_input_string, res, extract_add_and_subtr))
    {
        string group_before_calculation_add_and_subtr = res[0];

        double operation_result;

        double operand1 = std::atof(res[1].str().c_str());      //OPERAND1
        double operand2 = std::atof(res[4].str().c_str());      //OPERAND2
        char operation_sign = res[3].str()[0];                  //SIGN

        switch (operation_sign)
        {
        case '+':
            operation_result = operand1 + operand2;
            break;
        case '-':
            operation_result = operand1 - operand2;
            break;
        default:
            break;
        }

        size_t f = _input_string.find(group_before_calculation_add_and_subtr);
        _input_string.replace(f, string(group_before_calculation_add_and_subtr).length(), std::to_string(operation_result));
    }
    return _input_string;
}

bool CalculatorBackend::fast_sanity_check(string _input_string)
{
    regex extract_mult_and_div
    (
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
        "(\\*|/)"
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
    );

    regex extract_add_and_subtr
    (
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
        "(\\+|-)"
        "(\\+|-?[0-9]+(\\.[0-9]+)?)"
    );
    smatch res;

    if ((regex_search(_input_string, res, extract_mult_and_div)) || ((regex_search(_input_string, res, extract_add_and_subtr)) && (!regex_search(_input_string, res, regex(".*(\\+{2})|(-{2}).*")))))
    {
        return true;
    }
    else
        return false;
}
