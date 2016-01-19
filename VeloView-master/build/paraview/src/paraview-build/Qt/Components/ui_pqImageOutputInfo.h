/********************************************************************************
** Form generated from reading UI file 'pqImageOutputInfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQIMAGEOUTPUTINFO_H
#define UI_PQIMAGEOUTPUTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageOutputInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *imageTypeLabel;
    QComboBox *imageType;
    QLabel *thumbnailLabel;
    QLabel *imageFileNameLabel;
    QLineEdit *imageFileName;
    QLabel *imageWriteFrequencyLabel;
    QSpinBox *imageWriteFrequency;
    QLabel *imageMagnificationLabel;
    QSpinBox *imageMagnification;
    QCheckBox *fitToScreen;

    void setupUi(QWidget *ImageOutputInfo)
    {
        if (ImageOutputInfo->objectName().isEmpty())
            ImageOutputInfo->setObjectName(QString::fromUtf8("ImageOutputInfo"));
        ImageOutputInfo->resize(424, 170);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageOutputInfo->sizePolicy().hasHeightForWidth());
        ImageOutputInfo->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ImageOutputInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageTypeLabel = new QLabel(ImageOutputInfo);
        imageTypeLabel->setObjectName(QString::fromUtf8("imageTypeLabel"));
        imageTypeLabel->setEnabled(true);

        gridLayout->addWidget(imageTypeLabel, 0, 0, 1, 1);

        imageType = new QComboBox(ImageOutputInfo);
        imageType->setObjectName(QString::fromUtf8("imageType"));
        imageType->setEnabled(true);
        imageType->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(imageType, 0, 1, 1, 1);

        thumbnailLabel = new QLabel(ImageOutputInfo);
        thumbnailLabel->setObjectName(QString::fromUtf8("thumbnailLabel"));
        sizePolicy.setHeightForWidth(thumbnailLabel->sizePolicy().hasHeightForWidth());
        thumbnailLabel->setSizePolicy(sizePolicy);
        thumbnailLabel->setBaseSize(QSize(147, 145));
        thumbnailLabel->setScaledContents(false);
        thumbnailLabel->setAlignment(Qt::AlignCenter);
        thumbnailLabel->setWordWrap(true);

        gridLayout->addWidget(thumbnailLabel, 0, 2, 5, 1);

        imageFileNameLabel = new QLabel(ImageOutputInfo);
        imageFileNameLabel->setObjectName(QString::fromUtf8("imageFileNameLabel"));
        imageFileNameLabel->setEnabled(true);

        gridLayout->addWidget(imageFileNameLabel, 1, 0, 1, 1);

        imageFileName = new QLineEdit(ImageOutputInfo);
        imageFileName->setObjectName(QString::fromUtf8("imageFileName"));
        imageFileName->setEnabled(true);

        gridLayout->addWidget(imageFileName, 1, 1, 1, 1);

        imageWriteFrequencyLabel = new QLabel(ImageOutputInfo);
        imageWriteFrequencyLabel->setObjectName(QString::fromUtf8("imageWriteFrequencyLabel"));
        imageWriteFrequencyLabel->setEnabled(true);

        gridLayout->addWidget(imageWriteFrequencyLabel, 2, 0, 1, 1);

        imageWriteFrequency = new QSpinBox(ImageOutputInfo);
        imageWriteFrequency->setObjectName(QString::fromUtf8("imageWriteFrequency"));
        imageWriteFrequency->setEnabled(true);
        imageWriteFrequency->setMinimum(1);
        imageWriteFrequency->setMaximum(1000);

        gridLayout->addWidget(imageWriteFrequency, 2, 1, 1, 1);

        imageMagnificationLabel = new QLabel(ImageOutputInfo);
        imageMagnificationLabel->setObjectName(QString::fromUtf8("imageMagnificationLabel"));
        imageMagnificationLabel->setEnabled(true);

        gridLayout->addWidget(imageMagnificationLabel, 3, 0, 1, 1);

        imageMagnification = new QSpinBox(ImageOutputInfo);
        imageMagnification->setObjectName(QString::fromUtf8("imageMagnification"));
        imageMagnification->setEnabled(true);
        imageMagnification->setMinimum(1);
        imageMagnification->setMaximum(1000);

        gridLayout->addWidget(imageMagnification, 3, 1, 1, 1);

        fitToScreen = new QCheckBox(ImageOutputInfo);
        fitToScreen->setObjectName(QString::fromUtf8("fitToScreen"));
        fitToScreen->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(fitToScreen, 4, 0, 1, 1);


        retranslateUi(ImageOutputInfo);

        QMetaObject::connectSlotsByName(ImageOutputInfo);
    } // setupUi

    void retranslateUi(QWidget *ImageOutputInfo)
    {
        ImageOutputInfo->setWindowTitle(QApplication::translate("ImageOutputInfo", "Form", 0, QApplication::UnicodeUTF8));
        imageTypeLabel->setText(QApplication::translate("ImageOutputInfo", "Image Type", 0, QApplication::UnicodeUTF8));
        imageType->clear();
        imageType->insertItems(0, QStringList()
         << QApplication::translate("ImageOutputInfo", "png", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "bmp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "ppm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "tif", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "tiff", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "jpg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageOutputInfo", "jpeg", 0, QApplication::UnicodeUTF8)
        );
        thumbnailLabel->setText(QApplication::translate("ImageOutputInfo", "View not currently available", 0, QApplication::UnicodeUTF8));
        imageFileNameLabel->setText(QApplication::translate("ImageOutputInfo", "File Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageFileName->setToolTip(QApplication::translate("ImageOutputInfo", "The file name must contain %t.  This gets replaced with the time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        imageFileName->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        imageFileName->setText(QApplication::translate("ImageOutputInfo", "image_%t.png", 0, QApplication::UnicodeUTF8));
        imageWriteFrequencyLabel->setText(QApplication::translate("ImageOutputInfo", "Write Frequency", 0, QApplication::UnicodeUTF8));
        imageMagnificationLabel->setText(QApplication::translate("ImageOutputInfo", "Magnification", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fitToScreen->setToolTip(QApplication::translate("ImageOutputInfo", "Check to reset the view to fit the objects to the view every outputted time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fitToScreen->setWhatsThis(QApplication::translate("ImageOutputInfo", "Check to reset the view to fit the objects to the view every outputted time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fitToScreen->setText(QApplication::translate("ImageOutputInfo", "Fit to Screen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageOutputInfo: public Ui_ImageOutputInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQIMAGEOUTPUTINFO_H
