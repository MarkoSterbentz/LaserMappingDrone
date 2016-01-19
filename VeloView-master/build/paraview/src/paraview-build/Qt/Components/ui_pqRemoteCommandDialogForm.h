/********************************************************************************
** Form generated from reading UI file 'pqRemoteCommandDialogForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQREMOTECOMMANDDIALOGFORM_H
#define UI_PQREMOTECOMMANDDIALOGFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pqRemoteCommandDialogForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *commandTemplates;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addCommand;
    QPushButton *editCommand;
    QPushButton *deleteCommand;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *feUrl;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sshExec;
    QPushButton *sshExecBrowse;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *xtExec;
    QPushButton *xtExecBrowse;
    QLabel *label_12;
    QLineEdit *xtOpts;
    QLabel *label;
    QLineEdit *pvHost;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTextBrowser *previewCommand;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *execCommand;
    QPushButton *cancelCommand;

    void setupUi(QDialog *pqRemoteCommandDialogForm)
    {
        if (pqRemoteCommandDialogForm->objectName().isEmpty())
            pqRemoteCommandDialogForm->setObjectName(QString::fromUtf8("pqRemoteCommandDialogForm"));
        pqRemoteCommandDialogForm->resize(350, 431);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqRemoteCommandDialogForm->sizePolicy().hasHeightForWidth());
        pqRemoteCommandDialogForm->setSizePolicy(sizePolicy);
        pqRemoteCommandDialogForm->setMinimumSize(QSize(350, 0));
        verticalLayout_2 = new QVBoxLayout(pqRemoteCommandDialogForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(pqRemoteCommandDialogForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        commandTemplates = new QComboBox(groupBox);
        commandTemplates->setObjectName(QString::fromUtf8("commandTemplates"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(commandTemplates->sizePolicy().hasHeightForWidth());
        commandTemplates->setSizePolicy(sizePolicy1);
        commandTemplates->setMinimumSize(QSize(100, 0));
        commandTemplates->setEditable(false);

        verticalLayout_3->addWidget(commandTemplates);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        addCommand = new QPushButton(groupBox);
        addCommand->setObjectName(QString::fromUtf8("addCommand"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addCommand->sizePolicy().hasHeightForWidth());
        addCommand->setSizePolicy(sizePolicy2);
        addCommand->setMinimumSize(QSize(60, 24));
        addCommand->setMaximumSize(QSize(60, 24));
        addCommand->setCheckable(true);

        horizontalLayout_3->addWidget(addCommand);

        editCommand = new QPushButton(groupBox);
        editCommand->setObjectName(QString::fromUtf8("editCommand"));
        sizePolicy2.setHeightForWidth(editCommand->sizePolicy().hasHeightForWidth());
        editCommand->setSizePolicy(sizePolicy2);
        editCommand->setMinimumSize(QSize(60, 24));
        editCommand->setMaximumSize(QSize(60, 24));

        horizontalLayout_3->addWidget(editCommand);

        deleteCommand = new QPushButton(groupBox);
        deleteCommand->setObjectName(QString::fromUtf8("deleteCommand"));
        sizePolicy2.setHeightForWidth(deleteCommand->sizePolicy().hasHeightForWidth());
        deleteCommand->setSizePolicy(sizePolicy2);
        deleteCommand->setMinimumSize(QSize(60, 24));
        deleteCommand->setMaximumSize(QSize(60, 24));

        horizontalLayout_3->addWidget(deleteCommand);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(pqRemoteCommandDialogForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        feUrl = new QLineEdit(groupBox_2);
        feUrl->setObjectName(QString::fromUtf8("feUrl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, feUrl);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sshExec = new QLineEdit(groupBox_2);
        sshExec->setObjectName(QString::fromUtf8("sshExec"));

        horizontalLayout->addWidget(sshExec);

        sshExecBrowse = new QPushButton(groupBox_2);
        sshExecBrowse->setObjectName(QString::fromUtf8("sshExecBrowse"));
        sizePolicy2.setHeightForWidth(sshExecBrowse->sizePolicy().hasHeightForWidth());
        sshExecBrowse->setSizePolicy(sizePolicy2);
        sshExecBrowse->setMinimumSize(QSize(24, 24));
        sshExecBrowse->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("AlArabiya"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        sshExecBrowse->setFont(font);

        horizontalLayout->addWidget(sshExecBrowse);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        xtExec = new QLineEdit(groupBox_2);
        xtExec->setObjectName(QString::fromUtf8("xtExec"));

        horizontalLayout_2->addWidget(xtExec);

        xtExecBrowse = new QPushButton(groupBox_2);
        xtExecBrowse->setObjectName(QString::fromUtf8("xtExecBrowse"));
        sizePolicy2.setHeightForWidth(xtExecBrowse->sizePolicy().hasHeightForWidth());
        xtExecBrowse->setSizePolicy(sizePolicy2);
        xtExecBrowse->setMinimumSize(QSize(24, 24));
        xtExecBrowse->setMaximumSize(QSize(24, 24));
        xtExecBrowse->setFont(font);

        horizontalLayout_2->addWidget(xtExecBrowse);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_12);

        xtOpts = new QLineEdit(groupBox_2);
        xtOpts->setObjectName(QString::fromUtf8("xtOpts"));

        formLayout->setWidget(3, QFormLayout::FieldRole, xtOpts);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label);

        pvHost = new QLineEdit(groupBox_2);
        pvHost->setObjectName(QString::fromUtf8("pvHost"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pvHost);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(pqRemoteCommandDialogForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        previewCommand = new QTextBrowser(groupBox_3);
        previewCommand->setObjectName(QString::fromUtf8("previewCommand"));
        previewCommand->setMaximumSize(QSize(16777215, 80));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        previewCommand->setFont(font1);
        previewCommand->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(previewCommand);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        execCommand = new QPushButton(groupBox_3);
        execCommand->setObjectName(QString::fromUtf8("execCommand"));

        horizontalLayout_4->addWidget(execCommand);

        cancelCommand = new QPushButton(groupBox_3);
        cancelCommand->setObjectName(QString::fromUtf8("cancelCommand"));

        horizontalLayout_4->addWidget(cancelCommand);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox_3);


        retranslateUi(pqRemoteCommandDialogForm);
        QObject::connect(execCommand, SIGNAL(released()), pqRemoteCommandDialogForm, SLOT(accept()));
        QObject::connect(cancelCommand, SIGNAL(released()), pqRemoteCommandDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqRemoteCommandDialogForm);
    } // setupUi

    void retranslateUi(QDialog *pqRemoteCommandDialogForm)
    {
        pqRemoteCommandDialogForm->setWindowTitle(QApplication::translate("pqRemoteCommandDialogForm", "Remote Command Editor", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pqRemoteCommandDialogForm", "Command Template", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addCommand->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        addCommand->setText(QApplication::translate("pqRemoteCommandDialogForm", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editCommand->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        editCommand->setText(QApplication::translate("pqRemoteCommandDialogForm", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteCommand->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        deleteCommand->setText(QApplication::translate("pqRemoteCommandDialogForm", "Delete", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("pqRemoteCommandDialogForm", "Parameters", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("pqRemoteCommandDialogForm", "FE_URL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        feUrl->setToolTip(QApplication::translate("pqRemoteCommandDialogForm", "ssh url to cluster login (eg user@login.com)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("pqRemoteCommandDialogForm", "SSH_EXEC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sshExec->setToolTip(QApplication::translate("pqRemoteCommandDialogForm", "path to ssh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sshExec->setText(QString());
#ifndef QT_NO_TOOLTIP
        sshExecBrowse->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        sshExecBrowse->setText(QApplication::translate("pqRemoteCommandDialogForm", "...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("pqRemoteCommandDialogForm", "TERM_EXEC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        xtExec->setToolTip(QApplication::translate("pqRemoteCommandDialogForm", "path to terminal", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        xtExec->setText(QString());
#ifndef QT_NO_TOOLTIP
        xtExecBrowse->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        xtExecBrowse->setText(QApplication::translate("pqRemoteCommandDialogForm", "...", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("pqRemoteCommandDialogForm", "TERM_OPTS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        xtOpts->setToolTip(QApplication::translate("pqRemoteCommandDialogForm", "terminal options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        xtOpts->setText(QString());
        label->setText(QApplication::translate("pqRemoteCommandDialogForm", "PV_HOST", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("pqRemoteCommandDialogForm", "Command Preview", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        execCommand->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        execCommand->setText(QApplication::translate("pqRemoteCommandDialogForm", "execute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cancelCommand->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        cancelCommand->setText(QApplication::translate("pqRemoteCommandDialogForm", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqRemoteCommandDialogForm: public Ui_pqRemoteCommandDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQREMOTECOMMANDDIALOGFORM_H
