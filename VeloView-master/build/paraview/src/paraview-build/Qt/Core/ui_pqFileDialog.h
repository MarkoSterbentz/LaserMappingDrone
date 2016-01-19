/********************************************************************************
** Form generated from reading UI file 'pqFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFILEDIALOG_H
#define UI_PQFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqFileDialog.h"

QT_BEGIN_NAMESPACE

class Ui_pqFileDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *Parents;
    QToolButton *NavigateBack;
    QToolButton *NavigateForward;
    QToolButton *NavigateUp;
    QToolButton *CreateFolder;
    QSplitter *mainSplitter;
    QSplitter *splitter;
    QListView *Favorites;
    QListView *Recent;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTreeView *Files;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *FileName;
    QPushButton *OK;
    QLabel *label;
    pqFileComboBox *FileType;
    QPushButton *Cancel;

    void setupUi(QDialog *pqFileDialog)
    {
        if (pqFileDialog->objectName().isEmpty())
            pqFileDialog->setObjectName(QString::fromUtf8("pqFileDialog"));
        pqFileDialog->resize(683, 402);
        gridLayout = new QGridLayout(pqFileDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(pqFileDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(label_3);

        Parents = new QComboBox(pqFileDialog);
        Parents->setObjectName(QString::fromUtf8("Parents"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Parents->sizePolicy().hasHeightForWidth());
        Parents->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(Parents);

        NavigateBack = new QToolButton(pqFileDialog);
        NavigateBack->setObjectName(QString::fromUtf8("NavigateBack"));
        NavigateBack->setAutoRaise(true);

        hboxLayout->addWidget(NavigateBack);

        NavigateForward = new QToolButton(pqFileDialog);
        NavigateForward->setObjectName(QString::fromUtf8("NavigateForward"));
        NavigateForward->setAutoRaise(true);

        hboxLayout->addWidget(NavigateForward);

        NavigateUp = new QToolButton(pqFileDialog);
        NavigateUp->setObjectName(QString::fromUtf8("NavigateUp"));
        NavigateUp->setAutoRaise(true);

        hboxLayout->addWidget(NavigateUp);

        CreateFolder = new QToolButton(pqFileDialog);
        CreateFolder->setObjectName(QString::fromUtf8("CreateFolder"));
        CreateFolder->setAutoRaise(true);

        hboxLayout->addWidget(CreateFolder);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        mainSplitter = new QSplitter(pqFileDialog);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        mainSplitter->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(mainSplitter);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setOrientation(Qt::Vertical);
        Favorites = new QListView(splitter);
        Favorites->setObjectName(QString::fromUtf8("Favorites"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Favorites->sizePolicy().hasHeightForWidth());
        Favorites->setSizePolicy(sizePolicy3);
        Favorites->setMinimumSize(QSize(100, 0));
        splitter->addWidget(Favorites);
        Recent = new QListView(splitter);
        Recent->setObjectName(QString::fromUtf8("Recent"));
        sizePolicy3.setHeightForWidth(Recent->sizePolicy().hasHeightForWidth());
        Recent->setSizePolicy(sizePolicy3);
        Recent->setMinimumSize(QSize(100, 0));
        splitter->addWidget(Recent);
        mainSplitter->addWidget(splitter);
        widget = new QWidget(mainSplitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Files = new QTreeView(widget);
        Files->setObjectName(QString::fromUtf8("Files"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Files->sizePolicy().hasHeightForWidth());
        Files->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(Files);

        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        FileName = new QLineEdit(widget);
        FileName->setObjectName(QString::fromUtf8("FileName"));

        gridLayout1->addWidget(FileName, 0, 1, 1, 1);

        OK = new QPushButton(widget);
        OK->setObjectName(QString::fromUtf8("OK"));

        gridLayout1->addWidget(OK, 0, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 1, 0, 1, 1);

        FileType = new pqFileComboBox(widget);
        FileType->setObjectName(QString::fromUtf8("FileType"));
        FileType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout1->addWidget(FileType, 1, 1, 1, 1);

        Cancel = new QPushButton(widget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        gridLayout1->addWidget(Cancel, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout1);

        mainSplitter->addWidget(widget);

        gridLayout->addWidget(mainSplitter, 1, 0, 1, 1);

        QWidget::setTabOrder(FileName, FileType);
        QWidget::setTabOrder(FileType, OK);
        QWidget::setTabOrder(OK, Cancel);
        QWidget::setTabOrder(Cancel, Parents);
        QWidget::setTabOrder(Parents, NavigateBack);
        QWidget::setTabOrder(NavigateBack, NavigateForward);
        QWidget::setTabOrder(NavigateForward, NavigateUp);
        QWidget::setTabOrder(NavigateUp, CreateFolder);
        QWidget::setTabOrder(CreateFolder, Favorites);
        QWidget::setTabOrder(Favorites, Files);

        retranslateUi(pqFileDialog);
        QObject::connect(OK, SIGNAL(clicked()), pqFileDialog, SLOT(accept()));
        QObject::connect(Cancel, SIGNAL(clicked()), pqFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqFileDialog);
    } // setupUi

    void retranslateUi(QDialog *pqFileDialog)
    {
        pqFileDialog->setWindowTitle(QApplication::translate("pqFileDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqFileDialog", "Look in:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        NavigateBack->setToolTip(QApplication::translate("pqFileDialog", "Navigate Back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        NavigateBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        NavigateForward->setToolTip(QApplication::translate("pqFileDialog", "Navigate Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        NavigateForward->setText(QString());
#ifndef QT_NO_TOOLTIP
        NavigateUp->setToolTip(QApplication::translate("pqFileDialog", "Navigate Up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        NavigateUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        CreateFolder->setToolTip(QApplication::translate("pqFileDialog", "Create New Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        CreateFolder->setText(QString());
        label_2->setText(QApplication::translate("pqFileDialog", "File name:", 0, QApplication::UnicodeUTF8));
        OK->setText(QApplication::translate("pqFileDialog", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqFileDialog", "Files of type:", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("pqFileDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqFileDialog: public Ui_pqFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFILEDIALOG_H
