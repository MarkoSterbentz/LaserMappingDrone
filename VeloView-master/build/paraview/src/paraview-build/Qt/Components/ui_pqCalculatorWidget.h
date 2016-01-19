/********************************************************************************
** Form generated from reading UI file 'pqCalculatorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCALCULATORWIDGET_H
#define UI_PQCALCULATORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_CalculatorWidget
{
public:
    QVBoxLayout *verticalLayout_7;
    pqLineEdit *Function;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QToolButton *Clear;
    QToolButton *sin;
    QToolButton *asin;
    QToolButton *sinh;
    QToolButton *v1v2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *LeftParentheses;
    QToolButton *cos;
    QToolButton *acos;
    QToolButton *cosh;
    QToolButton *mag;
    QVBoxLayout *verticalLayout_3;
    QToolButton *RightParentheses;
    QToolButton *tan;
    QToolButton *atan;
    QToolButton *tanh;
    QToolButton *norm;
    QVBoxLayout *verticalLayout_4;
    QToolButton *iHat;
    QToolButton *abs;
    QToolButton *ceil;
    QToolButton *xy;
    QToolButton *ln;
    QVBoxLayout *verticalLayout_5;
    QToolButton *jHat;
    QToolButton *sqrt;
    QToolButton *floor;
    QToolButton *exp;
    QToolButton *log10;
    QVBoxLayout *verticalLayout_6;
    QToolButton *kHat;
    QToolButton *Plus;
    QToolButton *Minus;
    QToolButton *Multiply;
    QToolButton *Divide;
    QHBoxLayout *horizontalLayout;
    QPushButton *Scalars;
    QPushButton *Vectors;

    void setupUi(QWidget *CalculatorWidget)
    {
        if (CalculatorWidget->objectName().isEmpty())
            CalculatorWidget->setObjectName(QString::fromUtf8("CalculatorWidget"));
        CalculatorWidget->resize(339, 209);
        verticalLayout_7 = new QVBoxLayout(CalculatorWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        Function = new pqLineEdit(CalculatorWidget);
        Function->setObjectName(QString::fromUtf8("Function"));
        Function->setProperty("resetCursorPositionOnEditingFinished", QVariant(false));

        verticalLayout_7->addWidget(Function);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Clear = new QToolButton(CalculatorWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Clear);

        sin = new QToolButton(CalculatorWidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sizePolicy.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy);
        sin->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(sin);

        asin = new QToolButton(CalculatorWidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        sizePolicy.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy);
        asin->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(asin);

        sinh = new QToolButton(CalculatorWidget);
        sinh->setObjectName(QString::fromUtf8("sinh"));
        sizePolicy.setHeightForWidth(sinh->sizePolicy().hasHeightForWidth());
        sinh->setSizePolicy(sizePolicy);
        sinh->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(sinh);

        v1v2 = new QToolButton(CalculatorWidget);
        v1v2->setObjectName(QString::fromUtf8("v1v2"));
        sizePolicy.setHeightForWidth(v1v2->sizePolicy().hasHeightForWidth());
        v1v2->setSizePolicy(sizePolicy);
        v1v2->setFocusPolicy(Qt::NoFocus);
        v1v2->setAutoRaise(false);

        verticalLayout->addWidget(v1v2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LeftParentheses = new QToolButton(CalculatorWidget);
        LeftParentheses->setObjectName(QString::fromUtf8("LeftParentheses"));
        sizePolicy.setHeightForWidth(LeftParentheses->sizePolicy().hasHeightForWidth());
        LeftParentheses->setSizePolicy(sizePolicy);
        LeftParentheses->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(LeftParentheses);

        cos = new QToolButton(CalculatorWidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy);
        cos->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(cos);

        acos = new QToolButton(CalculatorWidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy);
        acos->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(acos);

        cosh = new QToolButton(CalculatorWidget);
        cosh->setObjectName(QString::fromUtf8("cosh"));
        sizePolicy.setHeightForWidth(cosh->sizePolicy().hasHeightForWidth());
        cosh->setSizePolicy(sizePolicy);
        cosh->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(cosh);

        mag = new QToolButton(CalculatorWidget);
        mag->setObjectName(QString::fromUtf8("mag"));
        sizePolicy.setHeightForWidth(mag->sizePolicy().hasHeightForWidth());
        mag->setSizePolicy(sizePolicy);
        mag->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(mag);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        RightParentheses = new QToolButton(CalculatorWidget);
        RightParentheses->setObjectName(QString::fromUtf8("RightParentheses"));
        sizePolicy.setHeightForWidth(RightParentheses->sizePolicy().hasHeightForWidth());
        RightParentheses->setSizePolicy(sizePolicy);
        RightParentheses->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(RightParentheses);

        tan = new QToolButton(CalculatorWidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy);
        tan->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(tan);

        atan = new QToolButton(CalculatorWidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy);
        atan->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(atan);

        tanh = new QToolButton(CalculatorWidget);
        tanh->setObjectName(QString::fromUtf8("tanh"));
        sizePolicy.setHeightForWidth(tanh->sizePolicy().hasHeightForWidth());
        tanh->setSizePolicy(sizePolicy);
        tanh->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(tanh);

        norm = new QToolButton(CalculatorWidget);
        norm->setObjectName(QString::fromUtf8("norm"));
        sizePolicy.setHeightForWidth(norm->sizePolicy().hasHeightForWidth());
        norm->setSizePolicy(sizePolicy);
        norm->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(norm);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        iHat = new QToolButton(CalculatorWidget);
        iHat->setObjectName(QString::fromUtf8("iHat"));
        sizePolicy.setHeightForWidth(iHat->sizePolicy().hasHeightForWidth());
        iHat->setSizePolicy(sizePolicy);
        iHat->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(iHat);

        abs = new QToolButton(CalculatorWidget);
        abs->setObjectName(QString::fromUtf8("abs"));
        sizePolicy.setHeightForWidth(abs->sizePolicy().hasHeightForWidth());
        abs->setSizePolicy(sizePolicy);
        abs->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(abs);

        ceil = new QToolButton(CalculatorWidget);
        ceil->setObjectName(QString::fromUtf8("ceil"));
        sizePolicy.setHeightForWidth(ceil->sizePolicy().hasHeightForWidth());
        ceil->setSizePolicy(sizePolicy);
        ceil->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(ceil);

        xy = new QToolButton(CalculatorWidget);
        xy->setObjectName(QString::fromUtf8("xy"));
        sizePolicy.setHeightForWidth(xy->sizePolicy().hasHeightForWidth());
        xy->setSizePolicy(sizePolicy);
        xy->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(xy);

        ln = new QToolButton(CalculatorWidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        sizePolicy.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy);
        ln->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(ln);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        jHat = new QToolButton(CalculatorWidget);
        jHat->setObjectName(QString::fromUtf8("jHat"));
        sizePolicy.setHeightForWidth(jHat->sizePolicy().hasHeightForWidth());
        jHat->setSizePolicy(sizePolicy);
        jHat->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(jHat);

        sqrt = new QToolButton(CalculatorWidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sizePolicy.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy);
        sqrt->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(sqrt);

        floor = new QToolButton(CalculatorWidget);
        floor->setObjectName(QString::fromUtf8("floor"));
        sizePolicy.setHeightForWidth(floor->sizePolicy().hasHeightForWidth());
        floor->setSizePolicy(sizePolicy);
        floor->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(floor);

        exp = new QToolButton(CalculatorWidget);
        exp->setObjectName(QString::fromUtf8("exp"));
        sizePolicy.setHeightForWidth(exp->sizePolicy().hasHeightForWidth());
        exp->setSizePolicy(sizePolicy);
        exp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(exp);

        log10 = new QToolButton(CalculatorWidget);
        log10->setObjectName(QString::fromUtf8("log10"));
        sizePolicy.setHeightForWidth(log10->sizePolicy().hasHeightForWidth());
        log10->setSizePolicy(sizePolicy);
        log10->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(log10);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        kHat = new QToolButton(CalculatorWidget);
        kHat->setObjectName(QString::fromUtf8("kHat"));
        sizePolicy.setHeightForWidth(kHat->sizePolicy().hasHeightForWidth());
        kHat->setSizePolicy(sizePolicy);
        kHat->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(kHat);

        Plus = new QToolButton(CalculatorWidget);
        Plus->setObjectName(QString::fromUtf8("Plus"));
        sizePolicy.setHeightForWidth(Plus->sizePolicy().hasHeightForWidth());
        Plus->setSizePolicy(sizePolicy);
        Plus->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Plus);

        Minus = new QToolButton(CalculatorWidget);
        Minus->setObjectName(QString::fromUtf8("Minus"));
        sizePolicy.setHeightForWidth(Minus->sizePolicy().hasHeightForWidth());
        Minus->setSizePolicy(sizePolicy);
        Minus->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Minus);

        Multiply = new QToolButton(CalculatorWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Multiply);

        Divide = new QToolButton(CalculatorWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(Divide);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Scalars = new QPushButton(CalculatorWidget);
        Scalars->setObjectName(QString::fromUtf8("Scalars"));
        Scalars->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(Scalars);

        Vectors = new QPushButton(CalculatorWidget);
        Vectors->setObjectName(QString::fromUtf8("Vectors"));
        Vectors->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(Vectors);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalLayout_7->setStretch(1, 1);

        retranslateUi(CalculatorWidget);
        QObject::connect(Clear, SIGNAL(pressed()), Function, SLOT(clear()));

        QMetaObject::connectSlotsByName(CalculatorWidget);
    } // setupUi

    void retranslateUi(QWidget *CalculatorWidget)
    {
        CalculatorWidget->setWindowTitle(QApplication::translate("CalculatorWidget", "Form", 0, QApplication::UnicodeUTF8));
        Clear->setText(QApplication::translate("CalculatorWidget", "Clear", 0, QApplication::UnicodeUTF8));
        sin->setText(QApplication::translate("CalculatorWidget", "sin", 0, QApplication::UnicodeUTF8));
        asin->setText(QApplication::translate("CalculatorWidget", "asin", 0, QApplication::UnicodeUTF8));
        sinh->setText(QApplication::translate("CalculatorWidget", "sinh", 0, QApplication::UnicodeUTF8));
        v1v2->setText(QApplication::translate("CalculatorWidget", "v1.v2", 0, QApplication::UnicodeUTF8));
        LeftParentheses->setText(QApplication::translate("CalculatorWidget", "(", 0, QApplication::UnicodeUTF8));
        cos->setText(QApplication::translate("CalculatorWidget", "cos", 0, QApplication::UnicodeUTF8));
        acos->setText(QApplication::translate("CalculatorWidget", "acos", 0, QApplication::UnicodeUTF8));
        cosh->setText(QApplication::translate("CalculatorWidget", "cosh", 0, QApplication::UnicodeUTF8));
        mag->setText(QApplication::translate("CalculatorWidget", "mag", 0, QApplication::UnicodeUTF8));
        RightParentheses->setText(QApplication::translate("CalculatorWidget", ")", 0, QApplication::UnicodeUTF8));
        tan->setText(QApplication::translate("CalculatorWidget", "tan", 0, QApplication::UnicodeUTF8));
        atan->setText(QApplication::translate("CalculatorWidget", "atan", 0, QApplication::UnicodeUTF8));
        tanh->setText(QApplication::translate("CalculatorWidget", "tanh", 0, QApplication::UnicodeUTF8));
        norm->setText(QApplication::translate("CalculatorWidget", "norm", 0, QApplication::UnicodeUTF8));
        iHat->setText(QApplication::translate("CalculatorWidget", "iHat", 0, QApplication::UnicodeUTF8));
        abs->setText(QApplication::translate("CalculatorWidget", "abs", 0, QApplication::UnicodeUTF8));
        ceil->setText(QApplication::translate("CalculatorWidget", "ceil", 0, QApplication::UnicodeUTF8));
        xy->setText(QApplication::translate("CalculatorWidget", "x^y", 0, QApplication::UnicodeUTF8));
        ln->setText(QApplication::translate("CalculatorWidget", "ln", 0, QApplication::UnicodeUTF8));
        jHat->setText(QApplication::translate("CalculatorWidget", "jHat", 0, QApplication::UnicodeUTF8));
        sqrt->setText(QApplication::translate("CalculatorWidget", "sqrt", 0, QApplication::UnicodeUTF8));
        floor->setText(QApplication::translate("CalculatorWidget", "floor", 0, QApplication::UnicodeUTF8));
        exp->setText(QApplication::translate("CalculatorWidget", "exp", 0, QApplication::UnicodeUTF8));
        log10->setText(QApplication::translate("CalculatorWidget", "log10", 0, QApplication::UnicodeUTF8));
        kHat->setText(QApplication::translate("CalculatorWidget", "kHat", 0, QApplication::UnicodeUTF8));
        Plus->setText(QApplication::translate("CalculatorWidget", "+", 0, QApplication::UnicodeUTF8));
        Minus->setText(QApplication::translate("CalculatorWidget", "-", 0, QApplication::UnicodeUTF8));
        Multiply->setText(QApplication::translate("CalculatorWidget", "*", 0, QApplication::UnicodeUTF8));
        Divide->setText(QApplication::translate("CalculatorWidget", "/", 0, QApplication::UnicodeUTF8));
        Scalars->setText(QApplication::translate("CalculatorWidget", "Scalars", 0, QApplication::UnicodeUTF8));
        Vectors->setText(QApplication::translate("CalculatorWidget", "Vectors", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalculatorWidget: public Ui_CalculatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCALCULATORWIDGET_H
