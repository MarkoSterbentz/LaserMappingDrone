/********************************************************************************
** Form generated from reading UI file 'pqColorAnnotationsPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORANNOTATIONSPROPERTYWIDGET_H
#define UI_PQCOLORANNOTATIONSPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqExpandableTableView.h"

QT_BEGIN_NAMESPACE

class Ui_ColorAnnotationsPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *Add;
    QToolButton *Remove;
    QToolButton *AddActive;
    QToolButton *AddActiveFromVisible;
    QToolButton *ChoosePreset;
    QToolButton *SaveAsPreset;
    QSpacerItem *verticalSpacer;
    QToolButton *DeleteAll;
    pqExpandableTableView *AnnotationsTable;

    void setupUi(QWidget *ColorAnnotationsPropertyWidget)
    {
        if (ColorAnnotationsPropertyWidget->objectName().isEmpty())
            ColorAnnotationsPropertyWidget->setObjectName(QString::fromUtf8("ColorAnnotationsPropertyWidget"));
        ColorAnnotationsPropertyWidget->resize(358, 230);
        gridLayout = new QGridLayout(ColorAnnotationsPropertyWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Add = new QToolButton(ColorAnnotationsPropertyWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqPlus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Add->setIcon(icon);

        verticalLayout->addWidget(Add);

        Remove = new QToolButton(ColorAnnotationsPropertyWidget);
        Remove->setObjectName(QString::fromUtf8("Remove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqMinus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        Remove->setIcon(icon1);

        verticalLayout->addWidget(Remove);

        AddActive = new QToolButton(ColorAnnotationsPropertyWidget);
        AddActive->setObjectName(QString::fromUtf8("AddActive"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqFilter16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddActive->setIcon(icon2);

        verticalLayout->addWidget(AddActive);

        AddActiveFromVisible = new QToolButton(ColorAnnotationsPropertyWidget);
        AddActiveFromVisible->setObjectName(QString::fromUtf8("AddActiveFromVisible"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqFilterEyeball16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddActiveFromVisible->setIcon(icon3);

        verticalLayout->addWidget(AddActiveFromVisible);

        ChoosePreset = new QToolButton(ColorAnnotationsPropertyWidget);
        ChoosePreset->setObjectName(QString::fromUtf8("ChoosePreset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqFavorites16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChoosePreset->setIcon(icon4);

        verticalLayout->addWidget(ChoosePreset);

        SaveAsPreset = new QToolButton(ColorAnnotationsPropertyWidget);
        SaveAsPreset->setObjectName(QString::fromUtf8("SaveAsPreset"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqSave16.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAsPreset->setIcon(icon5);

        verticalLayout->addWidget(SaveAsPreset);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DeleteAll = new QToolButton(ColorAnnotationsPropertyWidget);
        DeleteAll->setObjectName(QString::fromUtf8("DeleteAll"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/QtWidgets/Icons/pqDelete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteAll->setIcon(icon6);

        verticalLayout->addWidget(DeleteAll);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        AnnotationsTable = new pqExpandableTableView(ColorAnnotationsPropertyWidget);
        AnnotationsTable->setObjectName(QString::fromUtf8("AnnotationsTable"));
        AnnotationsTable->setDragDropMode(QAbstractItemView::InternalMove);
        AnnotationsTable->setDefaultDropAction(Qt::MoveAction);
        AnnotationsTable->setAlternatingRowColors(true);
        AnnotationsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        AnnotationsTable->setProperty("maximumRowCountBeforeScrolling", QVariant(10));

        gridLayout->addWidget(AnnotationsTable, 0, 0, 1, 1);


        retranslateUi(ColorAnnotationsPropertyWidget);

        QMetaObject::connectSlotsByName(ColorAnnotationsPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorAnnotationsPropertyWidget)
    {
        ColorAnnotationsPropertyWidget->setWindowTitle(QApplication::translate("ColorAnnotationsPropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Add->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Add new entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Add->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Remove->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Remove current entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Remove->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AddActive->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Add active values from selected source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AddActive->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AddActiveFromVisible->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Add active values from visible pipeline objects", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AddActiveFromVisible->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ChoosePreset->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Choose preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ChoosePreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        SaveAsPreset->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Save to preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SaveAsPreset->setText(QString());
#ifndef QT_NO_TOOLTIP
        DeleteAll->setToolTip(QApplication::translate("ColorAnnotationsPropertyWidget", "Delete all annotations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DeleteAll->setText(QApplication::translate("ColorAnnotationsPropertyWidget", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorAnnotationsPropertyWidget: public Ui_ColorAnnotationsPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORANNOTATIONSPROPERTYWIDGET_H
