/********************************************************************************
** Form generated from reading UI file 'pqFontPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFONTPROPERTYWIDGET_H
#define UI_PQFONTPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "pqColorChooserButtonWithPalettes.h"

QT_BEGIN_NAMESPACE

class Ui_FontPropertyWidget
{
public:
    QHBoxLayout *mainLayout;
    QComboBox *FontFamily;
    QSpinBox *FontSize;
    pqColorChooserButtonWithPalettes *FontColor;
    QDoubleSpinBox *Opacity;
    QToolButton *Bold;
    QToolButton *Italics;
    QToolButton *Shadow;
    QToolButton *Justification;

    void setupUi(QWidget *FontPropertyWidget)
    {
        if (FontPropertyWidget->objectName().isEmpty())
            FontPropertyWidget->setObjectName(QString::fromUtf8("FontPropertyWidget"));
        FontPropertyWidget->resize(317, 51);
        mainLayout = new QHBoxLayout(FontPropertyWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        FontFamily = new QComboBox(FontPropertyWidget);
        FontFamily->setObjectName(QString::fromUtf8("FontFamily"));
        FontFamily->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        FontFamily->setMinimumContentsLength(2);

        mainLayout->addWidget(FontFamily);

        FontSize = new QSpinBox(FontPropertyWidget);
        FontSize->setObjectName(QString::fromUtf8("FontSize"));
        FontSize->setMinimum(1);

        mainLayout->addWidget(FontSize);

        FontColor = new pqColorChooserButtonWithPalettes(FontPropertyWidget);
        FontColor->setObjectName(QString::fromUtf8("FontColor"));

        mainLayout->addWidget(FontColor);

        Opacity = new QDoubleSpinBox(FontPropertyWidget);
        Opacity->setObjectName(QString::fromUtf8("Opacity"));
        Opacity->setMaximum(1);
        Opacity->setSingleStep(0.1);

        mainLayout->addWidget(Opacity);

        Bold = new QToolButton(FontPropertyWidget);
        Bold->setObjectName(QString::fromUtf8("Bold"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqBold16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bold->setIcon(icon);
        Bold->setCheckable(true);

        mainLayout->addWidget(Bold);

        Italics = new QToolButton(FontPropertyWidget);
        Italics->setObjectName(QString::fromUtf8("Italics"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqItalics16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Italics->setIcon(icon1);
        Italics->setCheckable(true);

        mainLayout->addWidget(Italics);

        Shadow = new QToolButton(FontPropertyWidget);
        Shadow->setObjectName(QString::fromUtf8("Shadow"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqShadow16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Shadow->setIcon(icon2);
        Shadow->setCheckable(true);

        mainLayout->addWidget(Shadow);

        Justification = new QToolButton(FontPropertyWidget);
        Justification->setObjectName(QString::fromUtf8("Justification"));
        Justification->setPopupMode(QToolButton::InstantPopup);

        mainLayout->addWidget(Justification);

        mainLayout->setStretch(0, 1);

        retranslateUi(FontPropertyWidget);

        QMetaObject::connectSlotsByName(FontPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *FontPropertyWidget)
    {
        FontPropertyWidget->setWindowTitle(QApplication::translate("FontPropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        FontFamily->setToolTip(QApplication::translate("FontPropertyWidget", "Select font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FontSize->setToolTip(QApplication::translate("FontPropertyWidget", "Set font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FontColor->setToolTip(QApplication::translate("FontPropertyWidget", "Set font color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        FontColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        Opacity->setToolTip(QApplication::translate("FontPropertyWidget", "Set font opacity", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Bold->setToolTip(QApplication::translate("FontPropertyWidget", "Bold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Bold->setText(QApplication::translate("FontPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Italics->setToolTip(QApplication::translate("FontPropertyWidget", "Italics", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Italics->setText(QApplication::translate("FontPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Shadow->setToolTip(QApplication::translate("FontPropertyWidget", "Shadow", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Shadow->setText(QApplication::translate("FontPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
        Justification->setText(QApplication::translate("FontPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FontPropertyWidget: public Ui_FontPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFONTPROPERTYWIDGET_H
