/********************************************************************************
** Form generated from reading UI file 'pqQueryClauseWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQQUERYCLAUSEWIDGET_H
#define UI_PQQUERYCLAUSEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pqQueryClauseWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QComboBox *criteria;
    QComboBox *condition;
    QStackedWidget *valueStackedWidget;
    QWidget *singleValue;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *value;
    QWidget *range;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *value_min;
    QLabel *label_3;
    QLineEdit *value_max;
    QWidget *location;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *value_x;
    QLineEdit *value_y;
    QLineEdit *value_z;
    QWidget *multiBlock;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *value_block;
    QToolButton *showCompositeTree;
    QWidget *emptyValue;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_empty_value;
    QToolButton *helpButton;

    void setupUi(QWidget *pqQueryClauseWidget)
    {
        if (pqQueryClauseWidget->objectName().isEmpty())
            pqQueryClauseWidget->setObjectName(QString::fromUtf8("pqQueryClauseWidget"));
        pqQueryClauseWidget->resize(444, 38);
        verticalLayout = new QVBoxLayout(pqQueryClauseWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line = new QFrame(pqQueryClauseWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        criteria = new QComboBox(pqQueryClauseWidget);
        criteria->setObjectName(QString::fromUtf8("criteria"));
        criteria->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(criteria);

        condition = new QComboBox(pqQueryClauseWidget);
        condition->setObjectName(QString::fromUtf8("condition"));
        condition->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(condition);

        valueStackedWidget = new QStackedWidget(pqQueryClauseWidget);
        valueStackedWidget->setObjectName(QString::fromUtf8("valueStackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(valueStackedWidget->sizePolicy().hasHeightForWidth());
        valueStackedWidget->setSizePolicy(sizePolicy);
        singleValue = new QWidget();
        singleValue->setObjectName(QString::fromUtf8("singleValue"));
        horizontalLayout_4 = new QHBoxLayout(singleValue);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        value = new QLineEdit(singleValue);
        value->setObjectName(QString::fromUtf8("value"));

        horizontalLayout_4->addWidget(value);

        valueStackedWidget->addWidget(singleValue);
        range = new QWidget();
        range->setObjectName(QString::fromUtf8("range"));
        horizontalLayout_5 = new QHBoxLayout(range);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        value_min = new QLineEdit(range);
        value_min->setObjectName(QString::fromUtf8("value_min"));

        horizontalLayout_5->addWidget(value_min);

        label_3 = new QLabel(range);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        value_max = new QLineEdit(range);
        value_max->setObjectName(QString::fromUtf8("value_max"));

        horizontalLayout_5->addWidget(value_max);

        valueStackedWidget->addWidget(range);
        location = new QWidget();
        location->setObjectName(QString::fromUtf8("location"));
        horizontalLayout_7 = new QHBoxLayout(location);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        value_x = new QLineEdit(location);
        value_x->setObjectName(QString::fromUtf8("value_x"));

        horizontalLayout_7->addWidget(value_x);

        value_y = new QLineEdit(location);
        value_y->setObjectName(QString::fromUtf8("value_y"));

        horizontalLayout_7->addWidget(value_y);

        value_z = new QLineEdit(location);
        value_z->setObjectName(QString::fromUtf8("value_z"));

        horizontalLayout_7->addWidget(value_z);

        valueStackedWidget->addWidget(location);
        multiBlock = new QWidget();
        multiBlock->setObjectName(QString::fromUtf8("multiBlock"));
        horizontalLayout_8 = new QHBoxLayout(multiBlock);
        horizontalLayout_8->setSpacing(3);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        value_block = new QLineEdit(multiBlock);
        value_block->setObjectName(QString::fromUtf8("value_block"));

        horizontalLayout_8->addWidget(value_block);

        showCompositeTree = new QToolButton(multiBlock);
        showCompositeTree->setObjectName(QString::fromUtf8("showCompositeTree"));

        horizontalLayout_8->addWidget(showCompositeTree);

        valueStackedWidget->addWidget(multiBlock);
        emptyValue = new QWidget();
        emptyValue->setObjectName(QString::fromUtf8("emptyValue"));
        horizontalLayout_9 = new QHBoxLayout(emptyValue);
        horizontalLayout_9->setSpacing(3);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_empty_value = new QLabel(emptyValue);
        label_empty_value->setObjectName(QString::fromUtf8("label_empty_value"));

        horizontalLayout_9->addWidget(label_empty_value);

        valueStackedWidget->addWidget(emptyValue);

        horizontalLayout->addWidget(valueStackedWidget);

        helpButton = new QToolButton(pqQueryClauseWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));

        horizontalLayout->addWidget(helpButton);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(pqQueryClauseWidget);

        valueStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(pqQueryClauseWidget);
    } // setupUi

    void retranslateUi(QWidget *pqQueryClauseWidget)
    {
        pqQueryClauseWidget->setWindowTitle(QApplication::translate("pqQueryClauseWidget", "Form", 0, QApplication::UnicodeUTF8));
        condition->clear();
        condition->insertItems(0, QStringList()
         << QApplication::translate("pqQueryClauseWidget", "is", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqQueryClauseWidget", "is between", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqQueryClauseWidget", "is one of", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqQueryClauseWidget", "is >=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pqQueryClauseWidget", "is <=", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("pqQueryClauseWidget", "and", 0, QApplication::UnicodeUTF8));
        showCompositeTree->setText(QApplication::translate("pqQueryClauseWidget", "...", 0, QApplication::UnicodeUTF8));
        label_empty_value->setText(QString());
        helpButton->setText(QApplication::translate("pqQueryClauseWidget", "?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqQueryClauseWidget: public Ui_pqQueryClauseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQQUERYCLAUSEWIDGET_H
