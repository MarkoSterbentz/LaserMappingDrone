/********************************************************************************
** Form generated from reading UI file 'pqFindDataSelectionDisplayFrame.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATASELECTIONDISPLAYFRAME_H
#define UI_PQFINDDATASELECTIONDISPLAYFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "pqColorChooserButton.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataSelectionDisplayFrame
{
public:
    QHBoxLayout *horizontalLayout;
    pqColorChooserButton *selectionColor;
    QPushButton *cellLabelsButton;
    QPushButton *pointLabelsButton;
    QToolButton *showFrustumButton;
    QToolButton *showLabelPropertiesButton;

    void setupUi(QWidget *FindDataSelectionDisplayFrame)
    {
        if (FindDataSelectionDisplayFrame->objectName().isEmpty())
            FindDataSelectionDisplayFrame->setObjectName(QString::fromUtf8("FindDataSelectionDisplayFrame"));
        FindDataSelectionDisplayFrame->resize(527, 45);
        horizontalLayout = new QHBoxLayout(FindDataSelectionDisplayFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        selectionColor = new pqColorChooserButton(FindDataSelectionDisplayFrame);
        selectionColor->setObjectName(QString::fromUtf8("selectionColor"));
        selectionColor->setEnabled(true);

        horizontalLayout->addWidget(selectionColor);

        cellLabelsButton = new QPushButton(FindDataSelectionDisplayFrame);
        cellLabelsButton->setObjectName(QString::fromUtf8("cellLabelsButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqCellData16.png"), QSize(), QIcon::Normal, QIcon::Off);
        cellLabelsButton->setIcon(icon);

        horizontalLayout->addWidget(cellLabelsButton);

        pointLabelsButton = new QPushButton(FindDataSelectionDisplayFrame);
        pointLabelsButton->setObjectName(QString::fromUtf8("pointLabelsButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqPointData16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointLabelsButton->setIcon(icon1);

        horizontalLayout->addWidget(pointLabelsButton);

        showFrustumButton = new QToolButton(FindDataSelectionDisplayFrame);
        showFrustumButton->setObjectName(QString::fromUtf8("showFrustumButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqFrustumSelectionCell24.png"), QSize(), QIcon::Normal, QIcon::Off);
        showFrustumButton->setIcon(icon2);
        showFrustumButton->setCheckable(true);

        horizontalLayout->addWidget(showFrustumButton);

        showLabelPropertiesButton = new QToolButton(FindDataSelectionDisplayFrame);
        showLabelPropertiesButton->setObjectName(QString::fromUtf8("showLabelPropertiesButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqAdvanced26.png"), QSize(), QIcon::Normal, QIcon::Off);
        showLabelPropertiesButton->setIcon(icon3);
        showLabelPropertiesButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(showLabelPropertiesButton);


        retranslateUi(FindDataSelectionDisplayFrame);

        QMetaObject::connectSlotsByName(FindDataSelectionDisplayFrame);
    } // setupUi

    void retranslateUi(QWidget *FindDataSelectionDisplayFrame)
    {
        FindDataSelectionDisplayFrame->setWindowTitle(QApplication::translate("FindDataSelectionDisplayFrame", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectionColor->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the color to use to show selected elements</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectionColor->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Selection Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cellLabelsButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the array to label selected cells with</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cellLabelsButton->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Cell Labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pointLabelsButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>Set the array to label to selected points with</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pointLabelsButton->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Point Labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showFrustumButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "<p>For frustum based selections, show the frustum used to select the elements</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showFrustumButton->setText(QApplication::translate("FindDataSelectionDisplayFrame", "Show frustum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showLabelPropertiesButton->setToolTip(QApplication::translate("FindDataSelectionDisplayFrame", "Edit selection label properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class FindDataSelectionDisplayFrame: public Ui_FindDataSelectionDisplayFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATASELECTIONDISPLAYFRAME_H
