/********************************************************************************
** Form generated from reading UI file 'TestingDemo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINGDEMO_H
#define UI_TESTINGDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestingDemo
{
public:
    QAction *actionOpen_Dialog;
    QAction *actionE_xit;
    QAction *actionRecord;
    QAction *actionPlay;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuTesting;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestingDemo)
    {
        if (TestingDemo->objectName().isEmpty())
            TestingDemo->setObjectName(QString::fromUtf8("TestingDemo"));
        TestingDemo->resize(483, 392);
        actionOpen_Dialog = new QAction(TestingDemo);
        actionOpen_Dialog->setObjectName(QString::fromUtf8("actionOpen_Dialog"));
        actionE_xit = new QAction(TestingDemo);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionRecord = new QAction(TestingDemo);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionPlay = new QAction(TestingDemo);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        centralwidget = new QWidget(TestingDemo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(centralwidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 2, 0, 1, 2);

        TestingDemo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestingDemo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 483, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuTesting = new QMenu(menubar);
        menuTesting->setObjectName(QString::fromUtf8("menuTesting"));
        TestingDemo->setMenuBar(menubar);
        statusbar = new QStatusBar(TestingDemo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TestingDemo->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuTesting->menuAction());
        menu_File->addAction(actionOpen_Dialog);
        menu_File->addAction(actionE_xit);
        menuTesting->addAction(actionRecord);
        menuTesting->addAction(actionPlay);

        retranslateUi(TestingDemo);
        QObject::connect(actionE_xit, SIGNAL(triggered()), TestingDemo, SLOT(close()));

        QMetaObject::connectSlotsByName(TestingDemo);
    } // setupUi

    void retranslateUi(QMainWindow *TestingDemo)
    {
        TestingDemo->setWindowTitle(QApplication::translate("TestingDemo", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen_Dialog->setText(QApplication::translate("TestingDemo", "Popup Dialog", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("TestingDemo", "E&xit", 0, QApplication::UnicodeUTF8));
        actionRecord->setText(QApplication::translate("TestingDemo", "Record", 0, QApplication::UnicodeUTF8));
        actionPlay->setText(QApplication::translate("TestingDemo", "Play", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TestingDemo", "Items", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("TestingDemo", "Item0", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("TestingDemo", "Item1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("TestingDemo", "Item2", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        menu_File->setTitle(QApplication::translate("TestingDemo", "&File", 0, QApplication::UnicodeUTF8));
        menuTesting->setTitle(QApplication::translate("TestingDemo", "Testing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestingDemo: public Ui_TestingDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINGDEMO_H
