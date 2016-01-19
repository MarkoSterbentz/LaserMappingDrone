/********************************************************************************
** Form generated from reading UI file 'pqRescaleRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQRESCALERANGEDIALOG_H
#define UI_PQRESCALERANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_pqRescaleRangeDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *RescaleButton;
    QPushButton *CancelButton;
    QLabel *label_2;
    QLineEdit *MaximumScalar;
    QLineEdit *MinimumScalar;
    QLabel *label;

    void setupUi(QDialog *pqRescaleRangeDialog)
    {
        if (pqRescaleRangeDialog->objectName().isEmpty())
            pqRescaleRangeDialog->setObjectName(QString::fromUtf8("pqRescaleRangeDialog"));
        pqRescaleRangeDialog->resize(303, 70);
        gridLayout = new QGridLayout(pqRescaleRangeDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        RescaleButton = new QPushButton(pqRescaleRangeDialog);
        RescaleButton->setObjectName(QString::fromUtf8("RescaleButton"));
        RescaleButton->setDefault(true);

        hboxLayout->addWidget(RescaleButton);

        CancelButton = new QPushButton(pqRescaleRangeDialog);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        hboxLayout->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 4);

        label_2 = new QLabel(pqRescaleRangeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        MaximumScalar = new QLineEdit(pqRescaleRangeDialog);
        MaximumScalar->setObjectName(QString::fromUtf8("MaximumScalar"));

        gridLayout->addWidget(MaximumScalar, 0, 3, 1, 1);

        MinimumScalar = new QLineEdit(pqRescaleRangeDialog);
        MinimumScalar->setObjectName(QString::fromUtf8("MinimumScalar"));

        gridLayout->addWidget(MinimumScalar, 0, 1, 1, 1);

        label = new QLabel(pqRescaleRangeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        QWidget::setTabOrder(MinimumScalar, MaximumScalar);
        QWidget::setTabOrder(MaximumScalar, RescaleButton);
        QWidget::setTabOrder(RescaleButton, CancelButton);

        retranslateUi(pqRescaleRangeDialog);

        QMetaObject::connectSlotsByName(pqRescaleRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqRescaleRangeDialog)
    {
        pqRescaleRangeDialog->setWindowTitle(QApplication::translate("pqRescaleRangeDialog", "Set Range", 0, QApplication::UnicodeUTF8));
        RescaleButton->setText(QApplication::translate("pqRescaleRangeDialog", "&Rescale", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("pqRescaleRangeDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqRescaleRangeDialog", "Maximum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        MaximumScalar->setWhatsThis(QApplication::translate("pqRescaleRangeDialog", "Enter the new range maximum here.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        MinimumScalar->setWhatsThis(QApplication::translate("pqRescaleRangeDialog", "Enter the new range minimum here.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("pqRescaleRangeDialog", "Minimum", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqRescaleRangeDialog: public Ui_pqRescaleRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQRESCALERANGEDIALOG_H
