/********************************************************************************
** Form generated from reading UI file 'pqAnimationTimeWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQANIMATIONTIMEWIDGET_H
#define UI_PQANIMATIONTIMEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "pqLineEdit.h"
#include "pqSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_AnimationTimeWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *timeLabel;
    QRadioButton *radioButtonValue;
    pqLineEdit *timeValue;
    QRadioButton *radioButtonStep;
    pqSpinBox *timestepValue;
    QLabel *timestepCountLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AnimationTimeWidget)
    {
        if (AnimationTimeWidget->objectName().isEmpty())
            AnimationTimeWidget->setObjectName(QString::fromUtf8("AnimationTimeWidget"));
        AnimationTimeWidget->resize(346, 27);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnimationTimeWidget->sizePolicy().hasHeightForWidth());
        AnimationTimeWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(AnimationTimeWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        timeLabel = new QLabel(AnimationTimeWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        horizontalLayout->addWidget(timeLabel);

        radioButtonValue = new QRadioButton(AnimationTimeWidget);
        radioButtonValue->setObjectName(QString::fromUtf8("radioButtonValue"));
        radioButtonValue->setChecked(true);

        horizontalLayout->addWidget(radioButtonValue);

        timeValue = new pqLineEdit(AnimationTimeWidget);
        timeValue->setObjectName(QString::fromUtf8("timeValue"));
        timeValue->setProperty("resetCursorPositionOnEditingFinished", QVariant(true));

        horizontalLayout->addWidget(timeValue);

        radioButtonStep = new QRadioButton(AnimationTimeWidget);
        radioButtonStep->setObjectName(QString::fromUtf8("radioButtonStep"));
        radioButtonStep->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(radioButtonStep);

        timestepValue = new pqSpinBox(AnimationTimeWidget);
        timestepValue->setObjectName(QString::fromUtf8("timestepValue"));
        timestepValue->setEnabled(false);
        timestepValue->setMaximum(10000);

        horizontalLayout->addWidget(timestepValue);

        timestepCountLabel = new QLabel(AnimationTimeWidget);
        timestepCountLabel->setObjectName(QString::fromUtf8("timestepCountLabel"));

        horizontalLayout->addWidget(timestepCountLabel);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(6, 1);

        retranslateUi(AnimationTimeWidget);
        QObject::connect(radioButtonStep, SIGNAL(toggled(bool)), timestepValue, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonValue, SIGNAL(toggled(bool)), timeValue, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AnimationTimeWidget);
    } // setupUi

    void retranslateUi(QWidget *AnimationTimeWidget)
    {
        AnimationTimeWidget->setWindowTitle(QApplication::translate("AnimationTimeWidget", "Form", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("AnimationTimeWidget", "Time:", 0, QApplication::UnicodeUTF8));
        radioButtonValue->setText(QString());
        timeValue->setText(QApplication::translate("AnimationTimeWidget", "0", 0, QApplication::UnicodeUTF8));
        radioButtonStep->setText(QString());
        timestepCountLabel->setText(QApplication::translate("AnimationTimeWidget", "of (TDB)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AnimationTimeWidget: public Ui_AnimationTimeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQANIMATIONTIMEWIDGET_H
