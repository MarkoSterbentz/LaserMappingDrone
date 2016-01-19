/********************************************************************************
** Form generated from reading UI file 'pqKeyFrameEditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQKEYFRAMEEDITOR_H
#define UI_PQKEYFRAMEEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqKeyFrameEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pbNew;
    QPushButton *pbDelete;
    QPushButton *pbDeleteAll;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *pqKeyFrameEditor)
    {
        if (pqKeyFrameEditor->objectName().isEmpty())
            pqKeyFrameEditor->setObjectName(QString::fromUtf8("pqKeyFrameEditor"));
        pqKeyFrameEditor->resize(395, 270);
        gridLayout = new QGridLayout(pqKeyFrameEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pqKeyFrameEditor);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        tableView = new QTableView(pqKeyFrameEditor);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableView, 1, 0, 4, 1);

        pbNew = new QPushButton(pqKeyFrameEditor);
        pbNew->setObjectName(QString::fromUtf8("pbNew"));

        gridLayout->addWidget(pbNew, 1, 1, 1, 1);

        pbDelete = new QPushButton(pqKeyFrameEditor);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout->addWidget(pbDelete, 2, 1, 1, 1);

        pbDeleteAll = new QPushButton(pqKeyFrameEditor);
        pbDeleteAll->setObjectName(QString::fromUtf8("pbDeleteAll"));

        gridLayout->addWidget(pbDeleteAll, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 1, 1, 1);


        retranslateUi(pqKeyFrameEditor);

        QMetaObject::connectSlotsByName(pqKeyFrameEditor);
    } // setupUi

    void retranslateUi(QWidget *pqKeyFrameEditor)
    {
        pqKeyFrameEditor->setWindowTitle(QApplication::translate("pqKeyFrameEditor", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqKeyFrameEditor", "Label", 0, QApplication::UnicodeUTF8));
        pbNew->setText(QApplication::translate("pqKeyFrameEditor", "New", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("pqKeyFrameEditor", "Delete", 0, QApplication::UnicodeUTF8));
        pbDeleteAll->setText(QApplication::translate("pqKeyFrameEditor", "Delete All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqKeyFrameEditor: public Ui_pqKeyFrameEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQKEYFRAMEEDITOR_H
