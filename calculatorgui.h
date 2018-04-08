#ifndef CALCULATORGUI_H
#define CALCULATORGUI_H

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

private:
    Ui::CalculatorGui *ui;
};

#endif // CALCULATORGUI_H
