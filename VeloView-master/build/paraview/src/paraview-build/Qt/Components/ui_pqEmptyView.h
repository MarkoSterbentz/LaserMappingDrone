/********************************************************************************
** Form generated from reading UI file 'pqEmptyView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEMPTYVIEW_H
#define UI_PQEMPTYVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmptyView
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *widgetFoo;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QFrame *ConvertActionsFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *EmptyView)
    {
        if (EmptyView->objectName().isEmpty())
            EmptyView->setObjectName(QString::fromUtf8("EmptyView"));
        EmptyView->resize(319, 306);
        gridLayout = new QGridLayout(EmptyView);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(EmptyView);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        widgetFoo = new QWidget();
        widgetFoo->setObjectName(QString::fromUtf8("widgetFoo"));
        widgetFoo->setGeometry(QRect(0, 0, 315, 302));
        gridLayout_2 = new QGridLayout(widgetFoo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        ConvertActionsFrame = new QFrame(widgetFoo);
        ConvertActionsFrame->setObjectName(QString::fromUtf8("ConvertActionsFrame"));
        ConvertActionsFrame->setFrameShape(QFrame::NoFrame);
        ConvertActionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(ConvertActionsFrame);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ConvertActionsFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout_2->addWidget(ConvertActionsFrame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        scrollArea->setWidget(widgetFoo);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(EmptyView);

        QMetaObject::connectSlotsByName(EmptyView);
    } // setupUi

    void retranslateUi(QWidget *EmptyView)
    {
        EmptyView->setWindowTitle(QApplication::translate("EmptyView", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EmptyView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Create View</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmptyView: public Ui_EmptyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEMPTYVIEW_H
