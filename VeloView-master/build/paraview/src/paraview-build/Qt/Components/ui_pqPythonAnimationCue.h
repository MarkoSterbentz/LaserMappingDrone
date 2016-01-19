/********************************************************************************
** Form generated from reading UI file 'pqPythonAnimationCue.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPYTHONANIMATIONCUE_H
#define UI_PQPYTHONANIMATIONCUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PythonAnimationCue
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *script;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PythonAnimationCue)
    {
        if (PythonAnimationCue->objectName().isEmpty())
            PythonAnimationCue->setObjectName(QString::fromUtf8("PythonAnimationCue"));
        PythonAnimationCue->resize(367, 446);
        verticalLayout = new QVBoxLayout(PythonAnimationCue);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(PythonAnimationCue);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        script = new QTextEdit(PythonAnimationCue);
        script->setObjectName(QString::fromUtf8("script"));

        verticalLayout->addWidget(script);

        buttonBox = new QDialogButtonBox(PythonAnimationCue);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PythonAnimationCue);
        QObject::connect(buttonBox, SIGNAL(accepted()), PythonAnimationCue, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PythonAnimationCue, SLOT(reject()));

        QMetaObject::connectSlotsByName(PythonAnimationCue);
    } // setupUi

    void retranslateUi(QDialog *PythonAnimationCue)
    {
        PythonAnimationCue->setWindowTitle(QApplication::translate("PythonAnimationCue", "Edit Python Animation Track", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PythonAnimationCue", "Script:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PythonAnimationCue: public Ui_PythonAnimationCue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPYTHONANIMATIONCUE_H
