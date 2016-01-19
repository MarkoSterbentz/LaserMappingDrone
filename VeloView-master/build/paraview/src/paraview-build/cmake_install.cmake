# Install script for directory: /home/marko/research/VeloView-master/build/paraview/src/paraview

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/paraview-4.3" TYPE DIRECTORY FILES "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/www" USE_SOURCE_PERMISSIONS)
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/libvtkPVPythonCatalystPython27D-pv4.3.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/libvtkPVPythonCatalystPython27D-pv4.3.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE SHARED_LIBRARY FILES
    "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/libvtkPVPythonCatalystPython27D-pv4.3.so.1"
    "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/libvtkPVPythonCatalystPython27D-pv4.3.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/libvtkPVPythonCatalystPython27D-pv4.3.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/libvtkPVPythonCatalystPython27D-pv4.3.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_REMOVE
           FILE "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk" TYPE MODULE FILES "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/vtkPVPythonCatalystPython.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3/site-packages/vtk/vtkPVPythonCatalystPython.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Runtime")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/paraview-4.3" TYPE FILE FILES "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/bin/.plugins")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/Python/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/PythonInitializer/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/CoProcessing/PythonCatalyst/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Plugins/PythonQtPlugin/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Plugins/StreamingParticles/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Plugins/RGBZView/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Plugins/CatalystScriptGenerator/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/CommandLineExecutables/cmake_install.cmake")
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Applications/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
