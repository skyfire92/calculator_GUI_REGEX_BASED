#include "calculatorgui.h"
#include "ui_calculatorgui.h"

#include <QString>

CalculatorGui::CalculatorGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorGui)
{
    ui->setupUi(this);
    calculator_backend = new CalculatorBackend;
}


CalculatorGui::~CalculatorGui()
{
    delete ui;
    delete calculator_backend;
}

void CalculatorGui::on_CalculatorButton_0_clicked()
{
    ui->input_Expression_Line_Edit->insert("0");
}

void CalculatorGui::on_CalculatorButton_1_clicked()
{
    ui->input_Expression_Line_Edit->insert("1");
}

void CalculatorGui::on_CalculatorButton_2_clicked()
{
    ui->input_Expression_Line_Edit->insert("2");
}

void CalculatorGui::on_CalculatorButton_3_clicked()
{
    ui->input_Expression_Line_Edit->insert("3");
}

void CalculatorGui::on_CalculatorButton_4_clicked()
{
    ui->input_Expression_Line_Edit->insert("4");
}

void CalculatorGui::on_CalculatorButton_5_clicked()
{
    ui->input_Expression_Line_Edit->insert("5");
}

void CalculatorGui::on_CalculatorButton_6_clicked()
{
    ui->input_Expression_Line_Edit->insert("6");
}

void CalculatorGui::on_CalculatorButton_7_clicked()
{
    ui->input_Expression_Line_Edit->insert("7");
}

void CalculatorGui::on_CalculatorButton_8_clicked()
{
    ui->input_Expression_Line_Edit->insert("8");
}

void CalculatorGui::on_CalculatorButton_9_clicked()
{
    ui->input_Expression_Line_Edit->insert("9");
}

void CalculatorGui::on_CalculatorButton_Plus_clicked()
{
    ui->input_Expression_Line_Edit->insert("+");
}

void CalculatorGui::on_CalculatorButton_Minus_clicked()
{
    ui->input_Expression_Line_Edit->insert("-");
}

void CalculatorGui::on_CalculatorButton_Multiply_clicked()
{
    ui->input_Expression_Line_Edit->insert("*");
}

void CalculatorGui::on_CalculatorButton_Divide_clicked()
{
    ui->input_Expression_Line_Edit->insert("/");
}

void CalculatorGui::on_CalculatorButton_Dot_clicked()
{
    ui->input_Expression_Line_Edit->insert(".");
}

void CalculatorGui::on_CalculatorButton_LeftBracket_clicked()
{
    ui->input_Expression_Line_Edit->insert("(");
}

void CalculatorGui::on_CalculatorButton_RightBracket_clicked()
{
    ui->input_Expression_Line_Edit->insert(")");
}

void CalculatorGui::on_CalculatorButton_Back_clicked()
{
    ui->input_Expression_Line_Edit->backspace();
}

void CalculatorGui::on_CalculatorButton_Clear_clicked()
{
    ui->input_Expression_Line_Edit->clear();
    ui->lcdNumber->display(0);
}

void CalculatorGui::on_CalculatorButton_Equal_clicked()
{
    calculator_backend->get_input_string(ui->input_Expression_Line_Edit->text().toStdString());
    QString result_str = calculator_backend->calculate_expression();
    if(result_str!="Please enter correct expression" && result_str!="Division by zero error")
    {
        double result = result_str.toDouble();
        ui->lcdNumber->display(result);
        ui->input_Expression_Line_Edit->clear();
    }
    else
    {
        ui->statusBar->showMessage(result_str, 2500);
        ui->input_Expression_Line_Edit->clear();
    }
}
