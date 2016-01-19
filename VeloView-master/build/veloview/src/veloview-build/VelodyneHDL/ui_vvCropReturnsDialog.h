/********************************************************************************
** Form generated from reading UI file 'vvCropReturnsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVCROPRETURNSDIALOG_H
#define UI_VVCROPRETURNSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_vvCropReturnsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QCheckBox *saveCheckBox;
    QGroupBox *CropGroupBox;
    QFormLayout *formLayout;
    QLabel *XLabel;
    QHBoxLayout *XLayout;
    QDoubleSpinBox *X1SpinBox;
    QDoubleSpinBox *X2SpinBox;
    QLabel *YLabel;
    QHBoxLayout *YLayout;
    QDoubleSpinBox *Y1SpinBox;
    QDoubleSpinBox *Y2SpinBox;
    QLabel *ZLabel;
    QHBoxLayout *ZLayout;
    QDoubleSpinBox *Z1SpinBox;
    QDoubleSpinBox *Z2SpinBox;
    QCheckBox *CropInsideCheckBox;

    void setupUi(QDialog *vvCropReturnsDialog)
    {
        if (vvCropReturnsDialog->objectName().isEmpty())
            vvCropReturnsDialog->setObjectName(QString::fromUtf8("vvCropReturnsDialog"));
        vvCropReturnsDialog->resize(474, 217);
        gridLayout = new QGridLayout(vvCropReturnsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(vvCropReturnsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        saveCheckBox = new QCheckBox(vvCropReturnsDialog);
        saveCheckBox->setObjectName(QString::fromUtf8("saveCheckBox"));
        saveCheckBox->setChecked(false);

        gridLayout->addWidget(saveCheckBox, 1, 0, 1, 1);

        CropGroupBox = new QGroupBox(vvCropReturnsDialog);
        CropGroupBox->setObjectName(QString::fromUtf8("CropGroupBox"));
        CropGroupBox->setCheckable(true);
        CropGroupBox->setChecked(false);
        formLayout = new QFormLayout(CropGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        XLabel = new QLabel(CropGroupBox);
        XLabel->setObjectName(QString::fromUtf8("XLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, XLabel);

        XLayout = new QHBoxLayout();
        XLayout->setObjectName(QString::fromUtf8("XLayout"));
        X1SpinBox = new QDoubleSpinBox(CropGroupBox);
        X1SpinBox->setObjectName(QString::fromUtf8("X1SpinBox"));
        X1SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        X1SpinBox->setMinimum(-100);
        X1SpinBox->setMaximum(100);

        XLayout->addWidget(X1SpinBox);

        X2SpinBox = new QDoubleSpinBox(CropGroupBox);
        X2SpinBox->setObjectName(QString::fromUtf8("X2SpinBox"));
        X2SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        X2SpinBox->setMinimum(-100);
        X2SpinBox->setMaximum(100);

        XLayout->addWidget(X2SpinBox);


        formLayout->setLayout(0, QFormLayout::FieldRole, XLayout);

        YLabel = new QLabel(CropGroupBox);
        YLabel->setObjectName(QString::fromUtf8("YLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, YLabel);

        YLayout = new QHBoxLayout();
        YLayout->setObjectName(QString::fromUtf8("YLayout"));
        Y1SpinBox = new QDoubleSpinBox(CropGroupBox);
        Y1SpinBox->setObjectName(QString::fromUtf8("Y1SpinBox"));
        Y1SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Y1SpinBox->setMinimum(-100);
        Y1SpinBox->setMaximum(100);

        YLayout->addWidget(Y1SpinBox);

        Y2SpinBox = new QDoubleSpinBox(CropGroupBox);
        Y2SpinBox->setObjectName(QString::fromUtf8("Y2SpinBox"));
        Y2SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Y2SpinBox->setMinimum(-100);
        Y2SpinBox->setMaximum(100);

        YLayout->addWidget(Y2SpinBox);


        formLayout->setLayout(1, QFormLayout::FieldRole, YLayout);

        ZLabel = new QLabel(CropGroupBox);
        ZLabel->setObjectName(QString::fromUtf8("ZLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ZLabel);

        ZLayout = new QHBoxLayout();
        ZLayout->setObjectName(QString::fromUtf8("ZLayout"));
        Z1SpinBox = new QDoubleSpinBox(CropGroupBox);
        Z1SpinBox->setObjectName(QString::fromUtf8("Z1SpinBox"));
        Z1SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Z1SpinBox->setMinimum(-100);
        Z1SpinBox->setMaximum(100);

        ZLayout->addWidget(Z1SpinBox);

        Z2SpinBox = new QDoubleSpinBox(CropGroupBox);
        Z2SpinBox->setObjectName(QString::fromUtf8("Z2SpinBox"));
        Z2SpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Z2SpinBox->setMinimum(-100);
        Z2SpinBox->setMaximum(100);

        ZLayout->addWidget(Z2SpinBox);


        formLayout->setLayout(2, QFormLayout::FieldRole, ZLayout);

        CropInsideCheckBox = new QCheckBox(CropGroupBox);
        CropInsideCheckBox->setObjectName(QString::fromUtf8("CropInsideCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, CropInsideCheckBox);


        gridLayout->addWidget(CropGroupBox, 0, 0, 1, 2);


        retranslateUi(vvCropReturnsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), vvCropReturnsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), vvCropReturnsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvCropReturnsDialog);
    } // setupUi

    void retranslateUi(QDialog *vvCropReturnsDialog)
    {
        vvCropReturnsDialog->setWindowTitle(QApplication::translate("vvCropReturnsDialog", "Crop Returns", 0, QApplication::UnicodeUTF8));
        saveCheckBox->setText(QApplication::translate("vvCropReturnsDialog", "Apply in future sessions", 0, QApplication::UnicodeUTF8));
        CropGroupBox->setTitle(QApplication::translate("vvCropReturnsDialog", "Enable Cropping", 0, QApplication::UnicodeUTF8));
        XLabel->setText(QApplication::translate("vvCropReturnsDialog", "X", 0, QApplication::UnicodeUTF8));
        YLabel->setText(QApplication::translate("vvCropReturnsDialog", "Y", 0, QApplication::UnicodeUTF8));
        ZLabel->setText(QApplication::translate("vvCropReturnsDialog", "Z", 0, QApplication::UnicodeUTF8));
        CropInsideCheckBox->setText(QApplication::translate("vvCropReturnsDialog", "Crop Inside", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvCropReturnsDialog: public Ui_vvCropReturnsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVCROPRETURNSDIALOG_H
