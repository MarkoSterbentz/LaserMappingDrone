/********************************************************************************
** Form generated from reading UI file 'pqFixStateFilenamesDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFIXSTATEFILENAMESDIALOG_H
#define UI_PQFIXSTATEFILENAMESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FixStateFilenamesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FixStateFilenamesDialog)
    {
        if (FixStateFilenamesDialog->objectName().isEmpty())
            FixStateFilenamesDialog->setObjectName(QString::fromUtf8("FixStateFilenamesDialog"));
        FixStateFilenamesDialog->resize(393, 375);
        verticalLayout = new QVBoxLayout(FixStateFilenamesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 303, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(FixStateFilenamesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FixStateFilenamesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FixStateFilenamesDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(FixStateFilenamesDialog);
    } // setupUi

    void retranslateUi(QDialog *FixStateFilenamesDialog)
    {
        FixStateFilenamesDialog->setWindowTitle(QApplication::translate("FixStateFilenamesDialog", "Fix Paths in State File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FixStateFilenamesDialog: public Ui_FixStateFilenamesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFIXSTATEFILENAMESDIALOG_H
