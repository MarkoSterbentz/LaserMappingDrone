/********************************************************************************
** Form generated from reading UI file 'pqColorOpacityEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLOROPACITYEDITORWIDGET_H
#define UI_PQCOLOROPACITYEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqExpandableTableView.h"
#include "pqLineEdit.h"
#include "pqTransferFunctionWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ColorOpacityEditorWidget
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    pqTransferFunctionWidget *OpacityEditor;
    pqTransferFunctionWidget *ColorEditor;
    QVBoxLayout *verticalLayout_2;
    QToolButton *ResetRangeToData;
    QToolButton *ResetRangeToCustom;
    QToolButton *ResetRangeToDataOverTime;
    QToolButton *ResetRangeToVisibleData;
    QToolButton *InvertTransferFunctions;
    QSpacerItem *verticalSpacer;
    QToolButton *ChoosePreset;
    QToolButton *SaveAsPreset;
    QToolButton *AdvancedButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    pqLineEdit *CurrentDataValue;
    QCheckBox *UseLogScale;
    QCheckBox *EnableOpacityMapping;
    QCheckBox *AutoRescaleRange;
    QLabel *ColorLabel;
    pqExpandableTableView *ColorTable;
    QLabel *OpacityLabel;
    pqExpandableTableView *OpacityTable;

    void setupUi(QWidget *ColorOpacityEditorWidget)
    {
        if (ColorOpacityEditorWidget->objectName().isEmpty())
            ColorOpacityEditorWidget->setObjectName(QString::fromUtf8("ColorOpacityEditorWidget"));
        ColorOpacityEditorWidget->resize(395, 758);
        mainLayout = new QVBoxLayout(ColorOpacityEditorWidget);
        mainLayout->setSpacing(6);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        OpacityEditor = new pqTransferFunctionWidget(ColorOpacityEditorWidget);
        OpacityEditor->setObjectName(QString::fromUtf8("OpacityEditor"));
        OpacityEditor->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(OpacityEditor);

        ColorEditor = new pqTransferFunctionWidget(ColorOpacityEditorWidget);
        ColorEditor->setObjectName(QString::fromUtf8("ColorEditor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColorEditor->sizePolicy().hasHeightForWidth());
        ColorEditor->setSizePolicy(sizePolicy);
        ColorEditor->setMinimumSize(QSize(40, 40));
        ColorEditor->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(ColorEditor);

        verticalLayout->setStretch(0, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ResetRangeToData = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToData->setObjectName(QString::fromUtf8("ResetRangeToData"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqResetRange24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToData->setIcon(icon);

        verticalLayout_2->addWidget(ResetRangeToData);

        ResetRangeToCustom = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToCustom->setObjectName(QString::fromUtf8("ResetRangeToCustom"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqResetRangeCustom24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToCustom->setIcon(icon1);

        verticalLayout_2->addWidget(ResetRangeToCustom);

        ResetRangeToDataOverTime = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToDataOverTime->setObjectName(QString::fromUtf8("ResetRangeToDataOverTime"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqResetRangeTemporal24.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToDataOverTime->setIcon(icon2);

        verticalLayout_2->addWidget(ResetRangeToDataOverTime);

        ResetRangeToVisibleData = new QToolButton(ColorOpacityEditorWidget);
        ResetRangeToVisibleData->setObjectName(QString::fromUtf8("ResetRangeToVisibleData"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqResetToVisibleRange32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetRangeToVisibleData->setIcon(icon3);

        verticalLayout_2->addWidget(ResetRangeToVisibleData);

        InvertTransferFunctions = new QToolButton(ColorOpacityEditorWidget);
        InvertTransferFunctions->setObjectName(QString::fromUtf8("InvertTransferFunctions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqInvert24.png"), QSize(), QIcon::Normal, QIcon::Off);
        InvertTransferFunctions->setIcon(icon4);

        verticalLayout_2->addWidget(InvertTransferFunctions);

        verticalSpacer = new QSpacerItem(0, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        ChoosePreset = new QToolButton(ColorOpacityEditorWidget);
        ChoosePreset->setObjectName(QString::fromUtf8("ChoosePreset"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqFavorites16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChoosePreset->setIcon(icon5);

        verticalLayout_2->addWidget(ChoosePreset);

        SaveAsPreset = new QToolButton(ColorOpacityEditorWidget);
        SaveAsPreset->setObjectName(QString::fromUtf8("SaveAsPreset"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqSave16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAsPreset->setIcon(icon6);

        verticalLayout_2->addWidget(SaveAsPreset);

        AdvancedButton = new QToolButton(ColorOpacityEditorWidget);
        AdvancedButton->setObjectName(QString::fromUtf8("AdvancedButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqAdvanced26.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdvancedButton->setIcon(icon7);
        AdvancedButton->setCheckable(true);

        verticalLayout_2->addWidget(AdvancedButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 1);

        mainLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ColorOpacityEditorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        CurrentDataValue = new pqLineEdit(ColorOpacityEditorWidget);
        CurrentDataValue->setObjectName(QString::fromUtf8("CurrentDataValue"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CurrentDataValue->sizePolicy().hasHeightForWidth());
        CurrentDataValue->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(CurrentDataValue);

        horizontalLayout->setStretch(1, 1);

        mainLayout->addLayout(horizontalLayout);

        UseLogScale = new QCheckBox(ColorOpacityEditorWidget);
        UseLogScale->setObjectName(QString::fromUtf8("UseLogScale"));

        mainLayout->addWidget(UseLogScale);

        EnableOpacityMapping = new QCheckBox(ColorOpacityEditorWidget);
        EnableOpacityMapping->setObjectName(QString::fromUtf8("EnableOpacityMapping"));

        mainLayout->addWidget(EnableOpacityMapping);

        AutoRescaleRange = new QCheckBox(ColorOpacityEditorWidget);
        AutoRescaleRange->setObjectName(QString::fromUtf8("AutoRescaleRange"));

        mainLayout->addWidget(AutoRescaleRange);

        ColorLabel = new QLabel(ColorOpacityEditorWidget);
        ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ColorLabel->sizePolicy().hasHeightForWidth());
        ColorLabel->setSizePolicy(sizePolicy2);

        mainLayout->addWidget(ColorLabel);

        ColorTable = new pqExpandableTableView(ColorOpacityEditorWidget);
        ColorTable->setObjectName(QString::fromUtf8("ColorTable"));
        ColorTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        ColorTable->setAlternatingRowColors(true);
        ColorTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ColorTable->setProperty("maximumRowCountBeforeScrolling", QVariant(10));

        mainLayout->addWidget(ColorTable);

        OpacityLabel = new QLabel(ColorOpacityEditorWidget);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        mainLayout->addWidget(OpacityLabel);

        OpacityTable = new pqExpandableTableView(ColorOpacityEditorWidget);
        OpacityTable->setObjectName(QString::fromUtf8("OpacityTable"));
        OpacityTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        OpacityTable->setAlternatingRowColors(true);
        OpacityTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        OpacityTable->setProperty("maximumRowCountBeforeScrolling", QVariant(10));

        mainLayout->addWidget(OpacityTable);


        retranslateUi(ColorOpacityEditorWidget);

        QMetaObject::connectSlotsByName(ColorOpacityEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorOpacityEditorWidget)
    {
        ColorOpacityEditorWidget->setWindowTitle(QApplication::translate("ColorOpacityEditorWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ResetRangeToData->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to data range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ResetRangeToData->setText(QString());
#ifndef QT_NO_TOOLTIP
        ResetRangeToCustom->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to custom range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ResetRangeToCustom->setText(QString());
#ifndef QT_NO_TOOLTIP
        ResetRangeToDataOverTime->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to data range over all timesteps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ResetRangeToDataOverTime->setText(QString());
#ifndef QT_NO_TOOLTIP
        ResetRangeToVisibleData->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Rescale to visible range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ResetRangeToVisibleData->setText(QString());
#ifndef QT_NO_TOOLTIP
        InvertTransferFunctions->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Invert the transfer functions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InvertTransferFunctions->setText(QString());
#ifndef QT_NO_TOOLTIP
        ChoosePreset->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Choose preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ChoosePreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsPreset->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Save to preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SaveAsPreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        AdvancedButton->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "Manually edit transfer functions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AdvancedButton->setText(QString());
        label->setText(QApplication::translate("ColorOpacityEditorWidget", "Data:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        UseLogScale->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "<html><head/><body><p>When checked, the mapping from data to colors is done using a log-scale. Note that this does not affect the mapping of data to opacity.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        UseLogScale->setText(QApplication::translate("ColorOpacityEditorWidget", "Use log scale when mapping data to colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        EnableOpacityMapping->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "<html><head/><body><p>When checked, the opacity function is used to render translucent surfaces.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EnableOpacityMapping->setText(QApplication::translate("ColorOpacityEditorWidget", "Enable opacity mapping for surfaces", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AutoRescaleRange->setToolTip(QApplication::translate("ColorOpacityEditorWidget", "<html><head/><body><p>When checked, the transfer function will be rescaled using updated data ranges on Apply</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AutoRescaleRange->setText(QApplication::translate("ColorOpacityEditorWidget", "Automatically rescale color map range to fit data", 0, QApplication::UnicodeUTF8));
        ColorLabel->setText(QApplication::translate("ColorOpacityEditorWidget", "Color transfer function values", 0, QApplication::UnicodeUTF8));
        OpacityLabel->setText(QApplication::translate("ColorOpacityEditorWidget", "Opacity transfer function values", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorOpacityEditorWidget: public Ui_ColorOpacityEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLOROPACITYEDITORWIDGET_H
