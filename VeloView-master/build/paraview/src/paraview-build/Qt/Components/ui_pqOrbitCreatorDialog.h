/********************************************************************************
** Form generated from reading UI file 'pqOrbitCreatorDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQORBITCREATORDIALOG_H
#define UI_PQORBITCREATORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "pqLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_OrbitCreatorDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    pqLineEdit *center0;
    pqLineEdit *center1;
    pqLineEdit *center2;
    QLabel *normalLabel;
    pqLineEdit *normal0;
    pqLineEdit *normal1;
    pqLineEdit *normal2;
    QLabel *label_2;
    pqLineEdit *origin0;
    QSpacerItem *spacerItem;
    QLineEdit *origin1;
    QLineEdit *origin2;
    QHBoxLayout *hboxLayout;
    QPushButton *resetBounds;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrbitCreatorDialog)
    {
        if (OrbitCreatorDialog->objectName().isEmpty())
            OrbitCreatorDialog->setObjectName(QString::fromUtf8("OrbitCreatorDialog"));
        OrbitCreatorDialog->resize(309, 210);
        vboxLayout = new QVBoxLayout(OrbitCreatorDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OrbitCreatorDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        center0 = new pqLineEdit(groupBox);
        center0->setObjectName(QString::fromUtf8("center0"));

        gridLayout->addWidget(center0, 0, 1, 1, 1);

        center1 = new pqLineEdit(groupBox);
        center1->setObjectName(QString::fromUtf8("center1"));

        gridLayout->addWidget(center1, 0, 2, 1, 1);

        center2 = new pqLineEdit(groupBox);
        center2->setObjectName(QString::fromUtf8("center2"));

        gridLayout->addWidget(center2, 0, 3, 1, 1);

        normalLabel = new QLabel(groupBox);
        normalLabel->setObjectName(QString::fromUtf8("normalLabel"));

        gridLayout->addWidget(normalLabel, 1, 0, 1, 1);

        normal0 = new pqLineEdit(groupBox);
        normal0->setObjectName(QString::fromUtf8("normal0"));

        gridLayout->addWidget(normal0, 1, 1, 1, 1);

        normal1 = new pqLineEdit(groupBox);
        normal1->setObjectName(QString::fromUtf8("normal1"));

        gridLayout->addWidget(normal1, 1, 2, 1, 1);

        normal2 = new pqLineEdit(groupBox);
        normal2->setObjectName(QString::fromUtf8("normal2"));

        gridLayout->addWidget(normal2, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        origin0 = new pqLineEdit(groupBox);
        origin0->setObjectName(QString::fromUtf8("origin0"));

        gridLayout->addWidget(origin0, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 2, 1, 1);

        origin1 = new QLineEdit(groupBox);
        origin1->setObjectName(QString::fromUtf8("origin1"));

        gridLayout->addWidget(origin1, 2, 2, 1, 1);

        origin2 = new QLineEdit(groupBox);
        origin2->setObjectName(QString::fromUtf8("origin2"));

        gridLayout->addWidget(origin2, 2, 3, 1, 1);


        vboxLayout->addWidget(groupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        resetBounds = new QPushButton(OrbitCreatorDialog);
        resetBounds->setObjectName(QString::fromUtf8("resetBounds"));

        hboxLayout->addWidget(resetBounds);

        buttonBox = new QDialogButtonBox(OrbitCreatorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(OrbitCreatorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrbitCreatorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrbitCreatorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrbitCreatorDialog);
    } // setupUi

    void retranslateUi(QDialog *OrbitCreatorDialog)
    {
        OrbitCreatorDialog->setWindowTitle(QApplication::translate("OrbitCreatorDialog", "Create Orbit", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OrbitCreatorDialog", "Orbit Parameters", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OrbitCreatorDialog", "Center", 0, QApplication::UnicodeUTF8));
        normalLabel->setText(QApplication::translate("OrbitCreatorDialog", "Normal", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OrbitCreatorDialog", "Origin", 0, QApplication::UnicodeUTF8));
        resetBounds->setText(QApplication::translate("OrbitCreatorDialog", "Reset Bounds", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OrbitCreatorDialog: public Ui_OrbitCreatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQORBITCREATORDIALOG_H
