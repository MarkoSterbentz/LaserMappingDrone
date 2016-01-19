/********************************************************************************
** Form generated from reading UI file 'pqFindDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATADIALOG_H
#define UI_PQFINDDATADIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "pqFindDataCreateSelectionFrame.h"
#include "pqFindDataCurrentSelectionFrame.h"
#include "pqFindDataSelectionDisplayFrame.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QFrame *line;
    pqFindDataCreateSelectionFrame *createSelectionFrame;
    QSpacerItem *verticalSpacer;
    QLabel *currentSelectionLabel;
    QFrame *line_2;
    pqFindDataCurrentSelectionFrame *currentSelectionFrame;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QFrame *line_3;
    pqFindDataSelectionDisplayFrame *selectionDisplayFrame;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *freezeSelection;
    QPushButton *extractSelection;
    QPushButton *extractSelectionOverTime;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FindDataDialog)
    {
        if (FindDataDialog->objectName().isEmpty())
            FindDataDialog->setObjectName(QString::fromUtf8("FindDataDialog"));
        FindDataDialog->resize(605, 441);
        verticalLayout = new QVBoxLayout(FindDataDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(FindDataDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        line = new QFrame(FindDataDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        createSelectionFrame = new pqFindDataCreateSelectionFrame(FindDataDialog);
        createSelectionFrame->setObjectName(QString::fromUtf8("createSelectionFrame"));

        verticalLayout->addWidget(createSelectionFrame);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        currentSelectionLabel = new QLabel(FindDataDialog);
        currentSelectionLabel->setObjectName(QString::fromUtf8("currentSelectionLabel"));
        currentSelectionLabel->setFont(font);

        verticalLayout->addWidget(currentSelectionLabel);

        line_2 = new QFrame(FindDataDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        currentSelectionFrame = new pqFindDataCurrentSelectionFrame(FindDataDialog);
        currentSelectionFrame->setObjectName(QString::fromUtf8("currentSelectionFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentSelectionFrame->sizePolicy().hasHeightForWidth());
        currentSelectionFrame->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(currentSelectionFrame);

        verticalSpacer_2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(FindDataDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        line_3 = new QFrame(FindDataDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        selectionDisplayFrame = new pqFindDataSelectionDisplayFrame(FindDataDialog);
        selectionDisplayFrame->setObjectName(QString::fromUtf8("selectionDisplayFrame"));

        verticalLayout->addWidget(selectionDisplayFrame);

        verticalSpacer_3 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        line_4 = new QFrame(FindDataDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        freezeSelection = new QPushButton(FindDataDialog);
        freezeSelection->setObjectName(QString::fromUtf8("freezeSelection"));
        freezeSelection->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(freezeSelection->sizePolicy().hasHeightForWidth());
        freezeSelection->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(freezeSelection);

        extractSelection = new QPushButton(FindDataDialog);
        extractSelection->setObjectName(QString::fromUtf8("extractSelection"));
        extractSelection->setEnabled(false);

        horizontalLayout_3->addWidget(extractSelection);

        extractSelectionOverTime = new QPushButton(FindDataDialog);
        extractSelectionOverTime->setObjectName(QString::fromUtf8("extractSelectionOverTime"));
        extractSelectionOverTime->setEnabled(false);

        horizontalLayout_3->addWidget(extractSelectionOverTime);

        buttonBox = new QDialogButtonBox(FindDataDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(FindDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FindDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FindDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FindDataDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDataDialog)
    {
        FindDataDialog->setWindowTitle(QApplication::translate("FindDataDialog", "Find Data", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FindDataDialog", "Create Selection", 0, QApplication::UnicodeUTF8));
        currentSelectionLabel->setText(QApplication::translate("FindDataDialog", "Current Selection (none)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FindDataDialog", "Selection Display Properties", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        freezeSelection->setToolTip(QApplication::translate("FindDataDialog", "<p>Freeze the selection to select the currently selected elements by IDs instead of the current selection criteria</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        freezeSelection->setText(QApplication::translate("FindDataDialog", "Freeze Selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extractSelection->setToolTip(QApplication::translate("FindDataDialog", "<p>Create a new <b>Extract Selection</b> filter to extract the current selection</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extractSelection->setText(QApplication::translate("FindDataDialog", "Extract Selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extractSelectionOverTime->setToolTip(QApplication::translate("FindDataDialog", "<p>Create a new <b>Plot Selection Over Time</b> filter to plot the current selection over time</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extractSelectionOverTime->setText(QApplication::translate("FindDataDialog", "Plot Selection Over Time", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindDataDialog: public Ui_FindDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATADIALOG_H
