/********************************************************************************
** Form generated from reading UI file 'pqSampleScalarWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSAMPLESCALARWIDGET_H
#define UI_PQSAMPLESCALARWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqSampleScalarWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QCheckBox *ScientificNotation;
    QPushButton *NewRange;
    QPushButton *NewValue;
    QPushButton *DeleteAll;
    QPushButton *Delete;
    QListView *Values;
    QLabel *ScalarRange;

    void setupUi(QWidget *pqSampleScalarWidget)
    {
        if (pqSampleScalarWidget->objectName().isEmpty())
            pqSampleScalarWidget->setObjectName(QString::fromUtf8("pqSampleScalarWidget"));
        pqSampleScalarWidget->resize(209, 202);
        gridLayout = new QGridLayout(pqSampleScalarWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(75, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 6, 1, 1, 1);

        ScientificNotation = new QCheckBox(pqSampleScalarWidget);
        ScientificNotation->setObjectName(QString::fromUtf8("ScientificNotation"));

        gridLayout->addWidget(ScientificNotation, 5, 1, 1, 1);

        NewRange = new QPushButton(pqSampleScalarWidget);
        NewRange->setObjectName(QString::fromUtf8("NewRange"));

        gridLayout->addWidget(NewRange, 4, 1, 1, 1);

        NewValue = new QPushButton(pqSampleScalarWidget);
        NewValue->setObjectName(QString::fromUtf8("NewValue"));

        gridLayout->addWidget(NewValue, 3, 1, 1, 1);

        DeleteAll = new QPushButton(pqSampleScalarWidget);
        DeleteAll->setObjectName(QString::fromUtf8("DeleteAll"));
        DeleteAll->setEnabled(true);

        gridLayout->addWidget(DeleteAll, 2, 1, 1, 1);

        Delete = new QPushButton(pqSampleScalarWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setEnabled(true);

        gridLayout->addWidget(Delete, 1, 1, 1, 1);

        Values = new QListView(pqSampleScalarWidget);
        Values->setObjectName(QString::fromUtf8("Values"));
        Values->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::NoEditTriggers|QAbstractItemView::SelectedClicked);

        gridLayout->addWidget(Values, 1, 0, 6, 1);

        ScalarRange = new QLabel(pqSampleScalarWidget);
        ScalarRange->setObjectName(QString::fromUtf8("ScalarRange"));

        gridLayout->addWidget(ScalarRange, 0, 0, 1, 2);


        retranslateUi(pqSampleScalarWidget);

        QMetaObject::connectSlotsByName(pqSampleScalarWidget);
    } // setupUi

    void retranslateUi(QWidget *pqSampleScalarWidget)
    {
        pqSampleScalarWidget->setWindowTitle(QApplication::translate("pqSampleScalarWidget", "Form", 0, QApplication::UnicodeUTF8));
        ScientificNotation->setText(QApplication::translate("pqSampleScalarWidget", "Scientific", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        NewRange->setToolTip(QApplication::translate("pqSampleScalarWidget", "Add a single value to the current set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        NewRange->setStatusTip(QApplication::translate("pqSampleScalarWidget", "Add a single value to the current set.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        NewRange->setText(QApplication::translate("pqSampleScalarWidget", "New Range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        NewValue->setToolTip(QApplication::translate("pqSampleScalarWidget", "Add a single value to the current set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        NewValue->setStatusTip(QApplication::translate("pqSampleScalarWidget", "Add a single value to the current set.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        NewValue->setText(QApplication::translate("pqSampleScalarWidget", "New Value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DeleteAll->setToolTip(QApplication::translate("pqSampleScalarWidget", "Delete selected values from the current set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DeleteAll->setText(QApplication::translate("pqSampleScalarWidget", "Delete All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Delete->setToolTip(QApplication::translate("pqSampleScalarWidget", "Delete selected values from the current set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Delete->setText(QApplication::translate("pqSampleScalarWidget", "Delete", 0, QApplication::UnicodeUTF8));
        ScalarRange->setText(QApplication::translate("pqSampleScalarWidget", "Scalar Range: 0.0 - 1.0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqSampleScalarWidget: public Ui_pqSampleScalarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSAMPLESCALARWIDGET_H
