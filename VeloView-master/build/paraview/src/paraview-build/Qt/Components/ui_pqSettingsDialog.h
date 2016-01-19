/********************************************************************************
** Form generated from reading UI file 'pqSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSETTINGSDIALOG_H
#define UI_PQSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabBar *tabBar;
    QHBoxLayout *SearchBoxLayout;
    pqSearchBox *SearchBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *restartRequiredLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(540, 645);
        SettingsDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabBar = new QTabBar(SettingsDialog);
        tabBar->setObjectName(QString::fromUtf8("tabBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabBar->sizePolicy().hasHeightForWidth());
        tabBar->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(tabBar);

        SearchBoxLayout = new QHBoxLayout();
        SearchBoxLayout->setSpacing(2);
        SearchBoxLayout->setObjectName(QString::fromUtf8("SearchBoxLayout"));
        SearchBox = new pqSearchBox(SettingsDialog);
        SearchBox->setObjectName(QString::fromUtf8("SearchBox"));
        SearchBox->setProperty("settingKey", QVariant(QString::fromUtf8("pqSettingsDialog/showAdvancedProperties")));
        SearchBox->setProperty("advancedSearchEnabled", QVariant(true));

        SearchBoxLayout->addWidget(SearchBox);


        verticalLayout->addLayout(SearchBoxLayout);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        restartRequiredLabel = new QLabel(SettingsDialog);
        restartRequiredLabel->setObjectName(QString::fromUtf8("restartRequiredLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        restartRequiredLabel->setFont(font);
        restartRequiredLabel->setWordWrap(true);

        verticalLayout->addWidget(restartRequiredLabel);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", 0, QApplication::UnicodeUTF8));
        restartRequiredLabel->setText(QApplication::translate("SettingsDialog", "* Restart required for some settings to take effect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSETTINGSDIALOG_H
