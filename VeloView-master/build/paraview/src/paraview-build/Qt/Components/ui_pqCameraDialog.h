/********************************************************************************
** Form generated from reading UI file 'pqCameraDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCAMERADIALOG_H
#define UI_PQCAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include "pqCollapsedGroup.h"
#include "pqDoubleRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqCameraDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    pqCollapsedGroup *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *viewsGroup;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *viewXPlus;
    QToolButton *viewXMinus;
    QToolButton *viewYPlus;
    QToolButton *viewYMinus;
    QToolButton *viewZPlus;
    QToolButton *viewZMinus;
    QSpacerItem *spacerItem;
    QGroupBox *customViewsGroup;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *customView0;
    QToolButton *customView1;
    QToolButton *customView2;
    QToolButton *customView3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *configureCustomViews;
    pqCollapsedGroup *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *centerGroup;
    QGridLayout *gridLayout;
    QLineEdit *CenterX;
    QLineEdit *CenterY;
    QLineEdit *CenterZ;
    QCheckBox *AutoResetCenterOfRotation;
    QGroupBox *RotationFactorGroup;
    QGridLayout *gridLayout1;
    pqDoubleRangeWidget *rotationFactor;
    QGroupBox *positionsGroup;
    QGridLayout *gridLayout2;
    QLabel *label_22;
    QLabel *label_17;
    QLabel *label_14;
    QLabel *label_23;
    QDoubleSpinBox *viewAngle;
    QLineEdit *position0;
    QLineEdit *position1;
    QLineEdit *position2;
    QLineEdit *focalPoint0;
    QLineEdit *focalPoint1;
    QLineEdit *focalPoint2;
    QLineEdit *viewUp0;
    QLineEdit *viewUp1;
    QLineEdit *viewUp2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loadCameraConfiguration;
    QPushButton *saveCameraConfiguration;
    pqCollapsedGroup *orientationsGroup;
    QGridLayout *gridLayout3;
    QLabel *label_20;
    QPushButton *azimuthButton;
    QPushButton *elevationButton;
    QPushButton *rollButton;
    QDoubleSpinBox *azimuthAngle;
    QDoubleSpinBox *elevationAngle;
    QDoubleSpinBox *rollAngle;
    QLabel *label_21;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacerItem1;
    QPushButton *closeButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *pqCameraDialog)
    {
        if (pqCameraDialog->objectName().isEmpty())
            pqCameraDialog->setObjectName(QString::fromUtf8("pqCameraDialog"));
        pqCameraDialog->setWindowModality(Qt::NonModal);
        pqCameraDialog->resize(349, 712);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqCameraDialog->sizePolicy().hasHeightForWidth());
        pqCameraDialog->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(pqCameraDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new pqCollapsedGroup(pqCameraDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 4);
        viewsGroup = new QGroupBox(groupBox_2);
        viewsGroup->setObjectName(QString::fromUtf8("viewsGroup"));
        viewsGroup->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(viewsGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        viewXPlus = new QToolButton(viewsGroup);
        viewXPlus->setObjectName(QString::fromUtf8("viewXPlus"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqXPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewXPlus->setIcon(icon);
        viewXPlus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewXPlus);

        viewXMinus = new QToolButton(viewsGroup);
        viewXMinus->setObjectName(QString::fromUtf8("viewXMinus"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqXMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewXMinus->setIcon(icon1);
        viewXMinus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewXMinus);

        viewYPlus = new QToolButton(viewsGroup);
        viewYPlus->setObjectName(QString::fromUtf8("viewYPlus"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqYPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewYPlus->setIcon(icon2);
        viewYPlus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewYPlus);

        viewYMinus = new QToolButton(viewsGroup);
        viewYMinus->setObjectName(QString::fromUtf8("viewYMinus"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqYMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewYMinus->setIcon(icon3);
        viewYMinus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewYMinus);

        viewZPlus = new QToolButton(viewsGroup);
        viewZPlus->setObjectName(QString::fromUtf8("viewZPlus"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqZPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewZPlus->setIcon(icon4);
        viewZPlus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewZPlus);

        viewZMinus = new QToolButton(viewsGroup);
        viewZMinus->setObjectName(QString::fromUtf8("viewZMinus"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqZMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewZMinus->setIcon(icon5);
        viewZMinus->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(viewZMinus);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem);


        verticalLayout_2->addWidget(viewsGroup);

        customViewsGroup = new QGroupBox(groupBox_2);
        customViewsGroup->setObjectName(QString::fromUtf8("customViewsGroup"));
        customViewsGroup->setFlat(true);
        horizontalLayout_4 = new QHBoxLayout(customViewsGroup);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        customView0 = new QToolButton(customViewsGroup);
        customView0->setObjectName(QString::fromUtf8("customView0"));
        customView0->setMinimumSize(QSize(34, 33));
        customView0->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(customView0);

        customView1 = new QToolButton(customViewsGroup);
        customView1->setObjectName(QString::fromUtf8("customView1"));
        customView1->setMinimumSize(QSize(34, 33));
        customView1->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(customView1);

        customView2 = new QToolButton(customViewsGroup);
        customView2->setObjectName(QString::fromUtf8("customView2"));
        customView2->setMinimumSize(QSize(34, 33));
        customView2->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(customView2);

        customView3 = new QToolButton(customViewsGroup);
        customView3->setObjectName(QString::fromUtf8("customView3"));
        customView3->setMinimumSize(QSize(34, 33));
        customView3->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(customView3);

        horizontalSpacer_2 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        configureCustomViews = new QPushButton(customViewsGroup);
        configureCustomViews->setObjectName(QString::fromUtf8("configureCustomViews"));

        horizontalLayout_4->addWidget(configureCustomViews);


        verticalLayout_2->addWidget(customViewsGroup);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new pqCollapsedGroup(pqCameraDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        centerGroup = new QGroupBox(groupBox);
        centerGroup->setObjectName(QString::fromUtf8("centerGroup"));
        centerGroup->setFlat(true);
        gridLayout = new QGridLayout(centerGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CenterX = new QLineEdit(centerGroup);
        CenterX->setObjectName(QString::fromUtf8("CenterX"));

        gridLayout->addWidget(CenterX, 0, 0, 1, 1);

        CenterY = new QLineEdit(centerGroup);
        CenterY->setObjectName(QString::fromUtf8("CenterY"));

        gridLayout->addWidget(CenterY, 0, 1, 1, 1);

        CenterZ = new QLineEdit(centerGroup);
        CenterZ->setObjectName(QString::fromUtf8("CenterZ"));

        gridLayout->addWidget(CenterZ, 0, 2, 1, 1);

        AutoResetCenterOfRotation = new QCheckBox(centerGroup);
        AutoResetCenterOfRotation->setObjectName(QString::fromUtf8("AutoResetCenterOfRotation"));

        gridLayout->addWidget(AutoResetCenterOfRotation, 1, 0, 1, 3);


        verticalLayout->addWidget(centerGroup);

        RotationFactorGroup = new QGroupBox(groupBox);
        RotationFactorGroup->setObjectName(QString::fromUtf8("RotationFactorGroup"));
        RotationFactorGroup->setFlat(true);
        gridLayout1 = new QGridLayout(RotationFactorGroup);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        rotationFactor = new pqDoubleRangeWidget(RotationFactorGroup);
        rotationFactor->setObjectName(QString::fromUtf8("rotationFactor"));
        rotationFactor->setStrictRange(true);

        gridLayout1->addWidget(rotationFactor, 0, 0, 1, 1);


        verticalLayout->addWidget(RotationFactorGroup);

        positionsGroup = new QGroupBox(groupBox);
        positionsGroup->setObjectName(QString::fromUtf8("positionsGroup"));
        positionsGroup->setFlat(true);
        gridLayout2 = new QGridLayout(positionsGroup);
        gridLayout2->setSpacing(-1);
        gridLayout2->setContentsMargins(4, 4, 4, 4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_22 = new QLabel(positionsGroup);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout2->addWidget(label_22, 0, 0, 1, 1);

        label_17 = new QLabel(positionsGroup);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout2->addWidget(label_17, 1, 0, 1, 1);

        label_14 = new QLabel(positionsGroup);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout2->addWidget(label_14, 2, 0, 1, 1);

        label_23 = new QLabel(positionsGroup);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout2->addWidget(label_23, 3, 0, 1, 1);

        viewAngle = new QDoubleSpinBox(positionsGroup);
        viewAngle->setObjectName(QString::fromUtf8("viewAngle"));
        viewAngle->setMinimum(-360);
        viewAngle->setMaximum(360);

        gridLayout2->addWidget(viewAngle, 3, 1, 1, 1);

        position0 = new QLineEdit(positionsGroup);
        position0->setObjectName(QString::fromUtf8("position0"));

        gridLayout2->addWidget(position0, 0, 1, 1, 1);

        position1 = new QLineEdit(positionsGroup);
        position1->setObjectName(QString::fromUtf8("position1"));

        gridLayout2->addWidget(position1, 0, 2, 1, 1);

        position2 = new QLineEdit(positionsGroup);
        position2->setObjectName(QString::fromUtf8("position2"));

        gridLayout2->addWidget(position2, 0, 3, 1, 1);

        focalPoint0 = new QLineEdit(positionsGroup);
        focalPoint0->setObjectName(QString::fromUtf8("focalPoint0"));

        gridLayout2->addWidget(focalPoint0, 1, 1, 1, 1);

        focalPoint1 = new QLineEdit(positionsGroup);
        focalPoint1->setObjectName(QString::fromUtf8("focalPoint1"));

        gridLayout2->addWidget(focalPoint1, 1, 2, 1, 1);

        focalPoint2 = new QLineEdit(positionsGroup);
        focalPoint2->setObjectName(QString::fromUtf8("focalPoint2"));

        gridLayout2->addWidget(focalPoint2, 1, 3, 1, 1);

        viewUp0 = new QLineEdit(positionsGroup);
        viewUp0->setObjectName(QString::fromUtf8("viewUp0"));

        gridLayout2->addWidget(viewUp0, 2, 1, 1, 1);

        viewUp1 = new QLineEdit(positionsGroup);
        viewUp1->setObjectName(QString::fromUtf8("viewUp1"));

        gridLayout2->addWidget(viewUp1, 2, 2, 1, 1);

        viewUp2 = new QLineEdit(positionsGroup);
        viewUp2->setObjectName(QString::fromUtf8("viewUp2"));

        gridLayout2->addWidget(viewUp2, 2, 3, 1, 1);


        verticalLayout->addWidget(positionsGroup);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loadCameraConfiguration = new QPushButton(groupBox);
        loadCameraConfiguration->setObjectName(QString::fromUtf8("loadCameraConfiguration"));

        horizontalLayout->addWidget(loadCameraConfiguration);

        saveCameraConfiguration = new QPushButton(groupBox);
        saveCameraConfiguration->setObjectName(QString::fromUtf8("saveCameraConfiguration"));

        horizontalLayout->addWidget(saveCameraConfiguration);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        orientationsGroup = new pqCollapsedGroup(pqCameraDialog);
        orientationsGroup->setObjectName(QString::fromUtf8("orientationsGroup"));
        gridLayout3 = new QGridLayout(orientationsGroup);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(4, 4, 4, 4);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_20 = new QLabel(orientationsGroup);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(label_20, 0, 2, 1, 1);

        azimuthButton = new QPushButton(orientationsGroup);
        azimuthButton->setObjectName(QString::fromUtf8("azimuthButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        azimuthButton->setIcon(icon6);
        azimuthButton->setIconSize(QSize(24, 24));

        gridLayout3->addWidget(azimuthButton, 2, 0, 1, 1);

        elevationButton = new QPushButton(orientationsGroup);
        elevationButton->setObjectName(QString::fromUtf8("elevationButton"));
        elevationButton->setIcon(icon6);
        elevationButton->setIconSize(QSize(24, 24));

        gridLayout3->addWidget(elevationButton, 1, 0, 1, 1);

        rollButton = new QPushButton(orientationsGroup);
        rollButton->setObjectName(QString::fromUtf8("rollButton"));
        rollButton->setIcon(icon6);
        rollButton->setIconSize(QSize(24, 24));

        gridLayout3->addWidget(rollButton, 0, 0, 1, 1);

        azimuthAngle = new QDoubleSpinBox(orientationsGroup);
        azimuthAngle->setObjectName(QString::fromUtf8("azimuthAngle"));
        azimuthAngle->setMinimum(-360);
        azimuthAngle->setMaximum(360);

        gridLayout3->addWidget(azimuthAngle, 2, 1, 1, 1);

        elevationAngle = new QDoubleSpinBox(orientationsGroup);
        elevationAngle->setObjectName(QString::fromUtf8("elevationAngle"));
        elevationAngle->setMinimum(-360);
        elevationAngle->setMaximum(360);

        gridLayout3->addWidget(elevationAngle, 1, 1, 1, 1);

        rollAngle = new QDoubleSpinBox(orientationsGroup);
        rollAngle->setObjectName(QString::fromUtf8("rollAngle"));
        rollAngle->setMinimum(-360);
        rollAngle->setMaximum(360);

        gridLayout3->addWidget(rollAngle, 0, 1, 1, 1);

        label_21 = new QLabel(orientationsGroup);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(label_21, 1, 2, 1, 1);

        label_16 = new QLabel(orientationsGroup);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(label_16, 2, 2, 1, 1);


        verticalLayout_3->addWidget(orientationsGroup);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spacerItem1 = new QSpacerItem(13, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem1);

        closeButton = new QPushButton(pqCameraDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer);

        QWidget::setTabOrder(closeButton, viewXPlus);
        QWidget::setTabOrder(viewXPlus, viewXMinus);
        QWidget::setTabOrder(viewXMinus, viewYPlus);
        QWidget::setTabOrder(viewYPlus, viewYMinus);
        QWidget::setTabOrder(viewYMinus, viewZPlus);
        QWidget::setTabOrder(viewZPlus, viewZMinus);
        QWidget::setTabOrder(viewZMinus, CenterX);
        QWidget::setTabOrder(CenterX, CenterY);
        QWidget::setTabOrder(CenterY, CenterZ);
        QWidget::setTabOrder(CenterZ, AutoResetCenterOfRotation);
        QWidget::setTabOrder(AutoResetCenterOfRotation, position0);
        QWidget::setTabOrder(position0, position1);
        QWidget::setTabOrder(position1, position2);
        QWidget::setTabOrder(position2, focalPoint0);
        QWidget::setTabOrder(focalPoint0, focalPoint1);
        QWidget::setTabOrder(focalPoint1, focalPoint2);
        QWidget::setTabOrder(focalPoint2, viewUp0);
        QWidget::setTabOrder(viewUp0, viewUp1);
        QWidget::setTabOrder(viewUp1, viewUp2);
        QWidget::setTabOrder(viewUp2, viewAngle);
        QWidget::setTabOrder(viewAngle, rollAngle);
        QWidget::setTabOrder(rollAngle, rollButton);
        QWidget::setTabOrder(rollButton, elevationAngle);
        QWidget::setTabOrder(elevationAngle, elevationButton);
        QWidget::setTabOrder(elevationButton, azimuthAngle);
        QWidget::setTabOrder(azimuthAngle, azimuthButton);

        retranslateUi(pqCameraDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), pqCameraDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(pqCameraDialog);
    } // setupUi

    void retranslateUi(QDialog *pqCameraDialog)
    {
        pqCameraDialog->setWindowTitle(QApplication::translate("pqCameraDialog", "Adjusting Camera", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QApplication::translate("pqCameraDialog", "Apply a preset camera configuration.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupBox_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        groupBox_2->setTitle(QApplication::translate("pqCameraDialog", "Views", 0, QApplication::UnicodeUTF8));
        viewsGroup->setTitle(QApplication::translate("pqCameraDialog", "Standard", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewXPlus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down X axis from (1, 0, 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewXPlus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewXMinus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down X axis from (-1, 0, 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewXMinus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewYPlus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down Y axis from (0, 1, 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewYPlus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewYMinus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down Y axis from (0, -1, 0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewYMinus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewZPlus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down X axis from (0, 0, 1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewZPlus->setText(QString());
#ifndef QT_NO_TOOLTIP
        viewZMinus->setToolTip(QApplication::translate("pqCameraDialog", "Looking down Z axis from (0, 0, -1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewZMinus->setText(QString());
        customViewsGroup->setTitle(QApplication::translate("pqCameraDialog", "Custom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customView0->setToolTip(QApplication::translate("pqCameraDialog", "not configured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        customView0->setText(QApplication::translate("pqCameraDialog", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customView1->setToolTip(QApplication::translate("pqCameraDialog", "not configured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        customView1->setText(QApplication::translate("pqCameraDialog", "2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customView2->setToolTip(QApplication::translate("pqCameraDialog", "not configured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        customView2->setText(QApplication::translate("pqCameraDialog", "3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customView3->setToolTip(QApplication::translate("pqCameraDialog", "not configured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        customView3->setText(QApplication::translate("pqCameraDialog", "4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        configureCustomViews->setToolTip(QApplication::translate("pqCameraDialog", "Configure custom view buttons.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        configureCustomViews->setText(QApplication::translate("pqCameraDialog", "Configure...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("pqCameraDialog", "View, and edit the current camera configuration.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("pqCameraDialog", "Configuration", 0, QApplication::UnicodeUTF8));
        centerGroup->setTitle(QApplication::translate("pqCameraDialog", "Center of Rotation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AutoResetCenterOfRotation->setToolTip(QApplication::translate("pqCameraDialog", "Reset center of rotation when camera is reset.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AutoResetCenterOfRotation->setText(QApplication::translate("pqCameraDialog", "Reset Center of Rotation When Camera is Reset", 0, QApplication::UnicodeUTF8));
        RotationFactorGroup->setTitle(QApplication::translate("pqCameraDialog", "Rotation Factor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rotationFactor->setToolTip(QApplication::translate("pqCameraDialog", "Define the rotation speed factor.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        positionsGroup->setTitle(QApplication::translate("pqCameraDialog", "Camera Positions", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("pqCameraDialog", "Position", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("pqCameraDialog", "Focal Point", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("pqCameraDialog", "View Up", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("pqCameraDialog", "View Angle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loadCameraConfiguration->setToolTip(QApplication::translate("pqCameraDialog", "Load camera properties.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loadCameraConfiguration->setText(QApplication::translate("pqCameraDialog", "Load", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        saveCameraConfiguration->setToolTip(QApplication::translate("pqCameraDialog", "Save camera properties.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveCameraConfiguration->setText(QApplication::translate("pqCameraDialog", "Save", 0, QApplication::UnicodeUTF8));
        orientationsGroup->setTitle(QApplication::translate("pqCameraDialog", "Apply Manipulation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_20->setToolTip(QApplication::translate("pqCameraDialog", "Apply a manipulation to the current camera using the buttons on the left.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("pqCameraDialog", "degrees", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        azimuthButton->setToolTip(QApplication::translate("pqCameraDialog", "Rotate around center of screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        azimuthButton->setText(QApplication::translate("pqCameraDialog", "Azimuth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        elevationButton->setToolTip(QApplication::translate("pqCameraDialog", "Rotate around horizontal axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        elevationButton->setText(QApplication::translate("pqCameraDialog", "Elevation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rollButton->setToolTip(QApplication::translate("pqCameraDialog", "Rotate around vertical axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rollButton->setText(QApplication::translate("pqCameraDialog", "Roll", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("pqCameraDialog", "degrees", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("pqCameraDialog", "degrees", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("pqCameraDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqCameraDialog: public Ui_pqCameraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCAMERADIALOG_H
