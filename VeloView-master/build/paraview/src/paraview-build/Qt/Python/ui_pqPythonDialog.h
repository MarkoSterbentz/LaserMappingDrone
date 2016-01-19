/********************************************************************************
** Form generated from reading UI file 'pqPythonDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPYTHONDIALOG_H
#define UI_PQPYTHONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqPythonShell.h"

QT_BEGIN_NAMESPACE

class Ui_pqPythonDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    pqPythonShell *shellWidget;
    QHBoxLayout *buttonsLayout;
    QPushButton *runScript;
    QPushButton *clear;
    QPushButton *reset;
    QSpacerItem *spacer;
    QPushButton *close;

    void setupUi(QDialog *pqPythonDialog)
    {
        if (pqPythonDialog->objectName().isEmpty())
            pqPythonDialog->setObjectName(QString::fromUtf8("pqPythonDialog"));
        pqPythonDialog->resize(800, 400);
        verticalLayout_3 = new QVBoxLayout(pqPythonDialog);
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(6);
#endif
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(pqPythonDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        shellWidget = new pqPythonShell(verticalLayoutWidget);
        shellWidget->setObjectName(QString::fromUtf8("shellWidget"));

        verticalLayout->addWidget(shellWidget);

        buttonsLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        buttonsLayout->setSpacing(6);
#endif
        buttonsLayout->setContentsMargins(0, 0, 0, 0);
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        runScript = new QPushButton(verticalLayoutWidget);
        runScript->setObjectName(QString::fromUtf8("runScript"));
        runScript->setAutoDefault(false);

        buttonsLayout->addWidget(runScript);

        clear = new QPushButton(verticalLayoutWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setFocusPolicy(Qt::StrongFocus);
        clear->setAutoDefault(false);

        buttonsLayout->addWidget(clear);

        reset = new QPushButton(verticalLayoutWidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setAutoDefault(false);

        buttonsLayout->addWidget(reset);

        spacer = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(spacer);

        close = new QPushButton(verticalLayoutWidget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setAutoDefault(false);

        buttonsLayout->addWidget(close);


        verticalLayout->addLayout(buttonsLayout);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter);


        retranslateUi(pqPythonDialog);

        QMetaObject::connectSlotsByName(pqPythonDialog);
    } // setupUi

    void retranslateUi(QDialog *pqPythonDialog)
    {
        pqPythonDialog->setWindowTitle(QApplication::translate("pqPythonDialog", "Python Shell", 0, QApplication::UnicodeUTF8));
        runScript->setText(QApplication::translate("pqPythonDialog", "Run Script", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("pqPythonDialog", "Clear", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("pqPythonDialog", "Reset", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("pqPythonDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqPythonDialog: public Ui_pqPythonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPYTHONDIALOG_H
