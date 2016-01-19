/********************************************************************************
** Form generated from reading UI file 'pqColorMapEditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORMAPEDITOR_H
#define UI_PQCOLORMAPEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_ColorMapEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *SearchBoxLayout;
    pqSearchBox *SearchBox;
    QToolButton *ShowScalarBar;
    QToolButton *EditScalarBar;
    QLabel *ArrayLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ScrollAreaLayout;
    QFrame *PropertiesFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *RestoreDefaults;
    QPushButton *SaveAsArrayDefaults;
    QPushButton *SaveAsDefaults;
    QSpacerItem *horizontalSpacer;
    QPushButton *Update;
    QPushButton *AutoUpdate;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ColorMapEditor)
    {
        if (ColorMapEditor->objectName().isEmpty())
            ColorMapEditor->setObjectName(QString::fromUtf8("ColorMapEditor"));
        ColorMapEditor->resize(390, 126);
        ColorMapEditor->setMinimumSize(QSize(390, 0));
        verticalLayout = new QVBoxLayout(ColorMapEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SearchBoxLayout = new QHBoxLayout();
        SearchBoxLayout->setSpacing(2);
        SearchBoxLayout->setObjectName(QString::fromUtf8("SearchBoxLayout"));
        SearchBox = new pqSearchBox(ColorMapEditor);
        SearchBox->setObjectName(QString::fromUtf8("SearchBox"));
        SearchBox->setProperty("advancedSearchEnabled", QVariant(true));
        SearchBox->setProperty("settingKey", QVariant(QString::fromUtf8("showAdvancedPropertiesColorMapEditor")));

        SearchBoxLayout->addWidget(SearchBox);

        ShowScalarBar = new QToolButton(ColorMapEditor);
        ShowScalarBar->setObjectName(QString::fromUtf8("ShowScalarBar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqScalarBar16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowScalarBar->setIcon(icon);
        ShowScalarBar->setCheckable(true);

        SearchBoxLayout->addWidget(ShowScalarBar);

        EditScalarBar = new QToolButton(ColorMapEditor);
        EditScalarBar->setObjectName(QString::fromUtf8("EditScalarBar"));
        EditScalarBar->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqEditScalarBar16.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditScalarBar->setIcon(icon1);

        SearchBoxLayout->addWidget(EditScalarBar);


        verticalLayout->addLayout(SearchBoxLayout);

        ArrayLabel = new QLabel(ColorMapEditor);
        ArrayLabel->setObjectName(QString::fromUtf8("ArrayLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        ArrayLabel->setFont(font);
        ArrayLabel->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(ArrayLabel);

        scrollArea = new QScrollArea(ColorMapEditor);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 372, 53));
        ScrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        ScrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        ScrollAreaLayout->setObjectName(QString::fromUtf8("ScrollAreaLayout"));
        PropertiesFrame = new QFrame(scrollAreaWidgetContents);
        PropertiesFrame->setObjectName(QString::fromUtf8("PropertiesFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PropertiesFrame->sizePolicy().hasHeightForWidth());
        PropertiesFrame->setSizePolicy(sizePolicy);
        PropertiesFrame->setFrameShape(QFrame::NoFrame);
        PropertiesFrame->setFrameShadow(QFrame::Plain);

        ScrollAreaLayout->addWidget(PropertiesFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RestoreDefaults = new QPushButton(scrollAreaWidgetContents);
        RestoreDefaults->setObjectName(QString::fromUtf8("RestoreDefaults"));
        RestoreDefaults->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqSave16.png"), QSize(), QIcon::Normal, QIcon::Off);
        RestoreDefaults->setIcon(icon2);

        horizontalLayout->addWidget(RestoreDefaults);

        SaveAsArrayDefaults = new QPushButton(scrollAreaWidgetContents);
        SaveAsArrayDefaults->setObjectName(QString::fromUtf8("SaveAsArrayDefaults"));
        SaveAsArrayDefaults->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqSaveArray16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAsArrayDefaults->setIcon(icon3);

        horizontalLayout->addWidget(SaveAsArrayDefaults);

        SaveAsDefaults = new QPushButton(scrollAreaWidgetContents);
        SaveAsDefaults->setObjectName(QString::fromUtf8("SaveAsDefaults"));
        SaveAsDefaults->setEnabled(false);

        horizontalLayout->addWidget(SaveAsDefaults);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Update = new QPushButton(scrollAreaWidgetContents);
        Update->setObjectName(QString::fromUtf8("Update"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqUpdate16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Update->setIcon(icon4);
        Update->setDefault(true);

        horizontalLayout->addWidget(Update);

        AutoUpdate = new QPushButton(scrollAreaWidgetContents);
        AutoUpdate->setObjectName(QString::fromUtf8("AutoUpdate"));
        AutoUpdate->setIcon(icon4);
        AutoUpdate->setCheckable(true);
        AutoUpdate->setDefault(false);

        horizontalLayout->addWidget(AutoUpdate);


        ScrollAreaLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ScrollAreaLayout->addItem(verticalSpacer);

        ScrollAreaLayout->setStretch(2, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ColorMapEditor);
        QObject::connect(ShowScalarBar, SIGNAL(toggled(bool)), EditScalarBar, SLOT(setEnabled(bool)));
        QObject::connect(AutoUpdate, SIGNAL(toggled(bool)), Update, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(ColorMapEditor);
    } // setupUi

    void retranslateUi(QWidget *ColorMapEditor)
    {
        ColorMapEditor->setWindowTitle(QApplication::translate("ColorMapEditor", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShowScalarBar->setToolTip(QApplication::translate("ColorMapEditor", "Show/hide color legend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShowScalarBar->setText(QString());
#ifndef QT_NO_TOOLTIP
        EditScalarBar->setToolTip(QApplication::translate("ColorMapEditor", "Edit color legend properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EditScalarBar->setText(QApplication::translate("ColorMapEditor", "...", 0, QApplication::UnicodeUTF8));
        ArrayLabel->setText(QApplication::translate("ColorMapEditor", "Array Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RestoreDefaults->setToolTip(QApplication::translate("ColorMapEditor", "Restore application default setting values for color map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsArrayDefaults->setToolTip(QApplication::translate("ColorMapEditor", "Save current color map settings values as default for array", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SaveAsArrayDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsDefaults->setToolTip(QApplication::translate("ColorMapEditor", "Save current color map settings values as default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SaveAsDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        Update->setToolTip(QApplication::translate("ColorMapEditor", "<html><head/><body><p>Update views.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Update->setText(QApplication::translate("ColorMapEditor", "Render Views", 0, QApplication::UnicodeUTF8));
        Update->setShortcut(QApplication::translate("ColorMapEditor", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AutoUpdate->setToolTip(QApplication::translate("ColorMapEditor", "<html><head/><body><p>Render view(s) automatically.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AutoUpdate->setText(QString());
        AutoUpdate->setShortcut(QApplication::translate("ColorMapEditor", "Alt+A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorMapEditor: public Ui_ColorMapEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORMAPEDITOR_H
