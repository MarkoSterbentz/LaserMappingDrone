/********************************************************************************
** Form generated from reading UI file 'pqHandleWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQHANDLEWIDGET_H
#define UI_PQHANDLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_pqHandleWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *show3DWidget;
    QPushButton *useCenterBounds;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    pqLineEdit *worldPositionX;
    pqLineEdit *worldPositionY;
    pqLineEdit *worldPositionZ;

    void setupUi(QWidget *pqHandleWidget)
    {
        if (pqHandleWidget->objectName().isEmpty())
            pqHandleWidget->setObjectName(QString::fromUtf8("pqHandleWidget"));
        pqHandleWidget->resize(190, 52);
        vboxLayout = new QVBoxLayout(pqHandleWidget);
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        show3DWidget = new QCheckBox(pqHandleWidget);
        show3DWidget->setObjectName(QString::fromUtf8("show3DWidget"));

        hboxLayout->addWidget(show3DWidget);

        useCenterBounds = new QPushButton(pqHandleWidget);
        useCenterBounds->setObjectName(QString::fromUtf8("useCenterBounds"));

        hboxLayout->addWidget(useCenterBounds);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(pqHandleWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        worldPositionX = new pqLineEdit(pqHandleWidget);
        worldPositionX->setObjectName(QString::fromUtf8("worldPositionX"));

        hboxLayout1->addWidget(worldPositionX);

        worldPositionY = new pqLineEdit(pqHandleWidget);
        worldPositionY->setObjectName(QString::fromUtf8("worldPositionY"));

        hboxLayout1->addWidget(worldPositionY);

        worldPositionZ = new pqLineEdit(pqHandleWidget);
        worldPositionZ->setObjectName(QString::fromUtf8("worldPositionZ"));

        hboxLayout1->addWidget(worldPositionZ);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(show3DWidget, useCenterBounds);
        QWidget::setTabOrder(useCenterBounds, worldPositionX);
        QWidget::setTabOrder(worldPositionX, worldPositionY);
        QWidget::setTabOrder(worldPositionY, worldPositionZ);

        retranslateUi(pqHandleWidget);

        QMetaObject::connectSlotsByName(pqHandleWidget);
    } // setupUi

    void retranslateUi(QWidget *pqHandleWidget)
    {
        pqHandleWidget->setWindowTitle(QApplication::translate("pqHandleWidget", "Form", 0, QApplication::UnicodeUTF8));
        show3DWidget->setText(QApplication::translate("pqHandleWidget", "Show Point", 0, QApplication::UnicodeUTF8));
        useCenterBounds->setText(QApplication::translate("pqHandleWidget", "Center on Bounds", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqHandleWidget", "Point", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqHandleWidget: public Ui_pqHandleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQHANDLEWIDGET_H
