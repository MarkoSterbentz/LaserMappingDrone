/********************************************************************************
** Form generated from reading UI file 'pqPipelineBrowserContextMenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPIPELINEBROWSERCONTEXTMENU_H
#define UI_PQPIPELINEBROWSERCONTEXTMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqPipelineBrowserContextMenu
{
public:
    QAction *actionPBChangeInput;
    QAction *actionPBDelete;
    QAction *actionPBCopy;
    QAction *actionPBPaste;
    QAction *actionPBIgnoreTime;
    QAction *actionPBOpen;
    QAction *actionPBCreateCustomFilter;

    void setupUi(QWidget *pqPipelineBrowserContextMenu)
    {
        if (pqPipelineBrowserContextMenu->objectName().isEmpty())
            pqPipelineBrowserContextMenu->setObjectName(QString::fromUtf8("pqPipelineBrowserContextMenu"));
        pqPipelineBrowserContextMenu->resize(100, 30);
        actionPBChangeInput = new QAction(pqPipelineBrowserContextMenu);
        actionPBChangeInput->setObjectName(QString::fromUtf8("actionPBChangeInput"));
        actionPBDelete = new QAction(pqPipelineBrowserContextMenu);
        actionPBDelete->setObjectName(QString::fromUtf8("actionPBDelete"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        actionPBDelete->setIcon(icon);
        actionPBCopy = new QAction(pqPipelineBrowserContextMenu);
        actionPBCopy->setObjectName(QString::fromUtf8("actionPBCopy"));
        actionPBCopy->setIcon(icon);
        actionPBPaste = new QAction(pqPipelineBrowserContextMenu);
        actionPBPaste->setObjectName(QString::fromUtf8("actionPBPaste"));
        actionPBPaste->setIcon(icon);
        actionPBIgnoreTime = new QAction(pqPipelineBrowserContextMenu);
        actionPBIgnoreTime->setObjectName(QString::fromUtf8("actionPBIgnoreTime"));
        actionPBIgnoreTime->setCheckable(true);
        actionPBOpen = new QAction(pqPipelineBrowserContextMenu);
        actionPBOpen->setObjectName(QString::fromUtf8("actionPBOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqOpen24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPBOpen->setIcon(icon1);
        actionPBOpen->setShortcutContext(Qt::WidgetShortcut);
        actionPBCreateCustomFilter = new QAction(pqPipelineBrowserContextMenu);
        actionPBCreateCustomFilter->setObjectName(QString::fromUtf8("actionPBCreateCustomFilter"));

        pqPipelineBrowserContextMenu->addAction(actionPBOpen);
        pqPipelineBrowserContextMenu->addAction(actionPBCopy);
        pqPipelineBrowserContextMenu->addAction(actionPBPaste);
        pqPipelineBrowserContextMenu->addAction(actionPBCreateCustomFilter);
        pqPipelineBrowserContextMenu->addAction(actionPBChangeInput);
        pqPipelineBrowserContextMenu->addAction(actionPBIgnoreTime);
        pqPipelineBrowserContextMenu->addAction(actionPBDelete);

        retranslateUi(pqPipelineBrowserContextMenu);

        QMetaObject::connectSlotsByName(pqPipelineBrowserContextMenu);
    } // setupUi

    void retranslateUi(QWidget *pqPipelineBrowserContextMenu)
    {
        actionPBChangeInput->setText(QApplication::translate("pqPipelineBrowserContextMenu", "Change &Input...", 0, QApplication::UnicodeUTF8));
        actionPBChangeInput->setIconText(QApplication::translate("pqPipelineBrowserContextMenu", "Change Input...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPBChangeInput->setToolTip(QApplication::translate("pqPipelineBrowserContextMenu", "Change a Filter's Input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPBChangeInput->setStatusTip(QApplication::translate("pqPipelineBrowserContextMenu", "Change a Filter's Input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPBDelete->setText(QApplication::translate("pqPipelineBrowserContextMenu", "&Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPBDelete->setStatusTip(QApplication::translate("pqPipelineBrowserContextMenu", "Delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPBCopy->setText(QApplication::translate("pqPipelineBrowserContextMenu", "&Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPBCopy->setStatusTip(QApplication::translate("pqPipelineBrowserContextMenu", "Copy Properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPBPaste->setText(QApplication::translate("pqPipelineBrowserContextMenu", "&Paste", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPBPaste->setStatusTip(QApplication::translate("pqPipelineBrowserContextMenu", "Paste Properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPBIgnoreTime->setText(QApplication::translate("pqPipelineBrowserContextMenu", "Ignore Time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPBIgnoreTime->setToolTip(QApplication::translate("pqPipelineBrowserContextMenu", "Disregard this source/filter's time from animations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPBIgnoreTime->setStatusTip(QApplication::translate("pqPipelineBrowserContextMenu", "Disregard this source/filter's time from animations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPBIgnoreTime->setWhatsThis(QApplication::translate("pqPipelineBrowserContextMenu", "Disregard this source/filter's time from animations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPBOpen->setText(QApplication::translate("pqPipelineBrowserContextMenu", "&Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPBOpen->setToolTip(QApplication::translate("pqPipelineBrowserContextMenu", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPBOpen->setStatusTip(QApplication::translate("pqPipelineBrowserContextMenu", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPBCreateCustomFilter->setText(QApplication::translate("pqPipelineBrowserContextMenu", "&Create Custom Filter...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(pqPipelineBrowserContextMenu);
    } // retranslateUi

};

namespace Ui {
    class pqPipelineBrowserContextMenu: public Ui_pqPipelineBrowserContextMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPIPELINEBROWSERCONTEXTMENU_H
