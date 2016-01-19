/********************************************************************************
** Form generated from reading UI file 'pqScalarValueListPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSCALARVALUELISTPROPERTYWIDGET_H
#define UI_PQSCALARVALUELISTPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqExpandableTableView.h"

QT_BEGIN_NAMESPACE

class Ui_ScalarValueListPropertyWidget
{
public:
    QGridLayout *gridLayout;
    pqExpandableTableView *Table;
    QVBoxLayout *verticalLayout;
    QToolButton *Add;
    QToolButton *Remove;
    QToolButton *AddRange;
    QSpacerItem *verticalSpacer;
    QToolButton *RemoveAll;
    QLabel *ScalarRangeLabel;

    void setupUi(QWidget *ScalarValueListPropertyWidget)
    {
        if (ScalarValueListPropertyWidget->objectName().isEmpty())
            ScalarValueListPropertyWidget->setObjectName(QString::fromUtf8("ScalarValueListPropertyWidget"));
        ScalarValueListPropertyWidget->resize(212, 215);
        gridLayout = new QGridLayout(ScalarValueListPropertyWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        Table = new pqExpandableTableView(ScalarValueListPropertyWidget);
        Table->setObjectName(QString::fromUtf8("Table"));
        Table->setDragDropMode(QAbstractItemView::InternalMove);
        Table->setDefaultDropAction(Qt::MoveAction);
        Table->setAlternatingRowColors(true);
        Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        Table->setProperty("maximumRowCountBeforeScrolling", QVariant(10));

        gridLayout->addWidget(Table, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Add = new QToolButton(ScalarValueListPropertyWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqPlus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Add->setIcon(icon);

        verticalLayout->addWidget(Add);

        Remove = new QToolButton(ScalarValueListPropertyWidget);
        Remove->setObjectName(QString::fromUtf8("Remove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqMinus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Remove->setIcon(icon1);

        verticalLayout->addWidget(Remove);

        AddRange = new QToolButton(ScalarValueListPropertyWidget);
        AddRange->setObjectName(QString::fromUtf8("AddRange"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqRuler16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddRange->setIcon(icon2);

        verticalLayout->addWidget(AddRange);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        RemoveAll = new QToolButton(ScalarValueListPropertyWidget);
        RemoveAll->setObjectName(QString::fromUtf8("RemoveAll"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveAll->setIcon(icon3);

        verticalLayout->addWidget(RemoveAll);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        ScalarRangeLabel = new QLabel(ScalarValueListPropertyWidget);
        ScalarRangeLabel->setObjectName(QString::fromUtf8("ScalarRangeLabel"));

        gridLayout->addWidget(ScalarRangeLabel, 0, 0, 1, 2);


        retranslateUi(ScalarValueListPropertyWidget);

        QMetaObject::connectSlotsByName(ScalarValueListPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ScalarValueListPropertyWidget)
    {
        ScalarValueListPropertyWidget->setWindowTitle(QApplication::translate("ScalarValueListPropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Add->setToolTip(QApplication::translate("ScalarValueListPropertyWidget", "Add new entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Add->setText(QApplication::translate("ScalarValueListPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Remove->setToolTip(QApplication::translate("ScalarValueListPropertyWidget", "Remove current entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Remove->setText(QApplication::translate("ScalarValueListPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AddRange->setToolTip(QApplication::translate("ScalarValueListPropertyWidget", "Add a range of values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AddRange->setText(QApplication::translate("ScalarValueListPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RemoveAll->setToolTip(QApplication::translate("ScalarValueListPropertyWidget", "Remove all entries", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RemoveAll->setText(QApplication::translate("ScalarValueListPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
        ScalarRangeLabel->setText(QApplication::translate("ScalarValueListPropertyWidget", "<html><head/><body><p><span style=\" font-weight:600;\">Value Range:</span>  [%1, %2]</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScalarValueListPropertyWidget: public Ui_ScalarValueListPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSCALARVALUELISTPROPERTYWIDGET_H
