/********************************************************************************
** Form generated from reading UI file 'pqWriterDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQWRITERDIALOG_H
#define UI_PQWRITERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqWriterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *PropertiesFrame;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QWidget *Container;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqWriterDialog)
    {
        if (pqWriterDialog->objectName().isEmpty())
            pqWriterDialog->setObjectName(QString::fromUtf8("pqWriterDialog"));
        pqWriterDialog->resize(372, 274);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqWriterDialog->sizePolicy().hasHeightForWidth());
        pqWriterDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(pqWriterDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(pqWriterDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        PropertiesFrame = new QScrollArea(pqWriterDialog);
        PropertiesFrame->setObjectName(QString::fromUtf8("PropertiesFrame"));
        PropertiesFrame->setFrameShape(QFrame::NoFrame);
        PropertiesFrame->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 354, 200));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Container = new QWidget(scrollAreaWidgetContents);
        Container->setObjectName(QString::fromUtf8("Container"));

        gridLayout->addWidget(Container, 0, 0, 1, 1);

        PropertiesFrame->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(PropertiesFrame);

        buttonBox = new QDialogButtonBox(pqWriterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqWriterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqWriterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqWriterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqWriterDialog);
    } // setupUi

    void retranslateUi(QDialog *pqWriterDialog)
    {
        pqWriterDialog->setWindowTitle(QApplication::translate("pqWriterDialog", "Configure Writer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqWriterDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Configure Writer Properties</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqWriterDialog: public Ui_pqWriterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQWRITERDIALOG_H
