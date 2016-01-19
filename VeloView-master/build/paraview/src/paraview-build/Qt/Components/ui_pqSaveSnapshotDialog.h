/********************************************************************************
** Form generated from reading UI file 'pqSaveSnapshotDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSAVESNAPSHOTDIALOG_H
#define UI_PQSAVESNAPSHOTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include "pqIntRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SaveSnapshotDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *selectedViewOnly;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QLineEdit *width;
    QLabel *label_2;
    QLineEdit *height;
    QToolButton *lockAspect;
    QLabel *label_3;
    pqIntRangeWidget *quality;
    QLabel *label_4;
    QComboBox *palette;
    QLabel *label_5;
    QComboBox *stereoMode;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *SaveSnapshotDialog)
    {
        if (SaveSnapshotDialog->objectName().isEmpty())
            SaveSnapshotDialog->setObjectName(QString::fromUtf8("SaveSnapshotDialog"));
        SaveSnapshotDialog->resize(294, 298);
        verticalLayout = new QVBoxLayout(SaveSnapshotDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        selectedViewOnly = new QCheckBox(SaveSnapshotDialog);
        selectedViewOnly->setObjectName(QString::fromUtf8("selectedViewOnly"));
        selectedViewOnly->setChecked(true);

        verticalLayout->addWidget(selectedViewOnly);

        label = new QLabel(SaveSnapshotDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        width = new QLineEdit(SaveSnapshotDialog);
        width->setObjectName(QString::fromUtf8("width"));

        hboxLayout->addWidget(width);

        label_2 = new QLabel(SaveSnapshotDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        height = new QLineEdit(SaveSnapshotDialog);
        height->setObjectName(QString::fromUtf8("height"));

        hboxLayout->addWidget(height);

        lockAspect = new QToolButton(SaveSnapshotDialog);
        lockAspect->setObjectName(QString::fromUtf8("lockAspect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqOctreeData16.png"), QSize(), QIcon::Normal, QIcon::Off);
        lockAspect->setIcon(icon);
        lockAspect->setIconSize(QSize(12, 12));
        lockAspect->setCheckable(true);

        hboxLayout->addWidget(lockAspect);


        verticalLayout->addLayout(hboxLayout);

        label_3 = new QLabel(SaveSnapshotDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        quality = new pqIntRangeWidget(SaveSnapshotDialog);
        quality->setObjectName(QString::fromUtf8("quality"));

        verticalLayout->addWidget(quality);

        label_4 = new QLabel(SaveSnapshotDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        palette = new QComboBox(SaveSnapshotDialog);
        palette->setObjectName(QString::fromUtf8("palette"));

        verticalLayout->addWidget(palette);

        label_5 = new QLabel(SaveSnapshotDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        stereoMode = new QComboBox(SaveSnapshotDialog);
        stereoMode->setObjectName(QString::fromUtf8("stereoMode"));

        verticalLayout->addWidget(stereoMode);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        ok = new QPushButton(SaveSnapshotDialog);
        ok->setObjectName(QString::fromUtf8("ok"));

        hboxLayout1->addWidget(ok);

        cancel = new QPushButton(SaveSnapshotDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        hboxLayout1->addWidget(cancel);


        verticalLayout->addLayout(hboxLayout1);


        retranslateUi(SaveSnapshotDialog);
        QObject::connect(ok, SIGNAL(clicked()), SaveSnapshotDialog, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), SaveSnapshotDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveSnapshotDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveSnapshotDialog)
    {
        SaveSnapshotDialog->setWindowTitle(QApplication::translate("SaveSnapshotDialog", "Save Screenshot Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectedViewOnly->setToolTip(QApplication::translate("SaveSnapshotDialog", "<html>When checked, only the active view will be saved, otherwise all views will be saved in the image as they are layed out presently.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectedViewOnly->setStatusTip(QApplication::translate("SaveSnapshotDialog", "<html>When checked, only the active view will be saved, otherwise all views will be saved in the image as they are layed out presently.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        selectedViewOnly->setWhatsThis(QApplication::translate("SaveSnapshotDialog", "<html>When checked, only the active view will be saved, otherwise all views will be saved in the image as they are layed out presently.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        selectedViewOnly->setText(QApplication::translate("SaveSnapshotDialog", "Save only selected view", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SaveSnapshotDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Select resolution for the image to save</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SaveSnapshotDialog", "x", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lockAspect->setToolTip(QApplication::translate("SaveSnapshotDialog", "Lock aspect ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lockAspect->setStatusTip(QApplication::translate("SaveSnapshotDialog", "Lock aspect ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lockAspect->setWhatsThis(QApplication::translate("SaveSnapshotDialog", "Lock aspect ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lockAspect->setText(QApplication::translate("SaveSnapshotDialog", "L", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SaveSnapshotDialog", "<b>Select image quality (if applicable)</b><br/>0 - low quality, 100 - high quality", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SaveSnapshotDialog", "<b>Override Color Palette</b>", 0, QApplication::UnicodeUTF8));
        palette->clear();
        palette->insertItems(0, QStringList()
         << QApplication::translate("SaveSnapshotDialog", "Current Palette", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("SaveSnapshotDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Stereo Mode (if applicable)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        stereoMode->clear();
        stereoMode->insertItems(0, QStringList()
         << QApplication::translate("SaveSnapshotDialog", "No Stereo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSnapshotDialog", "Red-Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSnapshotDialog", "Interlaced", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSnapshotDialog", "Checkerboard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSnapshotDialog", "Side By Side Horizontal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSnapshotDialog", "Left Eye Only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SaveSnapshotDialog", "Right Eye Only", 0, QApplication::UnicodeUTF8)
        );
        ok->setText(QApplication::translate("SaveSnapshotDialog", "Ok", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("SaveSnapshotDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SaveSnapshotDialog: public Ui_SaveSnapshotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSAVESNAPSHOTDIALOG_H
