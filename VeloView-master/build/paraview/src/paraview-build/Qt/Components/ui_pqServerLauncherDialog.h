/********************************************************************************
** Form generated from reading UI file 'pqServerLauncherDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSERVERLAUNCHERDIALOG_H
#define UI_PQSERVERLAUNCHERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqServerLauncherDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *message;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *cancel;

    void setupUi(QDialog *pqServerLauncherDialog)
    {
        if (pqServerLauncherDialog->objectName().isEmpty())
            pqServerLauncherDialog->setObjectName(QString::fromUtf8("pqServerLauncherDialog"));
        pqServerLauncherDialog->resize(398, 126);
        vboxLayout = new QVBoxLayout(pqServerLauncherDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        message = new QLabel(pqServerLauncherDialog);
        message->setObjectName(QString::fromUtf8("message"));
        message->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(message);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        cancel = new QPushButton(pqServerLauncherDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        hboxLayout->addWidget(cancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(pqServerLauncherDialog);
        QObject::connect(cancel, SIGNAL(clicked()), pqServerLauncherDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqServerLauncherDialog);
    } // setupUi

    void retranslateUi(QDialog *pqServerLauncherDialog)
    {
        pqServerLauncherDialog->setWindowTitle(QApplication::translate("pqServerLauncherDialog", "Starting Server", 0, QApplication::UnicodeUTF8));
        message->setText(QApplication::translate("pqServerLauncherDialog", "Please wait while server cs://foobar starts ...", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("pqServerLauncherDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqServerLauncherDialog: public Ui_pqServerLauncherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSERVERLAUNCHERDIALOG_H
