/* #undef PARAVIEW_USE_UNIFIED_BINDINGS */
/* #undef NO_PYTHON_BINDINGS_AVAILABLE */
#ifdef NO_PYTHON_BINDINGS_AVAILABLE
#undef PARAVIEW_USE_UNIFIED_BINDINGS
#endif
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
#include "vtkPython.h"
#include "vtkPythonInterpreter.h"
#endif

#include "vtkClientServerInterpreter.h"

#ifndef PARAVIEW_BUILD_SHARED_LIBS
#define PARAVIEW_BUILD_SHARED_LIBS
#endif
#if defined(PARAVIEW_BUILD_SHARED_LIBS) && defined(_WIN32)
# define VTK_WRAP_CS_EXPORT __declspec(dllexport)
#else
# define VTK_WRAP_CS_EXPORT
#endif

#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
extern "C" void real_initvtkIOImagePython(const char *modulename);

void initvtkIOImagePython()
{
  static const char modulename[] = "vtkIOImagePython";
  real_initvtkIOImagePython(modulename);
}
#endif

extern void vtkBMPReader_Init(vtkClientServerInterpreter* csi);
extern void vtkBMPWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkDEMReader_Init(vtkClientServerInterpreter* csi);
extern void vtkDICOMImageReader_Init(vtkClientServerInterpreter* csi);
extern void vtkGESignaReader_Init(vtkClientServerInterpreter* csi);
extern void vtkImageExport_Init(vtkClientServerInterpreter* csi);
extern void vtkImageImport_Init(vtkClientServerInterpreter* csi);
extern void vtkImageImportExecutive_Init(vtkClientServerInterpreter* csi);
extern void vtkImageReader_Init(vtkClientServerInterpreter* csi);
extern void vtkImageReader2_Init(vtkClientServerInterpreter* csi);
extern void vtkImageReader2Collection_Init(vtkClientServerInterpreter* csi);
extern void vtkImageReader2Factory_Init(vtkClientServerInterpreter* csi);
extern void vtkImageWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkJPEGReader_Init(vtkClientServerInterpreter* csi);
extern void vtkJPEGWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkJSONImageWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkMedicalImageProperties_Init(vtkClientServerInterpreter* csi);
extern void vtkMedicalImageReader2_Init(vtkClientServerInterpreter* csi);
extern void vtkMetaImageReader_Init(vtkClientServerInterpreter* csi);
extern void vtkMetaImageWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkNIFTIImageHeader_Init(vtkClientServerInterpreter* csi);
extern void vtkNIFTIImageReader_Init(vtkClientServerInterpreter* csi);
extern void vtkNIFTIImageWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkNrrdReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPNGReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPNGWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPNMReader_Init(vtkClientServerInterpreter* csi);
extern void vtkPNMWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkPostScriptWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkSLCReader_Init(vtkClientServerInterpreter* csi);
extern void vtkTIFFReader_Init(vtkClientServerInterpreter* csi);
extern void vtkTIFFWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkVolume16Reader_Init(vtkClientServerInterpreter* csi);
extern void vtkVolumeReader_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOImageCS_Initialize(
  vtkClientServerInterpreter *csi)
{
#ifdef PARAVIEW_USE_UNIFIED_BINDINGS
  if (!vtkPythonInterpreter::IsInitialized())
    {
    vtkPythonInterpreter::Initialize();
    }

  static bool initialized = false;

  if (!initialized)
    {
    initialized = true;
    PyImport_AppendInittab("vtkIOImagePython", initvtkIOImagePython);
    }

  csi->Load("vtkIOImage");
#endif

  vtkBMPReader_Init(csi);
  vtkBMPWriter_Init(csi);
  vtkDEMReader_Init(csi);
  vtkDICOMImageReader_Init(csi);
  vtkGESignaReader_Init(csi);
  vtkImageExport_Init(csi);
  vtkImageImport_Init(csi);
  vtkImageImportExecutive_Init(csi);
  vtkImageReader_Init(csi);
  vtkImageReader2_Init(csi);
  vtkImageReader2Collection_Init(csi);
  vtkImageReader2Factory_Init(csi);
  vtkImageWriter_Init(csi);
  vtkJPEGReader_Init(csi);
  vtkJPEGWriter_Init(csi);
  vtkJSONImageWriter_Init(csi);
  vtkMedicalImageProperties_Init(csi);
  vtkMedicalImageReader2_Init(csi);
  vtkMetaImageReader_Init(csi);
  vtkMetaImageWriter_Init(csi);
  vtkNIFTIImageHeader_Init(csi);
  vtkNIFTIImageReader_Init(csi);
  vtkNIFTIImageWriter_Init(csi);
  vtkNrrdReader_Init(csi);
  vtkPNGReader_Init(csi);
  vtkPNGWriter_Init(csi);
  vtkPNMReader_Init(csi);
  vtkPNMWriter_Init(csi);
  vtkPostScriptWriter_Init(csi);
  vtkSLCReader_Init(csi);
  vtkTIFFReader_Init(csi);
  vtkTIFFWriter_Init(csi);
  vtkVolume16Reader_Init(csi);
  vtkVolumeReader_Init(csi);

}
