
if(NOT QtTesting_EXPORTS_INCLUDED)
  include("/home/marko/research/VeloView-master/build/paraview/src/paraview-build/ThirdParty/QtTesting/vtkqttesting/QtTestingExports.cmake")
  set(QtTesting_EXPORTS_INCLUDED 1)
endif()

set(QtTesting_INCLUDE_DIRS "/home/marko/research/VeloView-master/build/paraview/src/paraview/ThirdParty/QtTesting/vtkqttesting;/home/marko/research/VeloView-master/build/paraview/src/paraview-build/ThirdParty/QtTesting/vtkqttesting")
set(QtTesting_LIBRARY_DIR "/home/marko/research/VeloView-master/build/paraview/src/paraview-build/ThirdParty/QtTesting/vtkqttesting")
set(QtTesting_LIBRARIES QtTesting)
include("${CMAKE_CURRENT_LIST_DIR}/QtTestingExports.cmake")
