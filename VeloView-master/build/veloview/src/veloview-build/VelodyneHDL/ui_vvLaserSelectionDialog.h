/********************************************************************************
** Form generated from reading UI file 'vvLaserSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVLASERSELECTIONDIALOG_H
#define UI_VVLASERSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_vvLaserSelectionDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *EnableDisableAll;
    QPushButton *Toggle;
    QTableWidget *LaserTable;
    QDialogButtonBox *buttonBox;
    QCheckBox *saveCheckBox;

    void setupUi(QDialog *vvLaserSelectionDialog)
    {
        if (vvLaserSelectionDialog->objectName().isEmpty())
            vvLaserSelectionDialog->setObjectName(QString::fromUtf8("vvLaserSelectionDialog"));
        vvLaserSelectionDialog->resize(379, 467);
        gridLayout = new QGridLayout(vvLaserSelectionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        EnableDisableAll = new QCheckBox(vvLaserSelectionDialog);
        EnableDisableAll->setObjectName(QString::fromUtf8("EnableDisableAll"));
        EnableDisableAll->setChecked(true);
        EnableDisableAll->setTristate(false);

        gridLayout->addWidget(EnableDisableAll, 0, 1, 1, 1);

        Toggle = new QPushButton(vvLaserSelectionDialog);
        Toggle->setObjectName(QString::fromUtf8("Toggle"));

        gridLayout->addWidget(Toggle, 0, 2, 1, 1);

        LaserTable = new QTableWidget(vvLaserSelectionDialog);
        if (LaserTable->columnCount() < 3)
            LaserTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        LaserTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        LaserTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        LaserTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        LaserTable->setObjectName(QString::fromUtf8("LaserTable"));
        LaserTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        LaserTable->setSortingEnabled(false);
        LaserTable->horizontalHeader()->setVisible(true);
        LaserTable->horizontalHeader()->setStretchLastSection(true);
        LaserTable->verticalHeader()->setVisible(false);
        LaserTable->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(LaserTable, 6, 1, 1, 2);

        buttonBox = new QDialogButtonBox(vvLaserSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 2, 1, 1);

        saveCheckBox = new QCheckBox(vvLaserSelectionDialog);
        saveCheckBox->setObjectName(QString::fromUtf8("saveCheckBox"));
        saveCheckBox->setChecked(false);

        gridLayout->addWidget(saveCheckBox, 7, 1, 1, 1);


        retranslateUi(vvLaserSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), vvLaserSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), vvLaserSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvLaserSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *vvLaserSelectionDialog)
    {
        vvLaserSelectionDialog->setWindowTitle(QApplication::translate("vvLaserSelectionDialog", "Laser Selection", 0, QApplication::UnicodeUTF8));
        EnableDisableAll->setText(QApplication::translate("vvLaserSelectionDialog", "Enable/Disable all", 0, QApplication::UnicodeUTF8));
        Toggle->setText(QApplication::translate("vvLaserSelectionDialog", "&Toggle Selected", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = LaserTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("vvLaserSelectionDialog", "Vertical Angle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = LaserTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("vvLaserSelectionDialog", "Channel", 0, QApplication::UnicodeUTF8));
        saveCheckBox->setText(QApplication::translate("vvLaserSelectionDialog", "Apply in future sessions", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvLaserSelectionDialog: public Ui_vvLaserSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVLASERSELECTIONDIALOG_H
