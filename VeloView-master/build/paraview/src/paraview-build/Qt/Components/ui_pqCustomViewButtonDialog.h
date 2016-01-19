/********************************************************************************
** Form generated from reading UI file 'pqCustomViewButtonDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCUSTOMVIEWBUTTONDIALOG_H
#define UI_PQCUSTOMVIEWBUTTONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqCustomViewButtonDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *toolTip0;
    QPushButton *assignCurrentView0;
    QLabel *label_4;
    QLineEdit *toolTip1;
    QPushButton *assignCurrentView1;
    QLabel *label_5;
    QLineEdit *toolTip2;
    QPushButton *assignCurrentView2;
    QLabel *label_6;
    QLineEdit *toolTip3;
    QPushButton *assignCurrentView3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearAll;
    QPushButton *importAll;
    QPushButton *exportAll;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqCustomViewButtonDialog)
    {
        if (pqCustomViewButtonDialog->objectName().isEmpty())
            pqCustomViewButtonDialog->setObjectName(QString::fromUtf8("pqCustomViewButtonDialog"));
        pqCustomViewButtonDialog->resize(437, 221);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqCustomViewButtonDialog->sizePolicy().hasHeightForWidth());
        pqCustomViewButtonDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(pqCustomViewButtonDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(pqCustomViewButtonDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(pqCustomViewButtonDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(pqCustomViewButtonDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        label_3 = new QLabel(pqCustomViewButtonDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        toolTip0 = new QLineEdit(pqCustomViewButtonDialog);
        toolTip0->setObjectName(QString::fromUtf8("toolTip0"));

        gridLayout->addWidget(toolTip0, 1, 1, 1, 1);

        assignCurrentView0 = new QPushButton(pqCustomViewButtonDialog);
        assignCurrentView0->setObjectName(QString::fromUtf8("assignCurrentView0"));

        gridLayout->addWidget(assignCurrentView0, 1, 2, 1, 1);

        label_4 = new QLabel(pqCustomViewButtonDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        toolTip1 = new QLineEdit(pqCustomViewButtonDialog);
        toolTip1->setObjectName(QString::fromUtf8("toolTip1"));

        gridLayout->addWidget(toolTip1, 2, 1, 1, 1);

        assignCurrentView1 = new QPushButton(pqCustomViewButtonDialog);
        assignCurrentView1->setObjectName(QString::fromUtf8("assignCurrentView1"));

        gridLayout->addWidget(assignCurrentView1, 2, 2, 1, 1);

        label_5 = new QLabel(pqCustomViewButtonDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        toolTip2 = new QLineEdit(pqCustomViewButtonDialog);
        toolTip2->setObjectName(QString::fromUtf8("toolTip2"));

        gridLayout->addWidget(toolTip2, 3, 1, 1, 1);

        assignCurrentView2 = new QPushButton(pqCustomViewButtonDialog);
        assignCurrentView2->setObjectName(QString::fromUtf8("assignCurrentView2"));

        gridLayout->addWidget(assignCurrentView2, 3, 2, 1, 1);

        label_6 = new QLabel(pqCustomViewButtonDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        toolTip3 = new QLineEdit(pqCustomViewButtonDialog);
        toolTip3->setObjectName(QString::fromUtf8("toolTip3"));

        gridLayout->addWidget(toolTip3, 4, 1, 1, 1);

        assignCurrentView3 = new QPushButton(pqCustomViewButtonDialog);
        assignCurrentView3->setObjectName(QString::fromUtf8("assignCurrentView3"));

        gridLayout->addWidget(assignCurrentView3, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearAll = new QPushButton(pqCustomViewButtonDialog);
        clearAll->setObjectName(QString::fromUtf8("clearAll"));

        horizontalLayout->addWidget(clearAll);

        importAll = new QPushButton(pqCustomViewButtonDialog);
        importAll->setObjectName(QString::fromUtf8("importAll"));

        horizontalLayout->addWidget(importAll);

        exportAll = new QPushButton(pqCustomViewButtonDialog);
        exportAll->setObjectName(QString::fromUtf8("exportAll"));

        horizontalLayout->addWidget(exportAll);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(pqCustomViewButtonDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqCustomViewButtonDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqCustomViewButtonDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqCustomViewButtonDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqCustomViewButtonDialog);
    } // setupUi

    void retranslateUi(QDialog *pqCustomViewButtonDialog)
    {
        pqCustomViewButtonDialog->setWindowTitle(QApplication::translate("pqCustomViewButtonDialog", "Configure custom view buttons", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("pqCustomViewButtonDialog", "Button", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("pqCustomViewButtonDialog", "Tool Tip", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("pqCustomViewButtonDialog", "Assign", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqCustomViewButtonDialog", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolTip0->setToolTip(QApplication::translate("pqCustomViewButtonDialog", "This text will be set to the buttons tool tip.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        assignCurrentView0->setText(QApplication::translate("pqCustomViewButtonDialog", "current view", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pqCustomViewButtonDialog", "2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolTip1->setToolTip(QApplication::translate("pqCustomViewButtonDialog", "This text will be set to the buttons tool tip.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        assignCurrentView1->setText(QApplication::translate("pqCustomViewButtonDialog", "current view", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pqCustomViewButtonDialog", "3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolTip2->setToolTip(QApplication::translate("pqCustomViewButtonDialog", "This text will be set to the buttons tool tip.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        assignCurrentView2->setText(QApplication::translate("pqCustomViewButtonDialog", "current view", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("pqCustomViewButtonDialog", "4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolTip3->setToolTip(QApplication::translate("pqCustomViewButtonDialog", "This text will be set to the buttons tool tip.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        assignCurrentView3->setText(QApplication::translate("pqCustomViewButtonDialog", "current view", 0, QApplication::UnicodeUTF8));
        clearAll->setText(QApplication::translate("pqCustomViewButtonDialog", "clear all", 0, QApplication::UnicodeUTF8));
        importAll->setText(QApplication::translate("pqCustomViewButtonDialog", "import...", 0, QApplication::UnicodeUTF8));
        exportAll->setText(QApplication::translate("pqCustomViewButtonDialog", "export...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqCustomViewButtonDialog: public Ui_pqCustomViewButtonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCUSTOMVIEWBUTTONDIALOG_H
