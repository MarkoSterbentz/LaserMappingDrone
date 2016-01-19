/********************************************************************************
** Form generated from reading UI file 'ParaViewMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAVIEWMAINWINDOW_H
#define UI_PARAVIEWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pqCollaborationPanel.h"
#include "pqColorMapEditor.h"
#include "pqComparativeVisPanel.h"
#include "pqDataInformationWidget.h"
#include "pqFindDataSelectionDisplayFrame.h"
#include "pqMemoryInspectorPanel.h"
#include "pqMultiBlockInspectorPanel.h"
#include "pqPVAnimationWidget.h"
#include "pqPipelineBrowserWidget.h"
#include "pqPropertiesPanel.h"
#include "pqProxyInformationWidget.h"
#include "pqStatusBar.h"
#include "pqTabbedMultiViewWidget.h"
#include "pqTimeInspectorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqClientMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    pqTabbedMultiViewWidget *MultiViewWidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuSources;
    QMenu *menuFilters;
    QMenu *menu_Edit;
    QMenu *menu_View;
    QMenu *menuTools;
    QMenu *menu_Help;
    QMenu *menu_Macros;
    QMenu *menu_Catalyst;
    pqStatusBar *statusbar;
    QDockWidget *pipelineBrowserDock;
    pqPipelineBrowserWidget *pipelineBrowser;
    QDockWidget *statisticsDock;
    pqDataInformationWidget *statisticsView;
    QDockWidget *animationViewDock;
    pqPVAnimationWidget *animationView;
    QDockWidget *comparativePanelDock;
    pqComparativeVisPanel *comparativeVisPanel;
    QDockWidget *collaborationPanelDock;
    pqCollaborationPanel *collaborationPanel;
    QDockWidget *informationDock;
    QWidget *informationWidgetFrame;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *informationScrollArea;
    pqProxyInformationWidget *informationWidget;
    QDockWidget *memoryInspectorDock;
    pqMemoryInspectorPanel *dockWidgetContents;
    QDockWidget *propertiesDock;
    pqPropertiesPanel *propertiesPanel;
    QDockWidget *multiBlockInspectorDock;
    pqMultiBlockInspectorPanel *multiBlockInspectorPanel;
    QDockWidget *colorMapEditorDock;
    pqColorMapEditor *colorMapEditorPanel;
    QDockWidget *selectionDisplayDock;
    pqFindDataSelectionDisplayFrame *selectionDisplayWidget;
    QDockWidget *displayPropertiesDock;
    pqPropertiesPanel *displayPropertiesPanel;
    QDockWidget *viewPropertiesDock;
    pqPropertiesPanel *viewPropertiesPanel;
    QDockWidget *timeInspectorDock;
    pqTimeInspectorWidget *timeInspectorPanel;

    void setupUi(QMainWindow *pqClientMainWindow)
    {
        if (pqClientMainWindow->objectName().isEmpty())
            pqClientMainWindow->setObjectName(QString::fromUtf8("pqClientMainWindow"));
        pqClientMainWindow->resize(1152, 768);
        pqClientMainWindow->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pqWidgets/Icons/pvIcon512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pqClientMainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(pqClientMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MultiViewWidget = new pqTabbedMultiViewWidget(centralwidget);
        MultiViewWidget->setObjectName(QString::fromUtf8("MultiViewWidget"));

        gridLayout->addWidget(MultiViewWidget, 0, 0, 1, 1);

        pqClientMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pqClientMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1152, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuSources = new QMenu(menubar);
        menuSources->setObjectName(QString::fromUtf8("menuSources"));
        menuFilters = new QMenu(menubar);
        menuFilters->setObjectName(QString::fromUtf8("menuFilters"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Macros = new QMenu(menubar);
        menu_Macros->setObjectName(QString::fromUtf8("menu_Macros"));
        menu_Catalyst = new QMenu(menubar);
        menu_Catalyst->setObjectName(QString::fromUtf8("menu_Catalyst"));
        pqClientMainWindow->setMenuBar(menubar);
        statusbar = new pqStatusBar(pqClientMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pqClientMainWindow->setStatusBar(statusbar);
        pipelineBrowserDock = new QDockWidget(pqClientMainWindow);
        pipelineBrowserDock->setObjectName(QString::fromUtf8("pipelineBrowserDock"));
        pipelineBrowserDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        pipelineBrowser = new pqPipelineBrowserWidget();
        pipelineBrowser->setObjectName(QString::fromUtf8("pipelineBrowser"));
        pipelineBrowser->setContextMenuPolicy(Qt::ActionsContextMenu);
        pipelineBrowserDock->setWidget(pipelineBrowser);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), pipelineBrowserDock);
        statisticsDock = new QDockWidget(pqClientMainWindow);
        statisticsDock->setObjectName(QString::fromUtf8("statisticsDock"));
        statisticsDock->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        statisticsView = new pqDataInformationWidget();
        statisticsView->setObjectName(QString::fromUtf8("statisticsView"));
        statisticsDock->setWidget(statisticsView);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), statisticsDock);
        animationViewDock = new QDockWidget(pqClientMainWindow);
        animationViewDock->setObjectName(QString::fromUtf8("animationViewDock"));
        animationView = new pqPVAnimationWidget();
        animationView->setObjectName(QString::fromUtf8("animationView"));
        animationViewDock->setWidget(animationView);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), animationViewDock);
        comparativePanelDock = new QDockWidget(pqClientMainWindow);
        comparativePanelDock->setObjectName(QString::fromUtf8("comparativePanelDock"));
        comparativePanelDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        comparativeVisPanel = new pqComparativeVisPanel();
        comparativeVisPanel->setObjectName(QString::fromUtf8("comparativeVisPanel"));
        comparativePanelDock->setWidget(comparativeVisPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), comparativePanelDock);
        collaborationPanelDock = new QDockWidget(pqClientMainWindow);
        collaborationPanelDock->setObjectName(QString::fromUtf8("collaborationPanelDock"));
        collaborationPanelDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        collaborationPanel = new pqCollaborationPanel();
        collaborationPanel->setObjectName(QString::fromUtf8("collaborationPanel"));
        collaborationPanelDock->setWidget(collaborationPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), collaborationPanelDock);
        informationDock = new QDockWidget(pqClientMainWindow);
        informationDock->setObjectName(QString::fromUtf8("informationDock"));
        informationDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        informationWidgetFrame = new QWidget();
        informationWidgetFrame->setObjectName(QString::fromUtf8("informationWidgetFrame"));
        verticalLayout_2 = new QVBoxLayout(informationWidgetFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        informationScrollArea = new QScrollArea(informationWidgetFrame);
        informationScrollArea->setObjectName(QString::fromUtf8("informationScrollArea"));
        informationScrollArea->setWidgetResizable(true);
        informationWidget = new pqProxyInformationWidget();
        informationWidget->setObjectName(QString::fromUtf8("informationWidget"));
        informationWidget->setGeometry(QRect(0, 0, 78, 188));
        informationScrollArea->setWidget(informationWidget);

        verticalLayout_2->addWidget(informationScrollArea);

        informationDock->setWidget(informationWidgetFrame);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), informationDock);
        memoryInspectorDock = new QDockWidget(pqClientMainWindow);
        memoryInspectorDock->setObjectName(QString::fromUtf8("memoryInspectorDock"));
        memoryInspectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new pqMemoryInspectorPanel();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        memoryInspectorDock->setWidget(dockWidgetContents);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), memoryInspectorDock);
        propertiesDock = new QDockWidget(pqClientMainWindow);
        propertiesDock->setObjectName(QString::fromUtf8("propertiesDock"));
        propertiesDock->setMinimumSize(QSize(80, 41));
        propertiesDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        propertiesPanel = new pqPropertiesPanel();
        propertiesPanel->setObjectName(QString::fromUtf8("propertiesPanel"));
        propertiesDock->setWidget(propertiesPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), propertiesDock);
        multiBlockInspectorDock = new QDockWidget(pqClientMainWindow);
        multiBlockInspectorDock->setObjectName(QString::fromUtf8("multiBlockInspectorDock"));
        multiBlockInspectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        multiBlockInspectorPanel = new pqMultiBlockInspectorPanel();
        multiBlockInspectorPanel->setObjectName(QString::fromUtf8("multiBlockInspectorPanel"));
        multiBlockInspectorDock->setWidget(multiBlockInspectorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), multiBlockInspectorDock);
        colorMapEditorDock = new QDockWidget(pqClientMainWindow);
        colorMapEditorDock->setObjectName(QString::fromUtf8("colorMapEditorDock"));
        colorMapEditorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        colorMapEditorPanel = new pqColorMapEditor();
        colorMapEditorPanel->setObjectName(QString::fromUtf8("colorMapEditorPanel"));
        colorMapEditorDock->setWidget(colorMapEditorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), colorMapEditorDock);
        selectionDisplayDock = new QDockWidget(pqClientMainWindow);
        selectionDisplayDock->setObjectName(QString::fromUtf8("selectionDisplayDock"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectionDisplayDock->sizePolicy().hasHeightForWidth());
        selectionDisplayDock->setSizePolicy(sizePolicy);
        selectionDisplayDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        selectionDisplayWidget = new pqFindDataSelectionDisplayFrame();
        selectionDisplayWidget->setObjectName(QString::fromUtf8("selectionDisplayWidget"));
        selectionDisplayWidget->setProperty("useVerticalLayout", QVariant(true));
        selectionDisplayDock->setWidget(selectionDisplayWidget);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), selectionDisplayDock);
        displayPropertiesDock = new QDockWidget(pqClientMainWindow);
        displayPropertiesDock->setObjectName(QString::fromUtf8("displayPropertiesDock"));
        displayPropertiesDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        displayPropertiesPanel = new pqPropertiesPanel();
        displayPropertiesPanel->setObjectName(QString::fromUtf8("displayPropertiesPanel"));
        displayPropertiesPanel->setProperty("panelMode", QVariant(2));
        displayPropertiesDock->setWidget(displayPropertiesPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), displayPropertiesDock);
        viewPropertiesDock = new QDockWidget(pqClientMainWindow);
        viewPropertiesDock->setObjectName(QString::fromUtf8("viewPropertiesDock"));
        viewPropertiesDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        viewPropertiesPanel = new pqPropertiesPanel();
        viewPropertiesPanel->setObjectName(QString::fromUtf8("viewPropertiesPanel"));
        viewPropertiesPanel->setProperty("panelMode", QVariant(4));
        viewPropertiesDock->setWidget(viewPropertiesPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), viewPropertiesDock);
        timeInspectorDock = new QDockWidget(pqClientMainWindow);
        timeInspectorDock->setObjectName(QString::fromUtf8("timeInspectorDock"));
        timeInspectorDock->setAllowedAreas(Qt::AllDockWidgetAreas);
        timeInspectorPanel = new pqTimeInspectorWidget();
        timeInspectorPanel->setObjectName(QString::fromUtf8("timeInspectorPanel"));
        timeInspectorDock->setWidget(timeInspectorPanel);
        pqClientMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), timeInspectorDock);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menuSources->menuAction());
        menubar->addAction(menuFilters->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menu_Catalyst->menuAction());
        menubar->addAction(menu_Macros->menuAction());
        menubar->addAction(menu_Help->menuAction());

        retranslateUi(pqClientMainWindow);

        QMetaObject::connectSlotsByName(pqClientMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *pqClientMainWindow)
    {
        pqClientMainWindow->setWindowTitle(QApplication::translate("pqClientMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("pqClientMainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuSources->setTitle(QApplication::translate("pqClientMainWindow", "&Sources", 0, QApplication::UnicodeUTF8));
        menuFilters->setTitle(QApplication::translate("pqClientMainWindow", "&Filters", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("pqClientMainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("pqClientMainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("pqClientMainWindow", "&Tools", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("pqClientMainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menu_Macros->setTitle(QApplication::translate("pqClientMainWindow", "&Macros", 0, QApplication::UnicodeUTF8));
        menu_Catalyst->setTitle(QApplication::translate("pqClientMainWindow", "&Catalyst", 0, QApplication::UnicodeUTF8));
        pipelineBrowserDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Pipeline Browser", 0, QApplication::UnicodeUTF8));
        statisticsDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Statistics Inspector", 0, QApplication::UnicodeUTF8));
        animationViewDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Animation View", 0, QApplication::UnicodeUTF8));
        comparativePanelDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Comparative View Inspector", 0, QApplication::UnicodeUTF8));
        collaborationPanelDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Collaboration Panel", 0, QApplication::UnicodeUTF8));
        informationDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Information", 0, QApplication::UnicodeUTF8));
        memoryInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Memory Inspector", 0, QApplication::UnicodeUTF8));
        propertiesDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Properties", 0, QApplication::UnicodeUTF8));
        multiBlockInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Multi-block Inspector", 0, QApplication::UnicodeUTF8));
        colorMapEditorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Color Map Editor", 0, QApplication::UnicodeUTF8));
        selectionDisplayDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Selection Display Inspector", 0, QApplication::UnicodeUTF8));
        displayPropertiesDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Display", 0, QApplication::UnicodeUTF8));
        viewPropertiesDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "View", 0, QApplication::UnicodeUTF8));
        timeInspectorDock->setWindowTitle(QApplication::translate("pqClientMainWindow", "Time Inspector", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pqClientMainWindow: public Ui_pqClientMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAVIEWMAINWINDOW_H
