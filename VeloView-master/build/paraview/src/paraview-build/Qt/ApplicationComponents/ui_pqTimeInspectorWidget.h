/********************************************************************************
** Form generated from reading UI file 'pqTimeInspectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTIMEINSPECTORWIDGET_H
#define UI_PQTIMEINSPECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqAnimationTimeWidget.h"
#include "pqAnimationWidget.h"
#include "pqVCRToolbar.h"

QT_BEGIN_NAMESPACE

class Ui_TimeInspectorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    pqVCRToolbar *VCR;
    pqAnimationTimeWidget *AnimationTimeWidget;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    pqAnimationWidget *AnimationWidget;

    void setupUi(QWidget *TimeInspectorWidget)
    {
        if (TimeInspectorWidget->objectName().isEmpty())
            TimeInspectorWidget->setObjectName(QString::fromUtf8("TimeInspectorWidget"));
        TimeInspectorWidget->resize(350, 466);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TimeInspectorWidget->sizePolicy().hasHeightForWidth());
        TimeInspectorWidget->setSizePolicy(sizePolicy);
        TimeInspectorWidget->setMinimumSize(QSize(350, 0));
        verticalLayout = new QVBoxLayout(TimeInspectorWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        VCR = new pqVCRToolbar(TimeInspectorWidget);
        VCR->setObjectName(QString::fromUtf8("VCR"));
        VCR->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(VCR);

        AnimationTimeWidget = new pqAnimationTimeWidget(TimeInspectorWidget);
        AnimationTimeWidget->setObjectName(QString::fromUtf8("AnimationTimeWidget"));
        AnimationTimeWidget->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(AnimationTimeWidget);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(TimeInspectorWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        AnimationWidget = new pqAnimationWidget(TimeInspectorWidget);
        AnimationWidget->setObjectName(QString::fromUtf8("AnimationWidget"));
        sizePolicy.setHeightForWidth(AnimationWidget->sizePolicy().hasHeightForWidth());
        AnimationWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(AnimationWidget);

        verticalLayout->setStretch(2, 1);

        retranslateUi(TimeInspectorWidget);

        QMetaObject::connectSlotsByName(TimeInspectorWidget);
    } // setupUi

    void retranslateUi(QWidget *TimeInspectorWidget)
    {
        TimeInspectorWidget->setWindowTitle(QApplication::translate("TimeInspectorWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TimeInspectorWidget: public Ui_TimeInspectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTIMEINSPECTORWIDGET_H
