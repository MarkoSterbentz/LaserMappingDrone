/********************************************************************************
** Form generated from reading UI file 'pqRemoteCommandTemplateDialogForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQREMOTECOMMANDTEMPLATEDIALOGFORM_H
#define UI_PQREMOTECOMMANDTEMPLATEDIALOGFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_pqRemoteCommandTemplateDialogForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *commandName;
    QLabel *label_2;
    QPlainTextEdit *commandTemplate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqRemoteCommandTemplateDialogForm)
    {
        if (pqRemoteCommandTemplateDialogForm->objectName().isEmpty())
            pqRemoteCommandTemplateDialogForm->setObjectName(QString::fromUtf8("pqRemoteCommandTemplateDialogForm"));
        pqRemoteCommandTemplateDialogForm->resize(360, 165);
        formLayout = new QFormLayout(pqRemoteCommandTemplateDialogForm);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(pqRemoteCommandTemplateDialogForm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        commandName = new QLineEdit(pqRemoteCommandTemplateDialogForm);
        commandName->setObjectName(QString::fromUtf8("commandName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, commandName);

        label_2 = new QLabel(pqRemoteCommandTemplateDialogForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        commandTemplate = new QPlainTextEdit(pqRemoteCommandTemplateDialogForm);
        commandTemplate->setObjectName(QString::fromUtf8("commandTemplate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, commandTemplate);

        buttonBox = new QDialogButtonBox(pqRemoteCommandTemplateDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(pqRemoteCommandTemplateDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqRemoteCommandTemplateDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqRemoteCommandTemplateDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqRemoteCommandTemplateDialogForm);
    } // setupUi

    void retranslateUi(QDialog *pqRemoteCommandTemplateDialogForm)
    {
        pqRemoteCommandTemplateDialogForm->setWindowTitle(QApplication::translate("pqRemoteCommandTemplateDialogForm", "Remote Command", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqRemoteCommandTemplateDialogForm", "Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commandName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("pqRemoteCommandTemplateDialogForm", "Template:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commandTemplate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class pqRemoteCommandTemplateDialogForm: public Ui_pqRemoteCommandTemplateDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQREMOTECOMMANDTEMPLATEDIALOGFORM_H
