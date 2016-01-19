/********************************************************************************
** Form generated from reading UI file 'pqColorPresetDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOLORPRESETDIALOG_H
#define UI_PQCOLORPRESETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_pqColorPresetDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *NormalizeButton;
    QPushButton *RemoveButton;
    QSpacerItem *spacerItem;
    QPushButton *ImportButton;
    QPushButton *ExportButton;
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QTreeView *Gradients;

    void setupUi(QDialog *pqColorPresetDialog)
    {
        if (pqColorPresetDialog->objectName().isEmpty())
            pqColorPresetDialog->setObjectName(QString::fromUtf8("pqColorPresetDialog"));
        pqColorPresetDialog->resize(463, 373);
        gridLayout = new QGridLayout(pqColorPresetDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NormalizeButton = new QPushButton(pqColorPresetDialog);
        NormalizeButton->setObjectName(QString::fromUtf8("NormalizeButton"));

        gridLayout->addWidget(NormalizeButton, 2, 1, 1, 1);

        RemoveButton = new QPushButton(pqColorPresetDialog);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));

        gridLayout->addWidget(RemoveButton, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(77, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 1, 1, 1);

        ImportButton = new QPushButton(pqColorPresetDialog);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));

        gridLayout->addWidget(ImportButton, 0, 1, 1, 1);

        ExportButton = new QPushButton(pqColorPresetDialog);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));

        gridLayout->addWidget(ExportButton, 1, 1, 1, 1);

        OkButton = new QPushButton(pqColorPresetDialog);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setDefault(true);

        gridLayout->addWidget(OkButton, 5, 1, 1, 1);

        CancelButton = new QPushButton(pqColorPresetDialog);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        gridLayout->addWidget(CancelButton, 6, 1, 1, 1);

        Gradients = new QTreeView(pqColorPresetDialog);
        Gradients->setObjectName(QString::fromUtf8("Gradients"));
        Gradients->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        Gradients->setSelectionBehavior(QAbstractItemView::SelectRows);
        Gradients->setRootIsDecorated(false);

        gridLayout->addWidget(Gradients, 0, 0, 7, 1);

        QWidget::setTabOrder(Gradients, OkButton);
        QWidget::setTabOrder(OkButton, CancelButton);
        QWidget::setTabOrder(CancelButton, ImportButton);
        QWidget::setTabOrder(ImportButton, ExportButton);
        QWidget::setTabOrder(ExportButton, NormalizeButton);
        QWidget::setTabOrder(NormalizeButton, RemoveButton);

        retranslateUi(pqColorPresetDialog);

        QMetaObject::connectSlotsByName(pqColorPresetDialog);
    } // setupUi

    void retranslateUi(QDialog *pqColorPresetDialog)
    {
        pqColorPresetDialog->setWindowTitle(QApplication::translate("pqColorPresetDialog", "Preset Color Scales", 0, QApplication::UnicodeUTF8));
        NormalizeButton->setText(QApplication::translate("pqColorPresetDialog", "&Normalize", 0, QApplication::UnicodeUTF8));
        RemoveButton->setText(QApplication::translate("pqColorPresetDialog", "&Remove", 0, QApplication::UnicodeUTF8));
        ImportButton->setText(QApplication::translate("pqColorPresetDialog", "&Import", 0, QApplication::UnicodeUTF8));
        ExportButton->setText(QApplication::translate("pqColorPresetDialog", "&Export", 0, QApplication::UnicodeUTF8));
        OkButton->setText(QApplication::translate("pqColorPresetDialog", "&OK", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("pqColorPresetDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqColorPresetDialog: public Ui_pqColorPresetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOLORPRESETDIALOG_H
