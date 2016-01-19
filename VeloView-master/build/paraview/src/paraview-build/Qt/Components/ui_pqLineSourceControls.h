/********************************************************************************
** Form generated from reading UI file 'pqLineSourceControls.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQLINESOURCECONTROLS_H
#define UI_PQLINESOURCECONTROLS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqLineSourceControls
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *resolution;

    void setupUi(QWidget *pqLineSourceControls)
    {
        if (pqLineSourceControls->objectName().isEmpty())
            pqLineSourceControls->setObjectName(QString::fromUtf8("pqLineSourceControls"));
        pqLineSourceControls->resize(240, 84);
        gridLayout = new QGridLayout(pqLineSourceControls);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(pqLineSourceControls);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        resolution = new QSpinBox(pqLineSourceControls);
        resolution->setObjectName(QString::fromUtf8("resolution"));
        resolution->setMaximum(9999999);
        resolution->setMinimum(1);
        resolution->setValue(10);

        gridLayout->addWidget(resolution, 0, 1, 1, 1);


        retranslateUi(pqLineSourceControls);

        QMetaObject::connectSlotsByName(pqLineSourceControls);
    } // setupUi

    void retranslateUi(QWidget *pqLineSourceControls)
    {
        pqLineSourceControls->setWindowTitle(QApplication::translate("pqLineSourceControls", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqLineSourceControls", "Resolution", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqLineSourceControls: public Ui_pqLineSourceControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQLINESOURCECONTROLS_H
