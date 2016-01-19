/********************************************************************************
** Form generated from reading UI file 'pqPropertiesPanel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROPERTIESPANEL_H
#define UI_PQPROPERTIESPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <pqExpanderButton.h>
#include "pqSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_propertiesPanel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *ButtonLayout;
    QPushButton *Accept;
    QPushButton *Reset;
    QPushButton *Delete;
    QPushButton *Help;
    QHBoxLayout *SearchBoxLayout;
    pqSearchBox *SearchBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ScrollAreaLayout;
    QWidget *PropertiesButtons;
    QHBoxLayout *horizontalLayout;
    pqExpanderButton *PropertiesButton;
    QPushButton *PropertiesRestoreDefaults;
    QPushButton *PropertiesSaveAsDefaults;
    QFrame *PropertiesFrame;
    QWidget *DisplayButtons;
    QHBoxLayout *horizontalLayout_2;
    pqExpanderButton *DisplayButton;
    QPushButton *DisplayRestoreDefaults;
    QPushButton *DisplaySaveAsDefaults;
    QFrame *DisplayFrame;
    QWidget *ViewButtons;
    QHBoxLayout *horizontalLayout_3;
    pqExpanderButton *ViewButton;
    QPushButton *ViewRestoreDefaults;
    QPushButton *ViewSaveAsDefaults;
    QFrame *ViewFrame;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *propertiesPanel)
    {
        if (propertiesPanel->objectName().isEmpty())
            propertiesPanel->setObjectName(QString::fromUtf8("propertiesPanel"));
        propertiesPanel->resize(350, 750);
        verticalLayout = new QVBoxLayout(propertiesPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ButtonLayout = new QHBoxLayout();
        ButtonLayout->setSpacing(2);
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        Accept = new QPushButton(propertiesPanel);
        Accept->setObjectName(QString::fromUtf8("Accept"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqUpdate16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Accept->setIcon(icon);
        Accept->setDefault(true);

        ButtonLayout->addWidget(Accept);

        Reset = new QPushButton(propertiesPanel);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqCancel16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Reset->setIcon(icon1);

        ButtonLayout->addWidget(Reset);

        Delete = new QPushButton(propertiesPanel);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Delete->setIcon(icon2);

        ButtonLayout->addWidget(Delete);

        Help = new QPushButton(propertiesPanel);
        Help->setObjectName(QString::fromUtf8("Help"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqHelp16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setIcon(icon3);

        ButtonLayout->addWidget(Help);


        verticalLayout->addLayout(ButtonLayout);

        SearchBoxLayout = new QHBoxLayout();
        SearchBoxLayout->setSpacing(2);
        SearchBoxLayout->setObjectName(QString::fromUtf8("SearchBoxLayout"));
        SearchBox = new pqSearchBox(propertiesPanel);
        SearchBox->setObjectName(QString::fromUtf8("SearchBox"));
        SearchBox->setProperty("settingKey", QVariant(QString::fromUtf8("showAdvancedProperties")));
        SearchBox->setProperty("advancedSearchEnabled", QVariant(true));

        SearchBoxLayout->addWidget(SearchBox);


        verticalLayout->addLayout(SearchBoxLayout);

        scrollArea = new QScrollArea(propertiesPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 332, 692));
        ScrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        ScrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        ScrollAreaLayout->setObjectName(QString::fromUtf8("ScrollAreaLayout"));
        PropertiesButtons = new QWidget(scrollAreaWidgetContents);
        PropertiesButtons->setObjectName(QString::fromUtf8("PropertiesButtons"));
        horizontalLayout = new QHBoxLayout(PropertiesButtons);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PropertiesButton = new pqExpanderButton(PropertiesButtons);
        PropertiesButton->setObjectName(QString::fromUtf8("PropertiesButton"));
        PropertiesButton->setProperty("checked", QVariant(true));

        horizontalLayout->addWidget(PropertiesButton);

        PropertiesRestoreDefaults = new QPushButton(PropertiesButtons);
        PropertiesRestoreDefaults->setObjectName(QString::fromUtf8("PropertiesRestoreDefaults"));

        horizontalLayout->addWidget(PropertiesRestoreDefaults);

        PropertiesSaveAsDefaults = new QPushButton(PropertiesButtons);
        PropertiesSaveAsDefaults->setObjectName(QString::fromUtf8("PropertiesSaveAsDefaults"));

        horizontalLayout->addWidget(PropertiesSaveAsDefaults);


        ScrollAreaLayout->addWidget(PropertiesButtons);

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

        DisplayButtons = new QWidget(scrollAreaWidgetContents);
        DisplayButtons->setObjectName(QString::fromUtf8("DisplayButtons"));
        horizontalLayout_2 = new QHBoxLayout(DisplayButtons);
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(6);
#endif
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        DisplayButton = new pqExpanderButton(DisplayButtons);
        DisplayButton->setObjectName(QString::fromUtf8("DisplayButton"));
        DisplayButton->setProperty("checked", QVariant(true));

        horizontalLayout_2->addWidget(DisplayButton);

        DisplayRestoreDefaults = new QPushButton(DisplayButtons);
        DisplayRestoreDefaults->setObjectName(QString::fromUtf8("DisplayRestoreDefaults"));

        horizontalLayout_2->addWidget(DisplayRestoreDefaults);

        DisplaySaveAsDefaults = new QPushButton(DisplayButtons);
        DisplaySaveAsDefaults->setObjectName(QString::fromUtf8("DisplaySaveAsDefaults"));

        horizontalLayout_2->addWidget(DisplaySaveAsDefaults);


        ScrollAreaLayout->addWidget(DisplayButtons);

        DisplayFrame = new QFrame(scrollAreaWidgetContents);
        DisplayFrame->setObjectName(QString::fromUtf8("DisplayFrame"));
        sizePolicy.setHeightForWidth(DisplayFrame->sizePolicy().hasHeightForWidth());
        DisplayFrame->setSizePolicy(sizePolicy);
        DisplayFrame->setFrameShape(QFrame::NoFrame);
        DisplayFrame->setFrameShadow(QFrame::Plain);

        ScrollAreaLayout->addWidget(DisplayFrame);

        ViewButtons = new QWidget(scrollAreaWidgetContents);
        ViewButtons->setObjectName(QString::fromUtf8("ViewButtons"));
        horizontalLayout_3 = new QHBoxLayout(ViewButtons);
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(6);
#endif
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ViewButton = new pqExpanderButton(ViewButtons);
        ViewButton->setObjectName(QString::fromUtf8("ViewButton"));
        ViewButton->setProperty("checked", QVariant(true));

        horizontalLayout_3->addWidget(ViewButton);

        ViewRestoreDefaults = new QPushButton(ViewButtons);
        ViewRestoreDefaults->setObjectName(QString::fromUtf8("ViewRestoreDefaults"));

        horizontalLayout_3->addWidget(ViewRestoreDefaults);

        ViewSaveAsDefaults = new QPushButton(ViewButtons);
        ViewSaveAsDefaults->setObjectName(QString::fromUtf8("ViewSaveAsDefaults"));

        horizontalLayout_3->addWidget(ViewSaveAsDefaults);


        ScrollAreaLayout->addWidget(ViewButtons);

        ViewFrame = new QFrame(scrollAreaWidgetContents);
        ViewFrame->setObjectName(QString::fromUtf8("ViewFrame"));
        ViewFrame->setFrameShape(QFrame::NoFrame);
        ViewFrame->setFrameShadow(QFrame::Plain);

        ScrollAreaLayout->addWidget(ViewFrame);

        verticalSpacer = new QSpacerItem(0, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ScrollAreaLayout->addItem(verticalSpacer);

        ScrollAreaLayout->setStretch(6, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(propertiesPanel);

        QMetaObject::connectSlotsByName(propertiesPanel);
    } // setupUi

    void retranslateUi(QWidget *propertiesPanel)
    {
        propertiesPanel->setWindowTitle(QApplication::translate("propertiesPanel", "Properties Panel", 0, QApplication::UnicodeUTF8));
        Accept->setText(QApplication::translate("propertiesPanel", "&Apply", 0, QApplication::UnicodeUTF8));
        Accept->setShortcut(QApplication::translate("propertiesPanel", "Alt+A", 0, QApplication::UnicodeUTF8));
        Reset->setText(QApplication::translate("propertiesPanel", "&Reset", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("propertiesPanel", "&Delete", 0, QApplication::UnicodeUTF8));
        Help->setText(QString());
        Help->setShortcut(QApplication::translate("propertiesPanel", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        PropertiesButton->setProperty("text", QVariant(QApplication::translate("propertiesPanel", "Properties", 0, QApplication::UnicodeUTF8)));
#ifndef QT_NO_TOOLTIP
        PropertiesRestoreDefaults->setToolTip(QApplication::translate("propertiesPanel", "Restore application default setting values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PropertiesRestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        PropertiesSaveAsDefaults->setToolTip(QApplication::translate("propertiesPanel", "Save current settings values as default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PropertiesSaveAsDefaults->setText(QString());
        DisplayButton->setProperty("text", QVariant(QApplication::translate("propertiesPanel", "Display", 0, QApplication::UnicodeUTF8)));
#ifndef QT_NO_TOOLTIP
        DisplayRestoreDefaults->setToolTip(QApplication::translate("propertiesPanel", "Restore application default setting values for display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplayRestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        DisplaySaveAsDefaults->setToolTip(QApplication::translate("propertiesPanel", "Save current display settings values as default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplaySaveAsDefaults->setText(QString());
        ViewButton->setProperty("text", QVariant(QApplication::translate("propertiesPanel", "View", 0, QApplication::UnicodeUTF8)));
#ifndef QT_NO_TOOLTIP
        ViewRestoreDefaults->setToolTip(QApplication::translate("propertiesPanel", "Restore application default setting values for view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ViewRestoreDefaults->setText(QString());
#ifndef QT_NO_TOOLTIP
        ViewSaveAsDefaults->setToolTip(QApplication::translate("propertiesPanel", "Save current view settings values as default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ViewSaveAsDefaults->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class propertiesPanel: public Ui_propertiesPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROPERTIESPANEL_H
