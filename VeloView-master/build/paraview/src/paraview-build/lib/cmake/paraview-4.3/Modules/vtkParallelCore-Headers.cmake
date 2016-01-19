set(vtkParallelCore_HEADERS_LOADED 1)
set(vtkParallelCore_HEADERS "vtkCommunicator;vtkDummyCommunicator;vtkDummyController;vtkMultiProcessController;vtkProcess;vtkProcessGroup;vtkSocketCommunicator;vtkSocketController;vtkSubCommunicator;vtkSubGroup;vtkFieldDataSerializer")

foreach(header ${vtkParallelCore_HEADERS})
  set(vtkParallelCore_HEADER_${header}_EXISTS 1)
endforeach()

set(vtkParallelCore_HEADER_vtkCommunicator_ABSTRACT 1)
set(vtkParallelCore_HEADER_vtkMultiProcessController_ABSTRACT 1)
set(vtkParallelCore_HEADER_vtkProcess_ABSTRACT 1)



