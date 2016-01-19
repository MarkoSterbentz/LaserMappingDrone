/********************************************************************************
** Form generated from reading UI file 'pqProxyInformationWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQPROXYINFORMATIONWIDGET_H
#define UI_PQPROXYINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqProxyInformationWidget
{
public:
    QVBoxLayout *vboxLayout;
    pqTreeWidget *compositeTree;
    QGroupBox *properties;
    QGridLayout *gridLayout;
    QLabel *filenameLabel;
    QLineEdit *filename;
    QLabel *label_13;
    QLineEdit *path;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLineEdit *type;
    QStackedWidget *dataTypeProperties;
    QWidget *DataSet;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QLineEdit *numberOfCells;
    QLabel *label_3;
    QLineEdit *numberOfPoints;
    QWidget *Table;
    QGridLayout *gridLayout3;
    QLabel *label_11;
    QLineEdit *numberOfRows;
    QLabel *label_12;
    QLineEdit *numberOfColumns;
    QLabel *label_4;
    QLineEdit *memory;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout4;
    pqTreeWidget *dataArrays;
    QLineEdit *dataTimeLabel;
    QGroupBox *groupExtent;
    QGridLayout *gridLayout5;
    QLineEdit *zExtent;
    QLineEdit *yExtent;
    QLineEdit *xExtent;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout6;
    QLabel *label_8;
    QLineEdit *zRange;
    QLineEdit *yRange;
    QLabel *label_6;
    QLineEdit *xRange;
    QLabel *label_7;
    QGroupBox *groupDataTime;
    QGridLayout *gridLayout7;
    pqTreeWidget *timeValues;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *pqProxyInformationWidget)
    {
        if (pqProxyInformationWidget->objectName().isEmpty())
            pqProxyInformationWidget->setObjectName(QString::fromUtf8("pqProxyInformationWidget"));
        pqProxyInformationWidget->resize(276, 966);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pqProxyInformationWidget->sizePolicy().hasHeightForWidth());
        pqProxyInformationWidget->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(pqProxyInformationWidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        compositeTree = new pqTreeWidget(pqProxyInformationWidget);
        compositeTree->setObjectName(QString::fromUtf8("compositeTree"));

        vboxLayout->addWidget(compositeTree);

        properties = new QGroupBox(pqProxyInformationWidget);
        properties->setObjectName(QString::fromUtf8("properties"));
        gridLayout = new QGridLayout(properties);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        filenameLabel = new QLabel(properties);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));

        gridLayout->addWidget(filenameLabel, 0, 0, 1, 1);

        filename = new QLineEdit(properties);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setCursor(QCursor(Qt::ArrowCursor));
        filename->setAcceptDrops(false);
        filename->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        filename->setReadOnly(true);

        gridLayout->addWidget(filename, 0, 1, 1, 1);

        label_13 = new QLabel(properties);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        path = new QLineEdit(properties);
        path->setObjectName(QString::fromUtf8("path"));
        path->setCursor(QCursor(Qt::ArrowCursor));
        path->setAcceptDrops(false);
        path->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        path->setReadOnly(true);

        gridLayout->addWidget(path, 1, 1, 1, 1);


        vboxLayout->addWidget(properties);

        groupBox = new QGroupBox(pqProxyInformationWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        type = new QLineEdit(groupBox);
        type->setObjectName(QString::fromUtf8("type"));
        type->setCursor(QCursor(Qt::ArrowCursor));
        type->setAcceptDrops(false);
        type->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        type->setReadOnly(true);

        gridLayout1->addWidget(type, 0, 1, 1, 1);

        dataTypeProperties = new QStackedWidget(groupBox);
        dataTypeProperties->setObjectName(QString::fromUtf8("dataTypeProperties"));
        DataSet = new QWidget();
        DataSet->setObjectName(QString::fromUtf8("DataSet"));
        gridLayout2 = new QGridLayout(DataSet);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_2 = new QLabel(DataSet);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 1);

        numberOfCells = new QLineEdit(DataSet);
        numberOfCells->setObjectName(QString::fromUtf8("numberOfCells"));
        numberOfCells->setCursor(QCursor(Qt::ArrowCursor));
        numberOfCells->setAcceptDrops(false);
        numberOfCells->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfCells->setReadOnly(true);

        gridLayout2->addWidget(numberOfCells, 0, 1, 1, 1);

        label_3 = new QLabel(DataSet);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout2->addWidget(label_3, 1, 0, 1, 1);

        numberOfPoints = new QLineEdit(DataSet);
        numberOfPoints->setObjectName(QString::fromUtf8("numberOfPoints"));
        numberOfPoints->setCursor(QCursor(Qt::ArrowCursor));
        numberOfPoints->setAcceptDrops(false);
        numberOfPoints->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfPoints->setReadOnly(true);

        gridLayout2->addWidget(numberOfPoints, 1, 1, 1, 1);

        dataTypeProperties->addWidget(DataSet);
        Table = new QWidget();
        Table->setObjectName(QString::fromUtf8("Table"));
        gridLayout3 = new QGridLayout(Table);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_11 = new QLabel(Table);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout3->addWidget(label_11, 0, 0, 1, 1);

        numberOfRows = new QLineEdit(Table);
        numberOfRows->setObjectName(QString::fromUtf8("numberOfRows"));
        numberOfRows->setCursor(QCursor(Qt::ArrowCursor));
        numberOfRows->setAcceptDrops(false);
        numberOfRows->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfRows->setReadOnly(true);

        gridLayout3->addWidget(numberOfRows, 0, 1, 1, 1);

        label_12 = new QLabel(Table);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout3->addWidget(label_12, 1, 0, 1, 1);

        numberOfColumns = new QLineEdit(Table);
        numberOfColumns->setObjectName(QString::fromUtf8("numberOfColumns"));
        numberOfColumns->setCursor(QCursor(Qt::ArrowCursor));
        numberOfColumns->setAcceptDrops(false);
        numberOfColumns->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        numberOfColumns->setReadOnly(true);

        gridLayout3->addWidget(numberOfColumns, 1, 1, 1, 1);

        dataTypeProperties->addWidget(Table);

        gridLayout1->addWidget(dataTypeProperties, 1, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        memory = new QLineEdit(groupBox);
        memory->setObjectName(QString::fromUtf8("memory"));
        memory->setCursor(QCursor(Qt::ArrowCursor));
        memory->setAcceptDrops(false);
        memory->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        memory->setReadOnly(true);

        gridLayout1->addWidget(memory, 2, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(pqProxyInformationWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout4 = new QGridLayout(groupBox_2);
        gridLayout4->setSpacing(4);
        gridLayout4->setContentsMargins(4, 4, 4, 4);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        dataArrays = new pqTreeWidget(groupBox_2);
        dataArrays->setObjectName(QString::fromUtf8("dataArrays"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dataArrays->sizePolicy().hasHeightForWidth());
        dataArrays->setSizePolicy(sizePolicy1);
        dataArrays->setRootIsDecorated(false);

        gridLayout4->addWidget(dataArrays, 1, 0, 1, 1);

        dataTimeLabel = new QLineEdit(groupBox_2);
        dataTimeLabel->setObjectName(QString::fromUtf8("dataTimeLabel"));
        dataTimeLabel->setCursor(QCursor(Qt::ArrowCursor));
        dataTimeLabel->setAcceptDrops(false);
        dataTimeLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        dataTimeLabel->setReadOnly(true);

        gridLayout4->addWidget(dataTimeLabel, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        groupExtent = new QGroupBox(pqProxyInformationWidget);
        groupExtent->setObjectName(QString::fromUtf8("groupExtent"));
        gridLayout5 = new QGridLayout(groupExtent);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        zExtent = new QLineEdit(groupExtent);
        zExtent->setObjectName(QString::fromUtf8("zExtent"));
        zExtent->setCursor(QCursor(Qt::ArrowCursor));
        zExtent->setAcceptDrops(false);
        zExtent->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        zExtent->setReadOnly(true);

        gridLayout5->addWidget(zExtent, 2, 1, 1, 1);

        yExtent = new QLineEdit(groupExtent);
        yExtent->setObjectName(QString::fromUtf8("yExtent"));
        yExtent->setCursor(QCursor(Qt::ArrowCursor));
        yExtent->setAcceptDrops(false);
        yExtent->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        yExtent->setReadOnly(true);

        gridLayout5->addWidget(yExtent, 1, 1, 1, 1);

        xExtent = new QLineEdit(groupExtent);
        xExtent->setObjectName(QString::fromUtf8("xExtent"));
        xExtent->setCursor(QCursor(Qt::ArrowCursor));
        xExtent->setAcceptDrops(false);
        xExtent->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        xExtent->setReadOnly(true);

        gridLayout5->addWidget(xExtent, 0, 1, 1, 1);

        label_5 = new QLabel(groupExtent);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout5->addWidget(label_5, 2, 0, 1, 1);

        label_9 = new QLabel(groupExtent);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout5->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(groupExtent);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout5->addWidget(label_10, 0, 0, 1, 1);


        vboxLayout->addWidget(groupExtent);

        groupBox_3 = new QGroupBox(pqProxyInformationWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        gridLayout6 = new QGridLayout(groupBox_3);
        gridLayout6->setSpacing(4);
        gridLayout6->setContentsMargins(4, 4, 4, 4);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout6->addWidget(label_8, 2, 0, 1, 1);

        zRange = new QLineEdit(groupBox_3);
        zRange->setObjectName(QString::fromUtf8("zRange"));
        zRange->setCursor(QCursor(Qt::ArrowCursor));
        zRange->setAcceptDrops(false);
        zRange->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        zRange->setReadOnly(true);

        gridLayout6->addWidget(zRange, 2, 1, 1, 1);

        yRange = new QLineEdit(groupBox_3);
        yRange->setObjectName(QString::fromUtf8("yRange"));
        yRange->setCursor(QCursor(Qt::ArrowCursor));
        yRange->setAcceptDrops(false);
        yRange->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        yRange->setReadOnly(true);

        gridLayout6->addWidget(yRange, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout6->addWidget(label_6, 0, 0, 1, 1);

        xRange = new QLineEdit(groupBox_3);
        xRange->setObjectName(QString::fromUtf8("xRange"));
        xRange->setCursor(QCursor(Qt::ArrowCursor));
        xRange->setAcceptDrops(false);
        xRange->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);border: none;"));
        xRange->setReadOnly(true);

        gridLayout6->addWidget(xRange, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout6->addWidget(label_7, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox_3);

        groupDataTime = new QGroupBox(pqProxyInformationWidget);
        groupDataTime->setObjectName(QString::fromUtf8("groupDataTime"));
        sizePolicy.setHeightForWidth(groupDataTime->sizePolicy().hasHeightForWidth());
        groupDataTime->setSizePolicy(sizePolicy);
        gridLayout7 = new QGridLayout(groupDataTime);
        gridLayout7->setSpacing(4);
        gridLayout7->setContentsMargins(4, 4, 4, 4);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        timeValues = new pqTreeWidget(groupDataTime);
        timeValues->setObjectName(QString::fromUtf8("timeValues"));
        sizePolicy1.setHeightForWidth(timeValues->sizePolicy().hasHeightForWidth());
        timeValues->setSizePolicy(sizePolicy1);
        timeValues->setColumnCount(2);

        gridLayout7->addWidget(timeValues, 0, 0, 1, 1);


        vboxLayout->addWidget(groupDataTime);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(pqProxyInformationWidget);

        dataTypeProperties->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pqProxyInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *pqProxyInformationWidget)
    {
        pqProxyInformationWidget->setWindowTitle(QApplication::translate("pqProxyInformationWidget", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = compositeTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("pqProxyInformationWidget", "Data Hierarchy", 0, QApplication::UnicodeUTF8));
        properties->setTitle(QApplication::translate("pqProxyInformationWidget", "Properties", 0, QApplication::UnicodeUTF8));
        filenameLabel->setText(QApplication::translate("pqProxyInformationWidget", "Filename:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("pqProxyInformationWidget", "Path:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pqProxyInformationWidget", "Statistics", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pqProxyInformationWidget", "Type:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pqProxyInformationWidget", "Number of Cells:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pqProxyInformationWidget", "Number of Points:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("pqProxyInformationWidget", "Number of Rows:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("pqProxyInformationWidget", "Number of Columns", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pqProxyInformationWidget", "Memory:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("pqProxyInformationWidget", "Data Arrays", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = dataArrays->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("pqProxyInformationWidget", "Data Ranges", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("pqProxyInformationWidget", "Data Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("pqProxyInformationWidget", "Name", 0, QApplication::UnicodeUTF8));
        groupExtent->setTitle(QApplication::translate("pqProxyInformationWidget", "Extents", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pqProxyInformationWidget", "Z Extent", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("pqProxyInformationWidget", "Y Extent:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("pqProxyInformationWidget", "X Extent:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("pqProxyInformationWidget", "Bounds", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("pqProxyInformationWidget", "Z range:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("pqProxyInformationWidget", "X range:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("pqProxyInformationWidget", "Y range:", 0, QApplication::UnicodeUTF8));
        groupDataTime->setTitle(QApplication::translate("pqProxyInformationWidget", "Time", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = timeValues->headerItem();
        ___qtreewidgetitem2->setText(1, QApplication::translate("pqProxyInformationWidget", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("pqProxyInformationWidget", "Index", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqProxyInformationWidget: public Ui_pqProxyInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQPROXYINFORMATIONWIDGET_H
