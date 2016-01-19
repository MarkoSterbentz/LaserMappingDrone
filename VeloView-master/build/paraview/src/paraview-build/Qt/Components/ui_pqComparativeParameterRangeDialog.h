/********************************************************************************
** Form generated from reading UI file 'pqComparativeParameterRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOMPARATIVEPARAMETERRANGEDIALOG_H
#define UI_PQCOMPARATIVEPARAMETERRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqComparativeParameterRangeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *multivalueHint;
    QHBoxLayout *horizontalLayout;
    QLineEdit *minValue;
    QLabel *label;
    QLineEdit *maxValue;
    QSpacerItem *verticalSpacer;
    QComboBox *mode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqComparativeParameterRangeDialog)
    {
        if (pqComparativeParameterRangeDialog->objectName().isEmpty())
            pqComparativeParameterRangeDialog->setObjectName(QString::fromUtf8("pqComparativeParameterRangeDialog"));
        pqComparativeParameterRangeDialog->resize(313, 121);
        verticalLayout = new QVBoxLayout(pqComparativeParameterRangeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        multivalueHint = new QLabel(pqComparativeParameterRangeDialog);
        multivalueHint->setObjectName(QString::fromUtf8("multivalueHint"));

        verticalLayout->addWidget(multivalueHint);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        minValue = new QLineEdit(pqComparativeParameterRangeDialog);
        minValue->setObjectName(QString::fromUtf8("minValue"));

        horizontalLayout->addWidget(minValue);

        label = new QLabel(pqComparativeParameterRangeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        maxValue = new QLineEdit(pqComparativeParameterRangeDialog);
        maxValue->setObjectName(QString::fromUtf8("maxValue"));

        horizontalLayout->addWidget(maxValue);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mode = new QComboBox(pqComparativeParameterRangeDialog);
        mode->setObjectName(QString::fromUtf8("mode"));

        verticalLayout->addWidget(mode);

        buttonBox = new QDialogButtonBox(pqComparativeParameterRangeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(minValue, maxValue);
        QWidget::setTabOrder(maxValue, buttonBox);

        retranslateUi(pqComparativeParameterRangeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqComparativeParameterRangeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqComparativeParameterRangeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqComparativeParameterRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqComparativeParameterRangeDialog)
    {
        pqComparativeParameterRangeDialog->setWindowTitle(QApplication::translate("pqComparativeParameterRangeDialog", "Enter Parameter Range", 0, QApplication::UnicodeUTF8));
        multivalueHint->setText(QApplication::translate("pqComparativeParameterRangeDialog", "Use comma-separated values to enter multiple values.\n"
"However number of values in both entires must match.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqComparativeParameterRangeDialog", "  to  ", 0, QApplication::UnicodeUTF8));
        mode->clear();
        mode->insertItems(0, QStringList()
         << QApplication::translate("pqComparativeParameterRangeDialog", "Vary horizontally first", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqComparativeParameterRangeDialog", "Vary vertically first", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqComparativeParameterRangeDialog", "Only vary horizontally", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqComparativeParameterRangeDialog", "Only vary vertically", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        mode->setToolTip(QApplication::translate("pqComparativeParameterRangeDialog", "Controls the direction in which the paramter is varied.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mode->setStatusTip(QApplication::translate("pqComparativeParameterRangeDialog", "Controls the direction in which the paramter is varied.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        mode->setWhatsThis(QApplication::translate("pqComparativeParameterRangeDialog", "Controls the direction in which the paramter is varied.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class pqComparativeParameterRangeDialog: public Ui_pqComparativeParameterRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOMPARATIVEPARAMETERRANGEDIALOG_H
