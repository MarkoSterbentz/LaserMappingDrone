/********************************************************************************
** Form generated from reading UI file 'pqImplicitPlaneWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMPLICITPLANEWIDGET_H
#define UI_PQIMPLICITPLANEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_pqImplicitPlaneWidget
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *show3DWidget;
    QGridLayout *gridLayout;
    QLabel *labelNormal;
    pqLineEdit *normalX;
    QLabel *labelOrigin;
    pqLineEdit *normalZ;
    pqLineEdit *originZ;
    pqLineEdit *originY;
    pqLineEdit *normalY;
    pqLineEdit *originX;
    QGridLayout *gridLayout1;
    QPushButton *resetBounds;
    QPushButton *useCameraNormal;
    QPushButton *useXNormal;
    QPushButton *useZNormal;
    QPushButton *useYNormal;
    QPushButton *useCenterBounds;
    QPushButton *resetCameraToNormal;

    void setupUi(QWidget *pqImplicitPlaneWidget)
    {
        if (pqImplicitPlaneWidget->objectName().isEmpty())
            pqImplicitPlaneWidget->setObjectName(QString::fromUtf8("pqImplicitPlaneWidget"));
        pqImplicitPlaneWidget->resize(206, 206);
        vboxLayout = new QVBoxLayout(pqImplicitPlaneWidget);
        vboxLayout->setSpacing(2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        show3DWidget = new QCheckBox(pqImplicitPlaneWidget);
        show3DWidget->setObjectName(QString::fromUtf8("show3DWidget"));

        vboxLayout->addWidget(show3DWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelNormal = new QLabel(pqImplicitPlaneWidget);
        labelNormal->setObjectName(QString::fromUtf8("labelNormal"));

        gridLayout->addWidget(labelNormal, 1, 0, 1, 1);

        normalX = new pqLineEdit(pqImplicitPlaneWidget);
        normalX->setObjectName(QString::fromUtf8("normalX"));

        gridLayout->addWidget(normalX, 1, 1, 1, 1);

        labelOrigin = new QLabel(pqImplicitPlaneWidget);
        labelOrigin->setObjectName(QString::fromUtf8("labelOrigin"));

        gridLayout->addWidget(labelOrigin, 0, 0, 1, 1);

        normalZ = new pqLineEdit(pqImplicitPlaneWidget);
        normalZ->setObjectName(QString::fromUtf8("normalZ"));

        gridLayout->addWidget(normalZ, 1, 3, 1, 1);

        originZ = new pqLineEdit(pqImplicitPlaneWidget);
        originZ->setObjectName(QString::fromUtf8("originZ"));

        gridLayout->addWidget(originZ, 0, 3, 1, 1);

        originY = new pqLineEdit(pqImplicitPlaneWidget);
        originY->setObjectName(QString::fromUtf8("originY"));

        gridLayout->addWidget(originY, 0, 2, 1, 1);

        normalY = new pqLineEdit(pqImplicitPlaneWidget);
        normalY->setObjectName(QString::fromUtf8("normalY"));

        gridLayout->addWidget(normalY, 1, 2, 1, 1);

        originX = new pqLineEdit(pqImplicitPlaneWidget);
        originX->setObjectName(QString::fromUtf8("originX"));

        gridLayout->addWidget(originX, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(0);
        gridLayout1->setVerticalSpacing(0);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        resetBounds = new QPushButton(pqImplicitPlaneWidget);
        resetBounds->setObjectName(QString::fromUtf8("resetBounds"));

        gridLayout1->addWidget(resetBounds, 0, 1, 1, 1);

        useCameraNormal = new QPushButton(pqImplicitPlaneWidget);
        useCameraNormal->setObjectName(QString::fromUtf8("useCameraNormal"));

        gridLayout1->addWidget(useCameraNormal, 3, 0, 1, 1);

        useXNormal = new QPushButton(pqImplicitPlaneWidget);
        useXNormal->setObjectName(QString::fromUtf8("useXNormal"));

        gridLayout1->addWidget(useXNormal, 0, 0, 1, 1);

        useZNormal = new QPushButton(pqImplicitPlaneWidget);
        useZNormal->setObjectName(QString::fromUtf8("useZNormal"));

        gridLayout1->addWidget(useZNormal, 2, 0, 1, 1);

        useYNormal = new QPushButton(pqImplicitPlaneWidget);
        useYNormal->setObjectName(QString::fromUtf8("useYNormal"));

        gridLayout1->addWidget(useYNormal, 1, 0, 1, 1);

        useCenterBounds = new QPushButton(pqImplicitPlaneWidget);
        useCenterBounds->setObjectName(QString::fromUtf8("useCenterBounds"));

        gridLayout1->addWidget(useCenterBounds, 3, 1, 1, 1);

        resetCameraToNormal = new QPushButton(pqImplicitPlaneWidget);
        resetCameraToNormal->setObjectName(QString::fromUtf8("resetCameraToNormal"));

        gridLayout1->addWidget(resetCameraToNormal, 4, 0, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        QWidget::setTabOrder(show3DWidget, originX);
        QWidget::setTabOrder(originX, originY);
        QWidget::setTabOrder(originY, originZ);
        QWidget::setTabOrder(originZ, normalX);
        QWidget::setTabOrder(normalX, normalY);
        QWidget::setTabOrder(normalY, normalZ);
        QWidget::setTabOrder(normalZ, useXNormal);
        QWidget::setTabOrder(useXNormal, useYNormal);
        QWidget::setTabOrder(useYNormal, useZNormal);
        QWidget::setTabOrder(useZNormal, useCameraNormal);
        QWidget::setTabOrder(useCameraNormal, resetBounds);
        QWidget::setTabOrder(resetBounds, useCenterBounds);
        QWidget::setTabOrder(useCenterBounds, resetCameraToNormal);

        retranslateUi(pqImplicitPlaneWidget);

        QMetaObject::connectSlotsByName(pqImplicitPlaneWidget);
    } // setupUi

    void retranslateUi(QWidget *pqImplicitPlaneWidget)
    {
        pqImplicitPlaneWidget->setWindowTitle(QApplication::translate("pqImplicitPlaneWidget", "Form", 0, QApplication::UnicodeUTF8));
        show3DWidget->setText(QApplication::translate("pqImplicitPlaneWidget", "Show Plane", 0, QApplication::UnicodeUTF8));
        labelNormal->setText(QApplication::translate("pqImplicitPlaneWidget", "Normal", 0, QApplication::UnicodeUTF8));
        labelOrigin->setText(QApplication::translate("pqImplicitPlaneWidget", "Origin", 0, QApplication::UnicodeUTF8));
        resetBounds->setText(QApplication::translate("pqImplicitPlaneWidget", "Reset Bounds", 0, QApplication::UnicodeUTF8));
        useCameraNormal->setText(QApplication::translate("pqImplicitPlaneWidget", "Camera Normal", 0, QApplication::UnicodeUTF8));
        useXNormal->setText(QApplication::translate("pqImplicitPlaneWidget", "&X Normal", 0, QApplication::UnicodeUTF8));
        useZNormal->setText(QApplication::translate("pqImplicitPlaneWidget", "&Z Normal", 0, QApplication::UnicodeUTF8));
        useYNormal->setText(QApplication::translate("pqImplicitPlaneWidget", "&Y Normal", 0, QApplication::UnicodeUTF8));
        useCenterBounds->setText(QApplication::translate("pqImplicitPlaneWidget", "Center on Bounds", 0, QApplication::UnicodeUTF8));
        resetCameraToNormal->setText(QApplication::translate("pqImplicitPlaneWidget", "Reset Camera to Normal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqImplicitPlaneWidget: public Ui_pqImplicitPlaneWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMPLICITPLANEWIDGET_H
