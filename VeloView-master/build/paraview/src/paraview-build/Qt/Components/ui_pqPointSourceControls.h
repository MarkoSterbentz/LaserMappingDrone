/********************************************************************************
** Form generated from reading UI file 'pqPointSourceControls.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPOINTSOURCECONTROLS_H
#define UI_PQPOINTSOURCECONTROLS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqPointSourceControls
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *NumberOfPoints;
    QLineEdit *Radius;

    void setupUi(QWidget *pqPointSourceControls)
    {
        if (pqPointSourceControls->objectName().isEmpty())
            pqPointSourceControls->setObjectName(QString::fromUtf8("pqPointSourceControls"));
        pqPointSourceControls->resize(209, 103);
        gridLayout = new QGridLayout(pqPointSourceControls);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(pqPointSourceControls);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(pqPointSourceControls);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        NumberOfPoints = new QSpinBox(pqPointSourceControls);
        NumberOfPoints->setObjectName(QString::fromUtf8("NumberOfPoints"));
        NumberOfPoints->setMaximum(9999999);
        NumberOfPoints->setMinimum(1);

        gridLayout->addWidget(NumberOfPoints, 0, 1, 1, 1);

        Radius = new QLineEdit(pqPointSourceControls);
        Radius->setObjectName(QString::fromUtf8("Radius"));

        gridLayout->addWidget(Radius, 1, 1, 1, 1);


        retranslateUi(pqPointSourceControls);

        QMetaObject::connectSlotsByName(pqPointSourceControls);
    } // setupUi

    void retranslateUi(QWidget *pqPointSourceControls)
    {
        pqPointSourceControls->setWindowTitle(QApplication::translate("pqPointSourceControls", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqPointSourceControls", "Radius", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqPointSourceControls", "Number of Points", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqPointSourceControls: public Ui_pqPointSourceControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPOINTSOURCECONTROLS_H
