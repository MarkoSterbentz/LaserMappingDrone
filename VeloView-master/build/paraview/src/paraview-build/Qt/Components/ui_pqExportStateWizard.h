/********************************************************************************
** Form generated from reading UI file 'pqExportStateWizard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQEXPORTSTATEWIZARD_H
#define UI_PQEXPORTSTATEWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>
#include "QWizardPage"

QT_BEGIN_NAMESPACE

class Ui_ExportStateWizard
{
public:
    QWizardPage *wizardPage1;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    pqSGExportStateWizardPage2 *wizardPage2;
    QGridLayout *gridLayout_2;
    QCheckBox *showAllSources;
    QListWidget *allInputs;
    QSpacerItem *verticalSpacer;
    QListWidget *simulationInputs;
    QPushButton *addButton;
    QPushButton *removeButton;
    pqSGExportStateWizardPage3 *wizardPage;
    QGridLayout *gridLayout_3;
    QTableWidget *nameWidget;
    QWizardPage *wizardPage_2;
    QGridLayout *gridLayout_4;
    QCheckBox *liveViz;
    QSpinBox *timeCompartmentSize;
    QLabel *label_2;
    QCheckBox *outputRendering;
    QCheckBox *rescaleDataRange;
    QStackedWidget *viewsContainer;
    QPushButton *previousView;
    QPushButton *nextView;

    void setupUi(QWizard *ExportStateWizard)
    {
        if (ExportStateWizard->objectName().isEmpty())
            ExportStateWizard->setObjectName(QString::fromUtf8("ExportStateWizard"));
        ExportStateWizard->resize(568, 513);
        ExportStateWizard->setMinimumSize(QSize(300, 320));
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        gridLayout = new QGridLayout(wizardPage1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        ExportStateWizard->setPage(0, wizardPage1);
        wizardPage2 = new pqSGExportStateWizardPage2();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        gridLayout_2 = new QGridLayout(wizardPage2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        showAllSources = new QCheckBox(wizardPage2);
        showAllSources->setObjectName(QString::fromUtf8("showAllSources"));

        gridLayout_2->addWidget(showAllSources, 0, 0, 1, 1);

        allInputs = new QListWidget(wizardPage2);
        allInputs->setObjectName(QString::fromUtf8("allInputs"));
        allInputs->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(allInputs, 1, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 128, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        simulationInputs = new QListWidget(wizardPage2);
        simulationInputs->setObjectName(QString::fromUtf8("simulationInputs"));
        simulationInputs->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(simulationInputs, 1, 2, 3, 1);

        addButton = new QPushButton(wizardPage2);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setEnabled(false);

        gridLayout_2->addWidget(addButton, 2, 1, 1, 1);

        removeButton = new QPushButton(wizardPage2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setEnabled(false);

        gridLayout_2->addWidget(removeButton, 3, 1, 1, 1);

        ExportStateWizard->setPage(1, wizardPage2);
        wizardPage = new pqSGExportStateWizardPage3();
        wizardPage->setObjectName(QString::fromUtf8("wizardPage"));
        gridLayout_3 = new QGridLayout(wizardPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        nameWidget = new QTableWidget(wizardPage);
        if (nameWidget->columnCount() < 2)
            nameWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        nameWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        nameWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        nameWidget->setObjectName(QString::fromUtf8("nameWidget"));
        nameWidget->setAlternatingRowColors(true);
        nameWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        nameWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(nameWidget, 0, 0, 1, 1);

        ExportStateWizard->setPage(2, wizardPage);
        wizardPage_2 = new QWizardPage();
        wizardPage_2->setObjectName(QString::fromUtf8("wizardPage_2"));
        gridLayout_4 = new QGridLayout(wizardPage_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        liveViz = new QCheckBox(wizardPage_2);
        liveViz->setObjectName(QString::fromUtf8("liveViz"));

        gridLayout_4->addWidget(liveViz, 0, 0, 1, 1);

        timeCompartmentSize = new QSpinBox(wizardPage_2);
        timeCompartmentSize->setObjectName(QString::fromUtf8("timeCompartmentSize"));
        timeCompartmentSize->setLayoutDirection(Qt::RightToLeft);
        timeCompartmentSize->setMinimum(1);
        timeCompartmentSize->setMaximum(1000);

        gridLayout_4->addWidget(timeCompartmentSize, 1, 0, 1, 1);

        label_2 = new QLabel(wizardPage_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 1, 1, 1);

        outputRendering = new QCheckBox(wizardPage_2);
        outputRendering->setObjectName(QString::fromUtf8("outputRendering"));
        outputRendering->setEnabled(true);
        outputRendering->setChecked(false);

        gridLayout_4->addWidget(outputRendering, 2, 0, 1, 2);

        rescaleDataRange = new QCheckBox(wizardPage_2);
        rescaleDataRange->setObjectName(QString::fromUtf8("rescaleDataRange"));
        rescaleDataRange->setEnabled(true);
        rescaleDataRange->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(rescaleDataRange, 3, 0, 1, 1);

        viewsContainer = new QStackedWidget(wizardPage_2);
        viewsContainer->setObjectName(QString::fromUtf8("viewsContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewsContainer->sizePolicy().hasHeightForWidth());
        viewsContainer->setSizePolicy(sizePolicy);
        viewsContainer->setMinimumSize(QSize(300, 196));
        viewsContainer->setFrameShape(QFrame::Box);
        viewsContainer->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(viewsContainer, 4, 0, 1, 2);

        previousView = new QPushButton(wizardPage_2);
        previousView->setObjectName(QString::fromUtf8("previousView"));
        previousView->setEnabled(false);

        gridLayout_4->addWidget(previousView, 5, 0, 1, 1);

        nextView = new QPushButton(wizardPage_2);
        nextView->setObjectName(QString::fromUtf8("nextView"));
        nextView->setEnabled(false);

        gridLayout_4->addWidget(nextView, 5, 1, 1, 1);

        ExportStateWizard->addPage(wizardPage_2);

        retranslateUi(ExportStateWizard);
        QObject::connect(outputRendering, SIGNAL(toggled(bool)), previousView, SLOT(setVisible(bool)));
        QObject::connect(outputRendering, SIGNAL(toggled(bool)), nextView, SLOT(setVisible(bool)));
        QObject::connect(outputRendering, SIGNAL(toggled(bool)), viewsContainer, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(ExportStateWizard);
    } // setupUi

    void retranslateUi(QWizard *ExportStateWizard)
    {
        ExportStateWizard->setWindowTitle(QApplication::translate("ExportStateWizard", "Export State", 0, QApplication::UnicodeUTF8));
        wizardPage1->setTitle(QApplication::translate("ExportStateWizard", "Export Co-Processing State", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportStateWizard", "This wizard will guide you through the steps required to export the current visualization state as a Python script that can be run in the co-processing component of ParaView.  Make sure to add appropriate writers for the desired pipelines to be used in the Writers menu.", 0, QApplication::UnicodeUTF8));
        wizardPage2->setTitle(QApplication::translate("ExportStateWizard", "Select Simulation Inputs", 0, QApplication::UnicodeUTF8));
        wizardPage2->setSubTitle(QApplication::translate("ExportStateWizard", "Select the sources in this visualization that are inputs from the simulation. Use Ctrl to select multiple sources.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showAllSources->setToolTip(QApplication::translate("ExportStateWizard", "<html><head/><body><p>Only sources that correspond to inputs from the simulation should be added.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showAllSources->setText(QApplication::translate("ExportStateWizard", "Show All Sources", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("ExportStateWizard", "Add", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("ExportStateWizard", "Remove", 0, QApplication::UnicodeUTF8));
        wizardPage->setTitle(QApplication::translate("ExportStateWizard", "Name Simulation Inputs", 0, QApplication::UnicodeUTF8));
        wizardPage->setSubTitle(QApplication::translate("ExportStateWizard", "Assign names for the selected simulation inputs.", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = nameWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ExportStateWizard", "Pipeline Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = nameWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ExportStateWizard", "Simulation Name", 0, QApplication::UnicodeUTF8));
        wizardPage_2->setTitle(QApplication::translate("ExportStateWizard", "Configuration", 0, QApplication::UnicodeUTF8));
        wizardPage_2->setSubTitle(QApplication::translate("ExportStateWizard", "Select state configuration options.", 0, QApplication::UnicodeUTF8));
        liveViz->setText(QApplication::translate("ExportStateWizard", "Live Visualization", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        timeCompartmentSize->setToolTip(QApplication::translate("ExportStateWizard", "The number of processes working together on a specific time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        timeCompartmentSize->setSuffix(QString());
        timeCompartmentSize->setPrefix(QString());
        label_2->setText(QApplication::translate("ExportStateWizard", "Time compartment size", 0, QApplication::UnicodeUTF8));
        outputRendering->setText(QApplication::translate("ExportStateWizard", "Output rendering components i.e. views", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rescaleDataRange->setToolTip(QApplication::translate("ExportStateWizard", "Check to rescale the data range every outputted time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rescaleDataRange->setWhatsThis(QApplication::translate("ExportStateWizard", "Check to rescale the data range every outputted time step.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        rescaleDataRange->setText(QApplication::translate("ExportStateWizard", "Rescale to Data Range", 0, QApplication::UnicodeUTF8));
        previousView->setText(QApplication::translate("ExportStateWizard", "Previous View", 0, QApplication::UnicodeUTF8));
        nextView->setText(QApplication::translate("ExportStateWizard", "Next View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportStateWizard: public Ui_ExportStateWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQEXPORTSTATEWIZARD_H
