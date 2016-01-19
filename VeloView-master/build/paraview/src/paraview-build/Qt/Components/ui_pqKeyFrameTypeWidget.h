/********************************************************************************
** Form generated from reading UI file 'pqKeyFrameTypeWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQKEYFRAMETYPEWIDGET_H
#define UI_PQKEYFRAMETYPEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqKeyFrameTypeWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *Type;
    QLabel *label;
    QGroupBox *exponentialGroup;
    QGridLayout *gridLayout1;
    QLineEdit *StartPower;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Base;
    QLabel *label_4;
    QLineEdit *EndPower;
    QSpacerItem *spacerItem;
    QGroupBox *sinusoidGroup;
    QGridLayout *gridLayout2;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QDoubleSpinBox *Phase;
    QLineEdit *Offset;
    QLineEdit *Frequency;

    void setupUi(QWidget *pqKeyFrameTypeWidget)
    {
        if (pqKeyFrameTypeWidget->objectName().isEmpty())
            pqKeyFrameTypeWidget->setObjectName(QString::fromUtf8("pqKeyFrameTypeWidget"));
        pqKeyFrameTypeWidget->resize(251, 316);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqKeyFrameTypeWidget->sizePolicy().hasHeightForWidth());
        pqKeyFrameTypeWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(pqKeyFrameTypeWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Type = new QComboBox(pqKeyFrameTypeWidget);
        Type->setObjectName(QString::fromUtf8("Type"));

        gridLayout->addWidget(Type, 0, 1, 1, 1);

        label = new QLabel(pqKeyFrameTypeWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        exponentialGroup = new QGroupBox(pqKeyFrameTypeWidget);
        exponentialGroup->setObjectName(QString::fromUtf8("exponentialGroup"));
        gridLayout1 = new QGridLayout(exponentialGroup);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        StartPower = new QLineEdit(exponentialGroup);
        StartPower->setObjectName(QString::fromUtf8("StartPower"));

        gridLayout1->addWidget(StartPower, 1, 1, 1, 1);

        label_2 = new QLabel(exponentialGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(exponentialGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        Base = new QLineEdit(exponentialGroup);
        Base->setObjectName(QString::fromUtf8("Base"));

        gridLayout1->addWidget(Base, 0, 1, 1, 1);

        label_4 = new QLabel(exponentialGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        EndPower = new QLineEdit(exponentialGroup);
        EndPower->setObjectName(QString::fromUtf8("EndPower"));

        gridLayout1->addWidget(EndPower, 2, 1, 1, 1);


        gridLayout->addWidget(exponentialGroup, 1, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 0, 1, 2);

        sinusoidGroup = new QGroupBox(pqKeyFrameTypeWidget);
        sinusoidGroup->setObjectName(QString::fromUtf8("sinusoidGroup"));
        gridLayout2 = new QGridLayout(sinusoidGroup);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_7 = new QLabel(sinusoidGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout2->addWidget(label_7, 2, 0, 1, 1);

        label_6 = new QLabel(sinusoidGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout2->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(sinusoidGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 0, 0, 1, 1);

        Phase = new QDoubleSpinBox(sinusoidGroup);
        Phase->setObjectName(QString::fromUtf8("Phase"));
        Phase->setMaximum(180);
        Phase->setMinimum(-180);

        gridLayout2->addWidget(Phase, 0, 1, 1, 1);

        Offset = new QLineEdit(sinusoidGroup);
        Offset->setObjectName(QString::fromUtf8("Offset"));

        gridLayout2->addWidget(Offset, 2, 1, 1, 1);

        Frequency = new QLineEdit(sinusoidGroup);
        Frequency->setObjectName(QString::fromUtf8("Frequency"));

        gridLayout2->addWidget(Frequency, 1, 1, 1, 1);


        gridLayout->addWidget(sinusoidGroup, 2, 0, 1, 2);

        QWidget::setTabOrder(Base, StartPower);
        QWidget::setTabOrder(StartPower, EndPower);
        QWidget::setTabOrder(EndPower, Phase);
        QWidget::setTabOrder(Phase, Frequency);
        QWidget::setTabOrder(Frequency, Offset);

        retranslateUi(pqKeyFrameTypeWidget);

        QMetaObject::connectSlotsByName(pqKeyFrameTypeWidget);
    } // setupUi

    void retranslateUi(QWidget *pqKeyFrameTypeWidget)
    {
        pqKeyFrameTypeWidget->setWindowTitle(QApplication::translate("pqKeyFrameTypeWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqKeyFrameTypeWidget", "Interpolation:", 0, QApplication::UnicodeUTF8));
        exponentialGroup->setTitle(QApplication::translate("pqKeyFrameTypeWidget", "Exponential", 0, QApplication::UnicodeUTF8));
        StartPower->setText(QApplication::translate("pqKeyFrameTypeWidget", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqKeyFrameTypeWidget", "Base", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqKeyFrameTypeWidget", "Start Power", 0, QApplication::UnicodeUTF8));
        Base->setText(QApplication::translate("pqKeyFrameTypeWidget", "2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pqKeyFrameTypeWidget", "End Power", 0, QApplication::UnicodeUTF8));
        EndPower->setText(QApplication::translate("pqKeyFrameTypeWidget", "1", 0, QApplication::UnicodeUTF8));
        sinusoidGroup->setTitle(QApplication::translate("pqKeyFrameTypeWidget", "Sinusoid", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("pqKeyFrameTypeWidget", "Offset", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("pqKeyFrameTypeWidget", "Frequency", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pqKeyFrameTypeWidget", "Phase", 0, QApplication::UnicodeUTF8));
        Offset->setText(QApplication::translate("pqKeyFrameTypeWidget", "0", 0, QApplication::UnicodeUTF8));
        Frequency->setText(QApplication::translate("pqKeyFrameTypeWidget", "1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqKeyFrameTypeWidget: public Ui_pqKeyFrameTypeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQKEYFRAMETYPEWIDGET_H
