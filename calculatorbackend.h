#ifndef CALCULATORBACKEND_H
#define CALCULATORBACKEND_H

#include <QString>

using std::string;

class CalculatorBackend
{
private:
    string input_string;

public:
    CalculatorBackend();
    void get_input_string(string _input_string);
    string calculate_add_and_subtr(string _input_string);
    string calculate_mult_and_div(string _input_string);
    string find_and_calculate_parentheses(string _input_string);

    QString calculate_expression();

    bool fast_sanity_check(string _input_string);
};

#endif // CALCULATORBACKEND_H
