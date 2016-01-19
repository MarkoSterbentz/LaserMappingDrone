/********************************************************************************
** Form generated from reading UI file 'pqFileMenuBuilder.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFILEMENUBUILDER_H
#define UI_PQFILEMENUBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMenu>

QT_BEGIN_NAMESPACE

class Ui_pqFileMenuBuilder
{
public:
    QAction *actionServerConnect;
    QAction *actionServerDisconnect;
    QAction *actionFileSaveScreenshot;
    QAction *actionFileSaveAnimation;
    QAction *actionFileSaveData;
    QAction *actionFileLoadServerState;
    QAction *actionFileSaveServerState;
    QAction *actionFileSaveGeometry;
    QAction *actionFileOpen;
    QAction *actionFileExit;
    QAction *actionExport;
    QMenu *menuRecentFiles;

    void setupUi(QMenu *pqFileMenuBuilder)
    {
        if (pqFileMenuBuilder->objectName().isEmpty())
            pqFileMenuBuilder->setObjectName(QString::fromUtf8("pqFileMenuBuilder"));
        actionServerConnect = new QAction(pqFileMenuBuilder);
        actionServerConnect->setObjectName(QString::fromUtf8("actionServerConnect"));
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqConnect24.png"));
        actionServerConnect->setIcon(icon);
        actionServerDisconnect = new QAction(pqFileMenuBuilder);
        actionServerDisconnect->setObjectName(QString::fromUtf8("actionServerDisconnect"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqDisconnect24.png"));
        actionServerDisconnect->setIcon(icon1);
        actionFileSaveScreenshot = new QAction(pqFileMenuBuilder);
        actionFileSaveScreenshot->setObjectName(QString::fromUtf8("actionFileSaveScreenshot"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqCaptureScreenshot24.png"));
        actionFileSaveScreenshot->setIcon(icon2);
        actionFileSaveAnimation = new QAction(pqFileMenuBuilder);
        actionFileSaveAnimation->setObjectName(QString::fromUtf8("actionFileSaveAnimation"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqSaveAnimation24.png"));
        actionFileSaveAnimation->setIcon(icon3);
        actionFileSaveAnimation->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileSaveData = new QAction(pqFileMenuBuilder);
        actionFileSaveData->setObjectName(QString::fromUtf8("actionFileSaveData"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqSave24.png"));
        actionFileSaveData->setIcon(icon4);
        actionFileSaveData->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileLoadServerState = new QAction(pqFileMenuBuilder);
        actionFileLoadServerState->setObjectName(QString::fromUtf8("actionFileLoadServerState"));
        actionFileLoadServerState->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileSaveServerState = new QAction(pqFileMenuBuilder);
        actionFileSaveServerState->setObjectName(QString::fromUtf8("actionFileSaveServerState"));
        actionFileSaveGeometry = new QAction(pqFileMenuBuilder);
        actionFileSaveGeometry->setObjectName(QString::fromUtf8("actionFileSaveGeometry"));
        actionFileSaveGeometry->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileOpen = new QAction(pqFileMenuBuilder);
        actionFileOpen->setObjectName(QString::fromUtf8("actionFileOpen"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqOpen24.png"));
        actionFileOpen->setIcon(icon5);
        actionFileOpen->setProperty("PV_MUST_BE_MASTER_TO_SHOW", QVariant(true));
        actionFileExit = new QAction(pqFileMenuBuilder);
        actionFileExit->setObjectName(QString::fromUtf8("actionFileExit"));
        actionExport = new QAction(pqFileMenuBuilder);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        menuRecentFiles = new QMenu(pqFileMenuBuilder);
        menuRecentFiles->setObjectName(QString::fromUtf8("menuRecentFiles"));

        pqFileMenuBuilder->addAction(actionFileOpen);
        pqFileMenuBuilder->addAction(menuRecentFiles->menuAction());
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileLoadServerState);
        pqFileMenuBuilder->addAction(actionFileSaveServerState);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileSaveData);
        pqFileMenuBuilder->addAction(actionFileSaveScreenshot);
        pqFileMenuBuilder->addAction(actionExport);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileSaveAnimation);
        pqFileMenuBuilder->addAction(actionFileSaveGeometry);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionServerConnect);
        pqFileMenuBuilder->addAction(actionServerDisconnect);
        pqFileMenuBuilder->addSeparator();
        pqFileMenuBuilder->addAction(actionFileExit);

        retranslateUi(pqFileMenuBuilder);

        QMetaObject::connectSlotsByName(pqFileMenuBuilder);
    } // setupUi

    void retranslateUi(QMenu *pqFileMenuBuilder)
    {
        pqFileMenuBuilder->setTitle(QApplication::translate("pqFileMenuBuilder", "&File", 0, QApplication::UnicodeUTF8));
        actionServerConnect->setText(QApplication::translate("pqFileMenuBuilder", "&Connect...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionServerConnect->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Connect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionServerDisconnect->setText(QApplication::translate("pqFileMenuBuilder", "&Disconnect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionServerDisconnect->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Disconnect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFileSaveScreenshot->setText(QApplication::translate("pqFileMenuBuilder", "Save Screenshot...", 0, QApplication::UnicodeUTF8));
        actionFileSaveAnimation->setText(QApplication::translate("pqFileMenuBuilder", "Save &Animation...", 0, QApplication::UnicodeUTF8));
        actionFileSaveData->setText(QApplication::translate("pqFileMenuBuilder", "Save Data...", 0, QApplication::UnicodeUTF8));
        actionFileSaveData->setShortcut(QApplication::translate("pqFileMenuBuilder", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionFileLoadServerState->setText(QApplication::translate("pqFileMenuBuilder", "&Load State...", 0, QApplication::UnicodeUTF8));
        actionFileSaveServerState->setText(QApplication::translate("pqFileMenuBuilder", "&Save State...", 0, QApplication::UnicodeUTF8));
        actionFileSaveGeometry->setText(QApplication::translate("pqFileMenuBuilder", "Save &Geometry...", 0, QApplication::UnicodeUTF8));
        actionFileOpen->setText(QApplication::translate("pqFileMenuBuilder", "&Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionFileOpen->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFileOpen->setShortcut(QApplication::translate("pqFileMenuBuilder", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionFileExit->setText(QApplication::translate("pqFileMenuBuilder", "E&xit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionFileExit->setStatusTip(QApplication::translate("pqFileMenuBuilder", "Exit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFileExit->setShortcut(QApplication::translate("pqFileMenuBuilder", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("pqFileMenuBuilder", "Export Scene...", 0, QApplication::UnicodeUTF8));
        menuRecentFiles->setTitle(QApplication::translate("pqFileMenuBuilder", "Recent Files", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqFileMenuBuilder: public Ui_pqFileMenuBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFILEMENUBUILDER_H
