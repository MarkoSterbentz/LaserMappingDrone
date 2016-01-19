/*=========================================================================

Program:   ParaView
Module:    paraview-config.cxx

Copyright (c) Kitware, Inc.
All rights reserved.
See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkPVConfig.h" // Required to get build options for paraview
#include "vtkModules.h"

#include <vtksys/SystemTools.hxx>

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

#include <cstdlib>

#define die(X)                   \
  do                             \
    {                            \
    std::cerr << X << std::endl; \
    return EXIT_FAILURE;         \
    } while (false)

int main(int argc, char* argv[])
{
  const char* flagUsage = "[--libs [--python] <target...>|--include|--list|--python-lib]";

  if (argc < 2)
    {
    die("Usage: " << argv[0] << " " << flagUsage);
    }

  typedef std::string vtkModuleName;
  typedef std::vector<vtkModuleName> vtkModuleNames;
  typedef std::map<vtkModuleName, vtkModuleNames> vtkModuleDependencyMap;
  typedef std::set<vtkModuleName> vtkPythonModules;
  vtkModuleDependencyMap moduleMapping;
  vtkModuleDependencyMap moduleLibraries;
  vtkPythonModules modulesWithPython;
  for (const vtkModuleDependency* module = vtkModules; module->ModuleName; ++module)
    {
    vtkModuleNames& depends = moduleMapping[module->ModuleName];
    for (const char** depend = module->Depends; *depend; ++depend)
      {
      depends.push_back(*depend);
      }
    vtkModuleNames& libraries = moduleLibraries[module->ModuleName];
    for (const char** library = module->LibraryNames; *library; ++library)
      {
      libraries.push_back(*library);
      }
    if (module->Python)
      {
      modulesWithPython.insert(module->ModuleName);
      }
    }

  const std::string flag = argv[1];
  if (flag == "--libs")
    {
    if (argc < 3)
      {
      die("Error: `--libs` requires at least one module name");
      }

    const std::string libflag = argv[2];
    const bool usePython = (libflag == "--python");

    std::set<vtkModuleName> includedModules;
    vtkModuleNames neededModules;
    for (int arg = 2 + usePython; arg < argc; ++arg)
      {
      const std::string target = argv[arg];

      const vtkModuleDependencyMap::const_iterator i = moduleMapping.find(target);
      if (i == moduleMapping.end())
        {
        die("Error: No such module: " << target);
        }

      neededModules.push_back(target);
      includedModules.insert(target);
      }

    size_t idx = 0;
    while (idx < neededModules.size())
      {
      const vtkModuleNames& depends = moduleMapping[neededModules[idx]];
      for (vtkModuleNames::const_iterator i = depends.begin(); i != depends.end(); ++i)
        {
        const vtkModuleName& dependency = *i;
        if (!includedModules.count(dependency))
          {
          neededModules.push_back(dependency);
          includedModules.insert(dependency);
          }
        }
      ++idx;
      }

#ifdef BUILD_SHARED_LIBS
    std::cout << " -L/home/marko/research/VeloView-master/build/install/lib/paraview-4.3";
#else
    std::cout << " -L/home/marko/research/VeloView-master/build/install/lib/paraview-4.3";
#endif
    std::set<vtkModuleName> librariesLinked;
    for (vtkModuleNames::const_iterator i = neededModules.begin(); i != neededModules.end(); ++i)
      {
      const vtkModuleName& module = *i;
      if (usePython && modulesWithPython.count(module))
        {
        std::cout << " -l" << module << "Python27D-pv" PARAVIEW_VERSION;
        }
      const vtkModuleNames& libraries = moduleLibraries[module];
      for (vtkModuleNames::const_iterator j = libraries.begin(); j != libraries.end(); ++j)
        {
        if (!librariesLinked.count(*j))
          {
          if (vtksys::SystemTools::FileIsFullPath(j->c_str()))
            {
            std::string libraryName = vtksys::SystemTools::GetFilenameWithoutLastExtension(*j);
            if (libraryName.substr(0, 3) == "lib")
              {
              libraryName = libraryName.substr(3);
              }
            std::cout << " -L" << vtksys::SystemTools::GetFilenamePath(*j)
                      << " -l" << libraryName;
            }
          else
            {
            std::cout << " -l" << *j;
            }
          librariesLinked.insert(*j);
          }
        }
      }
      std::cout << std::endl;
    }
  else if (flag == "--include")
    {
    std::cout << " -I/home/marko/research/VeloView-master/build/install/include/paraview-4.3" << std::endl;
    }
  else if (flag == "--list")
    {
    for (vtkModuleDependencyMap::const_iterator i = moduleMapping.begin(); i != moduleMapping.end(); ++i)
      {
      std::cout << i->first << std::endl;
      }
    }
  else if (flag == "--python-lib")
    {
    std::cout << " -l/usr/lib/x86_64-linux-gnu/libpython2.7.so" << std::endl;
    }
  else
    {
    die("Usage: " << argv[0] << " " << flagUsage);
    }

  return EXIT_SUCCESS;
}
