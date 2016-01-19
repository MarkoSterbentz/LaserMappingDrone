/********************************************************************************
** Form generated from reading UI file 'pqLockViewSizeCustomDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLOCKVIEWSIZECUSTOMDIALOG_H
#define UI_PQLOCKVIEWSIZECUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqLockViewSizeCustomDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Width;
    QLabel *label_2;
    QLineEdit *Height;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *pqLockViewSizeCustomDialog)
    {
        if (pqLockViewSizeCustomDialog->objectName().isEmpty())
            pqLockViewSizeCustomDialog->setObjectName(QString::fromUtf8("pqLockViewSizeCustomDialog"));
        pqLockViewSizeCustomDialog->resize(287, 126);
        verticalLayout = new QVBoxLayout(pqLockViewSizeCustomDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(pqLockViewSizeCustomDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Width = new QLineEdit(pqLockViewSizeCustomDialog);
        Width->setObjectName(QString::fromUtf8("Width"));
        Width->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(Width);

        label_2 = new QLabel(pqLockViewSizeCustomDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        Height = new QLineEdit(pqLockViewSizeCustomDialog);
        Height->setObjectName(QString::fromUtf8("Height"));
        Height->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(Height);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ButtonBox = new QDialogButtonBox(pqLockViewSizeCustomDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(ButtonBox);


        retranslateUi(pqLockViewSizeCustomDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), pqLockViewSizeCustomDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), pqLockViewSizeCustomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqLockViewSizeCustomDialog);
    } // setupUi

    void retranslateUi(QDialog *pqLockViewSizeCustomDialog)
    {
        pqLockViewSizeCustomDialog->setWindowTitle(QApplication::translate("pqLockViewSizeCustomDialog", "Lock View to Custom Size", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqLockViewSizeCustomDialog", "Select Maximum Resolution for Each View", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqLockViewSizeCustomDialog", "x", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqLockViewSizeCustomDialog: public Ui_pqLockViewSizeCustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLOCKVIEWSIZECUSTOMDIALOG_H
