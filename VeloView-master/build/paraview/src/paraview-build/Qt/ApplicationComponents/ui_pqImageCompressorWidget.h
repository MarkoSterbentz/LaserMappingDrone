/********************************************************************************
** Form generated from reading UI file 'pqImageCompressorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMAGECOMPRESSORWIDGET_H
#define UI_PQIMAGECOMPRESSORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqIntRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ImageCompressorWidget
{
public:
    QVBoxLayout *mainLayout;
    QLabel *label;
    QComboBox *compressionType;
    QLabel *squirtLabel;
    pqIntRangeWidget *squirtColorSpace;
    QLabel *zlibLabel1;
    pqIntRangeWidget *zlibLevel;
    QLabel *zlibLabel2;
    pqIntRangeWidget *zlibColorSpace;
    QCheckBox *zlibStripAlpha;
    QHBoxLayout *compressorBWLayout;
    QLabel *label_9;
    QComboBox *compressorBWOpt;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ImageCompressorWidget)
    {
        if (ImageCompressorWidget->objectName().isEmpty())
            ImageCompressorWidget->setObjectName(QString::fromUtf8("ImageCompressorWidget"));
        ImageCompressorWidget->resize(551, 363);
        mainLayout = new QVBoxLayout(ImageCompressorWidget);
        mainLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        label = new QLabel(ImageCompressorWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        mainLayout->addWidget(label);

        compressionType = new QComboBox(ImageCompressorWidget);
        compressionType->setObjectName(QString::fromUtf8("compressionType"));

        mainLayout->addWidget(compressionType);

        squirtLabel = new QLabel(ImageCompressorWidget);
        squirtLabel->setObjectName(QString::fromUtf8("squirtLabel"));
        squirtLabel->setWordWrap(true);

        mainLayout->addWidget(squirtLabel);

        squirtColorSpace = new pqIntRangeWidget(ImageCompressorWidget);
        squirtColorSpace->setObjectName(QString::fromUtf8("squirtColorSpace"));
        squirtColorSpace->setProperty("minimum", QVariant(0));
        squirtColorSpace->setProperty("maximum", QVariant(5));
        squirtColorSpace->setProperty("value", QVariant(3));
        squirtColorSpace->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(squirtColorSpace);

        zlibLabel1 = new QLabel(ImageCompressorWidget);
        zlibLabel1->setObjectName(QString::fromUtf8("zlibLabel1"));
        zlibLabel1->setWordWrap(true);

        mainLayout->addWidget(zlibLabel1);

        zlibLevel = new pqIntRangeWidget(ImageCompressorWidget);
        zlibLevel->setObjectName(QString::fromUtf8("zlibLevel"));
        zlibLevel->setProperty("minimum", QVariant(1));
        zlibLevel->setProperty("maximum", QVariant(9));
        zlibLevel->setProperty("value", QVariant(1));
        zlibLevel->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(zlibLevel);

        zlibLabel2 = new QLabel(ImageCompressorWidget);
        zlibLabel2->setObjectName(QString::fromUtf8("zlibLabel2"));
        zlibLabel2->setWordWrap(true);

        mainLayout->addWidget(zlibLabel2);

        zlibColorSpace = new pqIntRangeWidget(ImageCompressorWidget);
        zlibColorSpace->setObjectName(QString::fromUtf8("zlibColorSpace"));
        zlibColorSpace->setProperty("minimum", QVariant(0));
        zlibColorSpace->setProperty("maximum", QVariant(5));
        zlibColorSpace->setProperty("value", QVariant(3));
        zlibColorSpace->setProperty("strictRange", QVariant(true));

        mainLayout->addWidget(zlibColorSpace);

        zlibStripAlpha = new QCheckBox(ImageCompressorWidget);
        zlibStripAlpha->setObjectName(QString::fromUtf8("zlibStripAlpha"));

        mainLayout->addWidget(zlibStripAlpha);

        compressorBWLayout = new QHBoxLayout();
        compressorBWLayout->setObjectName(QString::fromUtf8("compressorBWLayout"));
        label_9 = new QLabel(ImageCompressorWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(false);

        compressorBWLayout->addWidget(label_9);

        compressorBWOpt = new QComboBox(ImageCompressorWidget);
        compressorBWOpt->setObjectName(QString::fromUtf8("compressorBWOpt"));

        compressorBWLayout->addWidget(compressorBWOpt);

        label_10 = new QLabel(ImageCompressorWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setWordWrap(false);

        compressorBWLayout->addWidget(label_10);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        compressorBWLayout->addItem(horizontalSpacer_3);


        mainLayout->addLayout(compressorBWLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        mainLayout->addItem(verticalSpacer);


        retranslateUi(ImageCompressorWidget);

        QMetaObject::connectSlotsByName(ImageCompressorWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageCompressorWidget)
    {
        ImageCompressorWidget->setWindowTitle(QApplication::translate("ImageCompressorWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ImageCompressorWidget", "Set the compression method used when transferring rendered images from the server to the client.", 0, QApplication::UnicodeUTF8));
        compressionType->clear();
        compressionType->insertItems(0, QStringList()
         << QApplication::translate("ImageCompressorWidget", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "Squirt (run-length encoding based compression)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "Zlib", 0, QApplication::UnicodeUTF8)
        );
        squirtLabel->setText(QApplication::translate("ImageCompressorWidget", "Set the Squirt compression level. Move to right for better compression ratio at the cost of reduced image quality.", 0, QApplication::UnicodeUTF8));
        zlibLabel1->setText(QApplication::translate("ImageCompressorWidget", "Set the Zlib compression level. 1 is the fastest compression possible at the cost of compression ratio, while 9 give the best compression possible, but may be slower.", 0, QApplication::UnicodeUTF8));
        zlibLabel2->setText(QApplication::translate("ImageCompressorWidget", "Set the Zlib the color sampling space width factor. Move to right for better compression ratio at the cost of image quality.", 0, QApplication::UnicodeUTF8));
        zlibStripAlpha->setText(QApplication::translate("ImageCompressorWidget", "Set whether to strip alpha channel.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("ImageCompressorWidget", "Configure the compressor using default settings taylored to a selected connection type.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("ImageCompressorWidget", "Apply presets for", 0, QApplication::UnicodeUTF8));
        compressorBWOpt->clear();
        compressorBWOpt->insertItems(0, QStringList()
         << QApplication::translate("ImageCompressorWidget", "...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "consumer broadband/DSL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "Megabit Ethernet / 802.11* wireless", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "Gigabit Ethernet", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "10 Gigabit Ethernet", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageCompressorWidget", "shared memory/localhost", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        compressorBWOpt->setToolTip(QApplication::translate("ImageCompressorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Presets. </span>Configure the image compressor based on a network type. These settings will provide reasonable performance and place to start when optimizing the compressor setting for a specific network.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        compressorBWOpt->setWhatsThis(QApplication::translate("ImageCompressorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Presets. </span>Configure the image compressor based on a network type. These settings will provide reasonable performance and place to start when optimizing the compressor setting for a specific network.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("ImageCompressorWidget", "Configure the compressor using default settings taylored to a selected connection type.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("ImageCompressorWidget", "connection.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageCompressorWidget: public Ui_ImageCompressorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMAGECOMPRESSORWIDGET_H
