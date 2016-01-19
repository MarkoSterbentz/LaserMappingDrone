/********************************************************************************
** Form generated from reading UI file 'pqFindDataCurrentSelectionFrame.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATACURRENTSELECTIONFRAME_H
#define UI_PQFINDDATACURRENTSELECTIONFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqSpreadSheetViewWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataCurrentSelectionFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *showTypeComboBox;
    QCheckBox *invertSelectionCheckBox;
    pqSpreadSheetViewWidget *spreadsheet;

    void setupUi(QWidget *FindDataCurrentSelectionFrame)
    {
        if (FindDataCurrentSelectionFrame->objectName().isEmpty())
            FindDataCurrentSelectionFrame->setObjectName(QString::fromUtf8("FindDataCurrentSelectionFrame"));
        FindDataCurrentSelectionFrame->resize(515, 357);
        verticalLayout = new QVBoxLayout(FindDataCurrentSelectionFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(FindDataCurrentSelectionFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_6);

        showTypeComboBox = new QComboBox(FindDataCurrentSelectionFrame);
        showTypeComboBox->setObjectName(QString::fromUtf8("showTypeComboBox"));
        showTypeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(showTypeComboBox);

        invertSelectionCheckBox = new QCheckBox(FindDataCurrentSelectionFrame);
        invertSelectionCheckBox->setObjectName(QString::fromUtf8("invertSelectionCheckBox"));
        invertSelectionCheckBox->setEnabled(false);

        horizontalLayout->addWidget(invertSelectionCheckBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        spreadsheet = new pqSpreadSheetViewWidget(FindDataCurrentSelectionFrame);
        spreadsheet->setObjectName(QString::fromUtf8("spreadsheet"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spreadsheet->sizePolicy().hasHeightForWidth());
        spreadsheet->setSizePolicy(sizePolicy1);
        spreadsheet->setMinimumSize(QSize(0, 120));
        spreadsheet->setEditTriggers(QAbstractItemView::NoEditTriggers);
        spreadsheet->setAlternatingRowColors(true);
        spreadsheet->setSelectionMode(QAbstractItemView::ExtendedSelection);
        spreadsheet->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(spreadsheet);


        retranslateUi(FindDataCurrentSelectionFrame);

        QMetaObject::connectSlotsByName(FindDataCurrentSelectionFrame);
    } // setupUi

    void retranslateUi(QWidget *FindDataCurrentSelectionFrame)
    {
        FindDataCurrentSelectionFrame->setWindowTitle(QApplication::translate("FindDataCurrentSelectionFrame", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FindDataCurrentSelectionFrame", "Show:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        invertSelectionCheckBox->setToolTip(QApplication::translate("FindDataCurrentSelectionFrame", "Invert the selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        invertSelectionCheckBox->setText(QApplication::translate("FindDataCurrentSelectionFrame", "Invert selection", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindDataCurrentSelectionFrame: public Ui_FindDataCurrentSelectionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATACURRENTSELECTIONFRAME_H
