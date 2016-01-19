/********************************************************************************
** Form generated from reading UI file 'pqCollaborationPanel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLLABORATIONPANEL_H
#define UI_PQCOLLABORATIONPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqCollaborationPanel
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *members;
    QCheckBox *shareMousePointer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextBrowser *content;
    QLineEdit *message;

    void setupUi(QWidget *pqCollaborationPanel)
    {
        if (pqCollaborationPanel->objectName().isEmpty())
            pqCollaborationPanel->setObjectName(QString::fromUtf8("pqCollaborationPanel"));
        pqCollaborationPanel->resize(279, 356);
        verticalLayout_3 = new QVBoxLayout(pqCollaborationPanel);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        members = new QTableWidget(pqCollaborationPanel);
        if (members->columnCount() < 2)
            members->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        members->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pqEyeballd16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font;
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setIcon(icon);
        members->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (members->rowCount() < 1)
            members->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        members->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsEnabled);
        members->setItem(0, 0, __qtablewidgetitem3);
        members->setObjectName(QString::fromUtf8("members"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(members->sizePolicy().hasHeightForWidth());
        members->setSizePolicy(sizePolicy);
        members->setLayoutDirection(Qt::LeftToRight);
        members->setAlternatingRowColors(true);
        members->setSelectionMode(QAbstractItemView::NoSelection);
        members->setSelectionBehavior(QAbstractItemView::SelectRows);
        members->setCornerButtonEnabled(false);
        members->setRowCount(1);
        members->setColumnCount(2);
        members->horizontalHeader()->setVisible(true);
        members->horizontalHeader()->setCascadingSectionResizes(false);
        members->horizontalHeader()->setDefaultSectionSize(17);
        members->horizontalHeader()->setHighlightSections(false);
        members->horizontalHeader()->setMinimumSectionSize(27);
        members->horizontalHeader()->setStretchLastSection(false);
        members->verticalHeader()->setVisible(false);
        members->verticalHeader()->setCascadingSectionResizes(false);
        members->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(members);

        shareMousePointer = new QCheckBox(pqCollaborationPanel);
        shareMousePointer->setObjectName(QString::fromUtf8("shareMousePointer"));
        QFont font1;
        font1.setPointSize(10);
        shareMousePointer->setFont(font1);
        shareMousePointer->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(shareMousePointer);

        groupBox = new QGroupBox(pqCollaborationPanel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        content = new QTextBrowser(groupBox);
        content->setObjectName(QString::fromUtf8("content"));

        verticalLayout->addWidget(content);

        message = new QLineEdit(groupBox);
        message->setObjectName(QString::fromUtf8("message"));

        verticalLayout->addWidget(message);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(pqCollaborationPanel);

        QMetaObject::connectSlotsByName(pqCollaborationPanel);
    } // setupUi

    void retranslateUi(QWidget *pqCollaborationPanel)
    {
        pqCollaborationPanel->setWindowTitle(QApplication::translate("pqCollaborationPanel", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = members->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pqCollaborationPanel", "Participant", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = members->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("pqCollaborationPanel", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = members->isSortingEnabled();
        members->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = members->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("pqCollaborationPanel", "I'm alone", 0, QApplication::UnicodeUTF8));
        members->setSortingEnabled(__sortingEnabled);

        shareMousePointer->setText(QApplication::translate("pqCollaborationPanel", "Share mouse pointer", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pqCollaborationPanel", "Chat room", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqCollaborationPanel: public Ui_pqCollaborationPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLLABORATIONPANEL_H
