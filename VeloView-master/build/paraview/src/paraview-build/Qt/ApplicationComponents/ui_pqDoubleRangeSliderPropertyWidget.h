/********************************************************************************
** Form generated from reading UI file 'pqDoubleRangeSliderPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQDOUBLERANGESLIDERPROPERTYWIDGET_H
#define UI_PQDOUBLERANGESLIDERPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "pqDoubleRangeWidget.h"
#include "pqHighlightablePushButton.h"

QT_BEGIN_NAMESPACE

class Ui_DoubleRangeSliderPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    pqDoubleRangeWidget *ThresholdBetween_0;
    QLabel *label_4;
    pqDoubleRangeWidget *ThresholdBetween_1;
    pqHighlightablePushButton *Reset;

    void setupUi(QWidget *DoubleRangeSliderPropertyWidget)
    {
        if (DoubleRangeSliderPropertyWidget->objectName().isEmpty())
            DoubleRangeSliderPropertyWidget->setObjectName(QString::fromUtf8("DoubleRangeSliderPropertyWidget"));
        DoubleRangeSliderPropertyWidget->resize(130, 38);
        gridLayout = new QGridLayout(DoubleRangeSliderPropertyWidget);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(DoubleRangeSliderPropertyWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        ThresholdBetween_0 = new pqDoubleRangeWidget(DoubleRangeSliderPropertyWidget);
        ThresholdBetween_0->setObjectName(QString::fromUtf8("ThresholdBetween_0"));

        gridLayout->addWidget(ThresholdBetween_0, 0, 1, 1, 1);

        label_4 = new QLabel(DoubleRangeSliderPropertyWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        ThresholdBetween_1 = new pqDoubleRangeWidget(DoubleRangeSliderPropertyWidget);
        ThresholdBetween_1->setObjectName(QString::fromUtf8("ThresholdBetween_1"));

        gridLayout->addWidget(ThresholdBetween_1, 1, 1, 1, 1);

        Reset = new pqHighlightablePushButton(DoubleRangeSliderPropertyWidget);
        Reset->setObjectName(QString::fromUtf8("Reset"));

        gridLayout->addWidget(Reset, 0, 2, 2, 1);


        retranslateUi(DoubleRangeSliderPropertyWidget);

        QMetaObject::connectSlotsByName(DoubleRangeSliderPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *DoubleRangeSliderPropertyWidget)
    {
        DoubleRangeSliderPropertyWidget->setWindowTitle(QApplication::translate("DoubleRangeSliderPropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DoubleRangeSliderPropertyWidget", "Minimum", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DoubleRangeSliderPropertyWidget", "Maximum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Reset->setToolTip(QApplication::translate("DoubleRangeSliderPropertyWidget", "Reset using current data values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DoubleRangeSliderPropertyWidget: public Ui_DoubleRangeSliderPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQDOUBLERANGESLIDERPROPERTYWIDGET_H
