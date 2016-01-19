/********************************************************************************
** Form generated from reading UI file 'pqDisplayRepresentationWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQDISPLAYREPRESENTATIONWIDGET_H
#define UI_PQDISPLAYREPRESENTATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayRepresentationWidget
{
public:
    QHBoxLayout *hboxLayout;
    QComboBox *comboBox;

    void setupUi(QWidget *displayRepresentationWidget)
    {
        if (displayRepresentationWidget->objectName().isEmpty())
            displayRepresentationWidget->setObjectName(QString::fromUtf8("displayRepresentationWidget"));
        displayRepresentationWidget->resize(308, 84);
        hboxLayout = new QHBoxLayout(displayRepresentationWidget);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        comboBox = new QComboBox(displayRepresentationWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(150, 20));

        hboxLayout->addWidget(comboBox);


        retranslateUi(displayRepresentationWidget);

        QMetaObject::connectSlotsByName(displayRepresentationWidget);
    } // setupUi

    void retranslateUi(QWidget *displayRepresentationWidget)
    {
        displayRepresentationWidget->setWindowTitle(QApplication::translate("displayRepresentationWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class displayRepresentationWidget: public Ui_displayRepresentationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQDISPLAYREPRESENTATIONWIDGET_H
