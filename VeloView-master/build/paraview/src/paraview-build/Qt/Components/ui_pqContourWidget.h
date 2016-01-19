/********************************************************************************
** Form generated from reading UI file 'pqContourWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCONTOURWIDGET_H
#define UI_PQCONTOURWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContourWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QCheckBox *Visibility;
    QCheckBox *Closed;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *EditMode;
    QRadioButton *ModifyMode;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *Delete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Finished;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ContourWidget)
    {
        if (ContourWidget->objectName().isEmpty())
            ContourWidget->setObjectName(QString::fromUtf8("ContourWidget"));
        ContourWidget->resize(313, 427);
        verticalLayout_3 = new QVBoxLayout(ContourWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_2 = new QFrame(ContourWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Visibility = new QCheckBox(frame_2);
        Visibility->setObjectName(QString::fromUtf8("Visibility"));

        gridLayout->addWidget(Visibility, 0, 0, 1, 1);

        Closed = new QCheckBox(frame_2);
        Closed->setObjectName(QString::fromUtf8("Closed"));

        gridLayout->addWidget(Closed, 1, 0, 1, 1);


        horizontalLayout->addWidget(frame_2);

        frame_3 = new QFrame(ContourWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        EditMode = new QRadioButton(frame_3);
        EditMode->setObjectName(QString::fromUtf8("EditMode"));
        EditMode->setChecked(true);

        verticalLayout_2->addWidget(EditMode);

        ModifyMode = new QRadioButton(frame_3);
        ModifyMode->setObjectName(QString::fromUtf8("ModifyMode"));

        verticalLayout_2->addWidget(ModifyMode);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Delete = new QToolButton(ContourWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Delete->setIcon(icon);
        Delete->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(Delete);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Finished = new QPushButton(ContourWidget);
        Finished->setObjectName(QString::fromUtf8("Finished"));

        horizontalLayout_2->addWidget(Finished);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        label = new QLabel(ContourWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_3->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(ContourWidget);

        QMetaObject::connectSlotsByName(ContourWidget);
    } // setupUi

    void retranslateUi(QWidget *ContourWidget)
    {
        ContourWidget->setWindowTitle(QApplication::translate("ContourWidget", "Form", 0, QApplication::UnicodeUTF8));
        Visibility->setText(QApplication::translate("ContourWidget", "Show Widget", 0, QApplication::UnicodeUTF8));
        Closed->setText(QApplication::translate("ContourWidget", "Close Contour", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        EditMode->setToolTip(QApplication::translate("ContourWidget", "Enter Edit Mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EditMode->setText(QApplication::translate("ContourWidget", "Edit Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ModifyMode->setToolTip(QApplication::translate("ContourWidget", "Enter Modify Mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ModifyMode->setText(QApplication::translate("ContourWidget", "Modify Mode", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("ContourWidget", "Delete All Nodes", 0, QApplication::UnicodeUTF8));
        Finished->setText(QApplication::translate("ContourWidget", "Finished", 0, QApplication::UnicodeUTF8));
        Finished->setShortcut(QApplication::translate("ContourWidget", "Alt+F", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ContourWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; color:#ff5500;\">Edit Mode:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">1. Left Click </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">to add new nodes.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">2. Delete Key </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">to remove last added node.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">3. Left Click  on First Node </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">to close contour or press </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">Modify Mode </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">to finish contour drawing and enter </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">Modify Mode</span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">.</spa"
                        "n></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; color:#ff5500;\">Modify Mode:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">1. Left Click </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">on the line to insert new nodes.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:"
                        "600;\">2.</span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\"> Ctrl+Click</span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\"> on a node to label as picked.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">3. Move mouse over a node, the node will become active, drag it to change its location, or use </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\">Delete Key </span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600;\">to remove it.</span><span style=\" font-family:'Helvetica'; font-size:9pt; font-weight:600; font-style:italic;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p><"
                        "/body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ContourWidget: public Ui_ContourWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCONTOURWIDGET_H
