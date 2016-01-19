/********************************************************************************
** Form generated from reading UI file 'pqLinksManager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINKSMANAGER_H
#define UI_PQLINKSMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqLinksManager
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QTreeView *treeView;

    void setupUi(QDialog *pqLinksManager)
    {
        if (pqLinksManager->objectName().isEmpty())
            pqLinksManager->setObjectName(QString::fromUtf8("pqLinksManager"));
        pqLinksManager->resize(567, 313);
        gridLayout = new QGridLayout(pqLinksManager);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        addButton = new QPushButton(pqLinksManager);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        vboxLayout->addWidget(addButton);

        editButton = new QPushButton(pqLinksManager);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        vboxLayout->addWidget(editButton);

        removeButton = new QPushButton(pqLinksManager);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        vboxLayout->addWidget(removeButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqLinksManager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        treeView = new QTreeView(pqLinksManager);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setRootIsDecorated(false);
        treeView->setItemsExpandable(false);

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        QWidget::setTabOrder(addButton, editButton);
        QWidget::setTabOrder(editButton, removeButton);
        QWidget::setTabOrder(removeButton, buttonBox);

        retranslateUi(pqLinksManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqLinksManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqLinksManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqLinksManager);
    } // setupUi

    void retranslateUi(QDialog *pqLinksManager)
    {
        pqLinksManager->setWindowTitle(QApplication::translate("pqLinksManager", "Dialog", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("pqLinksManager", "Add...", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("pqLinksManager", "Edit...", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("pqLinksManager", "Remove", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqLinksManager: public Ui_pqLinksManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINKSMANAGER_H
