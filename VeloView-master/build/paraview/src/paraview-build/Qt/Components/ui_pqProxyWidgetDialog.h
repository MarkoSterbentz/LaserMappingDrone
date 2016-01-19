/********************************************************************************
** Form generated from reading UI file 'pqProxyWidgetDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROXYWIDGETDIALOG_H
#define UI_PQPROXYWIDGETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxyWidgetDialog
{
public:
    QVBoxLayout *Layout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *RestoreDefaultsButton;
    QPushButton *SaveButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ApplyButton;
    QPushButton *CancelButton;
    QPushButton *OKButton;

    void setupUi(QDialog *ProxyWidgetDialog)
    {
        if (ProxyWidgetDialog->objectName().isEmpty())
            ProxyWidgetDialog->setObjectName(QString::fromUtf8("ProxyWidgetDialog"));
        ProxyWidgetDialog->resize(430, 146);
        Layout = new QVBoxLayout(ProxyWidgetDialog);
        Layout->setObjectName(QString::fromUtf8("Layout"));
        scrollArea = new QScrollArea(ProxyWidgetDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 412, 95));
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaLayout->setSpacing(0);
        scrollAreaLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaLayout->setObjectName(QString::fromUtf8("scrollAreaLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        Layout->addWidget(scrollArea);

        widget = new QWidget(ProxyWidgetDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RestoreDefaultsButton = new QPushButton(widget);
        RestoreDefaultsButton->setObjectName(QString::fromUtf8("RestoreDefaultsButton"));

        horizontalLayout->addWidget(RestoreDefaultsButton);

        SaveButton = new QPushButton(widget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(SaveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ApplyButton = new QPushButton(widget);
        ApplyButton->setObjectName(QString::fromUtf8("ApplyButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApplyButton->sizePolicy().hasHeightForWidth());
        ApplyButton->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("SP_DialogApplyButton");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        ApplyButton->setIcon(icon);

        horizontalLayout->addWidget(ApplyButton);

        CancelButton = new QPushButton(widget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CancelButton);

        OKButton = new QPushButton(widget);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        sizePolicy.setHeightForWidth(OKButton->sizePolicy().hasHeightForWidth());
        OKButton->setSizePolicy(sizePolicy);
        OKButton->setDefault(true);

        horizontalLayout->addWidget(OKButton);


        Layout->addWidget(widget);


        retranslateUi(ProxyWidgetDialog);

        QMetaObject::connectSlotsByName(ProxyWidgetDialog);
    } // setupUi

    void retranslateUi(QDialog *ProxyWidgetDialog)
    {
        ProxyWidgetDialog->setWindowTitle(QApplication::translate("ProxyWidgetDialog", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RestoreDefaultsButton->setToolTip(QApplication::translate("ProxyWidgetDialog", "Restore application default setting values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RestoreDefaultsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveButton->setToolTip(QApplication::translate("ProxyWidgetDialog", "Save current settings values as default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SaveButton->setText(QString());
        ApplyButton->setText(QApplication::translate("ProxyWidgetDialog", "Apply", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("ProxyWidgetDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        OKButton->setText(QApplication::translate("ProxyWidgetDialog", "&OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProxyWidgetDialog: public Ui_ProxyWidgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROXYWIDGETDIALOG_H
