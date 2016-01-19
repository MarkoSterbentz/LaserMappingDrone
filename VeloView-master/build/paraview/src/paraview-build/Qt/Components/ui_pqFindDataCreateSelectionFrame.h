/********************************************************************************
** Form generated from reading UI file 'pqFindDataCreateSelectionFrame.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQFINDDATACREATESELECTIONFRAME_H
#define UI_PQFINDDATACREATESELECTIONFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqOutputPortComboBox.h"
#include "pqQueryClauseWidget.h"

QT_BEGIN_NAMESPACE

class Ui_FindDataCreateSelectionFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *selectionType;
    QLabel *label_4;
    pqOutputPortComboBox *source;
    pqQueryClauseWidget *queryClauseWidget;
    QPushButton *runQuery;

    void setupUi(QWidget *FindDataCreateSelectionFrame)
    {
        if (FindDataCreateSelectionFrame->objectName().isEmpty())
            FindDataCreateSelectionFrame->setObjectName(QString::fromUtf8("FindDataCreateSelectionFrame"));
        FindDataCreateSelectionFrame->resize(450, 96);
        verticalLayout = new QVBoxLayout(FindDataCreateSelectionFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(FindDataCreateSelectionFrame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        selectionType = new QComboBox(FindDataCreateSelectionFrame);
        selectionType->setObjectName(QString::fromUtf8("selectionType"));
        selectionType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(selectionType);

        label_4 = new QLabel(FindDataCreateSelectionFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        source = new pqOutputPortComboBox(FindDataCreateSelectionFrame);
        source->setObjectName(QString::fromUtf8("source"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(source->sizePolicy().hasHeightForWidth());
        source->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(source);


        verticalLayout->addLayout(horizontalLayout);

        queryClauseWidget = new pqQueryClauseWidget(FindDataCreateSelectionFrame);
        queryClauseWidget->setObjectName(QString::fromUtf8("queryClauseWidget"));
        queryClauseWidget->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(queryClauseWidget->sizePolicy().hasHeightForWidth());
        queryClauseWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(queryClauseWidget);

        runQuery = new QPushButton(FindDataCreateSelectionFrame);
        runQuery->setObjectName(QString::fromUtf8("runQuery"));
        runQuery->setEnabled(false);

        verticalLayout->addWidget(runQuery);


        retranslateUi(FindDataCreateSelectionFrame);

        QMetaObject::connectSlotsByName(FindDataCreateSelectionFrame);
    } // setupUi

    void retranslateUi(QWidget *FindDataCreateSelectionFrame)
    {
        FindDataCreateSelectionFrame->setWindowTitle(QApplication::translate("FindDataCreateSelectionFrame", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FindDataCreateSelectionFrame", "Find", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FindDataCreateSelectionFrame", "from", 0, QApplication::UnicodeUTF8));
        runQuery->setText(QApplication::translate("FindDataCreateSelectionFrame", "Run Selection Query", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindDataCreateSelectionFrame: public Ui_FindDataCreateSelectionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQFINDDATACREATESELECTIONFRAME_H
