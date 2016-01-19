/********************************************************************************
** Form generated from reading UI file 'pqHelpWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQHELPWINDOW_H
#define UI_PQHELPWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqHelpWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *contentsDock;
    QWidget *dockWidgetContents;
    QDockWidget *searchDock;
    QWidget *dockWidgetContents_3;

    void setupUi(QMainWindow *pqHelpWindow)
    {
        if (pqHelpWindow->objectName().isEmpty())
            pqHelpWindow->setObjectName(QString::fromUtf8("pqHelpWindow"));
        pqHelpWindow->resize(1024, 768);
        centralwidget = new QWidget(pqHelpWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pqHelpWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pqHelpWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 26));
        pqHelpWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(pqHelpWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pqHelpWindow->setStatusBar(statusbar);
        contentsDock = new QDockWidget(pqHelpWindow);
        contentsDock->setObjectName(QString::fromUtf8("contentsDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        contentsDock->setWidget(dockWidgetContents);
        pqHelpWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), contentsDock);
        searchDock = new QDockWidget(pqHelpWindow);
        searchDock->setObjectName(QString::fromUtf8("searchDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        searchDock->setWidget(dockWidgetContents_3);
        pqHelpWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), searchDock);

        retranslateUi(pqHelpWindow);

        QMetaObject::connectSlotsByName(pqHelpWindow);
    } // setupUi

    void retranslateUi(QMainWindow *pqHelpWindow)
    {
        pqHelpWindow->setWindowTitle(QApplication::translate("pqHelpWindow", "Online Documentation", 0, QApplication::UnicodeUTF8));
        contentsDock->setWindowTitle(QApplication::translate("pqHelpWindow", "Contents", 0, QApplication::UnicodeUTF8));
        searchDock->setWindowTitle(QApplication::translate("pqHelpWindow", "Search", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqHelpWindow: public Ui_pqHelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQHELPWINDOW_H
