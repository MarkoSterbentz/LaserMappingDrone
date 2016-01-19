/********************************************************************************
** Form generated from reading UI file 'pqBackgroundEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQBACKGROUNDEDITORWIDGET_H
#define UI_PQBACKGROUNDEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqColorChooserButtonWithPalettes.h"
#include "pqTextureComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_BackgroundEditorWidget
{
public:
    QVBoxLayout *mainLayout;
    QComboBox *BackgroundType;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QGridLayout *page1Layout;
    pqColorChooserButtonWithPalettes *Color;
    QPushButton *RestoreDefaultColor;
    pqColorChooserButtonWithPalettes *Color2;
    QPushButton *RestoreDefaultColor2;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QVBoxLayout *page3Layout;
    pqTextureComboBox *Image;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BackgroundEditorWidget)
    {
        if (BackgroundEditorWidget->objectName().isEmpty())
            BackgroundEditorWidget->setObjectName(QString::fromUtf8("BackgroundEditorWidget"));
        BackgroundEditorWidget->resize(231, 135);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BackgroundEditorWidget->sizePolicy().hasHeightForWidth());
        BackgroundEditorWidget->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(BackgroundEditorWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        BackgroundType = new QComboBox(BackgroundEditorWidget);
        BackgroundType->setObjectName(QString::fromUtf8("BackgroundType"));

        mainLayout->addWidget(BackgroundType);

        stackedWidget = new QStackedWidget(BackgroundEditorWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        page1Layout = new QGridLayout(page_1);
        page1Layout->setObjectName(QString::fromUtf8("page1Layout"));
        Color = new pqColorChooserButtonWithPalettes(page_1);
        Color->setObjectName(QString::fromUtf8("Color"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Color->sizePolicy().hasHeightForWidth());
        Color->setSizePolicy(sizePolicy1);

        page1Layout->addWidget(Color, 0, 0, 1, 1);

        RestoreDefaultColor = new QPushButton(page_1);
        RestoreDefaultColor->setObjectName(QString::fromUtf8("RestoreDefaultColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RestoreDefaultColor->sizePolicy().hasHeightForWidth());
        RestoreDefaultColor->setSizePolicy(sizePolicy2);
        RestoreDefaultColor->setMaximumSize(QSize(16777215, 16777215));

        page1Layout->addWidget(RestoreDefaultColor, 0, 1, 1, 1);

        Color2 = new pqColorChooserButtonWithPalettes(page_1);
        Color2->setObjectName(QString::fromUtf8("Color2"));
        sizePolicy1.setHeightForWidth(Color2->sizePolicy().hasHeightForWidth());
        Color2->setSizePolicy(sizePolicy1);

        page1Layout->addWidget(Color2, 1, 0, 1, 1);

        RestoreDefaultColor2 = new QPushButton(page_1);
        RestoreDefaultColor2->setObjectName(QString::fromUtf8("RestoreDefaultColor2"));
        sizePolicy2.setHeightForWidth(RestoreDefaultColor2->sizePolicy().hasHeightForWidth());
        RestoreDefaultColor2->setSizePolicy(sizePolicy2);
        RestoreDefaultColor2->setMinimumSize(QSize(0, 0));
        RestoreDefaultColor2->setMaximumSize(QSize(16777215, 16777215));

        page1Layout->addWidget(RestoreDefaultColor2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        page1Layout->addItem(verticalSpacer, 2, 0, 1, 1);

        page1Layout->setColumnStretch(0, 1);
        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page3Layout = new QVBoxLayout(page_3);
        page3Layout->setObjectName(QString::fromUtf8("page3Layout"));
        Image = new pqTextureComboBox(page_3);
        Image->setObjectName(QString::fromUtf8("Image"));
        sizePolicy1.setHeightForWidth(Image->sizePolicy().hasHeightForWidth());
        Image->setSizePolicy(sizePolicy1);
        Image->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        page3Layout->addWidget(Image);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        page3Layout->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page_3);

        mainLayout->addWidget(stackedWidget);


        retranslateUi(BackgroundEditorWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BackgroundEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *BackgroundEditorWidget)
    {
        BackgroundType->clear();
        BackgroundType->insertItems(0, QStringList()
         << QApplication::translate("BackgroundEditorWidget", "Single color", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BackgroundEditorWidget", "Gradient", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BackgroundEditorWidget", "Image", 0, QApplication::UnicodeUTF8)
        );
        Color->setText(QApplication::translate("BackgroundEditorWidget", "Color", 0, QApplication::UnicodeUTF8));
        RestoreDefaultColor->setText(QApplication::translate("BackgroundEditorWidget", "Restore Default", 0, QApplication::UnicodeUTF8));
        Color2->setText(QApplication::translate("BackgroundEditorWidget", "Color 2", 0, QApplication::UnicodeUTF8));
        RestoreDefaultColor2->setText(QApplication::translate("BackgroundEditorWidget", "Restore Default", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(BackgroundEditorWidget);
    } // retranslateUi

};

namespace Ui {
    class BackgroundEditorWidget: public Ui_BackgroundEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQBACKGROUNDEDITORWIDGET_H
