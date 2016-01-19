/********************************************************************************
** Form generated from reading UI file 'pqQuickLaunchDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQQUICKLAUNCHDIALOG_H
#define UI_PQQUICKLAUNCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuickLaunchDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *searchString;
    QPushButton *selection;
    QListWidget *options;
    QLabel *label;

    void setupUi(QDialog *QuickLaunchDialog)
    {
        if (QuickLaunchDialog->objectName().isEmpty())
            QuickLaunchDialog->setObjectName(QString::fromUtf8("QuickLaunchDialog"));
        QuickLaunchDialog->resize(333, 279);
        QuickLaunchDialog->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(QuickLaunchDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        searchString = new QLabel(QuickLaunchDialog);
        searchString->setObjectName(QString::fromUtf8("searchString"));
        searchString->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(searchString);

        selection = new QPushButton(QuickLaunchDialog);
        selection->setObjectName(QString::fromUtf8("selection"));
        selection->setFocusPolicy(Qt::NoFocus);

        vboxLayout->addWidget(selection);

        options = new QListWidget(QuickLaunchDialog);
        options->setObjectName(QString::fromUtf8("options"));

        vboxLayout->addWidget(options);

        label = new QLabel(QuickLaunchDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);


        retranslateUi(QuickLaunchDialog);

        QMetaObject::connectSlotsByName(QuickLaunchDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickLaunchDialog)
    {
        QuickLaunchDialog->setWindowTitle(QApplication::translate("QuickLaunchDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        searchString->setText(QString());
        selection->setText(QString());
        label->setText(QApplication::translate("QuickLaunchDialog", "<html><head/><body><p>Type to search. <span style=\" font-weight:600; font-style:italic;\">Enter</span> to select. <span style=\" font-weight:600; font-style:italic;\">Esc </span>to cancel.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuickLaunchDialog: public Ui_QuickLaunchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQQUICKLAUNCHDIALOG_H
