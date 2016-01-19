/********************************************************************************
** Form generated from reading UI file 'vvSelectFramesDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVSELECTFRAMESDIALOG_H
#define UI_VVSELECTFRAMESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvSelectFramesDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *CurrentFrameButton;
    QRadioButton *AllFramesButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *FrameRangeButton;
    QSpinBox *FrameStart;
    QLabel *label;
    QSpinBox *FrameStop;
    QSpacerItem *horizontalSpacer;
    QWidget *FrameStrideContainer;
    QFormLayout *formLayout;
    QFrame *FrameStrideDivider;
    QLabel *FrameStrideLabel;
    QSpinBox *FrameStride;
    QGroupBox *FramePackContainer;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *SingleFileButton;
    QRadioButton *FilePerFrameButton;
    QGroupBox *FrameTransformContainer;
    QVBoxLayout *verticalLayout;
    QRadioButton *SensorButton;
    QRadioButton *RelativeButton;
    QRadioButton *AbsoluteUtmButton;
    QRadioButton *AbsoluteLatLonButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *vvSelectFramesDialog)
    {
        if (vvSelectFramesDialog->objectName().isEmpty())
            vvSelectFramesDialog->setObjectName(QString::fromUtf8("vvSelectFramesDialog"));
        vvSelectFramesDialog->resize(267, 407);
        verticalLayout_4 = new QVBoxLayout(vvSelectFramesDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(vvSelectFramesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        CurrentFrameButton = new QRadioButton(groupBox);
        CurrentFrameButton->setObjectName(QString::fromUtf8("CurrentFrameButton"));
        CurrentFrameButton->setChecked(true);

        verticalLayout_2->addWidget(CurrentFrameButton);

        AllFramesButton = new QRadioButton(groupBox);
        AllFramesButton->setObjectName(QString::fromUtf8("AllFramesButton"));

        verticalLayout_2->addWidget(AllFramesButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        FrameRangeButton = new QRadioButton(groupBox);
        FrameRangeButton->setObjectName(QString::fromUtf8("FrameRangeButton"));

        horizontalLayout->addWidget(FrameRangeButton);

        FrameStart = new QSpinBox(groupBox);
        FrameStart->setObjectName(QString::fromUtf8("FrameStart"));
        FrameStart->setFocusPolicy(Qt::WheelFocus);
        FrameStart->setMaximum(100);
        FrameStart->setValue(0);

        horizontalLayout->addWidget(FrameStart);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        FrameStop = new QSpinBox(groupBox);
        FrameStop->setObjectName(QString::fromUtf8("FrameStop"));
        FrameStop->setFocusPolicy(Qt::WheelFocus);
        FrameStop->setMaximum(100);
        FrameStop->setValue(10);

        horizontalLayout->addWidget(FrameStop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        FrameStrideContainer = new QWidget(groupBox);
        FrameStrideContainer->setObjectName(QString::fromUtf8("FrameStrideContainer"));
        formLayout = new QFormLayout(FrameStrideContainer);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        FrameStrideDivider = new QFrame(FrameStrideContainer);
        FrameStrideDivider->setObjectName(QString::fromUtf8("FrameStrideDivider"));
        FrameStrideDivider->setFrameShape(QFrame::HLine);
        FrameStrideDivider->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(0, QFormLayout::SpanningRole, FrameStrideDivider);

        FrameStrideLabel = new QLabel(FrameStrideContainer);
        FrameStrideLabel->setObjectName(QString::fromUtf8("FrameStrideLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, FrameStrideLabel);

        FrameStride = new QSpinBox(FrameStrideContainer);
        FrameStride->setObjectName(QString::fromUtf8("FrameStride"));
        FrameStride->setMinimum(1);
        FrameStride->setMaximum(999);

        formLayout->setWidget(1, QFormLayout::FieldRole, FrameStride);


        verticalLayout_2->addWidget(FrameStrideContainer);


        verticalLayout_4->addWidget(groupBox);

        FramePackContainer = new QGroupBox(vvSelectFramesDialog);
        FramePackContainer->setObjectName(QString::fromUtf8("FramePackContainer"));
        verticalLayout_3 = new QVBoxLayout(FramePackContainer);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        SingleFileButton = new QRadioButton(FramePackContainer);
        SingleFileButton->setObjectName(QString::fromUtf8("SingleFileButton"));
        SingleFileButton->setChecked(true);

        verticalLayout_3->addWidget(SingleFileButton);

        FilePerFrameButton = new QRadioButton(FramePackContainer);
        FilePerFrameButton->setObjectName(QString::fromUtf8("FilePerFrameButton"));

        verticalLayout_3->addWidget(FilePerFrameButton);


        verticalLayout_4->addWidget(FramePackContainer);

        FrameTransformContainer = new QGroupBox(vvSelectFramesDialog);
        FrameTransformContainer->setObjectName(QString::fromUtf8("FrameTransformContainer"));
        verticalLayout = new QVBoxLayout(FrameTransformContainer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SensorButton = new QRadioButton(FrameTransformContainer);
        SensorButton->setObjectName(QString::fromUtf8("SensorButton"));

        verticalLayout->addWidget(SensorButton);

        RelativeButton = new QRadioButton(FrameTransformContainer);
        RelativeButton->setObjectName(QString::fromUtf8("RelativeButton"));

        verticalLayout->addWidget(RelativeButton);

        AbsoluteUtmButton = new QRadioButton(FrameTransformContainer);
        AbsoluteUtmButton->setObjectName(QString::fromUtf8("AbsoluteUtmButton"));

        verticalLayout->addWidget(AbsoluteUtmButton);

        AbsoluteLatLonButton = new QRadioButton(FrameTransformContainer);
        AbsoluteLatLonButton->setObjectName(QString::fromUtf8("AbsoluteLatLonButton"));

        verticalLayout->addWidget(AbsoluteLatLonButton);


        verticalLayout_4->addWidget(FrameTransformContainer);

        buttonBox = new QDialogButtonBox(vvSelectFramesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(vvSelectFramesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), vvSelectFramesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), vvSelectFramesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvSelectFramesDialog);
    } // setupUi

    void retranslateUi(QDialog *vvSelectFramesDialog)
    {
        vvSelectFramesDialog->setWindowTitle(QApplication::translate("vvSelectFramesDialog", "Select Frames", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("vvSelectFramesDialog", "Frame Selection", 0, QApplication::UnicodeUTF8));
        CurrentFrameButton->setText(QApplication::translate("vvSelectFramesDialog", "Current frame", 0, QApplication::UnicodeUTF8));
        AllFramesButton->setText(QApplication::translate("vvSelectFramesDialog", "All frames", 0, QApplication::UnicodeUTF8));
        FrameRangeButton->setText(QApplication::translate("vvSelectFramesDialog", "Frames from ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("vvSelectFramesDialog", " to ", 0, QApplication::UnicodeUTF8));
        FrameStrideLabel->setText(QApplication::translate("vvSelectFramesDialog", "Frame Stride:", 0, QApplication::UnicodeUTF8));
        FramePackContainer->setTitle(QApplication::translate("vvSelectFramesDialog", "Archive Mode", 0, QApplication::UnicodeUTF8));
        SingleFileButton->setText(QApplication::translate("vvSelectFramesDialog", "Single file", 0, QApplication::UnicodeUTF8));
        FilePerFrameButton->setText(QApplication::translate("vvSelectFramesDialog", "File per frame", 0, QApplication::UnicodeUTF8));
        FrameTransformContainer->setTitle(QApplication::translate("vvSelectFramesDialog", "Coordinate System", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SensorButton->setToolTip(QApplication::translate("vvSelectFramesDialog", "Write position information relative to the sensor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SensorButton->setText(QApplication::translate("vvSelectFramesDialog", "Sensor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RelativeButton->setToolTip(QApplication::translate("vvSelectFramesDialog", "Write position information transformed for platform orientation and relative position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RelativeButton->setText(QApplication::translate("vvSelectFramesDialog", "Relative geoposition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AbsoluteUtmButton->setToolTip(QApplication::translate("vvSelectFramesDialog", "Write position information as absolute geoposition in UTM coordinates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AbsoluteUtmButton->setText(QApplication::translate("vvSelectFramesDialog", "Absolute geoposition (UTM)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AbsoluteLatLonButton->setToolTip(QApplication::translate("vvSelectFramesDialog", "Write position information as absolute geoposition in Lat/Lon", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AbsoluteLatLonButton->setText(QApplication::translate("vvSelectFramesDialog", "Absolute geoposition (Lat/Lon)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvSelectFramesDialog: public Ui_vvSelectFramesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVSELECTFRAMESDIALOG_H
