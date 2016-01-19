/********************************************************************************
** Form generated from reading UI file 'pqSphereWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSPHEREWIDGET_H
#define UI_PQSPHEREWIDGET_H

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
#include <QtGui/QWidget>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_pqSphereWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *show3DWidget;
    QGridLayout *gridLayout1;
    QLabel *label;
    pqLineEdit *centerX;
    pqLineEdit *centerY;
    pqLineEdit *centerZ;
    QLabel *normalLabel;
    pqLineEdit *normalX;
    pqLineEdit *normalY;
    pqLineEdit *normalZ;
    QLabel *label_2;
    pqLineEdit *radius;
    QSpacerItem *spacerItem;
    QPushButton *resetBounds;

    void setupUi(QWidget *pqSphereWidget)
    {
        if (pqSphereWidget->objectName().isEmpty())
            pqSphereWidget->setObjectName(QString::fromUtf8("pqSphereWidget"));
        pqSphereWidget->resize(263, 172);
        gridLayout = new QGridLayout(pqSphereWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        show3DWidget = new QCheckBox(pqSphereWidget);
        show3DWidget->setObjectName(QString::fromUtf8("show3DWidget"));

        gridLayout->addWidget(show3DWidget, 0, 0, 1, 2);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(pqSphereWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        centerX = new pqLineEdit(pqSphereWidget);
        centerX->setObjectName(QString::fromUtf8("centerX"));

        gridLayout1->addWidget(centerX, 0, 1, 1, 1);

        centerY = new pqLineEdit(pqSphereWidget);
        centerY->setObjectName(QString::fromUtf8("centerY"));

        gridLayout1->addWidget(centerY, 0, 2, 1, 1);

        centerZ = new pqLineEdit(pqSphereWidget);
        centerZ->setObjectName(QString::fromUtf8("centerZ"));

        gridLayout1->addWidget(centerZ, 0, 3, 1, 1);

        normalLabel = new QLabel(pqSphereWidget);
        normalLabel->setObjectName(QString::fromUtf8("normalLabel"));

        gridLayout1->addWidget(normalLabel, 1, 0, 1, 1);

        normalX = new pqLineEdit(pqSphereWidget);
        normalX->setObjectName(QString::fromUtf8("normalX"));

        gridLayout1->addWidget(normalX, 1, 1, 1, 1);

        normalY = new pqLineEdit(pqSphereWidget);
        normalY->setObjectName(QString::fromUtf8("normalY"));

        gridLayout1->addWidget(normalY, 1, 2, 1, 1);

        normalZ = new pqLineEdit(pqSphereWidget);
        normalZ->setObjectName(QString::fromUtf8("normalZ"));

        gridLayout1->addWidget(normalZ, 1, 3, 1, 1);

        label_2 = new QLabel(pqSphereWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 2, 0, 1, 1);

        radius = new pqLineEdit(pqSphereWidget);
        radius->setObjectName(QString::fromUtf8("radius"));

        gridLayout1->addWidget(radius, 2, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 1, 0, 1, 2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        resetBounds = new QPushButton(pqSphereWidget);
        resetBounds->setObjectName(QString::fromUtf8("resetBounds"));

        gridLayout->addWidget(resetBounds, 2, 1, 1, 1);


        retranslateUi(pqSphereWidget);

        QMetaObject::connectSlotsByName(pqSphereWidget);
    } // setupUi

    void retranslateUi(QWidget *pqSphereWidget)
    {
        pqSphereWidget->setWindowTitle(QApplication::translate("pqSphereWidget", "Form", 0, QApplication::UnicodeUTF8));
        show3DWidget->setText(QApplication::translate("pqSphereWidget", "Show Sphere", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqSphereWidget", "Center", 0, QApplication::UnicodeUTF8));
        normalLabel->setText(QApplication::translate("pqSphereWidget", "Normal", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqSphereWidget", "Radius", 0, QApplication::UnicodeUTF8));
        resetBounds->setText(QApplication::translate("pqSphereWidget", "Reset Bounds", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqSphereWidget: public Ui_pqSphereWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSPHEREWIDGET_H
