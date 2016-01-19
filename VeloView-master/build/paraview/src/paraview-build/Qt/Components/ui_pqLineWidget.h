/********************************************************************************
** Form generated from reading UI file 'pqLineWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINEWIDGET_H
#define UI_PQLINEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_pqLineWidget
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *visible;
    QGridLayout *gridLayout;
    QLabel *labelPoint1;
    pqLineEdit *point1Z;
    pqLineEdit *point1Y;
    pqLineEdit *point1X;
    QHBoxLayout *hboxLayout;
    QLabel *labelPoint2;
    pqLineEdit *point2X;
    pqLineEdit *point2Y;
    pqLineEdit *point2Z;
    QPushButton *xAxis;
    QPushButton *yAxis;
    QPushButton *zAxis;

    void setupUi(QWidget *pqLineWidget)
    {
        if (pqLineWidget->objectName().isEmpty())
            pqLineWidget->setObjectName(QString::fromUtf8("pqLineWidget"));
        pqLineWidget->resize(232, 196);
        vboxLayout = new QVBoxLayout(pqLineWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        visible = new QCheckBox(pqLineWidget);
        visible->setObjectName(QString::fromUtf8("visible"));

        vboxLayout->addWidget(visible);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelPoint1 = new QLabel(pqLineWidget);
        labelPoint1->setObjectName(QString::fromUtf8("labelPoint1"));
        labelPoint1->setWordWrap(true);

        gridLayout->addWidget(labelPoint1, 0, 0, 1, 1);

        point1Z = new pqLineEdit(pqLineWidget);
        point1Z->setObjectName(QString::fromUtf8("point1Z"));

        gridLayout->addWidget(point1Z, 0, 3, 1, 1);

        point1Y = new pqLineEdit(pqLineWidget);
        point1Y->setObjectName(QString::fromUtf8("point1Y"));

        gridLayout->addWidget(point1Y, 0, 2, 1, 1);

        point1X = new pqLineEdit(pqLineWidget);
        point1X->setObjectName(QString::fromUtf8("point1X"));

        gridLayout->addWidget(point1X, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        labelPoint2 = new QLabel(pqLineWidget);
        labelPoint2->setObjectName(QString::fromUtf8("labelPoint2"));
        labelPoint2->setWordWrap(true);

        hboxLayout->addWidget(labelPoint2);

        point2X = new pqLineEdit(pqLineWidget);
        point2X->setObjectName(QString::fromUtf8("point2X"));

        hboxLayout->addWidget(point2X);

        point2Y = new pqLineEdit(pqLineWidget);
        point2Y->setObjectName(QString::fromUtf8("point2Y"));

        hboxLayout->addWidget(point2Y);

        point2Z = new pqLineEdit(pqLineWidget);
        point2Z->setObjectName(QString::fromUtf8("point2Z"));

        hboxLayout->addWidget(point2Z);


        vboxLayout->addLayout(hboxLayout);

        xAxis = new QPushButton(pqLineWidget);
        xAxis->setObjectName(QString::fromUtf8("xAxis"));

        vboxLayout->addWidget(xAxis);

        yAxis = new QPushButton(pqLineWidget);
        yAxis->setObjectName(QString::fromUtf8("yAxis"));

        vboxLayout->addWidget(yAxis);

        zAxis = new QPushButton(pqLineWidget);
        zAxis->setObjectName(QString::fromUtf8("zAxis"));

        vboxLayout->addWidget(zAxis);

        QWidget::setTabOrder(visible, point1X);
        QWidget::setTabOrder(point1X, point1Y);
        QWidget::setTabOrder(point1Y, point1Z);
        QWidget::setTabOrder(point1Z, point2X);
        QWidget::setTabOrder(point2X, point2Y);
        QWidget::setTabOrder(point2Y, point2Z);

        retranslateUi(pqLineWidget);

        QMetaObject::connectSlotsByName(pqLineWidget);
    } // setupUi

    void retranslateUi(QWidget *pqLineWidget)
    {
        pqLineWidget->setWindowTitle(QApplication::translate("pqLineWidget", "Form", 0, QApplication::UnicodeUTF8));
        visible->setText(QApplication::translate("pqLineWidget", "Show Line", 0, QApplication::UnicodeUTF8));
        labelPoint1->setText(QApplication::translate("pqLineWidget", "Point 1", 0, QApplication::UnicodeUTF8));
        labelPoint2->setText(QApplication::translate("pqLineWidget", "Point 2", 0, QApplication::UnicodeUTF8));
        xAxis->setText(QApplication::translate("pqLineWidget", "X Axis", 0, QApplication::UnicodeUTF8));
        yAxis->setText(QApplication::translate("pqLineWidget", "Y Axis", 0, QApplication::UnicodeUTF8));
        zAxis->setText(QApplication::translate("pqLineWidget", "Z Axis", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqLineWidget: public Ui_pqLineWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINEWIDGET_H
