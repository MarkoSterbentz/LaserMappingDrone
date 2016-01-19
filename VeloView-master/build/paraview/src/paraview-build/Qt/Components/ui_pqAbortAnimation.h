/********************************************************************************
** Form generated from reading UI file 'pqAbortAnimation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQABORTANIMATION_H
#define UI_PQABORTANIMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AbortAnimation
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *abortAnimationButton;

    void setupUi(QDialog *AbortAnimation)
    {
        if (AbortAnimation->objectName().isEmpty())
            AbortAnimation->setObjectName(QString::fromUtf8("AbortAnimation"));
        AbortAnimation->resize(140, 58);
        gridLayout = new QGridLayout(AbortAnimation);
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
        abortAnimationButton = new QPushButton(AbortAnimation);
        abortAnimationButton->setObjectName(QString::fromUtf8("abortAnimationButton"));

        hboxLayout->addWidget(abortAnimationButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);


        retranslateUi(AbortAnimation);
        QObject::connect(abortAnimationButton, SIGNAL(clicked()), AbortAnimation, SLOT(accept()));

        QMetaObject::connectSlotsByName(AbortAnimation);
    } // setupUi

    void retranslateUi(QDialog *AbortAnimation)
    {
        AbortAnimation->setWindowTitle(QApplication::translate("AbortAnimation", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        abortAnimationButton->setToolTip(QApplication::translate("AbortAnimation", "Abort Saving Animation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        abortAnimationButton->setStatusTip(QApplication::translate("AbortAnimation", "Interrupts the saving of animation and aborts it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        abortAnimationButton->setWhatsThis(QApplication::translate("AbortAnimation", "Interrupts the saving of animation and aborts it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        abortAnimationButton->setText(QApplication::translate("AbortAnimation", "Abort Animation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AbortAnimation: public Ui_AbortAnimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQABORTANIMATION_H
