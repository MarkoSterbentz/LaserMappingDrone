// ***************** DO NOT EDIT ***********************************
// This is a generated file.
// It will be replaced next time you rebuild.
/*=========================================================================

   Program: ParaView
  Module:    branded_paraview_main.cxx.in

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
// ***************** DO NOT EDIT ***********************************
// This is a generated file.
// It will be replaced next time you rebuild.

#include <QApplication>
#include "pqparaviewInitializer.h"
#include "vtkPVConfig.h"
// See Applications/ParaView/CMakeLists.txt for why this is necessary.
#define SUPPORT_STATIC_PLUGINS
#ifdef SUPPORT_STATIC_PLUGINS
#ifndef BUILD_SHARED_LIBS
#include "pvStaticPluginsInit.h"
#endif
#endif

#ifdef Q_WS_X11
#include <QPlastiqueStyle>
#endif

#include <stdlib.h>
#include <clocale>

namespace
{
// Return true when \a vname exists in the environment (empty or not).
static bool checkenv(const char* vname)
{
#if !defined(_WIN32) || defined(__CYGWIN__)
  return getenv(vname) ? true : false;
#else
  char* buf; //allocated or assigned by _dupenv_s
  const bool valid = (_dupenv_s(&buf, NULL, vname) == 0) && (buf != NULL);
  free(buf); //perfectly valid to free a NULL pointer
  return valid;
#endif
}
}

int main(int argc, char* argv[])
{
#ifdef Q_WS_X11
  // Using motif style gives us test failures (and its ugly).
  // Using cleanlooks style gives us errors when using valgrind (Trolltech's bug #179200)
  // let's just use plastique for now
  QApplication::setStyle(new QPlastiqueStyle);
#endif

  // When playing tests, disable all effects.
  if (checkenv("DART_TEST_FROM_DART") ||
      checkenv("DASHBOARD_TEST_FROM_CTEST"))
    {
    QApplication::setDesktopSettingsAware(false);
    QApplication::setEffectEnabled(Qt::UI_AnimateMenu, false);
    QApplication::setEffectEnabled(Qt::UI_FadeMenu, false);
    QApplication::setEffectEnabled(Qt::UI_AnimateCombo, false);
    QApplication::setEffectEnabled(Qt::UI_AnimateTooltip, false);
    QApplication::setEffectEnabled(Qt::UI_FadeTooltip, false);
    }

  QApplication::setApplicationName("ParaView");
  QApplication::setApplicationVersion("4.3.1");
  QApplication::setOrganizationName("ParaView");

#ifdef SUPPORT_STATIC_PLUGINS
#ifndef BUILD_SHARED_LIBS
  paraview_static_plugins_init();
#endif
#endif

  QApplication qtapp(argc, argv);
  setlocale(LC_NUMERIC,"C");
  pqparaviewInitializer pvInitializer;
  pqparaviewInitializer::Status status = pvInitializer.Initialize(argc, argv);
  switch (status)
    {
    case pqparaviewInitializer::ExitSuccess:
      return 0;
    case pqparaviewInitializer::ExitFailure:
      return 1;
    case pqparaviewInitializer::RunApplication:
      return qtapp.exec();
    }

}
// ***************** DO NOT EDIT ***********************************
