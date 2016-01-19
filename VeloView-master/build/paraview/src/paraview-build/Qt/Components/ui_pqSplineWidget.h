/********************************************************************************
** Form generated from reading UI file 'pqSplineWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSPLINEWIDGET_H
#define UI_PQSPLINEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SplineWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *Visibility;
    QPushButton *pushButton;
    pqTreeWidget *HandlePositions;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QToolButton *AddPoint;
    QToolButton *Delete;
    QCheckBox *Closed;
    QLabel *label;

    void setupUi(QWidget *SplineWidget)
    {
        if (SplineWidget->objectName().isEmpty())
            SplineWidget->setObjectName(QString::fromUtf8("SplineWidget"));
        SplineWidget->resize(309, 267);
        gridLayout = new QGridLayout(SplineWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Visibility = new QCheckBox(SplineWidget);
        Visibility->setObjectName(QString::fromUtf8("Visibility"));

        gridLayout->addWidget(Visibility, 0, 0, 1, 1);

        pushButton = new QPushButton(SplineWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setVisible(false);

        gridLayout->addWidget(pushButton, 0, 1, 1, 2);

        HandlePositions = new pqTreeWidget(SplineWidget);
        HandlePositions->setObjectName(QString::fromUtf8("HandlePositions"));
        HandlePositions->setRootIsDecorated(false);

        gridLayout->addWidget(HandlePositions, 1, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(1);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        AddPoint = new QToolButton(SplineWidget);
        AddPoint->setObjectName(QString::fromUtf8("AddPoint"));
        const QIcon icon = QIcon(QString::fromUtf8(":/QtWidgets/Icons/pqPlus16.png"));
        AddPoint->setIcon(icon);

        vboxLayout->addWidget(AddPoint);

        Delete = new QToolButton(SplineWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/QtWidgets/Icons/pqDelete16.png"));
        Delete->setIcon(icon1);

        vboxLayout->addWidget(Delete);


        gridLayout->addLayout(vboxLayout, 1, 2, 1, 1);

        Closed = new QCheckBox(SplineWidget);
        Closed->setObjectName(QString::fromUtf8("Closed"));

        gridLayout->addWidget(Closed, 3, 0, 1, 2);

        label = new QLabel(SplineWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 3);


        retranslateUi(SplineWidget);

        QMetaObject::connectSlotsByName(SplineWidget);
    } // setupUi

    void retranslateUi(QWidget *SplineWidget)
    {
        SplineWidget->setWindowTitle(QApplication::translate("SplineWidget", "Form", 0, QApplication::UnicodeUTF8));
        Visibility->setText(QApplication::translate("SplineWidget", "Show Widget", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SplineWidget", "Copy Active Selection", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = HandlePositions->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("SplineWidget", "Z", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("SplineWidget", "Y", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("SplineWidget", "X", 0, QApplication::UnicodeUTF8));
        AddPoint->setText(QApplication::translate("SplineWidget", "...", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("SplineWidget", "...", 0, QApplication::UnicodeUTF8));
        Closed->setText(QApplication::translate("SplineWidget", "Closed Spline", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SplineWidget", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\">Drag control points to change point locations.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\">Use <span style=\" font-style:italic;\">Ctrl + Left Click</span>: insert new points.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\">Use <span style=\" font-style:italic;\">Shift + Left C"
                        "lick</span>: remove a point.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SplineWidget: public Ui_SplineWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSPLINEWIDGET_H
