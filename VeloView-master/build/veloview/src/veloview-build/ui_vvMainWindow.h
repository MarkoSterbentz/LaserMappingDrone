/********************************************************************************
** Form generated from reading UI file 'vvMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVMAINWINDOW_H
#define UI_VVMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "pqColorMapEditor.h"
#include "vvColorToolbar.h"

QT_BEGIN_NAMESPACE

class Ui_vvMainWindow
{
public:
    QAction *actionE_xit;
    QAction *actionOpenPcap;
    QAction *actionSelect_Visible_Points;
    QAction *actionSelect_All_Points;
    QAction *actionSpreadsheet;
    QAction *actionOpen_Sensor_Stream;
    QAction *actionChoose_Calibration_File;
    QAction *actionSeek_Backward;
    QAction *actionPlay;
    QAction *actionSeek_Forward;
    QAction *actionPause;
    QAction *actionRecord;
    QAction *actionPython_Console;
    QAction *actionReset_Camera;
    QAction *actionClose;
    QAction *actionMeasurement_Grid;
    QAction *actionGo_To_Start;
    QAction *actionGo_To_End;
    QAction *actionSaveScreenshot;
    QAction *actionSaveCSV;
    QAction *actionLoop;
    QAction *actionExport_To_KiwiViewer;
    QAction *actionGrid_Properties;
    QAction *actionSavePCAP;
    QAction *actionAbout_VeloView;
    QAction *actionVeloViewDeveloperGuide;
    QAction *actionRecent_file1;
    QAction *actionRecent_file2;
    QAction *actionRecent_file3;
    QAction *actionRecent_file4;
    QAction *actionRecent_file5;
    QAction *actionClear_Menu;
    QAction *actionNative_File_Dialogs;
    QAction *actionToggleProjection;
    QAction *actionSetViewXPlus;
    QAction *actionSetViewXMinus;
    QAction *actionSetViewYPlus;
    QAction *actionSetViewYMinus;
    QAction *actionSetViewZPlus;
    QAction *actionSetViewZMinus;
    QAction *actionVeloViewUserGuide;
    QAction *actionMeasure;
    QAction *actionOverheadView;
    QAction *actionPlaneFit;
    QAction *actionSavePositionCSV;
    QAction *actionGPSApply;
    QAction *actionAbsolute;
    QAction *actionLaserSelection;
    QAction *actionSaveLAS;
    QAction *actionOpenApplanix;
    QAction *actionCropReturns;
    QAction *actionDualReturnModeDual;
    QAction *actionDualReturnDistanceNear;
    QAction *actionDualReturnDistanceFar;
    QAction *actionDualReturnIntensityHigh;
    QAction *actionDualReturnIntensityLow;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuRecent_Files;
    QMenu *menuSaveAs;
    QMenu *menu_Open;
    QMenu *menuTools;
    QMenu *menuDebugging;
    QMenu *menuDualReturnMode;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    vvColorToolbar *colorToolBar;
    QToolBar *playbackToolbar;
    QToolBar *viewSettings;
    QToolBar *geolocationToolbar;
    QDockWidget *colorMapEditorDock;
    pqColorMapEditor *colorMapEditorPanel;

    void setupUi(QMainWindow *vvMainWindow)
    {
        if (vvMainWindow->objectName().isEmpty())
            vvMainWindow->setObjectName(QString::fromUtf8("vvMainWindow"));
        vvMainWindow->resize(1070, 645);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/vvResources/Icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        vvMainWindow->setWindowIcon(icon);
        actionE_xit = new QAction(vvMainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionOpenPcap = new QAction(vvMainWindow);
        actionOpenPcap->setObjectName(QString::fromUtf8("actionOpenPcap"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/WiresharkDoc-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenPcap->setIcon(icon1);
        actionSelect_Visible_Points = new QAction(vvMainWindow);
        actionSelect_Visible_Points->setObjectName(QString::fromUtf8("actionSelect_Visible_Points"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/vvResources/Icons/pqSurfaceSelectionPoint24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_Visible_Points->setIcon(icon2);
        actionSelect_All_Points = new QAction(vvMainWindow);
        actionSelect_All_Points->setObjectName(QString::fromUtf8("actionSelect_All_Points"));
        actionSelect_All_Points->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/vvResources/Icons/pqFrustumSelectionPoint24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All_Points->setIcon(icon3);
        actionSpreadsheet = new QAction(vvMainWindow);
        actionSpreadsheet->setObjectName(QString::fromUtf8("actionSpreadsheet"));
        actionSpreadsheet->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/vvResources/Icons/pqSpreadsheet16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSpreadsheet->setIcon(icon4);
        actionOpen_Sensor_Stream = new QAction(vvMainWindow);
        actionOpen_Sensor_Stream->setObjectName(QString::fromUtf8("actionOpen_Sensor_Stream"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/velodyne_hdl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Sensor_Stream->setIcon(icon5);
        actionChoose_Calibration_File = new QAction(vvMainWindow);
        actionChoose_Calibration_File->setObjectName(QString::fromUtf8("actionChoose_Calibration_File"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/calibrate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoose_Calibration_File->setIcon(icon6);
        actionSeek_Backward = new QAction(vvMainWindow);
        actionSeek_Backward->setObjectName(QString::fromUtf8("actionSeek_Backward"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-seek-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSeek_Backward->setIcon(icon7);
        actionPlay = new QAction(vvMainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon8);
        actionSeek_Forward = new QAction(vvMainWindow);
        actionSeek_Forward->setObjectName(QString::fromUtf8("actionSeek_Forward"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-seek-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSeek_Forward->setIcon(icon9);
        actionPause = new QAction(vvMainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-playback-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon10);
        actionRecord = new QAction(vvMainWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionRecord->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecord->setIcon(icon11);
        actionPython_Console = new QAction(vvMainWindow);
        actionPython_Console->setObjectName(QString::fromUtf8("actionPython_Console"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/vvResources/Icons/python_logo_124.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPython_Console->setIcon(icon12);
        actionReset_Camera = new QAction(vvMainWindow);
        actionReset_Camera->setObjectName(QString::fromUtf8("actionReset_Camera"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/vvResources/Icons/pqResetCamera32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_Camera->setIcon(icon13);
        actionClose = new QAction(vvMainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionMeasurement_Grid = new QAction(vvMainWindow);
        actionMeasurement_Grid->setObjectName(QString::fromUtf8("actionMeasurement_Grid"));
        actionMeasurement_Grid->setCheckable(true);
        actionMeasurement_Grid->setChecked(true);
        actionGo_To_Start = new QAction(vvMainWindow);
        actionGo_To_Start->setObjectName(QString::fromUtf8("actionGo_To_Start"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-skip-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_To_Start->setIcon(icon14);
        actionGo_To_End = new QAction(vvMainWindow);
        actionGo_To_End->setObjectName(QString::fromUtf8("actionGo_To_End"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_To_End->setIcon(icon15);
        actionSaveScreenshot = new QAction(vvMainWindow);
        actionSaveScreenshot->setObjectName(QString::fromUtf8("actionSaveScreenshot"));
        actionSaveCSV = new QAction(vvMainWindow);
        actionSaveCSV->setObjectName(QString::fromUtf8("actionSaveCSV"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/csv.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveCSV->setIcon(icon16);
        actionLoop = new QAction(vvMainWindow);
        actionLoop->setObjectName(QString::fromUtf8("actionLoop"));
        actionLoop->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/media-loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoop->setIcon(icon17);
        actionExport_To_KiwiViewer = new QAction(vvMainWindow);
        actionExport_To_KiwiViewer->setObjectName(QString::fromUtf8("actionExport_To_KiwiViewer"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/kiwi_200.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_To_KiwiViewer->setIcon(icon18);
        actionGrid_Properties = new QAction(vvMainWindow);
        actionGrid_Properties->setObjectName(QString::fromUtf8("actionGrid_Properties"));
        actionSavePCAP = new QAction(vvMainWindow);
        actionSavePCAP->setObjectName(QString::fromUtf8("actionSavePCAP"));
        actionSavePCAP->setIcon(icon1);
        actionAbout_VeloView = new QAction(vvMainWindow);
        actionAbout_VeloView->setObjectName(QString::fromUtf8("actionAbout_VeloView"));
        actionVeloViewDeveloperGuide = new QAction(vvMainWindow);
        actionVeloViewDeveloperGuide->setObjectName(QString::fromUtf8("actionVeloViewDeveloperGuide"));
        actionRecent_file1 = new QAction(vvMainWindow);
        actionRecent_file1->setObjectName(QString::fromUtf8("actionRecent_file1"));
        actionRecent_file2 = new QAction(vvMainWindow);
        actionRecent_file2->setObjectName(QString::fromUtf8("actionRecent_file2"));
        actionRecent_file3 = new QAction(vvMainWindow);
        actionRecent_file3->setObjectName(QString::fromUtf8("actionRecent_file3"));
        actionRecent_file4 = new QAction(vvMainWindow);
        actionRecent_file4->setObjectName(QString::fromUtf8("actionRecent_file4"));
        actionRecent_file5 = new QAction(vvMainWindow);
        actionRecent_file5->setObjectName(QString::fromUtf8("actionRecent_file5"));
        actionClear_Menu = new QAction(vvMainWindow);
        actionClear_Menu->setObjectName(QString::fromUtf8("actionClear_Menu"));
        actionNative_File_Dialogs = new QAction(vvMainWindow);
        actionNative_File_Dialogs->setObjectName(QString::fromUtf8("actionNative_File_Dialogs"));
        actionNative_File_Dialogs->setCheckable(true);
        actionNative_File_Dialogs->setChecked(true);
        actionToggleProjection = new QAction(vvMainWindow);
        actionToggleProjection->setObjectName(QString::fromUtf8("actionToggleProjection"));
        actionToggleProjection->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/vvResources/Icons/ViewOrtho.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon19.addFile(QString::fromUtf8(":/vvResources/Icons/ViewPerspective.png"), QSize(), QIcon::Normal, QIcon::On);
        actionToggleProjection->setIcon(icon19);
        actionSetViewXPlus = new QAction(vvMainWindow);
        actionSetViewXPlus->setObjectName(QString::fromUtf8("actionSetViewXPlus"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/vvResources/Icons/pqXPlus32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewXPlus->setIcon(icon20);
        actionSetViewXMinus = new QAction(vvMainWindow);
        actionSetViewXMinus->setObjectName(QString::fromUtf8("actionSetViewXMinus"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/vvResources/Icons/pqXMinus32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewXMinus->setIcon(icon21);
        actionSetViewYPlus = new QAction(vvMainWindow);
        actionSetViewYPlus->setObjectName(QString::fromUtf8("actionSetViewYPlus"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/vvResources/Icons/pqYPlus32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewYPlus->setIcon(icon22);
        actionSetViewYMinus = new QAction(vvMainWindow);
        actionSetViewYMinus->setObjectName(QString::fromUtf8("actionSetViewYMinus"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/vvResources/Icons/pqYMinus32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewYMinus->setIcon(icon23);
        actionSetViewZPlus = new QAction(vvMainWindow);
        actionSetViewZPlus->setObjectName(QString::fromUtf8("actionSetViewZPlus"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/vvResources/Icons/pqZPlus32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewZPlus->setIcon(icon24);
        actionSetViewZMinus = new QAction(vvMainWindow);
        actionSetViewZMinus->setObjectName(QString::fromUtf8("actionSetViewZMinus"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/vvResources/Icons/pqZMinus32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewZMinus->setIcon(icon25);
        actionVeloViewUserGuide = new QAction(vvMainWindow);
        actionVeloViewUserGuide->setObjectName(QString::fromUtf8("actionVeloViewUserGuide"));
        actionMeasure = new QAction(vvMainWindow);
        actionMeasure->setObjectName(QString::fromUtf8("actionMeasure"));
        actionMeasure->setCheckable(true);
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/vvResources/Icons/Measurements.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMeasure->setIcon(icon26);
        actionOverheadView = new QAction(vvMainWindow);
        actionOverheadView->setObjectName(QString::fromUtf8("actionOverheadView"));
        actionOverheadView->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/vvResources/Icons/map.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOverheadView->setIcon(icon27);
        actionPlaneFit = new QAction(vvMainWindow);
        actionPlaneFit->setObjectName(QString::fromUtf8("actionPlaneFit"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/vvResources/Icons/planefit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlaneFit->setIcon(icon28);
        actionSavePositionCSV = new QAction(vvMainWindow);
        actionSavePositionCSV->setObjectName(QString::fromUtf8("actionSavePositionCSV"));
        actionSavePositionCSV->setIcon(icon4);
        actionGPSApply = new QAction(vvMainWindow);
        actionGPSApply->setObjectName(QString::fromUtf8("actionGPSApply"));
        actionGPSApply->setCheckable(true);
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/vvResources/Icons/location.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGPSApply->setIcon(icon29);
        actionAbsolute = new QAction(vvMainWindow);
        actionAbsolute->setObjectName(QString::fromUtf8("actionAbsolute"));
        actionAbsolute->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/vvResources/Icons/absolute.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbsolute->setIcon(icon30);
        actionLaserSelection = new QAction(vvMainWindow);
        actionLaserSelection->setObjectName(QString::fromUtf8("actionLaserSelection"));
        actionSaveLAS = new QAction(vvMainWindow);
        actionSaveLAS->setObjectName(QString::fromUtf8("actionSaveLAS"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/las.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveLAS->setIcon(icon31);
        actionOpenApplanix = new QAction(vvMainWindow);
        actionOpenApplanix->setObjectName(QString::fromUtf8("actionOpenApplanix"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/gps.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenApplanix->setIcon(icon32);
        actionCropReturns = new QAction(vvMainWindow);
        actionCropReturns->setObjectName(QString::fromUtf8("actionCropReturns"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/VelodyneHDLPlugin/crop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCropReturns->setIcon(icon33);
        actionDualReturnModeDual = new QAction(vvMainWindow);
        actionDualReturnModeDual->setObjectName(QString::fromUtf8("actionDualReturnModeDual"));
        actionDualReturnModeDual->setCheckable(true);
        actionDualReturnModeDual->setChecked(true);
        actionDualReturnModeDual->setEnabled(false);
        actionDualReturnDistanceNear = new QAction(vvMainWindow);
        actionDualReturnDistanceNear->setObjectName(QString::fromUtf8("actionDualReturnDistanceNear"));
        actionDualReturnDistanceNear->setCheckable(true);
        actionDualReturnDistanceNear->setEnabled(false);
        actionDualReturnDistanceFar = new QAction(vvMainWindow);
        actionDualReturnDistanceFar->setObjectName(QString::fromUtf8("actionDualReturnDistanceFar"));
        actionDualReturnDistanceFar->setCheckable(true);
        actionDualReturnDistanceFar->setEnabled(false);
        actionDualReturnIntensityHigh = new QAction(vvMainWindow);
        actionDualReturnIntensityHigh->setObjectName(QString::fromUtf8("actionDualReturnIntensityHigh"));
        actionDualReturnIntensityHigh->setCheckable(true);
        actionDualReturnIntensityHigh->setEnabled(false);
        actionDualReturnIntensityLow = new QAction(vvMainWindow);
        actionDualReturnIntensityLow->setObjectName(QString::fromUtf8("actionDualReturnIntensityLow"));
        actionDualReturnIntensityLow->setCheckable(true);
        actionDualReturnIntensityLow->setEnabled(false);
        centralwidget = new QWidget(vvMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vvMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(vvMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1070, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuRecent_Files = new QMenu(menu_File);
        menuRecent_Files->setObjectName(QString::fromUtf8("menuRecent_Files"));
        menuSaveAs = new QMenu(menu_File);
        menuSaveAs->setObjectName(QString::fromUtf8("menuSaveAs"));
        menu_Open = new QMenu(menu_File);
        menu_Open->setObjectName(QString::fromUtf8("menu_Open"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuDebugging = new QMenu(menuTools);
        menuDebugging->setObjectName(QString::fromUtf8("menuDebugging"));
        menuDualReturnMode = new QMenu(menuTools);
        menuDualReturnMode->setObjectName(QString::fromUtf8("menuDualReturnMode"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        vvMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(vvMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        vvMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(vvMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        vvMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        colorToolBar = new vvColorToolbar(vvMainWindow);
        colorToolBar->setObjectName(QString::fromUtf8("colorToolBar"));
        vvMainWindow->addToolBar(Qt::TopToolBarArea, colorToolBar);
        playbackToolbar = new QToolBar(vvMainWindow);
        playbackToolbar->setObjectName(QString::fromUtf8("playbackToolbar"));
        vvMainWindow->addToolBar(Qt::TopToolBarArea, playbackToolbar);
        viewSettings = new QToolBar(vvMainWindow);
        viewSettings->setObjectName(QString::fromUtf8("viewSettings"));
        vvMainWindow->addToolBar(Qt::TopToolBarArea, viewSettings);
        vvMainWindow->insertToolBarBreak(viewSettings);
        geolocationToolbar = new QToolBar(vvMainWindow);
        geolocationToolbar->setObjectName(QString::fromUtf8("geolocationToolbar"));
        vvMainWindow->addToolBar(Qt::TopToolBarArea, geolocationToolbar);
        colorMapEditorDock = new QDockWidget(vvMainWindow);
        colorMapEditorDock->setObjectName(QString::fromUtf8("colorMapEditorDock"));
        colorMapEditorPanel = new pqColorMapEditor();
        colorMapEditorPanel->setObjectName(QString::fromUtf8("colorMapEditorPanel"));
        colorMapEditorDock->setWidget(colorMapEditorPanel);
        vvMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), colorMapEditorDock);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_File->addAction(menu_Open->menuAction());
        menu_File->addAction(menuRecent_Files->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(menuSaveAs->menuAction());
        menu_File->addAction(actionExport_To_KiwiViewer);
        menu_File->addAction(actionSaveScreenshot);
        menu_File->addSeparator();
        menu_File->addAction(actionClose);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menuRecent_Files->addSeparator();
        menuRecent_Files->addAction(actionClear_Menu);
        menuSaveAs->addAction(actionSavePCAP);
        menuSaveAs->addAction(actionSaveCSV);
        menuSaveAs->addAction(actionSavePositionCSV);
        menu_Open->addAction(actionOpenPcap);
        menu_Open->addAction(actionOpen_Sensor_Stream);
        menu_Open->addSeparator();
        menu_Open->addAction(actionChoose_Calibration_File);
        menuTools->addAction(actionSpreadsheet);
        menuTools->addAction(actionMeasurement_Grid);
        menuTools->addAction(actionGrid_Properties);
        menuTools->addAction(actionLaserSelection);
        menuTools->addAction(menuDualReturnMode->menuAction());
        menuTools->addAction(actionChoose_Calibration_File);
        menuTools->addAction(actionCropReturns);
        menuTools->addSeparator();
        menuTools->addAction(actionPlay);
        menuTools->addAction(actionRecord);
        menuTools->addSeparator();
        menuTools->addAction(actionPython_Console);
        menuTools->addSeparator();
        menuTools->addAction(menuDebugging->menuAction());
        menuDebugging->addAction(actionNative_File_Dialogs);
        menuDualReturnMode->addAction(actionDualReturnModeDual);
        menuDualReturnMode->addAction(actionDualReturnDistanceNear);
        menuDualReturnMode->addAction(actionDualReturnDistanceFar);
        menuDualReturnMode->addAction(actionDualReturnIntensityHigh);
        menuDualReturnMode->addAction(actionDualReturnIntensityLow);
        menuHelp->addAction(actionAbout_VeloView);
        menuHelp->addSeparator();
        menuHelp->addAction(actionVeloViewUserGuide);
        menuHelp->addAction(actionVeloViewDeveloperGuide);
        toolBar->addAction(actionOpenPcap);
        toolBar->addAction(actionOpen_Sensor_Stream);
        toolBar->addAction(actionChoose_Calibration_File);
        toolBar->addAction(actionCropReturns);
        toolBar->addSeparator();
        toolBar->addAction(actionSelect_All_Points);
        toolBar->addAction(actionSpreadsheet);
        toolBar->addAction(actionOverheadView);
        toolBar->addAction(actionPython_Console);
        playbackToolbar->addAction(actionGo_To_Start);
        playbackToolbar->addAction(actionSeek_Backward);
        playbackToolbar->addAction(actionPlay);
        playbackToolbar->addAction(actionSeek_Forward);
        playbackToolbar->addAction(actionGo_To_End);
        playbackToolbar->addAction(actionLoop);
        playbackToolbar->addAction(actionRecord);
        viewSettings->addAction(actionReset_Camera);
        viewSettings->addAction(actionToggleProjection);
        viewSettings->addAction(actionMeasure);
        viewSettings->addAction(actionPlaneFit);
        viewSettings->addSeparator();
        viewSettings->addAction(actionSetViewXPlus);
        viewSettings->addAction(actionSetViewXMinus);
        viewSettings->addAction(actionSetViewYPlus);
        viewSettings->addAction(actionSetViewYMinus);
        viewSettings->addAction(actionSetViewZPlus);
        viewSettings->addAction(actionSetViewZMinus);

        retranslateUi(vvMainWindow);
        QObject::connect(actionE_xit, SIGNAL(triggered()), vvMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(vvMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *vvMainWindow)
    {
        vvMainWindow->setWindowTitle(QApplication::translate("vvMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("vvMainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionE_xit->setStatusTip(QApplication::translate("vvMainWindow", "Exit Application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionE_xit->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionOpenPcap->setText(QApplication::translate("vvMainWindow", "&Capture File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenPcap->setToolTip(QApplication::translate("vvMainWindow", "Open a Wireshark-format capture file with data collected from a Velodyne sensor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpenPcap->setStatusTip(QApplication::translate("vvMainWindow", "Open Data File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionOpenPcap->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSelect_Visible_Points->setText(QApplication::translate("vvMainWindow", "Select Visible Points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelect_Visible_Points->setToolTip(QApplication::translate("vvMainWindow", "Select Visible Points (s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSelect_All_Points->setText(QApplication::translate("vvMainWindow", "Select All Points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelect_All_Points->setToolTip(QApplication::translate("vvMainWindow", "Select All Points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSpreadsheet->setText(QApplication::translate("vvMainWindow", "Spreadsheet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSpreadsheet->setToolTip(QApplication::translate("vvMainWindow", "Spreadsheet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSpreadsheet->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionOpen_Sensor_Stream->setText(QApplication::translate("vvMainWindow", "Sensor &Stream", 0, QApplication::UnicodeUTF8));
        actionChoose_Calibration_File->setText(QApplication::translate("vvMainWindow", "Choose &Calibration File", 0, QApplication::UnicodeUTF8));
        actionSeek_Backward->setText(QApplication::translate("vvMainWindow", "Seek Backward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSeek_Backward->setToolTip(QApplication::translate("vvMainWindow", "Seek Backward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("vvMainWindow", "Play", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("vvMainWindow", "Play", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlay->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionSeek_Forward->setText(QApplication::translate("vvMainWindow", "Seek Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSeek_Forward->setToolTip(QApplication::translate("vvMainWindow", "Seek Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPause->setText(QApplication::translate("vvMainWindow", "Pause", 0, QApplication::UnicodeUTF8));
        actionRecord->setText(QApplication::translate("vvMainWindow", "Record", 0, QApplication::UnicodeUTF8));
        actionPython_Console->setText(QApplication::translate("vvMainWindow", "Python Console", 0, QApplication::UnicodeUTF8));
        actionPython_Console->setShortcut(QApplication::translate("vvMainWindow", "F8", 0, QApplication::UnicodeUTF8));
        actionReset_Camera->setText(QApplication::translate("vvMainWindow", "Reset Camera", 0, QApplication::UnicodeUTF8));
        actionReset_Camera->setShortcut(QApplication::translate("vvMainWindow", "R", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("vvMainWindow", "&Close Data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("vvMainWindow", "Close Data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClose->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionMeasurement_Grid->setText(QApplication::translate("vvMainWindow", "Measurement Grid", 0, QApplication::UnicodeUTF8));
        actionMeasurement_Grid->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionGo_To_Start->setText(QApplication::translate("vvMainWindow", "Go To Start", 0, QApplication::UnicodeUTF8));
        actionGo_To_End->setText(QApplication::translate("vvMainWindow", "Go To End", 0, QApplication::UnicodeUTF8));
        actionSaveScreenshot->setText(QApplication::translate("vvMainWindow", "Save &Screenshot", 0, QApplication::UnicodeUTF8));
        actionSaveCSV->setText(QApplication::translate("vvMainWindow", "Save &CSV", 0, QApplication::UnicodeUTF8));
        actionLoop->setText(QApplication::translate("vvMainWindow", "Loop", 0, QApplication::UnicodeUTF8));
        actionExport_To_KiwiViewer->setText(QApplication::translate("vvMainWindow", "Export To &KiwiViewer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport_To_KiwiViewer->setToolTip(QApplication::translate("vvMainWindow", "Export To KiwiViewer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGrid_Properties->setText(QApplication::translate("vvMainWindow", "Grid Properties", 0, QApplication::UnicodeUTF8));
        actionSavePCAP->setText(QApplication::translate("vvMainWindow", "Save PCAP", 0, QApplication::UnicodeUTF8));
        actionAbout_VeloView->setText(QApplication::translate("vvMainWindow", "About VeloView", 0, QApplication::UnicodeUTF8));
        actionVeloViewDeveloperGuide->setText(QApplication::translate("vvMainWindow", "VeloView Developer Guide", 0, QApplication::UnicodeUTF8));
        actionRecent_file1->setText(QApplication::translate("vvMainWindow", "recent_file1", 0, QApplication::UnicodeUTF8));
        actionRecent_file2->setText(QApplication::translate("vvMainWindow", "recent_file2", 0, QApplication::UnicodeUTF8));
        actionRecent_file3->setText(QApplication::translate("vvMainWindow", "recent_file3", 0, QApplication::UnicodeUTF8));
        actionRecent_file4->setText(QApplication::translate("vvMainWindow", "recent_file4", 0, QApplication::UnicodeUTF8));
        actionRecent_file5->setText(QApplication::translate("vvMainWindow", "recent_file5", 0, QApplication::UnicodeUTF8));
        actionClear_Menu->setText(QApplication::translate("vvMainWindow", "Clear Menu", 0, QApplication::UnicodeUTF8));
        actionNative_File_Dialogs->setText(QApplication::translate("vvMainWindow", "Native File Dialogs", 0, QApplication::UnicodeUTF8));
        actionToggleProjection->setText(QApplication::translate("vvMainWindow", "toggleProjection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleProjection->setToolTip(QApplication::translate("vvMainWindow", "Toggle between projective and orthogonal view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetViewXPlus->setText(QApplication::translate("vvMainWindow", "setViewXPlus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewXPlus->setToolTip(QApplication::translate("vvMainWindow", "Set view direction to +X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetViewXMinus->setText(QApplication::translate("vvMainWindow", "setViewXMinus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewXMinus->setToolTip(QApplication::translate("vvMainWindow", "Set view direction to -X", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetViewYPlus->setText(QApplication::translate("vvMainWindow", "setViewYPlus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewYPlus->setToolTip(QApplication::translate("vvMainWindow", "Set view direction to +Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetViewYMinus->setText(QApplication::translate("vvMainWindow", "setViewYMinus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewYMinus->setToolTip(QApplication::translate("vvMainWindow", "Set view direction to -Y", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetViewZPlus->setText(QApplication::translate("vvMainWindow", "setViewZPlus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewZPlus->setToolTip(QApplication::translate("vvMainWindow", "Set view direction to +Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetViewZMinus->setText(QApplication::translate("vvMainWindow", "setViewZMinus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetViewZMinus->setToolTip(QApplication::translate("vvMainWindow", "Set view direction to -Z", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionVeloViewUserGuide->setText(QApplication::translate("vvMainWindow", "VeloView User Guide", 0, QApplication::UnicodeUTF8));
        actionVeloViewUserGuide->setShortcut(QApplication::translate("vvMainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionMeasure->setText(QApplication::translate("vvMainWindow", "Measure", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMeasure->setToolTip(QApplication::translate("vvMainWindow", "Measure the distance between two points: Press Control key and keep pressed left button of the mouse two place the two points of the ruler. To use this tool, the orthogonal projection view is obligatory.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOverheadView->setText(QApplication::translate("vvMainWindow", "OverheadView", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOverheadView->setToolTip(QApplication::translate("vvMainWindow", "Show overhead view of position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlaneFit->setText(QApplication::translate("vvMainWindow", "Plane Fit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlaneFit->setToolTip(QApplication::translate("vvMainWindow", "Plane Fit to selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSavePositionCSV->setText(QApplication::translate("vvMainWindow", "Save Position CSV", 0, QApplication::UnicodeUTF8));
        actionGPSApply->setText(QApplication::translate("vvMainWindow", "GPSApply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGPSApply->setToolTip(QApplication::translate("vvMainWindow", "Apply geolocation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbsolute->setText(QApplication::translate("vvMainWindow", "absolute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbsolute->setToolTip(QApplication::translate("vvMainWindow", "Geolocation in absolute coordinates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLaserSelection->setText(QApplication::translate("vvMainWindow", "Laser Selection", 0, QApplication::UnicodeUTF8));
        actionSaveLAS->setText(QApplication::translate("vvMainWindow", "Save &LAS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveLAS->setToolTip(QApplication::translate("vvMainWindow", "Save to ASPRS LAS format", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpenApplanix->setText(QApplication::translate("vvMainWindow", "Capture File with External &Geoposition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenApplanix->setToolTip(QApplication::translate("vvMainWindow", "Open a text file with POSPAC text-format position data collected from an Applanix sensor, and Wireshark-format capture file with data collected from a Velodyne sensor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCropReturns->setText(QApplication::translate("vvMainWindow", "Crop Returns...", 0, QApplication::UnicodeUTF8));
        actionDualReturnModeDual->setText(QApplication::translate("vvMainWindow", "&Dual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDualReturnModeDual->setToolTip(QApplication::translate("vvMainWindow", "Show both returns of a dual return", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDualReturnDistanceNear->setText(QApplication::translate("vvMainWindow", "&Near Distance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDualReturnDistanceNear->setToolTip(QApplication::translate("vvMainWindow", "Show nearer distance return of a dual return", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDualReturnDistanceFar->setText(QApplication::translate("vvMainWindow", "&Far Distance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDualReturnDistanceFar->setToolTip(QApplication::translate("vvMainWindow", "Show farther distance return of a dual return", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDualReturnIntensityHigh->setText(QApplication::translate("vvMainWindow", "&High Intensity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDualReturnIntensityHigh->setToolTip(QApplication::translate("vvMainWindow", "Show higher intensity return of a dual return", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDualReturnIntensityLow->setText(QApplication::translate("vvMainWindow", "&Low Intensity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDualReturnIntensityLow->setToolTip(QApplication::translate("vvMainWindow", "Show lower intensity return of a dual return", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menu_File->setTitle(QApplication::translate("vvMainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuRecent_Files->setTitle(QApplication::translate("vvMainWindow", "&Recent Files", 0, QApplication::UnicodeUTF8));
        menuSaveAs->setTitle(QApplication::translate("vvMainWindow", "Save &As", 0, QApplication::UnicodeUTF8));
        menu_Open->setTitle(QApplication::translate("vvMainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("vvMainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuDebugging->setTitle(QApplication::translate("vvMainWindow", "Debugging", 0, QApplication::UnicodeUTF8));
        menuDualReturnMode->setTitle(QApplication::translate("vvMainWindow", "&Dual Return Mode", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("vvMainWindow", "Help", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("vvMainWindow", "Basic Controls", 0, QApplication::UnicodeUTF8));
        colorToolBar->setWindowTitle(QApplication::translate("vvMainWindow", "Color Controls", 0, QApplication::UnicodeUTF8));
        playbackToolbar->setWindowTitle(QApplication::translate("vvMainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        viewSettings->setWindowTitle(QApplication::translate("vvMainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        geolocationToolbar->setWindowTitle(QApplication::translate("vvMainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        colorMapEditorDock->setWindowTitle(QApplication::translate("vvMainWindow", "Color Map Editor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vvMainWindow: public Ui_vvMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVMAINWINDOW_H
