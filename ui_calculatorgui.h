/********************************************************************************
** Form generated from reading UI file 'calculatorgui.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORGUI_H
#define UI_CALCULATORGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorGui
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QLineEdit *input_Expression_Line_Edit;
    QGridLayout *gridLayout;
    QPushButton *CalculatorButton_Back;
    QPushButton *CalculatorButton_Divide;
    QPushButton *CalculatorButton_7;
    QPushButton *CalculatorButton_8;
    QPushButton *CalculatorButton_9;
    QPushButton *CalculatorButton_Multiply;
    QPushButton *CalculatorButton_4;
    QPushButton *CalculatorButton_5;
    QPushButton *CalculatorButton_6;
    QPushButton *CalculatorButton_Minus;
    QPushButton *CalculatorButton_1;
    QPushButton *CalculatorButton_2;
    QPushButton *CalculatorButton_3;
    QPushButton *CalculatorButton_Plus;
    QPushButton *CalculatorButton_Dot;
    QPushButton *CalculatorButton_Equal;
    QPushButton *CalculatorButton_0;
    QPushButton *CalculatorButton_Clear;
    QPushButton *CalculatorButton_LeftBracket;
    QPushButton *CalculatorButton_RightBracket;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorGui)
    {
        if (CalculatorGui->objectName().isEmpty())
            CalculatorGui->setObjectName(QStringLiteral("CalculatorGui"));
        CalculatorGui->resize(340, 530);
        CalculatorGui->setMinimumSize(QSize(340, 530));
        CalculatorGui->setAutoFillBackground(false);
        centralWidget = new QWidget(CalculatorGui);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(320, 111));
        lcdNumber->setDigitCount(15);

        verticalLayout->addWidget(lcdNumber);

        input_Expression_Line_Edit = new QLineEdit(centralWidget);
        input_Expression_Line_Edit->setObjectName(QStringLiteral("input_Expression_Line_Edit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(input_Expression_Line_Edit->sizePolicy().hasHeightForWidth());
        input_Expression_Line_Edit->setSizePolicy(sizePolicy);
        input_Expression_Line_Edit->setMinimumSize(QSize(320, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        input_Expression_Line_Edit->setFont(font);

        verticalLayout->addWidget(input_Expression_Line_Edit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        CalculatorButton_Back = new QPushButton(centralWidget);
        CalculatorButton_Back->setObjectName(QStringLiteral("CalculatorButton_Back"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CalculatorButton_Back->sizePolicy().hasHeightForWidth());
        CalculatorButton_Back->setSizePolicy(sizePolicy1);
        CalculatorButton_Back->setMinimumSize(QSize(75, 49));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        CalculatorButton_Back->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Back, 0, 2, 1, 1);

        CalculatorButton_Divide = new QPushButton(centralWidget);
        CalculatorButton_Divide->setObjectName(QStringLiteral("CalculatorButton_Divide"));
        sizePolicy1.setHeightForWidth(CalculatorButton_Divide->sizePolicy().hasHeightForWidth());
        CalculatorButton_Divide->setSizePolicy(sizePolicy1);
        CalculatorButton_Divide->setMinimumSize(QSize(75, 49));
        CalculatorButton_Divide->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Divide, 0, 3, 1, 1);

        CalculatorButton_7 = new QPushButton(centralWidget);
        CalculatorButton_7->setObjectName(QStringLiteral("CalculatorButton_7"));
        sizePolicy1.setHeightForWidth(CalculatorButton_7->sizePolicy().hasHeightForWidth());
        CalculatorButton_7->setSizePolicy(sizePolicy1);
        CalculatorButton_7->setMinimumSize(QSize(75, 49));
        CalculatorButton_7->setFont(font1);

        gridLayout->addWidget(CalculatorButton_7, 1, 0, 1, 1);

        CalculatorButton_8 = new QPushButton(centralWidget);
        CalculatorButton_8->setObjectName(QStringLiteral("CalculatorButton_8"));
        sizePolicy1.setHeightForWidth(CalculatorButton_8->sizePolicy().hasHeightForWidth());
        CalculatorButton_8->setSizePolicy(sizePolicy1);
        CalculatorButton_8->setMinimumSize(QSize(75, 49));
        CalculatorButton_8->setFont(font1);

        gridLayout->addWidget(CalculatorButton_8, 1, 1, 1, 1);

        CalculatorButton_9 = new QPushButton(centralWidget);
        CalculatorButton_9->setObjectName(QStringLiteral("CalculatorButton_9"));
        sizePolicy1.setHeightForWidth(CalculatorButton_9->sizePolicy().hasHeightForWidth());
        CalculatorButton_9->setSizePolicy(sizePolicy1);
        CalculatorButton_9->setMinimumSize(QSize(75, 49));
        CalculatorButton_9->setFont(font1);

        gridLayout->addWidget(CalculatorButton_9, 1, 2, 1, 1);

        CalculatorButton_Multiply = new QPushButton(centralWidget);
        CalculatorButton_Multiply->setObjectName(QStringLiteral("CalculatorButton_Multiply"));
        sizePolicy1.setHeightForWidth(CalculatorButton_Multiply->sizePolicy().hasHeightForWidth());
        CalculatorButton_Multiply->setSizePolicy(sizePolicy1);
        CalculatorButton_Multiply->setMinimumSize(QSize(75, 49));
        CalculatorButton_Multiply->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Multiply, 1, 3, 1, 1);

        CalculatorButton_4 = new QPushButton(centralWidget);
        CalculatorButton_4->setObjectName(QStringLiteral("CalculatorButton_4"));
        sizePolicy1.setHeightForWidth(CalculatorButton_4->sizePolicy().hasHeightForWidth());
        CalculatorButton_4->setSizePolicy(sizePolicy1);
        CalculatorButton_4->setMinimumSize(QSize(75, 49));
        CalculatorButton_4->setFont(font1);

        gridLayout->addWidget(CalculatorButton_4, 2, 0, 1, 1);

        CalculatorButton_5 = new QPushButton(centralWidget);
        CalculatorButton_5->setObjectName(QStringLiteral("CalculatorButton_5"));
        sizePolicy1.setHeightForWidth(CalculatorButton_5->sizePolicy().hasHeightForWidth());
        CalculatorButton_5->setSizePolicy(sizePolicy1);
        CalculatorButton_5->setMinimumSize(QSize(75, 49));
        CalculatorButton_5->setFont(font1);

        gridLayout->addWidget(CalculatorButton_5, 2, 1, 1, 1);

        CalculatorButton_6 = new QPushButton(centralWidget);
        CalculatorButton_6->setObjectName(QStringLiteral("CalculatorButton_6"));
        sizePolicy1.setHeightForWidth(CalculatorButton_6->sizePolicy().hasHeightForWidth());
        CalculatorButton_6->setSizePolicy(sizePolicy1);
        CalculatorButton_6->setMinimumSize(QSize(75, 49));
        CalculatorButton_6->setFont(font1);

        gridLayout->addWidget(CalculatorButton_6, 2, 2, 1, 1);

        CalculatorButton_Minus = new QPushButton(centralWidget);
        CalculatorButton_Minus->setObjectName(QStringLiteral("CalculatorButton_Minus"));
        sizePolicy1.setHeightForWidth(CalculatorButton_Minus->sizePolicy().hasHeightForWidth());
        CalculatorButton_Minus->setSizePolicy(sizePolicy1);
        CalculatorButton_Minus->setMinimumSize(QSize(75, 49));
        CalculatorButton_Minus->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Minus, 2, 3, 1, 1);

        CalculatorButton_1 = new QPushButton(centralWidget);
        CalculatorButton_1->setObjectName(QStringLiteral("CalculatorButton_1"));
        sizePolicy1.setHeightForWidth(CalculatorButton_1->sizePolicy().hasHeightForWidth());
        CalculatorButton_1->setSizePolicy(sizePolicy1);
        CalculatorButton_1->setMinimumSize(QSize(75, 49));
        CalculatorButton_1->setFont(font1);

        gridLayout->addWidget(CalculatorButton_1, 3, 0, 1, 1);

        CalculatorButton_2 = new QPushButton(centralWidget);
        CalculatorButton_2->setObjectName(QStringLiteral("CalculatorButton_2"));
        sizePolicy1.setHeightForWidth(CalculatorButton_2->sizePolicy().hasHeightForWidth());
        CalculatorButton_2->setSizePolicy(sizePolicy1);
        CalculatorButton_2->setMinimumSize(QSize(75, 49));
        CalculatorButton_2->setFont(font1);

        gridLayout->addWidget(CalculatorButton_2, 3, 1, 1, 1);

        CalculatorButton_3 = new QPushButton(centralWidget);
        CalculatorButton_3->setObjectName(QStringLiteral("CalculatorButton_3"));
        sizePolicy1.setHeightForWidth(CalculatorButton_3->sizePolicy().hasHeightForWidth());
        CalculatorButton_3->setSizePolicy(sizePolicy1);
        CalculatorButton_3->setMinimumSize(QSize(75, 49));
        CalculatorButton_3->setFont(font1);

        gridLayout->addWidget(CalculatorButton_3, 3, 2, 1, 1);

        CalculatorButton_Plus = new QPushButton(centralWidget);
        CalculatorButton_Plus->setObjectName(QStringLiteral("CalculatorButton_Plus"));
        sizePolicy1.setHeightForWidth(CalculatorButton_Plus->sizePolicy().hasHeightForWidth());
        CalculatorButton_Plus->setSizePolicy(sizePolicy1);
        CalculatorButton_Plus->setMinimumSize(QSize(75, 49));
        CalculatorButton_Plus->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Plus, 3, 3, 1, 1);

        CalculatorButton_Dot = new QPushButton(centralWidget);
        CalculatorButton_Dot->setObjectName(QStringLiteral("CalculatorButton_Dot"));
        sizePolicy1.setHeightForWidth(CalculatorButton_Dot->sizePolicy().hasHeightForWidth());
        CalculatorButton_Dot->setSizePolicy(sizePolicy1);
        CalculatorButton_Dot->setMinimumSize(QSize(75, 49));
        CalculatorButton_Dot->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Dot, 4, 2, 1, 1);

        CalculatorButton_Equal = new QPushButton(centralWidget);
        CalculatorButton_Equal->setObjectName(QStringLiteral("CalculatorButton_Equal"));
        sizePolicy1.setHeightForWidth(CalculatorButton_Equal->sizePolicy().hasHeightForWidth());
        CalculatorButton_Equal->setSizePolicy(sizePolicy1);
        CalculatorButton_Equal->setMinimumSize(QSize(75, 49));
        CalculatorButton_Equal->setFont(font1);

        gridLayout->addWidget(CalculatorButton_Equal, 4, 3, 1, 1);

        CalculatorButton_0 = new QPushButton(centralWidget);
        CalculatorButton_0->setObjectName(QStringLiteral("CalculatorButton_0"));
        sizePolicy1.setHeightForWidth(CalculatorButton_0->sizePolicy().hasHeightForWidth());
        CalculatorButton_0->setSizePolicy(sizePolicy1);
        CalculatorButton_0->setMinimumSize(QSize(75, 49));
        CalculatorButton_0->setFont(font1);

        gridLayout->addWidget(CalculatorButton_0, 4, 1, 1, 1);

        CalculatorButton_Clear = new QPushButton(centralWidget);
        CalculatorButton_Clear->setObjectName(QStringLiteral("CalculatorButton_Clear"));
        CalculatorButton_Clear->setEnabled(true);
        sizePolicy1.setHeightForWidth(CalculatorButton_Clear->sizePolicy().hasHeightForWidth());
        CalculatorButton_Clear->setSizePolicy(sizePolicy1);
        CalculatorButton_Clear->setMinimumSize(QSize(75, 49));
        CalculatorButton_Clear->setFont(font1);
        CalculatorButton_Clear->setFlat(false);

        gridLayout->addWidget(CalculatorButton_Clear, 4, 0, 1, 1);

        CalculatorButton_LeftBracket = new QPushButton(centralWidget);
        CalculatorButton_LeftBracket->setObjectName(QStringLiteral("CalculatorButton_LeftBracket"));
        sizePolicy1.setHeightForWidth(CalculatorButton_LeftBracket->sizePolicy().hasHeightForWidth());
        CalculatorButton_LeftBracket->setSizePolicy(sizePolicy1);
        CalculatorButton_LeftBracket->setMinimumSize(QSize(75, 49));
        CalculatorButton_LeftBracket->setFont(font1);

        gridLayout->addWidget(CalculatorButton_LeftBracket, 0, 0, 1, 1);

        CalculatorButton_RightBracket = new QPushButton(centralWidget);
        CalculatorButton_RightBracket->setObjectName(QStringLiteral("CalculatorButton_RightBracket"));
        sizePolicy1.setHeightForWidth(CalculatorButton_RightBracket->sizePolicy().hasHeightForWidth());
        CalculatorButton_RightBracket->setSizePolicy(sizePolicy1);
        CalculatorButton_RightBracket->setMinimumSize(QSize(75, 49));
        CalculatorButton_RightBracket->setFont(font1);

        gridLayout->addWidget(CalculatorButton_RightBracket, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        CalculatorGui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorGui);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 340, 21));
        CalculatorGui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorGui);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorGui->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorGui);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        statusBar->setFont(font2);
        CalculatorGui->setStatusBar(statusBar);

        retranslateUi(CalculatorGui);

        QMetaObject::connectSlotsByName(CalculatorGui);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorGui)
    {
        CalculatorGui->setWindowTitle(QApplication::translate("CalculatorGui", "CalculatorGui", nullptr));
        input_Expression_Line_Edit->setText(QString());
        CalculatorButton_Back->setText(QApplication::translate("CalculatorGui", "Back", nullptr));
        CalculatorButton_Divide->setText(QApplication::translate("CalculatorGui", "/", nullptr));
        CalculatorButton_7->setText(QApplication::translate("CalculatorGui", "7", nullptr));
        CalculatorButton_8->setText(QApplication::translate("CalculatorGui", "8", nullptr));
        CalculatorButton_9->setText(QApplication::translate("CalculatorGui", "9", nullptr));
        CalculatorButton_Multiply->setText(QApplication::translate("CalculatorGui", "*", nullptr));
        CalculatorButton_4->setText(QApplication::translate("CalculatorGui", "4", nullptr));
        CalculatorButton_5->setText(QApplication::translate("CalculatorGui", "5", nullptr));
        CalculatorButton_6->setText(QApplication::translate("CalculatorGui", "6", nullptr));
        CalculatorButton_Minus->setText(QApplication::translate("CalculatorGui", "-", nullptr));
        CalculatorButton_1->setText(QApplication::translate("CalculatorGui", "1", nullptr));
        CalculatorButton_2->setText(QApplication::translate("CalculatorGui", "2", nullptr));
        CalculatorButton_3->setText(QApplication::translate("CalculatorGui", "3", nullptr));
        CalculatorButton_Plus->setText(QApplication::translate("CalculatorGui", "+", nullptr));
        CalculatorButton_Dot->setText(QApplication::translate("CalculatorGui", ".", nullptr));
        CalculatorButton_Equal->setText(QApplication::translate("CalculatorGui", "=", nullptr));
        CalculatorButton_0->setText(QApplication::translate("CalculatorGui", "0", nullptr));
        CalculatorButton_Clear->setText(QApplication::translate("CalculatorGui", "Clear", nullptr));
        CalculatorButton_LeftBracket->setText(QApplication::translate("CalculatorGui", "(", nullptr));
        CalculatorButton_RightBracket->setText(QApplication::translate("CalculatorGui", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorGui: public Ui_CalculatorGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORGUI_H
