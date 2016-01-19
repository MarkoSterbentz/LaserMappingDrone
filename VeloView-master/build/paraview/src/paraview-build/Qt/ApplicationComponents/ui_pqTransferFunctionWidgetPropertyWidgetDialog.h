/********************************************************************************
** Form generated from reading UI file 'pqTransferFunctionWidgetPropertyWidgetDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTRANSFERFUNCTIONWIDGETPROPERTYWIDGETDIALOG_H
#define UI_PQTRANSFERFUNCTIONWIDGETPROPERTYWIDGETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include "pqTransferFunctionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_TransferFunctionWidgetPropertyWidgetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Label;
    pqTransferFunctionWidget *TransferFunctionEditor;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *TransferFunctionWidgetPropertyWidgetDialog)
    {
        if (TransferFunctionWidgetPropertyWidgetDialog->objectName().isEmpty())
            TransferFunctionWidgetPropertyWidgetDialog->setObjectName(QString::fromUtf8("TransferFunctionWidgetPropertyWidgetDialog"));
        TransferFunctionWidgetPropertyWidgetDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(TransferFunctionWidgetPropertyWidgetDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Label = new QLabel(TransferFunctionWidgetPropertyWidgetDialog);
        Label->setObjectName(QString::fromUtf8("Label"));

        verticalLayout->addWidget(Label);

        TransferFunctionEditor = new pqTransferFunctionWidget(TransferFunctionWidgetPropertyWidgetDialog);
        TransferFunctionEditor->setObjectName(QString::fromUtf8("TransferFunctionEditor"));
        TransferFunctionEditor->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(TransferFunctionEditor);

        ButtonBox = new QDialogButtonBox(TransferFunctionWidgetPropertyWidgetDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(ButtonBox);

        verticalLayout->setStretch(1, 1);

        retranslateUi(TransferFunctionWidgetPropertyWidgetDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), TransferFunctionWidgetPropertyWidgetDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), TransferFunctionWidgetPropertyWidgetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TransferFunctionWidgetPropertyWidgetDialog);
    } // setupUi

    void retranslateUi(QDialog *TransferFunctionWidgetPropertyWidgetDialog)
    {
        TransferFunctionWidgetPropertyWidgetDialog->setWindowTitle(QApplication::translate("TransferFunctionWidgetPropertyWidgetDialog", "Edit Transfer Function", 0, QApplication::UnicodeUTF8));
        Label->setText(QApplication::translate("TransferFunctionWidgetPropertyWidgetDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">%1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TransferFunctionWidgetPropertyWidgetDialog: public Ui_TransferFunctionWidgetPropertyWidgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTRANSFERFUNCTIONWIDGETPROPERTYWIDGETDIALOG_H
