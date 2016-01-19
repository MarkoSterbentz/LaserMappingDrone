/********************************************************************************
** Form generated from reading UI file 'pqSeriesEditorPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSERIESEDITORPROPERTYWIDGET_H
#define UI_PQSERIESEDITORPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "pqTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_SeriesEditorPropertyWidget
{
public:
    QGridLayout *wdgLayout;
    QLabel *ThicknessLabel;
    QSpinBox *Thickness;
    QLabel *StyleListLabel;
    QComboBox *StyleList;
    QLabel *MarkerStyleListLabel;
    QComboBox *MarkerStyleList;
    QLabel *AxisListLabel;
    QComboBox *AxisList;
    pqTreeView *SeriesTable;

    void setupUi(QWidget *SeriesEditorPropertyWidget)
    {
        if (SeriesEditorPropertyWidget->objectName().isEmpty())
            SeriesEditorPropertyWidget->setObjectName(QString::fromUtf8("SeriesEditorPropertyWidget"));
        SeriesEditorPropertyWidget->resize(306, 342);
        wdgLayout = new QGridLayout(SeriesEditorPropertyWidget);
        wdgLayout->setObjectName(QString::fromUtf8("wdgLayout"));
        ThicknessLabel = new QLabel(SeriesEditorPropertyWidget);
        ThicknessLabel->setObjectName(QString::fromUtf8("ThicknessLabel"));

        wdgLayout->addWidget(ThicknessLabel, 1, 0, 1, 1);

        Thickness = new QSpinBox(SeriesEditorPropertyWidget);
        Thickness->setObjectName(QString::fromUtf8("Thickness"));
        Thickness->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Thickness->sizePolicy().hasHeightForWidth());
        Thickness->setSizePolicy(sizePolicy);
        Thickness->setMinimum(1);
        Thickness->setMaximum(10);
        Thickness->setValue(1);

        wdgLayout->addWidget(Thickness, 1, 1, 1, 1);

        StyleListLabel = new QLabel(SeriesEditorPropertyWidget);
        StyleListLabel->setObjectName(QString::fromUtf8("StyleListLabel"));

        wdgLayout->addWidget(StyleListLabel, 2, 0, 1, 1);

        StyleList = new QComboBox(SeriesEditorPropertyWidget);
        StyleList->setObjectName(QString::fromUtf8("StyleList"));
        StyleList->setEnabled(false);
        sizePolicy.setHeightForWidth(StyleList->sizePolicy().hasHeightForWidth());
        StyleList->setSizePolicy(sizePolicy);

        wdgLayout->addWidget(StyleList, 2, 1, 1, 1);

        MarkerStyleListLabel = new QLabel(SeriesEditorPropertyWidget);
        MarkerStyleListLabel->setObjectName(QString::fromUtf8("MarkerStyleListLabel"));

        wdgLayout->addWidget(MarkerStyleListLabel, 3, 0, 1, 1);

        MarkerStyleList = new QComboBox(SeriesEditorPropertyWidget);
        MarkerStyleList->setObjectName(QString::fromUtf8("MarkerStyleList"));
        MarkerStyleList->setEnabled(false);
        sizePolicy.setHeightForWidth(MarkerStyleList->sizePolicy().hasHeightForWidth());
        MarkerStyleList->setSizePolicy(sizePolicy);

        wdgLayout->addWidget(MarkerStyleList, 3, 1, 1, 1);

        AxisListLabel = new QLabel(SeriesEditorPropertyWidget);
        AxisListLabel->setObjectName(QString::fromUtf8("AxisListLabel"));

        wdgLayout->addWidget(AxisListLabel, 4, 0, 1, 1);

        AxisList = new QComboBox(SeriesEditorPropertyWidget);
        AxisList->setObjectName(QString::fromUtf8("AxisList"));
        AxisList->setEnabled(false);
        sizePolicy.setHeightForWidth(AxisList->sizePolicy().hasHeightForWidth());
        AxisList->setSizePolicy(sizePolicy);

        wdgLayout->addWidget(AxisList, 4, 1, 1, 1);

        SeriesTable = new pqTreeView(SeriesEditorPropertyWidget);
        SeriesTable->setObjectName(QString::fromUtf8("SeriesTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SeriesTable->sizePolicy().hasHeightForWidth());
        SeriesTable->setSizePolicy(sizePolicy1);
        SeriesTable->setAlternatingRowColors(true);
        SeriesTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        SeriesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        SeriesTable->setRootIsDecorated(false);
        SeriesTable->setUniformRowHeights(true);
        SeriesTable->setProperty("maximumRowCountBeforeScrolling", QVariant(30));

        wdgLayout->addWidget(SeriesTable, 0, 0, 1, 2);

        wdgLayout->setColumnStretch(1, 1);

        retranslateUi(SeriesEditorPropertyWidget);

        QMetaObject::connectSlotsByName(SeriesEditorPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *SeriesEditorPropertyWidget)
    {
        SeriesEditorPropertyWidget->setWindowTitle(QApplication::translate("SeriesEditorPropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
        ThicknessLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Line Thickness", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Thickness->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "Enter the thickness for the line.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        StyleListLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Line Style", 0, QApplication::UnicodeUTF8));
        StyleList->clear();
        StyleList->insertItems(0, QStringList()
         << QApplication::translate("SeriesEditorPropertyWidget", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Solid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dash", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dash Dot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Dash Dot Dot", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        StyleList->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "Select the line style for the series.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        MarkerStyleListLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Marker Style", 0, QApplication::UnicodeUTF8));
        MarkerStyleList->clear();
        MarkerStyleList->insertItems(0, QStringList()
         << QApplication::translate("SeriesEditorPropertyWidget", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Cross", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Plus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Diamond", 0, QApplication::UnicodeUTF8)
        );
        AxisListLabel->setText(QApplication::translate("SeriesEditorPropertyWidget", "Chart Axes", 0, QApplication::UnicodeUTF8));
        AxisList->clear();
        AxisList->insertItems(0, QStringList()
         << QApplication::translate("SeriesEditorPropertyWidget", "Bottom-Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Bottom-Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Top-Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SeriesEditorPropertyWidget", "Top-Left", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        AxisList->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "Select the chart axes for the line series.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        SeriesTable->setWhatsThis(QApplication::translate("SeriesEditorPropertyWidget", "This displays the list of line series. You can use the list to edit the series options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SeriesEditorPropertyWidget: public Ui_SeriesEditorPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSERIESEDITORPROPERTYWIDGET_H
