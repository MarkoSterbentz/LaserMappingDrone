/********************************************************************************
** Form generated from reading UI file 'pqCameraToolbar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCAMERATOOLBAR_H
#define UI_PQCAMERATOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_pqCameraToolbar
{
public:
    QAction *actionResetCamera;
    QAction *actionPositiveX;
    QAction *actionNegativeX;
    QAction *actionPositiveY;
    QAction *actionNegativeY;
    QAction *actionPositiveZ;
    QAction *actionNegativeZ;
    QAction *actionZoomToBox;
    QAction *actionZoomToData;

    void setupUi(QToolBar *pqCameraToolbar)
    {
        if (pqCameraToolbar->objectName().isEmpty())
            pqCameraToolbar->setObjectName(QString::fromUtf8("pqCameraToolbar"));
        pqCameraToolbar->resize(336, 42);
        pqCameraToolbar->setOrientation(Qt::Horizontal);
        actionResetCamera = new QAction(pqCameraToolbar);
        actionResetCamera->setObjectName(QString::fromUtf8("actionResetCamera"));
        actionResetCamera->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqResetCamera24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResetCamera->setIcon(icon);
        actionPositiveX = new QAction(pqCameraToolbar);
        actionPositiveX->setObjectName(QString::fromUtf8("actionPositiveX"));
        actionPositiveX->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqXPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPositiveX->setIcon(icon1);
        actionNegativeX = new QAction(pqCameraToolbar);
        actionNegativeX->setObjectName(QString::fromUtf8("actionNegativeX"));
        actionNegativeX->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqXMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegativeX->setIcon(icon2);
        actionPositiveY = new QAction(pqCameraToolbar);
        actionPositiveY->setObjectName(QString::fromUtf8("actionPositiveY"));
        actionPositiveY->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqYPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPositiveY->setIcon(icon3);
        actionNegativeY = new QAction(pqCameraToolbar);
        actionNegativeY->setObjectName(QString::fromUtf8("actionNegativeY"));
        actionNegativeY->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqYMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegativeY->setIcon(icon4);
        actionPositiveZ = new QAction(pqCameraToolbar);
        actionPositiveZ->setObjectName(QString::fromUtf8("actionPositiveZ"));
        actionPositiveZ->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqZPlus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPositiveZ->setIcon(icon5);
        actionNegativeZ = new QAction(pqCameraToolbar);
        actionNegativeZ->setObjectName(QString::fromUtf8("actionNegativeZ"));
        actionNegativeZ->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqZMinus24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegativeZ->setIcon(icon6);
        actionZoomToBox = new QAction(pqCameraToolbar);
        actionZoomToBox->setObjectName(QString::fromUtf8("actionZoomToBox"));
        actionZoomToBox->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqZoomToSelection24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomToBox->setIcon(icon7);
        actionZoomToData = new QAction(pqCameraToolbar);
        actionZoomToData->setObjectName(QString::fromUtf8("actionZoomToData"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqZoomToData24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomToData->setIcon(icon8);

        pqCameraToolbar->addAction(actionResetCamera);
        pqCameraToolbar->addAction(actionZoomToData);
        pqCameraToolbar->addAction(actionZoomToBox);
        pqCameraToolbar->addAction(actionPositiveX);
        pqCameraToolbar->addAction(actionNegativeX);
        pqCameraToolbar->addAction(actionPositiveY);
        pqCameraToolbar->addAction(actionNegativeY);
        pqCameraToolbar->addAction(actionPositiveZ);
        pqCameraToolbar->addAction(actionNegativeZ);

        retranslateUi(pqCameraToolbar);

        QMetaObject::connectSlotsByName(pqCameraToolbar);
    } // setupUi

    void retranslateUi(QToolBar *pqCameraToolbar)
    {
        pqCameraToolbar->setWindowTitle(QApplication::translate("pqCameraToolbar", "Camera Controls", 0, QApplication::UnicodeUTF8));
        actionResetCamera->setText(QApplication::translate("pqCameraToolbar", "&Reset", 0, QApplication::UnicodeUTF8));
        actionResetCamera->setIconText(QApplication::translate("pqCameraToolbar", "Reset Camera", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionResetCamera->setStatusTip(QApplication::translate("pqCameraToolbar", "Reset Camera", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionPositiveX->setText(QApplication::translate("pqCameraToolbar", "+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPositiveX->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to +X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPositiveX->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to +X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPositiveX->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to +X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionNegativeX->setText(QApplication::translate("pqCameraToolbar", "-X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNegativeX->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to -X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNegativeX->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to -X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNegativeX->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to -X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPositiveY->setText(QApplication::translate("pqCameraToolbar", "+Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPositiveY->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPositiveY->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPositiveY->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to +Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionNegativeY->setText(QApplication::translate("pqCameraToolbar", "-Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNegativeY->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNegativeY->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNegativeY->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to -Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionPositiveZ->setText(QApplication::translate("pqCameraToolbar", "+Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPositiveZ->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPositiveZ->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to +Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionPositiveZ->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to +Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionNegativeZ->setText(QApplication::translate("pqCameraToolbar", "-Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNegativeZ->setToolTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNegativeZ->setStatusTip(QApplication::translate("pqCameraToolbar", "Set view direction to -Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNegativeZ->setWhatsThis(QApplication::translate("pqCameraToolbar", "Set view direction to -Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionZoomToBox->setText(QApplication::translate("pqCameraToolbar", "Zoom to Box", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionZoomToBox->setStatusTip(QApplication::translate("pqCameraToolbar", "Zoom to Box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionZoomToData->setText(QApplication::translate("pqCameraToolbar", "ZTD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomToData->setToolTip(QApplication::translate("pqCameraToolbar", "Zoom To Data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqCameraToolbar: public Ui_pqCameraToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCAMERATOOLBAR_H
