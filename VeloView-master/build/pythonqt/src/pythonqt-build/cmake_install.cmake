# Install script for directory: /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/marko/research/VeloView-master/build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build/libPythonQt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/PythonQt" TYPE FILE FILES
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtClassInfo.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtClassWrapper.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtConversion.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtCppWrapperFactory.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtDoc.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQt.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtImporter.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtImportFileInterface.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtInstanceWrapper.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtMethodInfo.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtMisc.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtObjectPtr.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtQFileImporter.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtSignalReceiver.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtSlot.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtSignal.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtStdDecorators.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtStdIn.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtStdOut.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtSystem.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtVariants.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/src/PythonQtPythonInclude.h"
    "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt/generated_cpp/PythonQt_QtBindings.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
