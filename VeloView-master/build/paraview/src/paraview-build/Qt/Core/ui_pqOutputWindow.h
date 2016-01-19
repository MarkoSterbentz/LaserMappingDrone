/********************************************************************************
** Form generated from reading UI file 'pqOutputWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQOUTPUTWINDOW_H
#define UI_PQOUTPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include "pqConsoleWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqOutputWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *clearButton;
    QPushButton *closeButton;
    pqConsoleWidget *consoleWidget;

    void setupUi(QDialog *pqOutputWindow)
    {
        if (pqOutputWindow->objectName().isEmpty())
            pqOutputWindow->setObjectName(QString::fromUtf8("pqOutputWindow"));
        pqOutputWindow->resize(650, 400);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqOutputWindow->sizePolicy().hasHeightForWidth());
        pqOutputWindow->setSizePolicy(sizePolicy);
        pqOutputWindow->setModal(false);
        gridLayout = new QGridLayout(pqOutputWindow);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        clearButton = new QPushButton(pqOutputWindow);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        hboxLayout->addWidget(clearButton);

        closeButton = new QPushButton(pqOutputWindow);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        consoleWidget = new pqConsoleWidget(pqOutputWindow);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));

        gridLayout->addWidget(consoleWidget, 0, 0, 1, 1);


        retranslateUi(pqOutputWindow);
        QObject::connect(closeButton, SIGNAL(clicked()), pqOutputWindow, SLOT(accept()));

        QMetaObject::connectSlotsByName(pqOutputWindow);
    } // setupUi

    void retranslateUi(QDialog *pqOutputWindow)
    {
        pqOutputWindow->setWindowTitle(QApplication::translate("pqOutputWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("pqOutputWindow", "Clear", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("pqOutputWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqOutputWindow: public Ui_pqOutputWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQOUTPUTWINDOW_H
