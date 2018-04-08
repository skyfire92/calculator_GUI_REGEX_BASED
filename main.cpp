#include "calculatorgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorGui w;
    w.show();

    return a.exec();
}
