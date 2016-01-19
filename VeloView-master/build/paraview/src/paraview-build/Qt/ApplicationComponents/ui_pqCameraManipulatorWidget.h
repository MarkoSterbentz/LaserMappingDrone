/********************************************************************************
** Form generated from reading UI file 'pqCameraManipulatorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCAMERAMANIPULATORWIDGET_H
#define UI_PQCAMERAMANIPULATORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraManipulatorWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_1;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QLabel *label_2;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QComboBox *comboBox_9;

    void setupUi(QWidget *CameraManipulatorWidget)
    {
        if (CameraManipulatorWidget->objectName().isEmpty())
            CameraManipulatorWidget->setObjectName(QString::fromUtf8("CameraManipulatorWidget"));
        CameraManipulatorWidget->resize(391, 114);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CameraManipulatorWidget->sizePolicy().hasHeightForWidth());
        CameraManipulatorWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CameraManipulatorWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(CameraManipulatorWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(CameraManipulatorWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(CameraManipulatorWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        comboBox_1 = new QComboBox(CameraManipulatorWidget);
        comboBox_1->setObjectName(QString::fromUtf8("comboBox_1"));

        gridLayout->addWidget(comboBox_1, 1, 1, 1, 1);

        comboBox_2 = new QComboBox(CameraManipulatorWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 2, 1, 1);

        comboBox_3 = new QComboBox(CameraManipulatorWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 1, 3, 1, 1);

        label = new QLabel(CameraManipulatorWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        comboBox_4 = new QComboBox(CameraManipulatorWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 2, 1, 2, 1);

        comboBox_5 = new QComboBox(CameraManipulatorWidget);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 2, 2, 2, 1);

        comboBox_6 = new QComboBox(CameraManipulatorWidget);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 2, 3, 2, 1);

        label_2 = new QLabel(CameraManipulatorWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 2, 1);

        comboBox_7 = new QComboBox(CameraManipulatorWidget);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout->addWidget(comboBox_7, 4, 1, 1, 1);

        comboBox_8 = new QComboBox(CameraManipulatorWidget);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout->addWidget(comboBox_8, 4, 2, 1, 1);

        comboBox_9 = new QComboBox(CameraManipulatorWidget);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout->addWidget(comboBox_9, 4, 3, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);

        retranslateUi(CameraManipulatorWidget);

        QMetaObject::connectSlotsByName(CameraManipulatorWidget);
    } // setupUi

    void retranslateUi(QWidget *CameraManipulatorWidget)
    {
        CameraManipulatorWidget->setWindowTitle(QApplication::translate("CameraManipulatorWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CameraManipulatorWidget", "Left Button", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CameraManipulatorWidget", "Middle Button", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CameraManipulatorWidget", "Right Button", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CameraManipulatorWidget", "Shift +", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CameraManipulatorWidget", "Ctrl +", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraManipulatorWidget: public Ui_CameraManipulatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCAMERAMANIPULATORWIDGET_H
