/********************************************************************************
** Form generated from reading UI file 'pqAnimationSettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQANIMATIONSETTINGS_H
#define UI_PQANIMATIONSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqAnimationSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDoubleSpinBox *frameRate;
    QSpinBox *spinBoxFramesPerTimestep;
    QLabel *label_3;
    QCheckBox *compression;
    QSpinBox *spinBoxNumberOfFrames;
    QDoubleSpinBox *animationDuration;
    QLabel *labelFrameRate;
    QLabel *labelFramesPerTimestep;
    QLabel *labelAnimationDuration;
    QLineEdit *width;
    QLabel *label;
    QComboBox *stereoMode;
    QLineEdit *height;
    QToolButton *lockAspect;
    QLabel *label_5;
    QLabel *labelTimeRange;
    QLineEdit *startTime;
    QLineEdit *endTime;
    QCheckBox *checkBoxDisconnect;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *pqAnimationSettingsDialog)
    {
        if (pqAnimationSettingsDialog->objectName().isEmpty())
            pqAnimationSettingsDialog->setObjectName(QString::fromUtf8("pqAnimationSettingsDialog"));
        pqAnimationSettingsDialog->resize(404, 367);
        verticalLayout = new QVBoxLayout(pqAnimationSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frameRate = new QDoubleSpinBox(pqAnimationSettingsDialog);
        frameRate->setObjectName(QString::fromUtf8("frameRate"));
        frameRate->setMinimum(1);
        frameRate->setMaximum(999999);
        frameRate->setValue(15);

        gridLayout->addWidget(frameRate, 1, 1, 1, 3);

        spinBoxFramesPerTimestep = new QSpinBox(pqAnimationSettingsDialog);
        spinBoxFramesPerTimestep->setObjectName(QString::fromUtf8("spinBoxFramesPerTimestep"));
        spinBoxFramesPerTimestep->setMinimum(1);
        spinBoxFramesPerTimestep->setMaximum(2147483647);

        gridLayout->addWidget(spinBoxFramesPerTimestep, 2, 1, 1, 3);

        label_3 = new QLabel(pqAnimationSettingsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        compression = new QCheckBox(pqAnimationSettingsDialog);
        compression->setObjectName(QString::fromUtf8("compression"));
        compression->setEnabled(true);
        compression->setLayoutDirection(Qt::LeftToRight);
        compression->setChecked(true);
        compression->setTristate(false);

        gridLayout->addWidget(compression, 7, 0, 1, 1);

        spinBoxNumberOfFrames = new QSpinBox(pqAnimationSettingsDialog);
        spinBoxNumberOfFrames->setObjectName(QString::fromUtf8("spinBoxNumberOfFrames"));
        spinBoxNumberOfFrames->setMaximum(2147483647);

        gridLayout->addWidget(spinBoxNumberOfFrames, 3, 1, 1, 3);

        animationDuration = new QDoubleSpinBox(pqAnimationSettingsDialog);
        animationDuration->setObjectName(QString::fromUtf8("animationDuration"));
        animationDuration->setMaximum(1e+99);

        gridLayout->addWidget(animationDuration, 0, 1, 1, 3);

        labelFrameRate = new QLabel(pqAnimationSettingsDialog);
        labelFrameRate->setObjectName(QString::fromUtf8("labelFrameRate"));

        gridLayout->addWidget(labelFrameRate, 1, 0, 1, 1);

        labelFramesPerTimestep = new QLabel(pqAnimationSettingsDialog);
        labelFramesPerTimestep->setObjectName(QString::fromUtf8("labelFramesPerTimestep"));

        gridLayout->addWidget(labelFramesPerTimestep, 2, 0, 1, 1);

        labelAnimationDuration = new QLabel(pqAnimationSettingsDialog);
        labelAnimationDuration->setObjectName(QString::fromUtf8("labelAnimationDuration"));

        gridLayout->addWidget(labelAnimationDuration, 0, 0, 1, 1);

        width = new QLineEdit(pqAnimationSettingsDialog);
        width->setObjectName(QString::fromUtf8("width"));

        gridLayout->addWidget(width, 4, 1, 1, 1);

        label = new QLabel(pqAnimationSettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        stereoMode = new QComboBox(pqAnimationSettingsDialog);
        stereoMode->setObjectName(QString::fromUtf8("stereoMode"));

        gridLayout->addWidget(stereoMode, 6, 1, 1, 3);

        height = new QLineEdit(pqAnimationSettingsDialog);
        height->setObjectName(QString::fromUtf8("height"));

        gridLayout->addWidget(height, 4, 2, 1, 1);

        lockAspect = new QToolButton(pqAnimationSettingsDialog);
        lockAspect->setObjectName(QString::fromUtf8("lockAspect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqOctreeData16.png"), QSize(), QIcon::Normal, QIcon::Off);
        lockAspect->setIcon(icon);
        lockAspect->setIconSize(QSize(12, 12));
        lockAspect->setCheckable(true);

        gridLayout->addWidget(lockAspect, 4, 3, 1, 1);

        label_5 = new QLabel(pqAnimationSettingsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        labelTimeRange = new QLabel(pqAnimationSettingsDialog);
        labelTimeRange->setObjectName(QString::fromUtf8("labelTimeRange"));

        gridLayout->addWidget(labelTimeRange, 5, 0, 1, 1);

        startTime = new QLineEdit(pqAnimationSettingsDialog);
        startTime->setObjectName(QString::fromUtf8("startTime"));

        gridLayout->addWidget(startTime, 5, 1, 1, 1);

        endTime = new QLineEdit(pqAnimationSettingsDialog);
        endTime->setObjectName(QString::fromUtf8("endTime"));

        gridLayout->addWidget(endTime, 5, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        checkBoxDisconnect = new QCheckBox(pqAnimationSettingsDialog);
        checkBoxDisconnect->setObjectName(QString::fromUtf8("checkBoxDisconnect"));
        checkBoxDisconnect->setEnabled(true);

        verticalLayout->addWidget(checkBoxDisconnect);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(pqAnimationSettingsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(pqAnimationSettingsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);

        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, animationDuration);
        QWidget::setTabOrder(animationDuration, frameRate);
        QWidget::setTabOrder(frameRate, spinBoxFramesPerTimestep);
        QWidget::setTabOrder(spinBoxFramesPerTimestep, spinBoxNumberOfFrames);
        QWidget::setTabOrder(spinBoxNumberOfFrames, width);
        QWidget::setTabOrder(width, height);
        QWidget::setTabOrder(height, startTime);
        QWidget::setTabOrder(startTime, endTime);
        QWidget::setTabOrder(endTime, lockAspect);
        QWidget::setTabOrder(lockAspect, stereoMode);
        QWidget::setTabOrder(stereoMode, compression);
        QWidget::setTabOrder(compression, checkBoxDisconnect);

        retranslateUi(pqAnimationSettingsDialog);
        QObject::connect(okButton, SIGNAL(clicked()), pqAnimationSettingsDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), pqAnimationSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqAnimationSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *pqAnimationSettingsDialog)
    {
        pqAnimationSettingsDialog->setWindowTitle(QApplication::translate("pqAnimationSettingsDialog", "Animation Settings Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqAnimationSettingsDialog", "Resolution (pixels)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        compression->setToolTip(QApplication::translate("pqAnimationSettingsDialog", "When checked creates standard files, unchecked creates large files without any compression.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        compression->setText(QApplication::translate("pqAnimationSettingsDialog", "Compression", 0, QApplication::UnicodeUTF8));
        labelFrameRate->setText(QApplication::translate("pqAnimationSettingsDialog", "Frame Rate (fps)", 0, QApplication::UnicodeUTF8));
        labelFramesPerTimestep->setText(QApplication::translate("pqAnimationSettingsDialog", "No. of Frames / timestep", 0, QApplication::UnicodeUTF8));
        labelAnimationDuration->setText(QApplication::translate("pqAnimationSettingsDialog", "Animation Duration (sec)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqAnimationSettingsDialog", "Number Of Frames", 0, QApplication::UnicodeUTF8));
        stereoMode->clear();
        stereoMode->insertItems(0, QStringList()
         << QApplication::translate("pqAnimationSettingsDialog", "No Stereo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqAnimationSettingsDialog", "Red-Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqAnimationSettingsDialog", "Interlaced", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqAnimationSettingsDialog", "Checkerboard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqAnimationSettingsDialog", "Side By Side Horizontal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqAnimationSettingsDialog", "Left Eye Only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqAnimationSettingsDialog", "Right Eye Only", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        lockAspect->setToolTip(QApplication::translate("pqAnimationSettingsDialog", "Lock aspect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lockAspect->setStatusTip(QApplication::translate("pqAnimationSettingsDialog", "Lock aspect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lockAspect->setWhatsThis(QApplication::translate("pqAnimationSettingsDialog", "Lock aspect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lockAspect->setText(QApplication::translate("pqAnimationSettingsDialog", "L", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pqAnimationSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Stereo Mode (if applicable)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelTimeRange->setText(QApplication::translate("pqAnimationSettingsDialog", "Time range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxDisconnect->setToolTip(QApplication::translate("pqAnimationSettingsDialog", "<html>Disconnect from the server before saving animation. The server will save the animation and then exit.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        checkBoxDisconnect->setStatusTip(QApplication::translate("pqAnimationSettingsDialog", "<html>Disconnect from the server before saving animation. The server will save the animation and then exit.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxDisconnect->setWhatsThis(QApplication::translate("pqAnimationSettingsDialog", "<html>Disconnect from the server before saving animation. The server will save the animation and then exit.</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        checkBoxDisconnect->setText(QApplication::translate("pqAnimationSettingsDialog", "Disconnect before saving animation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        okButton->setToolTip(QApplication::translate("pqAnimationSettingsDialog", "Generate and Save Animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        okButton->setText(QApplication::translate("pqAnimationSettingsDialog", "Save Animation", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("pqAnimationSettingsDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqAnimationSettingsDialog: public Ui_pqAnimationSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQANIMATIONSETTINGS_H
