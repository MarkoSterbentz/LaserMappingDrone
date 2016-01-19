/********************************************************************************
** Form generated from reading UI file 'pqCubeAxesEditorDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUBEAXESEDITORDIALOG_H
#define UI_PQCUBEAXESEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
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
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqColorChooserButtonWithPalettes.h"

QT_BEGIN_NAMESPACE

class Ui_CubeAxesEditorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *xtab;
    QGridLayout *gridLayout;
    QCheckBox *CubeAxesXGridLines;
    QCheckBox *CubeAxesXAxisMinorTickVisibility;
    QCheckBox *CubeAxesXAxisTickVisibility;
    QCheckBox *CubeAxesXAxisVisibility;
    QGroupBox *CubeAxesXCustomBounds;
    QHBoxLayout *horizontalLayout;
    QLineEdit *CubeAxesXCustomBoundsMin;
    QLineEdit *CubeAxesXCustomBoundsMax;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *CubeAxesXTitle;
    QCheckBox *CubeAxesUseDefaultXTitle;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *CubeAxesXCustomRange;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *CubeAxesXCustomRangeMin;
    QLineEdit *CubeAxesXCustomRangeMax;
    QCheckBox *UseOriginalBoundsRangeForX;
    QWidget *ytab;
    QGridLayout *gridLayout1;
    QCheckBox *CubeAxesYGridLines;
    QCheckBox *CubeAxesYAxisMinorTickVisibility;
    QCheckBox *CubeAxesYAxisVisibility;
    QCheckBox *CubeAxesYAxisTickVisibility;
    QGroupBox *CubeAxesYCustomBounds;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *CubeAxesYCustomBoundsMin;
    QLineEdit *CubeAxesYCustomBoundsMax;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *CubeAxesYTitle;
    QCheckBox *CubeAxesUseDefaultYTitle;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *CubeAxesYCustomRange;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *CubeAxesYCustomRangeMin;
    QLineEdit *CubeAxesYCustomRangeMax;
    QCheckBox *UseOriginalBoundsRangeForY;
    QWidget *ztab;
    QGridLayout *gridLayout2;
    QCheckBox *CubeAxesZGridLines;
    QCheckBox *CubeAxesZAxisVisibility;
    QCheckBox *CubeAxesZAxisMinorTickVisibility;
    QCheckBox *CubeAxesZAxisTickVisibility;
    QGroupBox *CubeAxesZCustomBounds;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *CubeAxesZCustomBoundsMin;
    QLineEdit *CubeAxesZCustomBoundsMax;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *CubeAxesZTitle;
    QCheckBox *CubeAxesUseDefaultZTitle;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *CubeAxesZCustomRange;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *CubeAxesZCustomRangeMin;
    QLineEdit *CubeAxesZCustomRangeMax;
    QCheckBox *UseOriginalBoundsRangeForZ;
    QGridLayout *FormLayout;
    QComboBox *CubeAxesTickLocation;
    QCheckBox *StickyAxes;
    QLabel *label_9;
    QLabel *label;
    QComboBox *CubeAxesFlyMode;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *CubeAxesCornerOffset;
    QLabel *label_4;
    QComboBox *CubeAxesGridLineLocation;
    QLabel *label_8;
    QCheckBox *UseAxesOrigin;
    QLabel *label_10;
    QCheckBox *CenterStickyAxes;
    QHBoxLayout *AxesOriginLayout;
    QLineEdit *AxesOriginX;
    QLineEdit *AxesOriginY;
    QLineEdit *AxesOriginZ;
    pqColorChooserButtonWithPalettes *Color;
    QSpacerItem *VerticalSpacer;
    QHBoxLayout *ButtonLayout;
    QSpacerItem *HorizontalSpacer;
    QPushButton *Ok;
    QPushButton *Cancel;

    void setupUi(QDialog *CubeAxesEditorDialog)
    {
        if (CubeAxesEditorDialog->objectName().isEmpty())
            CubeAxesEditorDialog->setObjectName(QString::fromUtf8("CubeAxesEditorDialog"));
        CubeAxesEditorDialog->resize(338, 676);
        verticalLayout = new QVBoxLayout(CubeAxesEditorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(CubeAxesEditorDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        xtab = new QWidget();
        xtab->setObjectName(QString::fromUtf8("xtab"));
        gridLayout = new QGridLayout(xtab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CubeAxesXGridLines = new QCheckBox(xtab);
        CubeAxesXGridLines->setObjectName(QString::fromUtf8("CubeAxesXGridLines"));

        gridLayout->addWidget(CubeAxesXGridLines, 4, 0, 1, 2);

        CubeAxesXAxisMinorTickVisibility = new QCheckBox(xtab);
        CubeAxesXAxisMinorTickVisibility->setObjectName(QString::fromUtf8("CubeAxesXAxisMinorTickVisibility"));

        gridLayout->addWidget(CubeAxesXAxisMinorTickVisibility, 3, 0, 1, 2);

        CubeAxesXAxisTickVisibility = new QCheckBox(xtab);
        CubeAxesXAxisTickVisibility->setObjectName(QString::fromUtf8("CubeAxesXAxisTickVisibility"));

        gridLayout->addWidget(CubeAxesXAxisTickVisibility, 2, 0, 1, 2);

        CubeAxesXAxisVisibility = new QCheckBox(xtab);
        CubeAxesXAxisVisibility->setObjectName(QString::fromUtf8("CubeAxesXAxisVisibility"));

        gridLayout->addWidget(CubeAxesXAxisVisibility, 1, 0, 1, 2);

        CubeAxesXCustomBounds = new QGroupBox(xtab);
        CubeAxesXCustomBounds->setObjectName(QString::fromUtf8("CubeAxesXCustomBounds"));
        CubeAxesXCustomBounds->setCheckable(true);
        CubeAxesXCustomBounds->setChecked(false);
        horizontalLayout = new QHBoxLayout(CubeAxesXCustomBounds);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CubeAxesXCustomBoundsMin = new QLineEdit(CubeAxesXCustomBounds);
        CubeAxesXCustomBoundsMin->setObjectName(QString::fromUtf8("CubeAxesXCustomBoundsMin"));

        horizontalLayout->addWidget(CubeAxesXCustomBoundsMin);

        CubeAxesXCustomBoundsMax = new QLineEdit(CubeAxesXCustomBounds);
        CubeAxesXCustomBoundsMax->setObjectName(QString::fromUtf8("CubeAxesXCustomBoundsMax"));

        horizontalLayout->addWidget(CubeAxesXCustomBoundsMax);


        gridLayout->addWidget(CubeAxesXCustomBounds, 6, 0, 1, 1);

        widget = new QWidget(xtab);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        CubeAxesXTitle = new QLineEdit(widget);
        CubeAxesXTitle->setObjectName(QString::fromUtf8("CubeAxesXTitle"));

        horizontalLayout_4->addWidget(CubeAxesXTitle);

        CubeAxesUseDefaultXTitle = new QCheckBox(widget);
        CubeAxesUseDefaultXTitle->setObjectName(QString::fromUtf8("CubeAxesUseDefaultXTitle"));
        CubeAxesUseDefaultXTitle->setChecked(true);

        horizontalLayout_4->addWidget(CubeAxesUseDefaultXTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        CubeAxesXCustomRange = new QGroupBox(xtab);
        CubeAxesXCustomRange->setObjectName(QString::fromUtf8("CubeAxesXCustomRange"));
        CubeAxesXCustomRange->setCheckable(true);
        CubeAxesXCustomRange->setChecked(false);
        horizontalLayout_7 = new QHBoxLayout(CubeAxesXCustomRange);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        CubeAxesXCustomRangeMin = new QLineEdit(CubeAxesXCustomRange);
        CubeAxesXCustomRangeMin->setObjectName(QString::fromUtf8("CubeAxesXCustomRangeMin"));

        horizontalLayout_7->addWidget(CubeAxesXCustomRangeMin);

        CubeAxesXCustomRangeMax = new QLineEdit(CubeAxesXCustomRange);
        CubeAxesXCustomRangeMax->setObjectName(QString::fromUtf8("CubeAxesXCustomRangeMax"));

        horizontalLayout_7->addWidget(CubeAxesXCustomRangeMax);


        gridLayout->addWidget(CubeAxesXCustomRange, 7, 0, 1, 1);

        UseOriginalBoundsRangeForX = new QCheckBox(xtab);
        UseOriginalBoundsRangeForX->setObjectName(QString::fromUtf8("UseOriginalBoundsRangeForX"));

        gridLayout->addWidget(UseOriginalBoundsRangeForX, 5, 0, 1, 1);

        tabWidget->addTab(xtab, QString());
        ytab = new QWidget();
        ytab->setObjectName(QString::fromUtf8("ytab"));
        gridLayout1 = new QGridLayout(ytab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        CubeAxesYGridLines = new QCheckBox(ytab);
        CubeAxesYGridLines->setObjectName(QString::fromUtf8("CubeAxesYGridLines"));

        gridLayout1->addWidget(CubeAxesYGridLines, 4, 0, 1, 2);

        CubeAxesYAxisMinorTickVisibility = new QCheckBox(ytab);
        CubeAxesYAxisMinorTickVisibility->setObjectName(QString::fromUtf8("CubeAxesYAxisMinorTickVisibility"));

        gridLayout1->addWidget(CubeAxesYAxisMinorTickVisibility, 3, 0, 1, 2);

        CubeAxesYAxisVisibility = new QCheckBox(ytab);
        CubeAxesYAxisVisibility->setObjectName(QString::fromUtf8("CubeAxesYAxisVisibility"));

        gridLayout1->addWidget(CubeAxesYAxisVisibility, 1, 0, 1, 2);

        CubeAxesYAxisTickVisibility = new QCheckBox(ytab);
        CubeAxesYAxisTickVisibility->setObjectName(QString::fromUtf8("CubeAxesYAxisTickVisibility"));

        gridLayout1->addWidget(CubeAxesYAxisTickVisibility, 2, 0, 1, 2);

        CubeAxesYCustomBounds = new QGroupBox(ytab);
        CubeAxesYCustomBounds->setObjectName(QString::fromUtf8("CubeAxesYCustomBounds"));
        CubeAxesYCustomBounds->setCheckable(true);
        CubeAxesYCustomBounds->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(CubeAxesYCustomBounds);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        CubeAxesYCustomBoundsMin = new QLineEdit(CubeAxesYCustomBounds);
        CubeAxesYCustomBoundsMin->setObjectName(QString::fromUtf8("CubeAxesYCustomBoundsMin"));

        horizontalLayout_2->addWidget(CubeAxesYCustomBoundsMin);

        CubeAxesYCustomBoundsMax = new QLineEdit(CubeAxesYCustomBounds);
        CubeAxesYCustomBoundsMax->setObjectName(QString::fromUtf8("CubeAxesYCustomBoundsMax"));

        horizontalLayout_2->addWidget(CubeAxesYCustomBoundsMax);


        gridLayout1->addWidget(CubeAxesYCustomBounds, 6, 0, 1, 1);

        widget_2 = new QWidget(ytab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        CubeAxesYTitle = new QLineEdit(widget_2);
        CubeAxesYTitle->setObjectName(QString::fromUtf8("CubeAxesYTitle"));

        horizontalLayout_5->addWidget(CubeAxesYTitle);

        CubeAxesUseDefaultYTitle = new QCheckBox(widget_2);
        CubeAxesUseDefaultYTitle->setObjectName(QString::fromUtf8("CubeAxesUseDefaultYTitle"));
        CubeAxesUseDefaultYTitle->setChecked(true);

        horizontalLayout_5->addWidget(CubeAxesUseDefaultYTitle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout1->addWidget(widget_2, 0, 0, 1, 1);

        CubeAxesYCustomRange = new QGroupBox(ytab);
        CubeAxesYCustomRange->setObjectName(QString::fromUtf8("CubeAxesYCustomRange"));
        CubeAxesYCustomRange->setCheckable(true);
        CubeAxesYCustomRange->setChecked(false);
        horizontalLayout_8 = new QHBoxLayout(CubeAxesYCustomRange);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        CubeAxesYCustomRangeMin = new QLineEdit(CubeAxesYCustomRange);
        CubeAxesYCustomRangeMin->setObjectName(QString::fromUtf8("CubeAxesYCustomRangeMin"));

        horizontalLayout_8->addWidget(CubeAxesYCustomRangeMin);

        CubeAxesYCustomRangeMax = new QLineEdit(CubeAxesYCustomRange);
        CubeAxesYCustomRangeMax->setObjectName(QString::fromUtf8("CubeAxesYCustomRangeMax"));

        horizontalLayout_8->addWidget(CubeAxesYCustomRangeMax);


        gridLayout1->addWidget(CubeAxesYCustomRange, 7, 0, 1, 1);

        UseOriginalBoundsRangeForY = new QCheckBox(ytab);
        UseOriginalBoundsRangeForY->setObjectName(QString::fromUtf8("UseOriginalBoundsRangeForY"));

        gridLayout1->addWidget(UseOriginalBoundsRangeForY, 5, 0, 1, 1);

        tabWidget->addTab(ytab, QString());
        ztab = new QWidget();
        ztab->setObjectName(QString::fromUtf8("ztab"));
        gridLayout2 = new QGridLayout(ztab);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        CubeAxesZGridLines = new QCheckBox(ztab);
        CubeAxesZGridLines->setObjectName(QString::fromUtf8("CubeAxesZGridLines"));

        gridLayout2->addWidget(CubeAxesZGridLines, 4, 0, 1, 2);

        CubeAxesZAxisVisibility = new QCheckBox(ztab);
        CubeAxesZAxisVisibility->setObjectName(QString::fromUtf8("CubeAxesZAxisVisibility"));

        gridLayout2->addWidget(CubeAxesZAxisVisibility, 1, 0, 1, 2);

        CubeAxesZAxisMinorTickVisibility = new QCheckBox(ztab);
        CubeAxesZAxisMinorTickVisibility->setObjectName(QString::fromUtf8("CubeAxesZAxisMinorTickVisibility"));

        gridLayout2->addWidget(CubeAxesZAxisMinorTickVisibility, 3, 0, 1, 2);

        CubeAxesZAxisTickVisibility = new QCheckBox(ztab);
        CubeAxesZAxisTickVisibility->setObjectName(QString::fromUtf8("CubeAxesZAxisTickVisibility"));

        gridLayout2->addWidget(CubeAxesZAxisTickVisibility, 2, 0, 1, 2);

        CubeAxesZCustomBounds = new QGroupBox(ztab);
        CubeAxesZCustomBounds->setObjectName(QString::fromUtf8("CubeAxesZCustomBounds"));
        CubeAxesZCustomBounds->setCheckable(true);
        CubeAxesZCustomBounds->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(CubeAxesZCustomBounds);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        CubeAxesZCustomBoundsMin = new QLineEdit(CubeAxesZCustomBounds);
        CubeAxesZCustomBoundsMin->setObjectName(QString::fromUtf8("CubeAxesZCustomBoundsMin"));

        horizontalLayout_3->addWidget(CubeAxesZCustomBoundsMin);

        CubeAxesZCustomBoundsMax = new QLineEdit(CubeAxesZCustomBounds);
        CubeAxesZCustomBoundsMax->setObjectName(QString::fromUtf8("CubeAxesZCustomBoundsMax"));

        horizontalLayout_3->addWidget(CubeAxesZCustomBoundsMax);


        gridLayout2->addWidget(CubeAxesZCustomBounds, 6, 0, 1, 1);

        widget_3 = new QWidget(ztab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        CubeAxesZTitle = new QLineEdit(widget_3);
        CubeAxesZTitle->setObjectName(QString::fromUtf8("CubeAxesZTitle"));

        horizontalLayout_6->addWidget(CubeAxesZTitle);

        CubeAxesUseDefaultZTitle = new QCheckBox(widget_3);
        CubeAxesUseDefaultZTitle->setObjectName(QString::fromUtf8("CubeAxesUseDefaultZTitle"));
        CubeAxesUseDefaultZTitle->setChecked(true);

        horizontalLayout_6->addWidget(CubeAxesUseDefaultZTitle);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout2->addWidget(widget_3, 0, 0, 1, 1);

        CubeAxesZCustomRange = new QGroupBox(ztab);
        CubeAxesZCustomRange->setObjectName(QString::fromUtf8("CubeAxesZCustomRange"));
        CubeAxesZCustomRange->setCheckable(true);
        CubeAxesZCustomRange->setChecked(false);
        horizontalLayout_9 = new QHBoxLayout(CubeAxesZCustomRange);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        CubeAxesZCustomRangeMin = new QLineEdit(CubeAxesZCustomRange);
        CubeAxesZCustomRangeMin->setObjectName(QString::fromUtf8("CubeAxesZCustomRangeMin"));

        horizontalLayout_9->addWidget(CubeAxesZCustomRangeMin);

        CubeAxesZCustomRangeMax = new QLineEdit(CubeAxesZCustomRange);
        CubeAxesZCustomRangeMax->setObjectName(QString::fromUtf8("CubeAxesZCustomRangeMax"));

        horizontalLayout_9->addWidget(CubeAxesZCustomRangeMax);


        gridLayout2->addWidget(CubeAxesZCustomRange, 7, 0, 1, 1);

        UseOriginalBoundsRangeForZ = new QCheckBox(ztab);
        UseOriginalBoundsRangeForZ->setObjectName(QString::fromUtf8("UseOriginalBoundsRangeForZ"));

        gridLayout2->addWidget(UseOriginalBoundsRangeForZ, 5, 0, 1, 1);

        tabWidget->addTab(ztab, QString());

        verticalLayout->addWidget(tabWidget);

        FormLayout = new QGridLayout();
        FormLayout->setObjectName(QString::fromUtf8("FormLayout"));
        CubeAxesTickLocation = new QComboBox(CubeAxesEditorDialog);
        CubeAxesTickLocation->setObjectName(QString::fromUtf8("CubeAxesTickLocation"));

        FormLayout->addWidget(CubeAxesTickLocation, 1, 1, 1, 1);

        StickyAxes = new QCheckBox(CubeAxesEditorDialog);
        StickyAxes->setObjectName(QString::fromUtf8("StickyAxes"));

        FormLayout->addWidget(StickyAxes, 5, 1, 1, 1);

        label_9 = new QLabel(CubeAxesEditorDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        FormLayout->addWidget(label_9, 5, 0, 1, 1);

        label = new QLabel(CubeAxesEditorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        FormLayout->addWidget(label, 0, 0, 1, 1);

        CubeAxesFlyMode = new QComboBox(CubeAxesEditorDialog);
        CubeAxesFlyMode->setObjectName(QString::fromUtf8("CubeAxesFlyMode"));

        FormLayout->addWidget(CubeAxesFlyMode, 0, 1, 1, 1);

        label_3 = new QLabel(CubeAxesEditorDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        FormLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(CubeAxesEditorDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        FormLayout->addWidget(label_2, 2, 0, 1, 1);

        CubeAxesCornerOffset = new QDoubleSpinBox(CubeAxesEditorDialog);
        CubeAxesCornerOffset->setObjectName(QString::fromUtf8("CubeAxesCornerOffset"));
        CubeAxesCornerOffset->setMaximum(1);
        CubeAxesCornerOffset->setSingleStep(0.05);

        FormLayout->addWidget(CubeAxesCornerOffset, 2, 1, 1, 1);

        label_4 = new QLabel(CubeAxesEditorDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        FormLayout->addWidget(label_4, 3, 0, 1, 1);

        CubeAxesGridLineLocation = new QComboBox(CubeAxesEditorDialog);
        CubeAxesGridLineLocation->setObjectName(QString::fromUtf8("CubeAxesGridLineLocation"));

        FormLayout->addWidget(CubeAxesGridLineLocation, 3, 1, 1, 1);

        label_8 = new QLabel(CubeAxesEditorDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        FormLayout->addWidget(label_8, 4, 0, 1, 1);

        UseAxesOrigin = new QCheckBox(CubeAxesEditorDialog);
        UseAxesOrigin->setObjectName(QString::fromUtf8("UseAxesOrigin"));
        UseAxesOrigin->setEnabled(true);

        FormLayout->addWidget(UseAxesOrigin, 4, 1, 1, 1);

        label_10 = new QLabel(CubeAxesEditorDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        FormLayout->addWidget(label_10, 6, 0, 1, 1);

        CenterStickyAxes = new QCheckBox(CubeAxesEditorDialog);
        CenterStickyAxes->setObjectName(QString::fromUtf8("CenterStickyAxes"));

        FormLayout->addWidget(CenterStickyAxes, 6, 1, 1, 1);


        verticalLayout->addLayout(FormLayout);

        AxesOriginLayout = new QHBoxLayout();
        AxesOriginLayout->setObjectName(QString::fromUtf8("AxesOriginLayout"));
        AxesOriginLayout->setContentsMargins(-1, 0, -1, -1);
        AxesOriginX = new QLineEdit(CubeAxesEditorDialog);
        AxesOriginX->setObjectName(QString::fromUtf8("AxesOriginX"));
        AxesOriginX->setEnabled(true);

        AxesOriginLayout->addWidget(AxesOriginX);

        AxesOriginY = new QLineEdit(CubeAxesEditorDialog);
        AxesOriginY->setObjectName(QString::fromUtf8("AxesOriginY"));
        AxesOriginY->setEnabled(true);

        AxesOriginLayout->addWidget(AxesOriginY);

        AxesOriginZ = new QLineEdit(CubeAxesEditorDialog);
        AxesOriginZ->setObjectName(QString::fromUtf8("AxesOriginZ"));
        AxesOriginZ->setEnabled(true);

        AxesOriginLayout->addWidget(AxesOriginZ);


        verticalLayout->addLayout(AxesOriginLayout);

        Color = new pqColorChooserButtonWithPalettes(CubeAxesEditorDialog);
        Color->setObjectName(QString::fromUtf8("Color"));
        Color->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Color->sizePolicy().hasHeightForWidth());
        Color->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(Color);

        VerticalSpacer = new QSpacerItem(313, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(VerticalSpacer);

        ButtonLayout = new QHBoxLayout();
        ButtonLayout->setSpacing(4);
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        HorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ButtonLayout->addItem(HorizontalSpacer);

        Ok = new QPushButton(CubeAxesEditorDialog);
        Ok->setObjectName(QString::fromUtf8("Ok"));

        ButtonLayout->addWidget(Ok);

        Cancel = new QPushButton(CubeAxesEditorDialog);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        ButtonLayout->addWidget(Cancel);


        verticalLayout->addLayout(ButtonLayout);

        QWidget::setTabOrder(tabWidget, CubeAxesXAxisVisibility);
        QWidget::setTabOrder(CubeAxesXAxisVisibility, CubeAxesXAxisTickVisibility);
        QWidget::setTabOrder(CubeAxesXAxisTickVisibility, CubeAxesXAxisMinorTickVisibility);
        QWidget::setTabOrder(CubeAxesXAxisMinorTickVisibility, CubeAxesXGridLines);
        QWidget::setTabOrder(CubeAxesXGridLines, CubeAxesYAxisVisibility);
        QWidget::setTabOrder(CubeAxesYAxisVisibility, CubeAxesYAxisTickVisibility);
        QWidget::setTabOrder(CubeAxesYAxisTickVisibility, CubeAxesYAxisMinorTickVisibility);
        QWidget::setTabOrder(CubeAxesYAxisMinorTickVisibility, CubeAxesYGridLines);
        QWidget::setTabOrder(CubeAxesYGridLines, CubeAxesZAxisVisibility);
        QWidget::setTabOrder(CubeAxesZAxisVisibility, CubeAxesZAxisTickVisibility);
        QWidget::setTabOrder(CubeAxesZAxisTickVisibility, CubeAxesZAxisMinorTickVisibility);
        QWidget::setTabOrder(CubeAxesZAxisMinorTickVisibility, CubeAxesZGridLines);
        QWidget::setTabOrder(CubeAxesZGridLines, CubeAxesFlyMode);
        QWidget::setTabOrder(CubeAxesFlyMode, CubeAxesTickLocation);
        QWidget::setTabOrder(CubeAxesTickLocation, CubeAxesCornerOffset);
        QWidget::setTabOrder(CubeAxesCornerOffset, Color);
        QWidget::setTabOrder(Color, Ok);
        QWidget::setTabOrder(Ok, Cancel);

        retranslateUi(CubeAxesEditorDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CubeAxesEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *CubeAxesEditorDialog)
    {
        CubeAxesEditorDialog->setWindowTitle(QApplication::translate("CubeAxesEditorDialog", "Edit Cube Axes Properties", 0, QApplication::UnicodeUTF8));
        CubeAxesXGridLines->setText(QApplication::translate("CubeAxesEditorDialog", "Show Grid Lines", 0, QApplication::UnicodeUTF8));
        CubeAxesXAxisMinorTickVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Minor Ticks", 0, QApplication::UnicodeUTF8));
        CubeAxesXAxisTickVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Ticks", 0, QApplication::UnicodeUTF8));
        CubeAxesXAxisVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Axis", 0, QApplication::UnicodeUTF8));
        CubeAxesXCustomBounds->setTitle(QApplication::translate("CubeAxesEditorDialog", "Custom Bounds", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CubeAxesEditorDialog", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CubeAxesUseDefaultXTitle->setToolTip(QApplication::translate("CubeAxesEditorDialog", "Uncheck to override any provided AxisTitle inside FieldData", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        CubeAxesUseDefaultXTitle->setText(QString());
        CubeAxesXCustomRange->setTitle(QApplication::translate("CubeAxesEditorDialog", "Custom Range", 0, QApplication::UnicodeUTF8));
        UseOriginalBoundsRangeForX->setText(QApplication::translate("CubeAxesEditorDialog", "Original Bounds as Range", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(xtab), QApplication::translate("CubeAxesEditorDialog", "X Axis", 0, QApplication::UnicodeUTF8));
        CubeAxesYGridLines->setText(QApplication::translate("CubeAxesEditorDialog", "Show Grid Lines", 0, QApplication::UnicodeUTF8));
        CubeAxesYAxisMinorTickVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Minor Ticks", 0, QApplication::UnicodeUTF8));
        CubeAxesYAxisVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Axis", 0, QApplication::UnicodeUTF8));
        CubeAxesYAxisTickVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Ticks", 0, QApplication::UnicodeUTF8));
        CubeAxesYCustomBounds->setTitle(QApplication::translate("CubeAxesEditorDialog", "Custom Bounds", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CubeAxesEditorDialog", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CubeAxesUseDefaultYTitle->setToolTip(QApplication::translate("CubeAxesEditorDialog", "Uncheck to override any provided AxisTitle inside FieldData", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        CubeAxesUseDefaultYTitle->setText(QString());
        CubeAxesYCustomRange->setTitle(QApplication::translate("CubeAxesEditorDialog", "Custom Range", 0, QApplication::UnicodeUTF8));
        UseOriginalBoundsRangeForY->setText(QApplication::translate("CubeAxesEditorDialog", "Original Bounds as Range", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ytab), QApplication::translate("CubeAxesEditorDialog", "Y Axis", 0, QApplication::UnicodeUTF8));
        CubeAxesZGridLines->setText(QApplication::translate("CubeAxesEditorDialog", "Show Grid Lines", 0, QApplication::UnicodeUTF8));
        CubeAxesZAxisVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Axis", 0, QApplication::UnicodeUTF8));
        CubeAxesZAxisMinorTickVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Minor Ticks", 0, QApplication::UnicodeUTF8));
        CubeAxesZAxisTickVisibility->setText(QApplication::translate("CubeAxesEditorDialog", "Show Ticks", 0, QApplication::UnicodeUTF8));
        CubeAxesZCustomBounds->setTitle(QApplication::translate("CubeAxesEditorDialog", "Custom Bounds", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CubeAxesEditorDialog", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CubeAxesUseDefaultZTitle->setToolTip(QApplication::translate("CubeAxesEditorDialog", "Uncheck to override any provided AxisTitle inside FieldData", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        CubeAxesUseDefaultZTitle->setText(QString());
        CubeAxesZCustomRange->setTitle(QApplication::translate("CubeAxesEditorDialog", "Custom Range", 0, QApplication::UnicodeUTF8));
        UseOriginalBoundsRangeForZ->setText(QApplication::translate("CubeAxesEditorDialog", "Original Bounds as Range", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ztab), QApplication::translate("CubeAxesEditorDialog", "Z Axis", 0, QApplication::UnicodeUTF8));
        CubeAxesTickLocation->clear();
        CubeAxesTickLocation->insertItems(0, QStringList()
         << QApplication::translate("CubeAxesEditorDialog", "Inside", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Outside", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Both", 0, QApplication::UnicodeUTF8)
        );
        StickyAxes->setText(QString());
        label_9->setText(QApplication::translate("CubeAxesEditorDialog", "Sticky Axes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CubeAxesEditorDialog", "Fly Mode", 0, QApplication::UnicodeUTF8));
        CubeAxesFlyMode->clear();
        CubeAxesFlyMode->insertItems(0, QStringList()
         << QApplication::translate("CubeAxesEditorDialog", "Outer Edges", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Closest Triad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Furthest Triad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Static Triad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Static Edges", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("CubeAxesEditorDialog", "Tick Location", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CubeAxesEditorDialog", "Corner Offset", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CubeAxesEditorDialog", "Grid Line Location", 0, QApplication::UnicodeUTF8));
        CubeAxesGridLineLocation->clear();
        CubeAxesGridLineLocation->insertItems(0, QStringList()
         << QApplication::translate("CubeAxesEditorDialog", "All Faces", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Furthest Faces", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CubeAxesEditorDialog", "Closest Faces", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("CubeAxesEditorDialog", "Custom Axes Origin", 0, QApplication::UnicodeUTF8));
        UseAxesOrigin->setText(QString());
        label_10->setText(QApplication::translate("CubeAxesEditorDialog", "Center Sticky Axes", 0, QApplication::UnicodeUTF8));
        CenterStickyAxes->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color->setToolTip(QApplication::translate("CubeAxesEditorDialog", "<html>Set the color to use for axes.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Color->setText(QApplication::translate("CubeAxesEditorDialog", "Set Axes Color...", 0, QApplication::UnicodeUTF8));
        Ok->setText(QApplication::translate("CubeAxesEditorDialog", "Ok", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("CubeAxesEditorDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CubeAxesEditorDialog: public Ui_CubeAxesEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUBEAXESEDITORDIALOG_H
