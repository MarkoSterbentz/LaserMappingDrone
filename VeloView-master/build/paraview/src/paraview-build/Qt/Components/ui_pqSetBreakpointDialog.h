/********************************************************************************
** Form generated from reading UI file 'pqSetBreakpointDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSETBREAKPOINTDIALOG_H
#define UI_PQSETBREAKPOINTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_pqSetBreakpointDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *BreakpointTime;
    QRadioButton *radioButtonTime;
    QLabel *Time;
    QRadioButton *radioButtonTimeStep;
    QLabel *TimeStep;
    QDialogButtonBox *ButtonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *pqSetBreakpointDialog)
    {
        if (pqSetBreakpointDialog->objectName().isEmpty())
            pqSetBreakpointDialog->setObjectName(QString::fromUtf8("pqSetBreakpointDialog"));
        pqSetBreakpointDialog->resize(247, 136);
        gridLayout = new QGridLayout(pqSetBreakpointDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(pqSetBreakpointDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        BreakpointTime = new QLineEdit(pqSetBreakpointDialog);
        BreakpointTime->setObjectName(QString::fromUtf8("BreakpointTime"));

        gridLayout->addWidget(BreakpointTime, 0, 1, 1, 1);

        radioButtonTime = new QRadioButton(pqSetBreakpointDialog);
        buttonGroup = new QButtonGroup(pqSetBreakpointDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButtonTime);
        radioButtonTime->setObjectName(QString::fromUtf8("radioButtonTime"));
        radioButtonTime->setChecked(false);

        gridLayout->addWidget(radioButtonTime, 1, 0, 1, 1);

        Time = new QLabel(pqSetBreakpointDialog);
        Time->setObjectName(QString::fromUtf8("Time"));

        gridLayout->addWidget(Time, 1, 1, 1, 1);

        radioButtonTimeStep = new QRadioButton(pqSetBreakpointDialog);
        buttonGroup->addButton(radioButtonTimeStep);
        radioButtonTimeStep->setObjectName(QString::fromUtf8("radioButtonTimeStep"));
        radioButtonTimeStep->setChecked(true);

        gridLayout->addWidget(radioButtonTimeStep, 2, 0, 1, 1);

        TimeStep = new QLabel(pqSetBreakpointDialog);
        TimeStep->setObjectName(QString::fromUtf8("TimeStep"));

        gridLayout->addWidget(TimeStep, 2, 1, 1, 1);

        ButtonBox = new QDialogButtonBox(pqSetBreakpointDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(ButtonBox, 3, 0, 1, 2);


        retranslateUi(pqSetBreakpointDialog);
        QObject::connect(ButtonBox, SIGNAL(rejected()), pqSetBreakpointDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqSetBreakpointDialog);
    } // setupUi

    void retranslateUi(QDialog *pqSetBreakpointDialog)
    {
        pqSetBreakpointDialog->setWindowTitle(QApplication::translate("pqSetBreakpointDialog", "Set Breakpoint", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqSetBreakpointDialog", "Breakpoint:", 0, QApplication::UnicodeUTF8));
        radioButtonTime->setText(QApplication::translate("pqSetBreakpointDialog", "Time", 0, QApplication::UnicodeUTF8));
        Time->setText(QString());
        radioButtonTimeStep->setText(QApplication::translate("pqSetBreakpointDialog", "Time Step", 0, QApplication::UnicodeUTF8));
        TimeStep->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pqSetBreakpointDialog: public Ui_pqSetBreakpointDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSETBREAKPOINTDIALOG_H
