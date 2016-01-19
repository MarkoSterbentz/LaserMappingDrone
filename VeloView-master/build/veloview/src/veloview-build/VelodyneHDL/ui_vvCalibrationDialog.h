/********************************************************************************
** Form generated from reading UI file 'vvCalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVCALIBRATIONDIALOG_H
#define UI_VVCALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_vvCalibrationDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *PositionGroup;
    QHBoxLayout *horizontalLayout;
    QFormLayout *RotationLayout;
    QLabel *OriginXLabel;
    QDoubleSpinBox *OriginXSpinBox;
    QLabel *OriginYLabel;
    QDoubleSpinBox *OriginYSpinBox;
    QLabel *OriginZLabel;
    QDoubleSpinBox *OriginZSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *OriginLayout;
    QLabel *PitchLabel;
    QDoubleSpinBox *PitchSpinBox;
    QLabel *RollLabel;
    QDoubleSpinBox *RollSpinBox;
    QLabel *YawLabel;
    QDoubleSpinBox *YawSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *GpsRollLabel;
    QDoubleSpinBox *GpsRollSpinBox;
    QLabel *GpsPitchLabel;
    QDoubleSpinBox *GpsPitchSpinBox;
    QLabel *GpsYawLabel;
    QDoubleSpinBox *GpsYawSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *CalibrationGroup;
    QGridLayout *gridLayout;
    QToolButton *RemoveButton;
    QSpacerItem *horizontalSpacer;
    QListWidget *ListWidget;
    QToolButton *AddButton;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *vvCalibrationDialog)
    {
        if (vvCalibrationDialog->objectName().isEmpty())
            vvCalibrationDialog->setObjectName(QString::fromUtf8("vvCalibrationDialog"));
        vvCalibrationDialog->resize(462, 318);
        gridLayout_2 = new QGridLayout(vvCalibrationDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        PositionGroup = new QGroupBox(vvCalibrationDialog);
        PositionGroup->setObjectName(QString::fromUtf8("PositionGroup"));
        horizontalLayout = new QHBoxLayout(PositionGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RotationLayout = new QFormLayout();
        RotationLayout->setObjectName(QString::fromUtf8("RotationLayout"));
        OriginXLabel = new QLabel(PositionGroup);
        OriginXLabel->setObjectName(QString::fromUtf8("OriginXLabel"));

        RotationLayout->setWidget(0, QFormLayout::LabelRole, OriginXLabel);

        OriginXSpinBox = new QDoubleSpinBox(PositionGroup);
        OriginXSpinBox->setObjectName(QString::fromUtf8("OriginXSpinBox"));
        OriginXSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        OriginXSpinBox->setMinimum(-100);
        OriginXSpinBox->setMaximum(100);

        RotationLayout->setWidget(0, QFormLayout::FieldRole, OriginXSpinBox);

        OriginYLabel = new QLabel(PositionGroup);
        OriginYLabel->setObjectName(QString::fromUtf8("OriginYLabel"));

        RotationLayout->setWidget(1, QFormLayout::LabelRole, OriginYLabel);

        OriginYSpinBox = new QDoubleSpinBox(PositionGroup);
        OriginYSpinBox->setObjectName(QString::fromUtf8("OriginYSpinBox"));
        OriginYSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        OriginYSpinBox->setMinimum(-100);
        OriginYSpinBox->setMaximum(100);

        RotationLayout->setWidget(1, QFormLayout::FieldRole, OriginYSpinBox);

        OriginZLabel = new QLabel(PositionGroup);
        OriginZLabel->setObjectName(QString::fromUtf8("OriginZLabel"));

        RotationLayout->setWidget(2, QFormLayout::LabelRole, OriginZLabel);

        OriginZSpinBox = new QDoubleSpinBox(PositionGroup);
        OriginZSpinBox->setObjectName(QString::fromUtf8("OriginZSpinBox"));
        OriginZSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        OriginZSpinBox->setMinimum(-100);
        OriginZSpinBox->setMaximum(100);

        RotationLayout->setWidget(2, QFormLayout::FieldRole, OriginZSpinBox);


        horizontalLayout->addLayout(RotationLayout);

        horizontalSpacer_3 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        OriginLayout = new QFormLayout();
        OriginLayout->setObjectName(QString::fromUtf8("OriginLayout"));
        OriginLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        PitchLabel = new QLabel(PositionGroup);
        PitchLabel->setObjectName(QString::fromUtf8("PitchLabel"));

        OriginLayout->setWidget(1, QFormLayout::LabelRole, PitchLabel);

        PitchSpinBox = new QDoubleSpinBox(PositionGroup);
        PitchSpinBox->setObjectName(QString::fromUtf8("PitchSpinBox"));
        PitchSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PitchSpinBox->setMinimum(-90);
        PitchSpinBox->setMaximum(90);

        OriginLayout->setWidget(1, QFormLayout::FieldRole, PitchSpinBox);

        RollLabel = new QLabel(PositionGroup);
        RollLabel->setObjectName(QString::fromUtf8("RollLabel"));

        OriginLayout->setWidget(2, QFormLayout::LabelRole, RollLabel);

        RollSpinBox = new QDoubleSpinBox(PositionGroup);
        RollSpinBox->setObjectName(QString::fromUtf8("RollSpinBox"));
        RollSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RollSpinBox->setMinimum(-180);
        RollSpinBox->setMaximum(180);

        OriginLayout->setWidget(2, QFormLayout::FieldRole, RollSpinBox);

        YawLabel = new QLabel(PositionGroup);
        YawLabel->setObjectName(QString::fromUtf8("YawLabel"));

        OriginLayout->setWidget(3, QFormLayout::LabelRole, YawLabel);

        YawSpinBox = new QDoubleSpinBox(PositionGroup);
        YawSpinBox->setObjectName(QString::fromUtf8("YawSpinBox"));
        YawSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        YawSpinBox->setMinimum(-360);
        YawSpinBox->setMaximum(360);

        OriginLayout->setWidget(3, QFormLayout::FieldRole, YawSpinBox);


        horizontalLayout->addLayout(OriginLayout);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(PositionGroup, 2, 1, 1, 1);

        groupBox = new QGroupBox(vvCalibrationDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        GpsRollLabel = new QLabel(groupBox);
        GpsRollLabel->setObjectName(QString::fromUtf8("GpsRollLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, GpsRollLabel);

        GpsRollSpinBox = new QDoubleSpinBox(groupBox);
        GpsRollSpinBox->setObjectName(QString::fromUtf8("GpsRollSpinBox"));
        GpsRollSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GpsRollSpinBox->setMinimum(-180);
        GpsRollSpinBox->setMaximum(180);

        formLayout->setWidget(2, QFormLayout::FieldRole, GpsRollSpinBox);

        GpsPitchLabel = new QLabel(groupBox);
        GpsPitchLabel->setObjectName(QString::fromUtf8("GpsPitchLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, GpsPitchLabel);

        GpsPitchSpinBox = new QDoubleSpinBox(groupBox);
        GpsPitchSpinBox->setObjectName(QString::fromUtf8("GpsPitchSpinBox"));
        GpsPitchSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GpsPitchSpinBox->setMinimum(-90);
        GpsPitchSpinBox->setMaximum(90);

        formLayout->setWidget(1, QFormLayout::FieldRole, GpsPitchSpinBox);

        GpsYawLabel = new QLabel(groupBox);
        GpsYawLabel->setObjectName(QString::fromUtf8("GpsYawLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, GpsYawLabel);

        GpsYawSpinBox = new QDoubleSpinBox(groupBox);
        GpsYawSpinBox->setObjectName(QString::fromUtf8("GpsYawSpinBox"));
        GpsYawSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GpsYawSpinBox->setMinimum(-360);
        GpsYawSpinBox->setMaximum(360);

        formLayout->setWidget(3, QFormLayout::FieldRole, GpsYawSpinBox);


        horizontalLayout_2->addLayout(formLayout);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_2->addWidget(groupBox, 2, 2, 1, 1);

        CalibrationGroup = new QGroupBox(vvCalibrationDialog);
        CalibrationGroup->setObjectName(QString::fromUtf8("CalibrationGroup"));
        gridLayout = new QGridLayout(CalibrationGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RemoveButton = new QToolButton(CalibrationGroup);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        RemoveButton->setIcon(icon);
        RemoveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(RemoveButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        ListWidget = new QListWidget(CalibrationGroup);
        ListWidget->setObjectName(QString::fromUtf8("ListWidget"));

        gridLayout->addWidget(ListWidget, 0, 0, 1, 3);

        AddButton = new QToolButton(CalibrationGroup);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        AddButton->setIcon(icon1);
        AddButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(AddButton, 1, 0, 1, 1);


        gridLayout_2->addWidget(CalibrationGroup, 1, 0, 1, 3);

        ButtonBox = new QDialogButtonBox(vvCalibrationDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(ButtonBox, 3, 0, 1, 3);

        gridLayout_2->setColumnStretch(1, 1);

        retranslateUi(vvCalibrationDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), vvCalibrationDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), vvCalibrationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvCalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *vvCalibrationDialog)
    {
        vvCalibrationDialog->setWindowTitle(QApplication::translate("vvCalibrationDialog", "Sensor Configuration", 0, QApplication::UnicodeUTF8));
        PositionGroup->setTitle(QApplication::translate("vvCalibrationDialog", "Sensor Position", 0, QApplication::UnicodeUTF8));
        OriginXLabel->setText(QApplication::translate("vvCalibrationDialog", "X", 0, QApplication::UnicodeUTF8));
        OriginYLabel->setText(QApplication::translate("vvCalibrationDialog", "Y", 0, QApplication::UnicodeUTF8));
        OriginZLabel->setText(QApplication::translate("vvCalibrationDialog", "Z", 0, QApplication::UnicodeUTF8));
        PitchLabel->setText(QApplication::translate("vvCalibrationDialog", "Pitch", 0, QApplication::UnicodeUTF8));
        RollLabel->setText(QApplication::translate("vvCalibrationDialog", "Roll", 0, QApplication::UnicodeUTF8));
        YawLabel->setText(QApplication::translate("vvCalibrationDialog", "Yaw", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("vvCalibrationDialog", "GPS Orientation", 0, QApplication::UnicodeUTF8));
        GpsRollLabel->setText(QApplication::translate("vvCalibrationDialog", "Roll", 0, QApplication::UnicodeUTF8));
        GpsPitchLabel->setText(QApplication::translate("vvCalibrationDialog", "Pitch", 0, QApplication::UnicodeUTF8));
        GpsYawLabel->setText(QApplication::translate("vvCalibrationDialog", "Heading", 0, QApplication::UnicodeUTF8));
        CalibrationGroup->setTitle(QApplication::translate("vvCalibrationDialog", "Sensor Calibration", 0, QApplication::UnicodeUTF8));
        RemoveButton->setText(QApplication::translate("vvCalibrationDialog", "Remove", 0, QApplication::UnicodeUTF8));
        AddButton->setText(QApplication::translate("vvCalibrationDialog", "Add", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvCalibrationDialog: public Ui_vvCalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVCALIBRATIONDIALOG_H
