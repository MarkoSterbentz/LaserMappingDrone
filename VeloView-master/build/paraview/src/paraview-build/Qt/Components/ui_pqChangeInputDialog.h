/********************************************************************************
** Form generated from reading UI file 'pqChangeInputDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCHANGEINPUTDIALOG_H
#define UI_PQCHANGEINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include "pqFlatTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_pqChangeInputDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *buttonFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QLabel *selectInputLabel;
    pqFlatTreeView *pipelineView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqChangeInputDialog)
    {
        if (pqChangeInputDialog->objectName().isEmpty())
            pqChangeInputDialog->setObjectName(QString::fromUtf8("pqChangeInputDialog"));
        pqChangeInputDialog->resize(500, 400);
        gridLayout = new QGridLayout(pqChangeInputDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonFrame = new QFrame(pqChangeInputDialog);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::NoFrame);
        verticalLayout = new QVBoxLayout(buttonFrame);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(buttonFrame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        gridLayout->addWidget(buttonFrame, 0, 0, 2, 1);

        line = new QFrame(pqChangeInputDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 2, 1);

        selectInputLabel = new QLabel(pqChangeInputDialog);
        selectInputLabel->setObjectName(QString::fromUtf8("selectInputLabel"));

        gridLayout->addWidget(selectInputLabel, 0, 2, 1, 1);

        pipelineView = new pqFlatTreeView(pqChangeInputDialog);
        pipelineView->setObjectName(QString::fromUtf8("pipelineView"));

        gridLayout->addWidget(pipelineView, 1, 2, 1, 1);

        buttonBox = new QDialogButtonBox(pqChangeInputDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 3);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(pqChangeInputDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqChangeInputDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqChangeInputDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqChangeInputDialog);
    } // setupUi

    void retranslateUi(QDialog *pqChangeInputDialog)
    {
        pqChangeInputDialog->setWindowTitle(QApplication::translate("pqChangeInputDialog", "Change Input Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqChangeInputDialog", "Available Input Ports", 0, QApplication::UnicodeUTF8));
        selectInputLabel->setText(QApplication::translate("pqChangeInputDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select <span style=\" font-weight:600;\">INPUT0</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqChangeInputDialog: public Ui_pqChangeInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCHANGEINPUTDIALOG_H
