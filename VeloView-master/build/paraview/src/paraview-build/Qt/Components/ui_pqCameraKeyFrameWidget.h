/********************************************************************************
** Form generated from reading UI file 'pqCameraKeyFrameWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCAMERAKEYFRAMEWIDGET_H
#define UI_PQCAMERAKEYFRAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqCollapsedGroup.h"
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_CameraKeyFrameWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidgetMode;
    QWidget *page_4;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QTreeWidget *leftPane;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout2;
    QTextBrowser *textBrowser;
    QWidget *page;
    QVBoxLayout *vboxLayout;
    pqCollapsedGroup *positionContainer;
    QWidget *page_6;
    QGridLayout *gridLayout3;
    pqCollapsedGroup *focusContainer;
    QWidget *page_2;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout4;
    pqLineEdit *viewUpX;
    pqLineEdit *viewUpY;
    pqLineEdit *viewUpZ;
    QSpacerItem *spacerItem;
    QWidget *page_5;
    QGridLayout *gridLayout5;
    QLabel *label_10;
    pqLineEdit *position0;
    pqLineEdit *position1;
    pqLineEdit *position2;
    QLabel *label_12;
    pqLineEdit *focalPoint0;
    pqLineEdit *focalPoint1;
    pqLineEdit *focalPoint2;
    QLabel *label_13;
    pqLineEdit *viewUp0;
    pqLineEdit *viewUp1;
    pqLineEdit *viewUp2;
    QLabel *label_11;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QPushButton *useCurrent;
    pqLineEdit *viewAngle;
    pqLineEdit *parallelScale;

    void setupUi(QWidget *CameraKeyFrameWidget)
    {
        if (CameraKeyFrameWidget->objectName().isEmpty())
            CameraKeyFrameWidget->setObjectName(QString::fromUtf8("CameraKeyFrameWidget"));
        CameraKeyFrameWidget->resize(396, 216);
        gridLayout = new QGridLayout(CameraKeyFrameWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidgetMode = new QStackedWidget(CameraKeyFrameWidget);
        stackedWidgetMode->setObjectName(QString::fromUtf8("stackedWidgetMode"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout1 = new QGridLayout(page_4);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        leftPane = new QTreeWidget(page_4);
        new QTreeWidgetItem(leftPane);
        new QTreeWidgetItem(leftPane);
        new QTreeWidgetItem(leftPane);
        leftPane->setObjectName(QString::fromUtf8("leftPane"));
        leftPane->setRootIsDecorated(false);

        hboxLayout->addWidget(leftPane);

        stackedWidget = new QStackedWidget(page_4);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout2 = new QGridLayout(page_3);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textBrowser = new QTextBrowser(page_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout2->addWidget(textBrowser, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        vboxLayout = new QVBoxLayout(page);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        positionContainer = new pqCollapsedGroup(page);
        positionContainer->setObjectName(QString::fromUtf8("positionContainer"));
        positionContainer->setCheckable(true);

        vboxLayout->addWidget(positionContainer);

        stackedWidget->addWidget(page);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout3 = new QGridLayout(page_6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        focusContainer = new pqCollapsedGroup(page_6);
        focusContainer->setObjectName(QString::fromUtf8("focusContainer"));

        gridLayout3->addWidget(focusContainer, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        vboxLayout1 = new QVBoxLayout(page_2);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        viewUpX = new pqLineEdit(page_2);
        viewUpX->setObjectName(QString::fromUtf8("viewUpX"));
        viewUpX->setProperty("minimum", QVariant(-1000));
        viewUpX->setProperty("maximum", QVariant(1000));

        gridLayout4->addWidget(viewUpX, 0, 0, 1, 1);

        viewUpY = new pqLineEdit(page_2);
        viewUpY->setObjectName(QString::fromUtf8("viewUpY"));
        viewUpY->setProperty("minimum", QVariant(-1000));
        viewUpY->setProperty("maximum", QVariant(1000));

        gridLayout4->addWidget(viewUpY, 0, 1, 1, 1);

        viewUpZ = new pqLineEdit(page_2);
        viewUpZ->setObjectName(QString::fromUtf8("viewUpZ"));
        viewUpZ->setProperty("minimum", QVariant(-1000));
        viewUpZ->setProperty("maximum", QVariant(1000));

        gridLayout4->addWidget(viewUpZ, 0, 2, 1, 1);


        vboxLayout1->addLayout(gridLayout4);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        stackedWidget->addWidget(page_2);

        hboxLayout->addWidget(stackedWidget);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

        stackedWidgetMode->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout5 = new QGridLayout(page_5);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout5->addWidget(label_10, 1, 0, 1, 1);

        position0 = new pqLineEdit(page_5);
        position0->setObjectName(QString::fromUtf8("position0"));

        gridLayout5->addWidget(position0, 1, 2, 1, 1);

        position1 = new pqLineEdit(page_5);
        position1->setObjectName(QString::fromUtf8("position1"));

        gridLayout5->addWidget(position1, 1, 3, 1, 1);

        position2 = new pqLineEdit(page_5);
        position2->setObjectName(QString::fromUtf8("position2"));

        gridLayout5->addWidget(position2, 1, 4, 1, 1);

        label_12 = new QLabel(page_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout5->addWidget(label_12, 2, 0, 1, 1);

        focalPoint0 = new pqLineEdit(page_5);
        focalPoint0->setObjectName(QString::fromUtf8("focalPoint0"));

        gridLayout5->addWidget(focalPoint0, 2, 2, 1, 1);

        focalPoint1 = new pqLineEdit(page_5);
        focalPoint1->setObjectName(QString::fromUtf8("focalPoint1"));

        gridLayout5->addWidget(focalPoint1, 2, 3, 1, 1);

        focalPoint2 = new pqLineEdit(page_5);
        focalPoint2->setObjectName(QString::fromUtf8("focalPoint2"));

        gridLayout5->addWidget(focalPoint2, 2, 4, 1, 1);

        label_13 = new QLabel(page_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout5->addWidget(label_13, 3, 0, 1, 1);

        viewUp0 = new pqLineEdit(page_5);
        viewUp0->setObjectName(QString::fromUtf8("viewUp0"));

        gridLayout5->addWidget(viewUp0, 3, 2, 1, 1);

        viewUp1 = new pqLineEdit(page_5);
        viewUp1->setObjectName(QString::fromUtf8("viewUp1"));

        gridLayout5->addWidget(viewUp1, 3, 3, 1, 1);

        viewUp2 = new pqLineEdit(page_5);
        viewUp2->setObjectName(QString::fromUtf8("viewUp2"));

        gridLayout5->addWidget(viewUp2, 3, 4, 1, 1);

        label_11 = new QLabel(page_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout5->addWidget(label_11, 5, 0, 1, 1);

        label = new QLabel(page_5);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout5->addWidget(label, 6, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem1, 8, 2, 1, 1);

        useCurrent = new QPushButton(page_5);
        useCurrent->setObjectName(QString::fromUtf8("useCurrent"));

        gridLayout5->addWidget(useCurrent, 7, 0, 1, 5);

        viewAngle = new pqLineEdit(page_5);
        viewAngle->setObjectName(QString::fromUtf8("viewAngle"));

        gridLayout5->addWidget(viewAngle, 5, 2, 1, 3);

        parallelScale = new pqLineEdit(page_5);
        parallelScale->setObjectName(QString::fromUtf8("parallelScale"));

        gridLayout5->addWidget(parallelScale, 6, 2, 1, 3);

        stackedWidgetMode->addWidget(page_5);

        gridLayout->addWidget(stackedWidgetMode, 0, 0, 1, 1);


        retranslateUi(CameraKeyFrameWidget);

        stackedWidgetMode->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(CameraKeyFrameWidget);
    } // setupUi

    void retranslateUi(QWidget *CameraKeyFrameWidget)
    {
        CameraKeyFrameWidget->setWindowTitle(QApplication::translate("CameraKeyFrameWidget", "Camera Animation", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = leftPane->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("CameraKeyFrameWidget", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = leftPane->isSortingEnabled();
        leftPane->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = leftPane->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("CameraKeyFrameWidget", "Camera Position", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = leftPane->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("CameraKeyFrameWidget", "Camera Focus", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = leftPane->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("CameraKeyFrameWidget", "Up Direction", 0, QApplication::UnicodeUTF8));
        leftPane->setSortingEnabled(__sortingEnabled);

        textBrowser->setHtml(QApplication::translate("CameraKeyFrameWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">Define Camera Parameters</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica'; font-size:9pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt;\">Using the left pane, edit the path followed by the camera's position and focal point for the keyframe being edited.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        positionContainer->setTitle(QApplication::translate("CameraKeyFrameWidget", "Position Control Points", 0, QApplication::UnicodeUTF8));
        focusContainer->setTitle(QApplication::translate("CameraKeyFrameWidget", "Focus Control Points", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CameraKeyFrameWidget", "Position", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CameraKeyFrameWidget", "Focal Point", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CameraKeyFrameWidget", "View Up", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CameraKeyFrameWidget", "View Angle", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CameraKeyFrameWidget", "Parallel Scale", 0, QApplication::UnicodeUTF8));
        useCurrent->setText(QApplication::translate("CameraKeyFrameWidget", "Use Current", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraKeyFrameWidget: public Ui_CameraKeyFrameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCAMERAKEYFRAMEWIDGET_H
