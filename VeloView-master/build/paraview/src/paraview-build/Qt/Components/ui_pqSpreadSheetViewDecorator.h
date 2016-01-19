/********************************************************************************
** Form generated from reading UI file 'pqSpreadSheetViewDecorator.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSPREADSHEETVIEWDECORATOR_H
#define UI_PQSPREADSHEETVIEWDECORATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "pqOutputPortComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_pqSpreadSheetViewDecorator
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *label;
    pqOutputPortComboBox *Source;
    QLabel *label_2;
    QComboBox *Attribute;
    QLabel *label_Precision;
    QSpinBox *spinBoxPrecision;
    QToolButton *ToggleFixed;
    QToolButton *SelectionOnly;
    QToolButton *ToggleColumnVisibility;
    QToolButton *ToggleCellConnectivity;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *pqSpreadSheetViewDecorator)
    {
        if (pqSpreadSheetViewDecorator->objectName().isEmpty())
            pqSpreadSheetViewDecorator->setObjectName(QString::fromUtf8("pqSpreadSheetViewDecorator"));
        pqSpreadSheetViewDecorator->resize(627, 32);
        hboxLayout = new QHBoxLayout(pqSpreadSheetViewDecorator);
        hboxLayout->setSpacing(1);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(pqSpreadSheetViewDecorator);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        Source = new pqOutputPortComboBox(pqSpreadSheetViewDecorator);
        Source->setObjectName(QString::fromUtf8("Source"));
        Source->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(Source);

        label_2 = new QLabel(pqSpreadSheetViewDecorator);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        Attribute = new QComboBox(pqSpreadSheetViewDecorator);
        Attribute->setObjectName(QString::fromUtf8("Attribute"));
        Attribute->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(Attribute);

        label_Precision = new QLabel(pqSpreadSheetViewDecorator);
        label_Precision->setObjectName(QString::fromUtf8("label_Precision"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_Precision->setFont(font);

        hboxLayout->addWidget(label_Precision);

        spinBoxPrecision = new QSpinBox(pqSpreadSheetViewDecorator);
        spinBoxPrecision->setObjectName(QString::fromUtf8("spinBoxPrecision"));
        spinBoxPrecision->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxPrecision->setMaximum(32);

        hboxLayout->addWidget(spinBoxPrecision);

        ToggleFixed = new QToolButton(pqSpreadSheetViewDecorator);
        ToggleFixed->setObjectName(QString::fromUtf8("ToggleFixed"));
        ToggleFixed->setCheckable(true);

        hboxLayout->addWidget(ToggleFixed);

        SelectionOnly = new QToolButton(pqSpreadSheetViewDecorator);
        SelectionOnly->setObjectName(QString::fromUtf8("SelectionOnly"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqSelect16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectionOnly->setIcon(icon);
        SelectionOnly->setCheckable(true);
        SelectionOnly->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout->addWidget(SelectionOnly);

        ToggleColumnVisibility = new QToolButton(pqSpreadSheetViewDecorator);
        ToggleColumnVisibility->setObjectName(QString::fromUtf8("ToggleColumnVisibility"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqRectilinearGrid16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToggleColumnVisibility->setIcon(icon1);

        hboxLayout->addWidget(ToggleColumnVisibility);

        ToggleCellConnectivity = new QToolButton(pqSpreadSheetViewDecorator);
        ToggleCellConnectivity->setObjectName(QString::fromUtf8("ToggleCellConnectivity"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqProgrammableFilter24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToggleCellConnectivity->setIcon(icon2);
        ToggleCellConnectivity->setCheckable(true);

        hboxLayout->addWidget(ToggleCellConnectivity);

        spacerItem = new QSpacerItem(58, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        retranslateUi(pqSpreadSheetViewDecorator);

        QMetaObject::connectSlotsByName(pqSpreadSheetViewDecorator);
    } // setupUi

    void retranslateUi(QWidget *pqSpreadSheetViewDecorator)
    {
        pqSpreadSheetViewDecorator->setWindowTitle(QApplication::translate("pqSpreadSheetViewDecorator", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqSpreadSheetViewDecorator", "<b>Showing  </b>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqSpreadSheetViewDecorator", "<b>   Attribute:</b>", 0, QApplication::UnicodeUTF8));
        Attribute->clear();
        Attribute->insertItems(0, QStringList()
         << QApplication::translate("pqSpreadSheetViewDecorator", "Points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqSpreadSheetViewDecorator", "Cells", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqSpreadSheetViewDecorator", "Field Data", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqSpreadSheetViewDecorator", "Vertices", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqSpreadSheetViewDecorator", "Edges", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqSpreadSheetViewDecorator", "Rows", 0, QApplication::UnicodeUTF8)
        );
        label_Precision->setText(QApplication::translate("pqSpreadSheetViewDecorator", "Precision:", 0, QApplication::UnicodeUTF8));
        ToggleFixed->setText(QApplication::translate("pqSpreadSheetViewDecorator", "F", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SelectionOnly->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Show only selected elements.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        SelectionOnly->setStatusTip(QApplication::translate("pqSpreadSheetViewDecorator", "Show only selected elements.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        SelectionOnly->setWhatsThis(QApplication::translate("pqSpreadSheetViewDecorator", "Show only selected elements.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        SelectionOnly->setText(QApplication::translate("pqSpreadSheetViewDecorator", "Selected", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ToggleColumnVisibility->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ToggleColumnVisibility->setStatusTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        ToggleColumnVisibility->setWhatsThis(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ToggleColumnVisibility->setText(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle column visibility", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ToggleCellConnectivity->setToolTip(QApplication::translate("pqSpreadSheetViewDecorator", "Toggle cell connectivity visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ToggleCellConnectivity->setText(QApplication::translate("pqSpreadSheetViewDecorator", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqSpreadSheetViewDecorator: public Ui_pqSpreadSheetViewDecorator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSPREADSHEETVIEWDECORATOR_H
