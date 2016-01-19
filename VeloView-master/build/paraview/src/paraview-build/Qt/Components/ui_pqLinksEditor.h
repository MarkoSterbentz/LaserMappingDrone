/********************************************************************************
** Form generated from reading UI file 'pqLinksEditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINKSEDITOR_H
#define UI_PQLINKSEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqLinksEditor
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout1;
    QTreeView *ObjectTreeProxy2;
    QTreeView *ObjectTreeProxy1;
    QWidget *page_2;
    QGridLayout *gridLayout2;
    QListWidget *Property1List;
    QTreeView *ObjectTreeProperty1;
    QListWidget *Property2List;
    QTreeView *ObjectTreeProperty2;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqLinksEditor)
    {
        if (pqLinksEditor->objectName().isEmpty())
            pqLinksEditor->setObjectName(QString::fromUtf8("pqLinksEditor"));
        pqLinksEditor->resize(496, 389);
        gridLayout = new QGridLayout(pqLinksEditor);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(pqLinksEditor);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout1 = new QGridLayout(page);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ObjectTreeProxy2 = new QTreeView(page);
        ObjectTreeProxy2->setObjectName(QString::fromUtf8("ObjectTreeProxy2"));

        gridLayout1->addWidget(ObjectTreeProxy2, 0, 1, 1, 1);

        ObjectTreeProxy1 = new QTreeView(page);
        ObjectTreeProxy1->setObjectName(QString::fromUtf8("ObjectTreeProxy1"));

        gridLayout1->addWidget(ObjectTreeProxy1, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout2 = new QGridLayout(page_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        Property1List = new QListWidget(page_2);
        Property1List->setObjectName(QString::fromUtf8("Property1List"));

        gridLayout2->addWidget(Property1List, 1, 0, 1, 1);

        ObjectTreeProperty1 = new QTreeView(page_2);
        ObjectTreeProperty1->setObjectName(QString::fromUtf8("ObjectTreeProperty1"));

        gridLayout2->addWidget(ObjectTreeProperty1, 0, 0, 1, 1);

        Property2List = new QListWidget(page_2);
        Property2List->setObjectName(QString::fromUtf8("Property2List"));

        gridLayout2->addWidget(Property2List, 1, 1, 1, 1);

        ObjectTreeProperty2 = new QTreeView(page_2);
        ObjectTreeProperty2->setObjectName(QString::fromUtf8("ObjectTreeProperty2"));

        gridLayout2->addWidget(ObjectTreeProperty2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(pqLinksEditor);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        lineEdit = new QLineEdit(pqLinksEditor);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        hboxLayout->addWidget(lineEdit);

        label_2 = new QLabel(pqLinksEditor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        comboBox = new QComboBox(pqLinksEditor);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        hboxLayout->addWidget(comboBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(pqLinksEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(pqLinksEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqLinksEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqLinksEditor, SLOT(reject()));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqLinksEditor);
    } // setupUi

    void retranslateUi(QDialog *pqLinksEditor)
    {
        pqLinksEditor->setWindowTitle(QApplication::translate("pqLinksEditor", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqLinksEditor", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqLinksEditor", "Mode:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("pqLinksEditor", "Object Link", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqLinksEditor", "Property Link", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class pqLinksEditor: public Ui_pqLinksEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINKSEDITOR_H
