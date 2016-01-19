/********************************************************************************
** Form generated from reading UI file 'pqColorEditorPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLOREDITORPROPERTYWIDGET_H
#define UI_PQCOLOREDITORPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "pqDisplayColorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ColorEditorPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *EditColorMap;
    QPushButton *ShowScalarBar;
    pqDisplayColorWidget *DisplayColorWidget;
    QPushButton *Rescale;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ColorEditorPropertyWidget)
    {
        if (ColorEditorPropertyWidget->objectName().isEmpty())
            ColorEditorPropertyWidget->setObjectName(QString::fromUtf8("ColorEditorPropertyWidget"));
        ColorEditorPropertyWidget->resize(291, 82);
        gridLayout = new QGridLayout(ColorEditorPropertyWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        EditColorMap = new QPushButton(ColorEditorPropertyWidget);
        EditColorMap->setObjectName(QString::fromUtf8("EditColorMap"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqEditColor24.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditColorMap->setIcon(icon);
        EditColorMap->setFlat(false);

        gridLayout->addWidget(EditColorMap, 1, 1, 1, 1);

        ShowScalarBar = new QPushButton(ColorEditorPropertyWidget);
        ShowScalarBar->setObjectName(QString::fromUtf8("ShowScalarBar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqScalarBar24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowScalarBar->setIcon(icon1);
        ShowScalarBar->setCheckable(true);
        ShowScalarBar->setFlat(false);

        gridLayout->addWidget(ShowScalarBar, 1, 0, 1, 1);

        DisplayColorWidget = new pqDisplayColorWidget(ColorEditorPropertyWidget);
        DisplayColorWidget->setObjectName(QString::fromUtf8("DisplayColorWidget"));

        gridLayout->addWidget(DisplayColorWidget, 0, 0, 1, 3);

        Rescale = new QPushButton(ColorEditorPropertyWidget);
        Rescale->setObjectName(QString::fromUtf8("Rescale"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqResetRange24.png"), QSize(), QIcon::Normal, QIcon::Off);
        Rescale->setIcon(icon2);
        Rescale->setFlat(false);

        gridLayout->addWidget(Rescale, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(ColorEditorPropertyWidget);

        QMetaObject::connectSlotsByName(ColorEditorPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorEditorPropertyWidget)
    {
        ColorEditorPropertyWidget->setWindowTitle(QApplication::translate("ColorEditorPropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        EditColorMap->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Edit Color Map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        EditColorMap->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Edit Color Map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        EditColorMap->setText(QApplication::translate("ColorEditorPropertyWidget", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShowScalarBar->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Toggle Color Legend Visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ShowScalarBar->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Toggle Color Legend Visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        ShowScalarBar->setText(QApplication::translate("ColorEditorPropertyWidget", "Show", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Rescale->setToolTip(QApplication::translate("ColorEditorPropertyWidget", "Rescale to Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Rescale->setStatusTip(QApplication::translate("ColorEditorPropertyWidget", "Rescale to Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Rescale->setText(QApplication::translate("ColorEditorPropertyWidget", "Rescale", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorEditorPropertyWidget: public Ui_ColorEditorPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLOREDITORPROPERTYWIDGET_H
