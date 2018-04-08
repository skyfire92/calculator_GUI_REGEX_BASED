#include "calculatorgui.h"
#include "ui_calculatorgui.h"

CalculatorGui::CalculatorGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorGui)
{
    ui->setupUi(this);
}

CalculatorGui::~CalculatorGui()
{
    delete ui;
}
