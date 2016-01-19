// ***************** DO NOT EDIT ***********************************
// This is a generated file. 
// It will be replaced next time you rebuild.
/*=========================================================================

   Program: ParaView
  Module:    branded_paraview_initializer.cxx.in

   Copyright (c) 2005-2008 Sandia Corporation, Kitware Inc.
   All rights reserved.

   ParaView is a free software; you can redistribute it and/or modify it
   under the terms of the ParaView license version 1.2. 

   See License_v1.2.txt for the full ParaView license.
   A copy of this license can be obtained by contacting
   Kitware Inc.
   28 Corporate Drive
   Clifton Park, NY 12065
   USA

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=========================================================================*/
#include "pqVeloViewInitializer.h"

#include <QApplication>
#include <QBitmap>
#include <QDir>
#include <QSplashScreen>
#include <QtDebug>

#include "vvMainWindow.h"
#include "pqOptions.h"
#include "pqPVApplicationCore.h"
#include "pqSettings.h"
#include "vtkInitializationHelper.h"
#include "vtkPVPluginTracker.h"

#ifdef Q_WS_X11
#include <QPlastiqueStyle>
#endif

#include "vtkPVConfig.h"

//-----------------------------------------------------------------------------
pqVeloViewInitializer::pqVeloViewInitializer()
{
  this->PVApp = NULL;
  this->MainWindow = NULL;
  this->Splash = NULL;
}

//-----------------------------------------------------------------------------
pqVeloViewInitializer::~pqVeloViewInitializer()
{
  delete this->Splash;
  this->Splash = NULL;

  delete this->MainWindow;
  this->MainWindow = NULL;

  delete this->PVApp;
  this->PVApp = 0;
}
//-----------------------------------------------------------------------------
pqVeloViewInitializer::Status pqVeloViewInitializer::Initialize(int argc, char* argv[])
{
  this->PVApp = new pqPVApplicationCore (argc, argv);

  // Attach custom event filter
  QApplication::instance()->installEventFilter(this->PVApp);

  if (this->PVApp->getOptions()->GetUnknownArgument() ||
      this->PVApp->getOptions()->GetErrorMessage())
    {
    return ExitFailure;
    }

  if (this->PVApp->getOptions()->GetHelpSelected() ||
      this->PVApp->getOptions()->GetTellVersion())
    {
    return ExitSuccess;
    }

#ifndef BUILD_SHARED_LIBS
  Q_INIT_RESOURCE(VeloView_generated);
  Q_INIT_RESOURCE(VeloView_configuration);

#endif

  pqSettings *settings = this->PVApp->settings();
  bool show_splash = false;
  if (!this->PVApp->getOptions()->GetDisableRegistry())
    {
    show_splash = settings->value(
      "GeneralSettings.ShowSplashScreen", true).toBool();
    }

  if(show_splash)
    {
    // Create and show the splash screen as the main window is being created.
    QPixmap pixmap(":/VeloView/SplashImage.img");
    this->Splash = new QSplashScreen(pixmap, Qt::WindowStaysOnTopHint);
    this->Splash->setMask(pixmap.createMaskFromColor(QColor(Qt::transparent)));
    this->Splash->show();
    }

  // Not sure why this is needed. Andy added this ages ago with comment saying
  // needed for Mac apps. Need to check that it's indeed still required.
  QDir dir(QApplication::applicationDirPath());
  dir.cdUp();
  dir.cd("Plugins");
  QApplication::addLibraryPath(dir.absolutePath());

  // Create main window.
  this->MainWindow = new vvMainWindow();

  // Load required application plugins.
  QString plugin_string = "";
  QStringList plugin_list = plugin_string.split(';',QString::SkipEmptyParts);
  QString plugin_xml = "<Plugins>";
  foreach (const QString plugin_name, plugin_list)
    {
    plugin_xml.append(
      QString("<Plugin name=\"%1\" auto_load=\"1\" />\n").arg(plugin_name));
    }
  plugin_xml.append("</Plugins>\n");
  vtkPVPluginTracker::GetInstance()->LoadPluginConfigurationXMLFromString(
    plugin_xml.toLatin1().data());

  // Load optional plugins.
  plugin_string = "";
  plugin_list = plugin_string.split(';',QString::SkipEmptyParts);
  plugin_xml = "<Plugins>";
  foreach (const QString plugin_name, plugin_list)
    {
    plugin_xml.append(
      QString("<Plugin name=\"%1\" auto_load=\"1\" />\n").arg(plugin_name));
    }
  plugin_xml.append("</Plugins>\n");
  vtkPVPluginTracker::GetInstance()->LoadPluginConfigurationXMLFromString(
    plugin_xml.toLatin1().data());

#if 0
  // Load configuration xmls after all components have been instantiated.
  // This configuration part is something that needs to be cleaned up, I haven't
  // given this too much thought.
  QDir dir2(":/VeloView/Configuration");
  QStringList files = dir2.entryList(QDir::Files);
  foreach (QString file, files)
    {
    this->PVApp->loadConfiguration(QString(":/VeloView/Configuration/") + file);
    }
#endif
  this->MainWindow->setWindowTitle("VeloView");

  // We used to call processEvents() here. We removed it, since that results in
  // timers (esp. pqCommandLineOptionsBehavior::playTests(), or
  // pqServer::processServerNotification()) timers could timeout here and that
  // causes test failures. Any case, the UI will update when the main event loop
  // resumes hence these processEvents are fairly useless.
  this->MainWindow->show();
  if (show_splash)
    {
    this->Splash->finish(this->MainWindow);
    }
  return RunApplication;
}
// ***************** DO NOT EDIT ***********************************
