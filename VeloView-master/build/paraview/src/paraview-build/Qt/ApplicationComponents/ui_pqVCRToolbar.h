/********************************************************************************
** Form generated from reading UI file 'pqVCRToolbar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQVCRTOOLBAR_H
#define UI_PQVCRTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqVCRToolbar
{
public:
    QAction *actionVCRPlay;
    QAction *actionVCRPreviousFrame;
    QAction *actionVCRFirstFrame;
    QAction *actionVCRNextFrame;
    QAction *actionVCRLastFrame;
    QAction *actionVCRLoop;

    void setupUi(QToolBar *VCRToolbar)
    {
        if (VCRToolbar->objectName().isEmpty())
            VCRToolbar->setObjectName(QString::fromUtf8("VCRToolbar"));
        VCRToolbar->setOrientation(Qt::Horizontal);
        VCRToolbar->setProperty("PV_MUST_BE_MASTER", QVariant(true));
        actionVCRPlay = new QAction(VCRToolbar);
        actionVCRPlay->setObjectName(QString::fromUtf8("actionVCRPlay"));
        actionVCRPlay->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrPlay24.png"));
        actionVCRPlay->setIcon(icon);
        actionVCRPreviousFrame = new QAction(VCRToolbar);
        actionVCRPreviousFrame->setObjectName(QString::fromUtf8("actionVCRPreviousFrame"));
        actionVCRPreviousFrame->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrBack24.png"));
        actionVCRPreviousFrame->setIcon(icon1);
        actionVCRPreviousFrame->setProperty("PV_MUST_BE_MASTER", QVariant(true));
        actionVCRFirstFrame = new QAction(VCRToolbar);
        actionVCRFirstFrame->setObjectName(QString::fromUtf8("actionVCRFirstFrame"));
        actionVCRFirstFrame->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrFirst24.png"));
        actionVCRFirstFrame->setIcon(icon2);
        actionVCRNextFrame = new QAction(VCRToolbar);
        actionVCRNextFrame->setObjectName(QString::fromUtf8("actionVCRNextFrame"));
        actionVCRNextFrame->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrForward24.png"));
        actionVCRNextFrame->setIcon(icon3);
        actionVCRLastFrame = new QAction(VCRToolbar);
        actionVCRLastFrame->setObjectName(QString::fromUtf8("actionVCRLastFrame"));
        actionVCRLastFrame->setEnabled(false);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrLast24.png"));
        actionVCRLastFrame->setIcon(icon4);
        actionVCRLoop = new QAction(VCRToolbar);
        actionVCRLoop->setObjectName(QString::fromUtf8("actionVCRLoop"));
        actionVCRLoop->setCheckable(true);
        actionVCRLoop->setEnabled(false);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqVcrLoop24.png"));
        actionVCRLoop->setIcon(icon5);

        VCRToolbar->addAction(actionVCRFirstFrame);
        VCRToolbar->addAction(actionVCRPreviousFrame);
        VCRToolbar->addAction(actionVCRPlay);
        VCRToolbar->addAction(actionVCRNextFrame);
        VCRToolbar->addAction(actionVCRLastFrame);
        VCRToolbar->addAction(actionVCRLoop);

        retranslateUi(VCRToolbar);

        QMetaObject::connectSlotsByName(VCRToolbar);
    } // setupUi

    void retranslateUi(QToolBar *VCRToolbar)
    {
        VCRToolbar->setWindowTitle(QApplication::translate("pqVCRToolbar", "VCR Controls", 0, QApplication::UnicodeUTF8));
        actionVCRPlay->setText(QApplication::translate("pqVCRToolbar", "&Play", 0, QApplication::UnicodeUTF8));
        actionVCRPreviousFrame->setText(QApplication::translate("pqVCRToolbar", "Pre&vious Frame", 0, QApplication::UnicodeUTF8));
        actionVCRFirstFrame->setText(QApplication::translate("pqVCRToolbar", "&First Frame", 0, QApplication::UnicodeUTF8));
        actionVCRNextFrame->setText(QApplication::translate("pqVCRToolbar", "&Next Frame", 0, QApplication::UnicodeUTF8));
        actionVCRLastFrame->setText(QApplication::translate("pqVCRToolbar", "&Last Frame", 0, QApplication::UnicodeUTF8));
        actionVCRLoop->setText(QApplication::translate("pqVCRToolbar", "L&oop", 0, QApplication::UnicodeUTF8));
        actionVCRLoop->setIconText(QApplication::translate("pqVCRToolbar", "Loop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionVCRLoop->setToolTip(QApplication::translate("pqVCRToolbar", "Loop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionVCRLoop->setStatusTip(QApplication::translate("pqVCRToolbar", "Loop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqVCRToolbar: public Ui_pqVCRToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQVCRTOOLBAR_H
