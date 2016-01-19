/********************************************************************************
** Form generated from reading UI file 'pqExpanderButton.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEXPANDERBUTTON_H
#define UI_PQEXPANDERBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_pqExpanderButton
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *icon;
    QLabel *label;

    void setupUi(QFrame *pqExpanderButton)
    {
        if (pqExpanderButton->objectName().isEmpty())
            pqExpanderButton->setObjectName(QString::fromUtf8("pqExpanderButton"));
        pqExpanderButton->resize(115, 27);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqExpanderButton->sizePolicy().hasHeightForWidth());
        pqExpanderButton->setSizePolicy(sizePolicy);
        pqExpanderButton->setFrameShape(QFrame::StyledPanel);
        pqExpanderButton->setFrameShadow(QFrame::Raised);
        pqExpanderButton->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(pqExpanderButton);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 4);
        icon = new QLabel(pqExpanderButton);
        icon->setObjectName(QString::fromUtf8("icon"));
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setPixmap(QPixmap(QString::fromUtf8(":/QtWidgets/Icons/pqPlus16.png")));

        horizontalLayout->addWidget(icon);

        label = new QLabel(pqExpanderButton);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        horizontalLayout->setStretch(1, 1);

        retranslateUi(pqExpanderButton);

        QMetaObject::connectSlotsByName(pqExpanderButton);
    } // setupUi

    void retranslateUi(QFrame *pqExpanderButton)
    {
        icon->setText(QString());
        label->setText(QApplication::translate("pqExpanderButton", "Properties", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(pqExpanderButton);
    } // retranslateUi

};

namespace Ui {
    class pqExpanderButton: public Ui_pqExpanderButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEXPANDERBUTTON_H
