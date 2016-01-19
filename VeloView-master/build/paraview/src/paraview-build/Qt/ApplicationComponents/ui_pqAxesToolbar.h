/********************************************************************************
** Form generated from reading UI file 'pqAxesToolbar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQAXESTOOLBAR_H
#define UI_PQAXESTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqAxesToolbar
{
public:
    QAction *actionShowOrientationAxes;
    QAction *actionShowCenterAxes;
    QAction *actionPickCenter;
    QAction *actionResetCenter;

    void setupUi(QToolBar *axesToolbar)
    {
        if (axesToolbar->objectName().isEmpty())
            axesToolbar->setObjectName(QString::fromUtf8("axesToolbar"));
        axesToolbar->setEnabled(true);
        axesToolbar->setOrientation(Qt::Horizontal);
        actionShowOrientationAxes = new QAction(axesToolbar);
        actionShowOrientationAxes->setObjectName(QString::fromUtf8("actionShowOrientationAxes"));
        actionShowOrientationAxes->setCheckable(true);
        actionShowOrientationAxes->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqShowOrientationAxes24.png"));
        actionShowOrientationAxes->setIcon(icon);
        actionShowCenterAxes = new QAction(axesToolbar);
        actionShowCenterAxes->setObjectName(QString::fromUtf8("actionShowCenterAxes"));
        actionShowCenterAxes->setCheckable(true);
        actionShowCenterAxes->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqShowCenterAxes24.png"));
        actionShowCenterAxes->setIcon(icon1);
        actionPickCenter = new QAction(axesToolbar);
        actionPickCenter->setObjectName(QString::fromUtf8("actionPickCenter"));
        actionPickCenter->setCheckable(true);
        actionPickCenter->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqPickCenter24.png"));
        actionPickCenter->setIcon(icon2);
        actionResetCenter = new QAction(axesToolbar);
        actionResetCenter->setObjectName(QString::fromUtf8("actionResetCenter"));
        actionResetCenter->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetCenter24.png"));
        actionResetCenter->setIcon(icon3);

        axesToolbar->addAction(actionShowOrientationAxes);
        axesToolbar->addAction(actionShowCenterAxes);
        axesToolbar->addAction(actionResetCenter);
        axesToolbar->addAction(actionPickCenter);

        retranslateUi(axesToolbar);

        QMetaObject::connectSlotsByName(axesToolbar);
    } // setupUi

    void retranslateUi(QToolBar *axesToolbar)
    {
        axesToolbar->setWindowTitle(QApplication::translate("pqAxesToolbar", "Center Axes Controls", 0, QApplication::UnicodeUTF8));
        actionShowOrientationAxes->setText(QApplication::translate("pqAxesToolbar", "Show Orientation Axes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShowOrientationAxes->setStatusTip(QApplication::translate("pqAxesToolbar", "Show/Hide orientation axes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionShowCenterAxes->setText(QApplication::translate("pqAxesToolbar", "Show Center", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShowCenterAxes->setStatusTip(QApplication::translate("pqAxesToolbar", "Show/Hide center of rotation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPickCenter->setText(QApplication::translate("pqAxesToolbar", "Pick Center", 0, QApplication::UnicodeUTF8));
        actionPickCenter->setIconText(QApplication::translate("pqAxesToolbar", "Pick Center", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPickCenter->setToolTip(QApplication::translate("pqAxesToolbar", "Pick Center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPickCenter->setStatusTip(QApplication::translate("pqAxesToolbar", "Mouse press to pick center of rotation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionResetCenter->setText(QApplication::translate("pqAxesToolbar", "Reset Center", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionResetCenter->setStatusTip(QApplication::translate("pqAxesToolbar", "Reset center of rotation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqAxesToolbar: public Ui_pqAxesToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQAXESTOOLBAR_H
