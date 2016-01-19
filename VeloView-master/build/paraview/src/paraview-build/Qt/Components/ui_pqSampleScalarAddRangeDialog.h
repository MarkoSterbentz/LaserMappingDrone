/********************************************************************************
** Form generated from reading UI file 'pqSampleScalarAddRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSAMPLESCALARADDRANGEDIALOG_H
#define UI_PQSAMPLESCALARADDRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_pqSampleScalarAddRangeDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *log;
    QLabel *logWarning;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *from;
    QLineEdit *to;
    QLineEdit *steps;

    void setupUi(QDialog *pqSampleScalarAddRangeDialog)
    {
        if (pqSampleScalarAddRangeDialog->objectName().isEmpty())
            pqSampleScalarAddRangeDialog->setObjectName(QString::fromUtf8("pqSampleScalarAddRangeDialog"));
        pqSampleScalarAddRangeDialog->resize(315, 188);
        gridLayout = new QGridLayout(pqSampleScalarAddRangeDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        log = new QCheckBox(pqSampleScalarAddRangeDialog);
        log->setObjectName(QString::fromUtf8("log"));
        log->setChecked(false);

        gridLayout->addWidget(log, 4, 1, 1, 1);

        logWarning = new QLabel(pqSampleScalarAddRangeDialog);
        logWarning->setObjectName(QString::fromUtf8("logWarning"));
        logWarning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(logWarning, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(pqSampleScalarAddRangeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(pqSampleScalarAddRangeDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        label_3 = new QLabel(pqSampleScalarAddRangeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(pqSampleScalarAddRangeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(pqSampleScalarAddRangeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        from = new QLineEdit(pqSampleScalarAddRangeDialog);
        from->setObjectName(QString::fromUtf8("from"));

        gridLayout->addWidget(from, 0, 1, 1, 1);

        to = new QLineEdit(pqSampleScalarAddRangeDialog);
        to->setObjectName(QString::fromUtf8("to"));

        gridLayout->addWidget(to, 1, 1, 1, 1);

        steps = new QLineEdit(pqSampleScalarAddRangeDialog);
        steps->setObjectName(QString::fromUtf8("steps"));

        gridLayout->addWidget(steps, 2, 1, 1, 1);

        QWidget::setTabOrder(from, to);
        QWidget::setTabOrder(to, steps);
        QWidget::setTabOrder(steps, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(pqSampleScalarAddRangeDialog);
        QObject::connect(okButton, SIGNAL(clicked()), pqSampleScalarAddRangeDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), pqSampleScalarAddRangeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqSampleScalarAddRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqSampleScalarAddRangeDialog)
    {
        pqSampleScalarAddRangeDialog->setWindowTitle(QApplication::translate("pqSampleScalarAddRangeDialog", "Add Range", 0, QApplication::UnicodeUTF8));
        log->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Use Logarithmic Scale", 0, QApplication::UnicodeUTF8));
        logWarning->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Can't use logarithmic scale when zero is in the range.", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "Steps", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "To", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqSampleScalarAddRangeDialog", "From", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqSampleScalarAddRangeDialog: public Ui_pqSampleScalarAddRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSAMPLESCALARADDRANGEDIALOG_H
