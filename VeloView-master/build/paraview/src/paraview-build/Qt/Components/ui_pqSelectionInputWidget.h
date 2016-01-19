/********************************************************************************
** Form generated from reading UI file 'pqSelectionInputWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQSELECTIONINPUTWIDGET_H
#define UI_PQSELECTIONINPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqSelectionInputWidget
{
public:
    QVBoxLayout *vboxLayout;
    QPushButton *pushButtonCopySelection;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *pqSelectionInputWidget)
    {
        if (pqSelectionInputWidget->objectName().isEmpty())
            pqSelectionInputWidget->setObjectName(QString::fromUtf8("pqSelectionInputWidget"));
        pqSelectionInputWidget->resize(270, 207);
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        pqSelectionInputWidget->setFont(font);
        vboxLayout = new QVBoxLayout(pqSelectionInputWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        pushButtonCopySelection = new QPushButton(pqSelectionInputWidget);
        pushButtonCopySelection->setObjectName(QString::fromUtf8("pushButtonCopySelection"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        pushButtonCopySelection->setFont(font1);

        vboxLayout->addWidget(pushButtonCopySelection);

        label = new QLabel(pqSelectionInputWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(10);

        vboxLayout->addWidget(label);

        textBrowser = new QTextBrowser(pqSelectionInputWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setLineWrapMode(QTextEdit::NoWrap);

        vboxLayout->addWidget(textBrowser);


        retranslateUi(pqSelectionInputWidget);

        QMetaObject::connectSlotsByName(pqSelectionInputWidget);
    } // setupUi

    void retranslateUi(QWidget *pqSelectionInputWidget)
    {
        pqSelectionInputWidget->setWindowTitle(QApplication::translate("pqSelectionInputWidget", "Form", 0, QApplication::UnicodeUTF8));
        pushButtonCopySelection->setText(QApplication::translate("pqSelectionInputWidget", "Copy Active Selection", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqSelectionInputWidget", "Copied Selection", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqSelectionInputWidget: public Ui_pqSelectionInputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQSELECTIONINPUTWIDGET_H
