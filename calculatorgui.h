#ifndef CALCULATORGUI_H
#define CALCULATORGUI_H

#include "calculatorbackend.h"
#include <QMainWindow>

namespace Ui {
class CalculatorGui;
}

class CalculatorGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorGui(QWidget *parent = 0);
    ~CalculatorGui();

private slots:

    void on_CalculatorButton_0_clicked();

    void on_CalculatorButton_1_clicked();

    void on_CalculatorButton_2_clicked();

    void on_CalculatorButton_3_clicked();

    void on_CalculatorButton_4_clicked();

    void on_CalculatorButton_5_clicked();

    void on_CalculatorButton_6_clicked();

    void on_CalculatorButton_7_clicked();

    void on_CalculatorButton_8_clicked();

    void on_CalculatorButton_9_clicked();

    void on_CalculatorButton_Plus_clicked();

    void on_CalculatorButton_Minus_clicked();

    void on_CalculatorButton_Multiply_clicked();

    void on_CalculatorButton_Divide_clicked();

    void on_CalculatorButton_Dot_clicked();

    void on_CalculatorButton_LeftBracket_clicked();

    void on_CalculatorButton_RightBracket_clicked();

    void on_CalculatorButton_Back_clicked();

    void on_CalculatorButton_Clear_clicked();

    void on_CalculatorButton_Equal_clicked();

private:
    Ui::CalculatorGui *ui;
    CalculatorBackend *calculator_backend;
};

#endif // CALCULATORGUI_H
