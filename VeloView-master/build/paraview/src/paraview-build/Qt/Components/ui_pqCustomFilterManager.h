/********************************************************************************
** Form generated from reading UI file 'pqCustomFilterManager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMFILTERMANAGER_H
#define UI_PQCUSTOMFILTERMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_pqCustomFilterManager
{
public:
    QGridLayout *gridLayout;
    QListView *CustomFilterList;
    QSpacerItem *spacerItem;
    QPushButton *CloseButton;
    QPushButton *RemoveButton;
    QPushButton *ExportButton;
    QPushButton *ImportButton;

    void setupUi(QDialog *pqCustomFilterManager)
    {
        if (pqCustomFilterManager->objectName().isEmpty())
            pqCustomFilterManager->setObjectName(QString::fromUtf8("pqCustomFilterManager"));
        pqCustomFilterManager->resize(418, 235);
        gridLayout = new QGridLayout(pqCustomFilterManager);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CustomFilterList = new QListView(pqCustomFilterManager);
        CustomFilterList->setObjectName(QString::fromUtf8("CustomFilterList"));
        CustomFilterList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        CustomFilterList->setProperty("isWrapping", QVariant(true));
        CustomFilterList->setResizeMode(QListView::Adjust);

        gridLayout->addWidget(CustomFilterList, 0, 0, 5, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 1, 1, 1);

        CloseButton = new QPushButton(pqCustomFilterManager);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setDefault(true);

        gridLayout->addWidget(CloseButton, 4, 1, 1, 1);

        RemoveButton = new QPushButton(pqCustomFilterManager);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));

        gridLayout->addWidget(RemoveButton, 2, 1, 1, 1);

        ExportButton = new QPushButton(pqCustomFilterManager);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));

        gridLayout->addWidget(ExportButton, 1, 1, 1, 1);

        ImportButton = new QPushButton(pqCustomFilterManager);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));

        gridLayout->addWidget(ImportButton, 0, 1, 1, 1);

        QWidget::setTabOrder(CustomFilterList, ImportButton);
        QWidget::setTabOrder(ImportButton, ExportButton);
        QWidget::setTabOrder(ExportButton, RemoveButton);
        QWidget::setTabOrder(RemoveButton, CloseButton);

        retranslateUi(pqCustomFilterManager);

        QMetaObject::connectSlotsByName(pqCustomFilterManager);
    } // setupUi

    void retranslateUi(QDialog *pqCustomFilterManager)
    {
        pqCustomFilterManager->setWindowTitle(QApplication::translate("pqCustomFilterManager", "Custom Filter Manager", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        CustomFilterList->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Displays the list of registered custom filter definitions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        CloseButton->setText(QApplication::translate("pqCustomFilterManager", "&Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        RemoveButton->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Removes the selected custom filter definitions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        RemoveButton->setText(QApplication::translate("pqCustomFilterManager", "&Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ExportButton->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Exports the selected custom filter definitions to a file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ExportButton->setText(QApplication::translate("pqCustomFilterManager", "&Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ImportButton->setWhatsThis(QApplication::translate("pqCustomFilterManager", "Imports custom filter definitions from a file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ImportButton->setText(QApplication::translate("pqCustomFilterManager", "&Import", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqCustomFilterManager: public Ui_pqCustomFilterManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMFILTERMANAGER_H
