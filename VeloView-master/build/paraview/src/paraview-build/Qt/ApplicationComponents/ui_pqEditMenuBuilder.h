/********************************************************************************
** Form generated from reading UI file 'pqEditMenuBuilder.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEDITMENUBUILDER_H
#define UI_PQEDITMENUBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMenu>

QT_BEGIN_NAMESPACE

class Ui_pqEditMenuBuilder
{
public:
    QAction *actionEditUndo;
    QAction *actionEditRedo;
    QAction *actionEditCameraUndo;
    QAction *actionEditCameraRedo;
    QAction *actionChangeInput;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionDelete_All;
    QAction *actionIgnoreTime;
    QAction *actionEditSettings;
    QAction *actionQuery;

    void setupUi(QMenu *pqEditMenuBuilder)
    {
        if (pqEditMenuBuilder->objectName().isEmpty())
            pqEditMenuBuilder->setObjectName(QString::fromUtf8("pqEditMenuBuilder"));
        actionEditUndo = new QAction(pqEditMenuBuilder);
        actionEditUndo->setObjectName(QString::fromUtf8("actionEditUndo"));
        actionEditUndo->setCheckable(false);
        actionEditUndo->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqUndo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditUndo->setIcon(icon);
        actionEditRedo = new QAction(pqEditMenuBuilder);
        actionEditRedo->setObjectName(QString::fromUtf8("actionEditRedo"));
        actionEditRedo->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqRedo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditRedo->setIcon(icon1);
        actionEditCameraUndo = new QAction(pqEditMenuBuilder);
        actionEditCameraUndo->setObjectName(QString::fromUtf8("actionEditCameraUndo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqUndoCamera24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCameraUndo->setIcon(icon2);
        actionEditCameraRedo = new QAction(pqEditMenuBuilder);
        actionEditCameraRedo->setObjectName(QString::fromUtf8("actionEditCameraRedo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqRedoCamera24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCameraRedo->setIcon(icon3);
        actionChangeInput = new QAction(pqEditMenuBuilder);
        actionChangeInput->setObjectName(QString::fromUtf8("actionChangeInput"));
        actionCopy = new QAction(pqEditMenuBuilder);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(pqEditMenuBuilder);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setIcon(icon4);
        actionDelete = new QAction(pqEditMenuBuilder);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionDelete->setIcon(icon4);
        actionDelete_All = new QAction(pqEditMenuBuilder);
        actionDelete_All->setObjectName(QString::fromUtf8("actionDelete_All"));
        actionIgnoreTime = new QAction(pqEditMenuBuilder);
        actionIgnoreTime->setObjectName(QString::fromUtf8("actionIgnoreTime"));
        actionIgnoreTime->setCheckable(true);
        actionEditSettings = new QAction(pqEditMenuBuilder);
        actionEditSettings->setObjectName(QString::fromUtf8("actionEditSettings"));
        actionQuery = new QAction(pqEditMenuBuilder);
        actionQuery->setObjectName(QString::fromUtf8("actionQuery"));

        pqEditMenuBuilder->addAction(actionEditUndo);
        pqEditMenuBuilder->addAction(actionEditRedo);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionEditCameraUndo);
        pqEditMenuBuilder->addAction(actionEditCameraRedo);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionQuery);
        pqEditMenuBuilder->addAction(actionChangeInput);
        pqEditMenuBuilder->addAction(actionCopy);
        pqEditMenuBuilder->addAction(actionPaste);
        pqEditMenuBuilder->addAction(actionIgnoreTime);
        pqEditMenuBuilder->addAction(actionDelete);
        pqEditMenuBuilder->addAction(actionDelete_All);
        pqEditMenuBuilder->addSeparator();
        pqEditMenuBuilder->addAction(actionEditSettings);

        retranslateUi(pqEditMenuBuilder);

        QMetaObject::connectSlotsByName(pqEditMenuBuilder);
    } // setupUi

    void retranslateUi(QMenu *pqEditMenuBuilder)
    {
        pqEditMenuBuilder->setTitle(QApplication::translate("pqEditMenuBuilder", "&Edit", 0, QApplication::UnicodeUTF8));
        actionEditUndo->setText(QApplication::translate("pqEditMenuBuilder", "&Undo", 0, QApplication::UnicodeUTF8));
        actionEditUndo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionEditRedo->setText(QApplication::translate("pqEditMenuBuilder", "&Redo", 0, QApplication::UnicodeUTF8));
        actionEditRedo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionEditCameraUndo->setText(QApplication::translate("pqEditMenuBuilder", "Camera Undo", 0, QApplication::UnicodeUTF8));
        actionEditCameraUndo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionEditCameraRedo->setText(QApplication::translate("pqEditMenuBuilder", "Camera Redo", 0, QApplication::UnicodeUTF8));
        actionEditCameraRedo->setShortcut(QApplication::translate("pqEditMenuBuilder", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionChangeInput->setText(QApplication::translate("pqEditMenuBuilder", "Change &Input...", 0, QApplication::UnicodeUTF8));
        actionChangeInput->setIconText(QApplication::translate("pqEditMenuBuilder", "Change Input...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionChangeInput->setToolTip(QApplication::translate("pqEditMenuBuilder", "Change a Filter's Input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionChangeInput->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Change a Filter's Input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCopy->setText(QApplication::translate("pqEditMenuBuilder", "&Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionCopy->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Copy properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPaste->setText(QApplication::translate("pqEditMenuBuilder", "&Paste", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPaste->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Paste copied properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDelete->setText(QApplication::translate("pqEditMenuBuilder", "&Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionDelete->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDelete_All->setText(QApplication::translate("pqEditMenuBuilder", "Reset Session", 0, QApplication::UnicodeUTF8));
        actionIgnoreTime->setText(QApplication::translate("pqEditMenuBuilder", "Ignore Time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIgnoreTime->setToolTip(QApplication::translate("pqEditMenuBuilder", "Disregard this source/filter's time from animations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionIgnoreTime->setStatusTip(QApplication::translate("pqEditMenuBuilder", "Disregard this source/filter's time from animations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionIgnoreTime->setWhatsThis(QApplication::translate("pqEditMenuBuilder", "Disregard this source/filter's time from animations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionEditSettings->setText(QApplication::translate("pqEditMenuBuilder", "Settings...", 0, QApplication::UnicodeUTF8));
        actionEditSettings->setIconText(QApplication::translate("pqEditMenuBuilder", "Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEditSettings->setToolTip(QApplication::translate("pqEditMenuBuilder", "Settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuery->setText(QApplication::translate("pqEditMenuBuilder", "Find Data...", 0, QApplication::UnicodeUTF8));
        actionQuery->setIconText(QApplication::translate("pqEditMenuBuilder", "Find Data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuery->setToolTip(QApplication::translate("pqEditMenuBuilder", "Find data matching various criteria from the current source (v).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuery->setShortcut(QApplication::translate("pqEditMenuBuilder", "v", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqEditMenuBuilder: public Ui_pqEditMenuBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEDITMENUBUILDER_H
