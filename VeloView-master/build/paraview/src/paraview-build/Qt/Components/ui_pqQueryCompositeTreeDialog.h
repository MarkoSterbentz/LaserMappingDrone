/********************************************************************************
** Form generated from reading UI file 'pqQueryCompositeTreeDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQQUERYCOMPOSITETREEDIALOG_H
#define UI_PQQUERYCOMPOSITETREEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include "pqTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqQueryCompositeTreeDialog
{
public:
    QVBoxLayout *verticalLayout;
    pqTreeWidget *Blocks;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqQueryCompositeTreeDialog)
    {
        if (pqQueryCompositeTreeDialog->objectName().isEmpty())
            pqQueryCompositeTreeDialog->setObjectName(QString::fromUtf8("pqQueryCompositeTreeDialog"));
        pqQueryCompositeTreeDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(pqQueryCompositeTreeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Blocks = new pqTreeWidget(pqQueryCompositeTreeDialog);
        Blocks->setObjectName(QString::fromUtf8("Blocks"));
        Blocks->setRootIsDecorated(false);

        verticalLayout->addWidget(Blocks);

        buttonBox = new QDialogButtonBox(pqQueryCompositeTreeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqQueryCompositeTreeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqQueryCompositeTreeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqQueryCompositeTreeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqQueryCompositeTreeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqQueryCompositeTreeDialog)
    {
        pqQueryCompositeTreeDialog->setWindowTitle(QApplication::translate("pqQueryCompositeTreeDialog", "Select Block", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = Blocks->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("pqQueryCompositeTreeDialog", "Structure (Flat Index)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqQueryCompositeTreeDialog: public Ui_pqQueryCompositeTreeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQQUERYCOMPOSITETREEDIALOG_H
