/********************************************************************************
** Form generated from reading UI file 'pqSelectReaderDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSELECTREADERDIALOG_H
#define UI_PQSELECTREADERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqSelectReaderDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *FileInfo;
    QListWidget *listWidget;
    QLabel *label_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *pqSelectReaderDialog)
    {
        if (pqSelectReaderDialog->objectName().isEmpty())
            pqSelectReaderDialog->setObjectName(QString::fromUtf8("pqSelectReaderDialog"));
        pqSelectReaderDialog->resize(400, 600);
        vboxLayout = new QVBoxLayout(pqSelectReaderDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        FileInfo = new QLabel(pqSelectReaderDialog);
        FileInfo->setObjectName(QString::fromUtf8("FileInfo"));
        FileInfo->setWordWrap(true);

        vboxLayout->addWidget(FileInfo);

        listWidget = new QListWidget(pqSelectReaderDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setSortingEnabled(true);

        vboxLayout->addWidget(listWidget);

        label_2 = new QLabel(pqSelectReaderDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        vboxLayout->addWidget(label_2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(pqSelectReaderDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(pqSelectReaderDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(pqSelectReaderDialog);
        QObject::connect(okButton, SIGNAL(clicked()), pqSelectReaderDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), pqSelectReaderDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(doubleClicked(QModelIndex)), pqSelectReaderDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(pqSelectReaderDialog);
    } // setupUi

    void retranslateUi(QDialog *pqSelectReaderDialog)
    {
        pqSelectReaderDialog->setWindowTitle(QApplication::translate("pqSelectReaderDialog", "Open Data With...", 0, QApplication::UnicodeUTF8));
        FileInfo->setText(QApplication::translate("pqSelectReaderDialog", "A reader for FileName could not be found.  Please choose one:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqSelectReaderDialog", "Opening the file with an incompatible reader may result in unpredictable behavior or a crash.  Please choose the correct reader.", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("pqSelectReaderDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("pqSelectReaderDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqSelectReaderDialog: public Ui_pqSelectReaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSELECTREADERDIALOG_H
