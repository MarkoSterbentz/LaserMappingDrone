/********************************************************************************
** Form generated from reading UI file 'pqColorToolbar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORTOOLBAR_H
#define UI_PQCOLORTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqColorToolbar
{
public:
    QAction *actionScalarBarVisibility;
    QAction *actionEditColorMap;
    QAction *actionResetRange;
    QAction *actionRescaleCustomRange;
    QAction *actionRescaleVisibleRange;

    void setupUi(QToolBar *variableToolbar)
    {
        if (variableToolbar->objectName().isEmpty())
            variableToolbar->setObjectName(QString::fromUtf8("variableToolbar"));
        variableToolbar->setOrientation(Qt::Horizontal);
        actionScalarBarVisibility = new QAction(variableToolbar);
        actionScalarBarVisibility->setObjectName(QString::fromUtf8("actionScalarBarVisibility"));
        actionScalarBarVisibility->setCheckable(true);
        actionScalarBarVisibility->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqScalarBar24.png"));
        actionScalarBarVisibility->setIcon(icon);
        actionEditColorMap = new QAction(variableToolbar);
        actionEditColorMap->setObjectName(QString::fromUtf8("actionEditColorMap"));
        actionEditColorMap->setEnabled(false);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqEditColor24.png"));
        actionEditColorMap->setIcon(icon1);
        actionResetRange = new QAction(variableToolbar);
        actionResetRange->setObjectName(QString::fromUtf8("actionResetRange"));
        actionResetRange->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetRange24.png"));
        actionResetRange->setIcon(icon2);
        actionRescaleCustomRange = new QAction(variableToolbar);
        actionRescaleCustomRange->setObjectName(QString::fromUtf8("actionRescaleCustomRange"));
        actionRescaleCustomRange->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetRangeCustom24.png"));
        actionRescaleCustomRange->setIcon(icon3);
        actionRescaleVisibleRange = new QAction(variableToolbar);
        actionRescaleVisibleRange->setObjectName(QString::fromUtf8("actionRescaleVisibleRange"));
        actionRescaleVisibleRange->setEnabled(false);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/pqWidgets/Icons/pqResetToVisibleRange32.png"));
        actionRescaleVisibleRange->setIcon(icon4);

        variableToolbar->addAction(actionScalarBarVisibility);
        variableToolbar->addAction(actionEditColorMap);
        variableToolbar->addAction(actionResetRange);
        variableToolbar->addAction(actionRescaleCustomRange);
        variableToolbar->addAction(actionRescaleVisibleRange);

        retranslateUi(variableToolbar);

        QMetaObject::connectSlotsByName(variableToolbar);
    } // setupUi

    void retranslateUi(QToolBar *variableToolbar)
    {
        variableToolbar->setWindowTitle(QApplication::translate("pqColorToolbar", "Active Variable Controls", 0, QApplication::UnicodeUTF8));
        actionScalarBarVisibility->setText(QApplication::translate("pqColorToolbar", "Show Color Legend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScalarBarVisibility->setToolTip(QApplication::translate("pqColorToolbar", "Toggle Color Legend Visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionScalarBarVisibility->setStatusTip(QApplication::translate("pqColorToolbar", "Toggle Color Legend Visibility", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionEditColorMap->setText(QApplication::translate("pqColorToolbar", "Edit Color Map", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionEditColorMap->setStatusTip(QApplication::translate("pqColorToolbar", "Edit Color Map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionResetRange->setText(QApplication::translate("pqColorToolbar", "Reset Range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionResetRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionResetRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionRescaleCustomRange->setText(QApplication::translate("pqColorToolbar", "Rescale Custom Range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRescaleCustomRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to Custom Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRescaleCustomRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to Custom Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionRescaleVisibleRange->setText(QApplication::translate("pqColorToolbar", "Rescale Visible Range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRescaleVisibleRange->setToolTip(QApplication::translate("pqColorToolbar", "Rescale to Visible Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRescaleVisibleRange->setStatusTip(QApplication::translate("pqColorToolbar", "Rescale to Visible Data Range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class pqColorToolbar: public Ui_pqColorToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORTOOLBAR_H
