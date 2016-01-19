/********************************************************************************
** Form generated from reading UI file 'pqTimerLogDisplay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQTIMERLOGDISPLAY_H
#define UI_PQTIMERLOGDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqTimerLogDisplay
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QPushButton *refreshButton;
    QPushButton *clearButton;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *timeThreshold;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QComboBox *bufferLength;
    QCheckBox *enable;
    QPushButton *saveButton;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;
    QTextEdit *log;

    void setupUi(QDialog *pqTimerLogDisplay)
    {
        if (pqTimerLogDisplay->objectName().isEmpty())
            pqTimerLogDisplay->setObjectName(QString::fromUtf8("pqTimerLogDisplay"));
        pqTimerLogDisplay->resize(500, 500);
        gridLayout = new QGridLayout(pqTimerLogDisplay);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        refreshButton = new QPushButton(pqTimerLogDisplay);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        vboxLayout->addWidget(refreshButton);

        clearButton = new QPushButton(pqTimerLogDisplay);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        vboxLayout->addWidget(clearButton);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(0);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 0, 1, 1);

        label = new QLabel(pqTimerLogDisplay);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 2);

        timeThreshold = new QComboBox(pqTimerLogDisplay);
        timeThreshold->setObjectName(QString::fromUtf8("timeThreshold"));

        gridLayout1->addWidget(timeThreshold, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(0);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem1 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 0, 1, 1);

        label_2 = new QLabel(pqTimerLogDisplay);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 2);

        bufferLength = new QComboBox(pqTimerLogDisplay);
        bufferLength->setObjectName(QString::fromUtf8("bufferLength"));

        gridLayout2->addWidget(bufferLength, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout2);

        enable = new QCheckBox(pqTimerLogDisplay);
        enable->setObjectName(QString::fromUtf8("enable"));
        enable->setChecked(true);

        vboxLayout->addWidget(enable);

        saveButton = new QPushButton(pqTimerLogDisplay);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        vboxLayout->addWidget(saveButton);

        spacerItem2 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);


        gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(pqTimerLogDisplay);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        log = new QTextEdit(pqTimerLogDisplay);
        log->setObjectName(QString::fromUtf8("log"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy);
        log->setReadOnly(true);

        gridLayout->addWidget(log, 0, 0, 1, 1);


        retranslateUi(pqTimerLogDisplay);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqTimerLogDisplay, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqTimerLogDisplay, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqTimerLogDisplay);
    } // setupUi

    void retranslateUi(QDialog *pqTimerLogDisplay)
    {
        pqTimerLogDisplay->setWindowTitle(QApplication::translate("pqTimerLogDisplay", "Timer Log", 0, QApplication::UnicodeUTF8));
        refreshButton->setText(QApplication::translate("pqTimerLogDisplay", "Refresh", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("pqTimerLogDisplay", "Clear", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqTimerLogDisplay", "Time Threshold:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqTimerLogDisplay", "Buffer Length:", 0, QApplication::UnicodeUTF8));
        enable->setText(QApplication::translate("pqTimerLogDisplay", "Enable", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("pqTimerLogDisplay", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqTimerLogDisplay: public Ui_pqTimerLogDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQTIMERLOGDISPLAY_H
