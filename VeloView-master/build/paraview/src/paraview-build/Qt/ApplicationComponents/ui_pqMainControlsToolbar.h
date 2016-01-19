/********************************************************************************
** Form generated from reading UI file 'pqMainControlsToolbar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQMAINCONTROLSTOOLBAR_H
#define UI_PQMAINCONTROLSTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqMainControlsToolbar
{
public:
    QAction *actionOpenData;
    QAction *actionSaveData;
    QAction *actionServerConnect;
    QAction *actionServerDisconnect;
    QAction *actionHelp;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAutoApply;
    QAction *actionQuery;

    void setupUi(QToolBar *pqMainControlsToolbar)
    {
        if (pqMainControlsToolbar->objectName().isEmpty())
            pqMainControlsToolbar->setObjectName(QString::fromUtf8("pqMainControlsToolbar"));
        pqMainControlsToolbar->resize(350, 45);
        pqMainControlsToolbar->setOrientation(Qt::Horizontal);
        actionOpenData = new QAction(pqMainControlsToolbar);
        actionOpenData->setObjectName(QString::fromUtf8("actionOpenData"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqOpen24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenData->setIcon(icon);
        actionOpenData->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionSaveData = new QAction(pqMainControlsToolbar);
        actionSaveData->setObjectName(QString::fromUtf8("actionSaveData"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqSave24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveData->setIcon(icon1);
        actionSaveData->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionServerConnect = new QAction(pqMainControlsToolbar);
        actionServerConnect->setObjectName(QString::fromUtf8("actionServerConnect"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqConnect24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerConnect->setIcon(icon2);
        actionServerDisconnect = new QAction(pqMainControlsToolbar);
        actionServerDisconnect->setObjectName(QString::fromUtf8("actionServerDisconnect"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqDisconnect24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerDisconnect->setIcon(icon3);
        actionHelp = new QAction(pqMainControlsToolbar);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqHelp24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon4);
        actionUndo = new QAction(pqMainControlsToolbar);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":pqWidgets/Icons/pqUndo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(pqMainControlsToolbar);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqRedo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionAutoApply = new QAction(pqMainControlsToolbar);
        actionAutoApply->setObjectName(QString::fromUtf8("actionAutoApply"));
        actionAutoApply->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqAutoApply32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutoApply->setIcon(icon7);
        actionQuery = new QAction(pqMainControlsToolbar);
        actionQuery->setObjectName(QString::fromUtf8("actionQuery"));
        actionQuery->setCheckable(false);
        actionQuery->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqFindData24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuery->setIcon(icon8);

        pqMainControlsToolbar->addAction(actionOpenData);
        pqMainControlsToolbar->addAction(actionSaveData);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionServerConnect);
        pqMainControlsToolbar->addAction(actionServerDisconnect);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionUndo);
        pqMainControlsToolbar->addAction(actionRedo);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionAutoApply);
        pqMainControlsToolbar->addSeparator();
        pqMainControlsToolbar->addAction(actionHelp);
        pqMainControlsToolbar->addAction(actionQuery);

        retranslateUi(pqMainControlsToolbar);

        QMetaObject::connectSlotsByName(pqMainControlsToolbar);
    } // setupUi

    void retranslateUi(QToolBar *pqMainControlsToolbar)
    {
        pqMainControlsToolbar->setWindowTitle(QApplication::translate("pqMainControlsToolbar", "Main Controls", 0, QApplication::UnicodeUTF8));
        actionOpenData->setText(QApplication::translate("pqMainControlsToolbar", "Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionOpenData->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSaveData->setText(QApplication::translate("pqMainControlsToolbar", "Save Data...", 0, QApplication::UnicodeUTF8));
        actionServerConnect->setText(QApplication::translate("pqMainControlsToolbar", "&Connect...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionServerConnect->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Connect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionServerDisconnect->setText(QApplication::translate("pqMainControlsToolbar", "&Disconnect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionServerDisconnect->setStatusTip(QApplication::translate("pqMainControlsToolbar", "Disconnect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionHelp->setText(QApplication::translate("pqMainControlsToolbar", "Help", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("pqMainControlsToolbar", "&Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("pqMainControlsToolbar", "&Redo", 0, QApplication::UnicodeUTF8));
        actionAutoApply->setText(QApplication::translate("pqMainControlsToolbar", "Auto Apply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAutoApply->setToolTip(QApplication::translate("pqMainControlsToolbar", "Apply changes to parameters automatically", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuery->setText(QApplication::translate("pqMainControlsToolbar", "Find data...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuery->setToolTip(QApplication::translate("pqMainControlsToolbar", "Find data matching various criteria from the current source (v)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqMainControlsToolbar: public Ui_pqMainControlsToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQMAINCONTROLSTOOLBAR_H
