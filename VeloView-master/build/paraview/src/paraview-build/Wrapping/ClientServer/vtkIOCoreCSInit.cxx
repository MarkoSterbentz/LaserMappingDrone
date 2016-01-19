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
extern "C" void real_initvtkIOCorePython(const char *modulename);

void initvtkIOCorePython()
{
  static const char modulename[] = "vtkIOCorePython";
  real_initvtkIOCorePython(modulename);
}
#endif

extern void vtkAbstractParticleWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayReader_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkASCIITextCodec_Init(vtkClientServerInterpreter* csi);
extern void vtkBase64InputStream_Init(vtkClientServerInterpreter* csi);
extern void vtkBase64OutputStream_Init(vtkClientServerInterpreter* csi);
extern void vtkBase64Utilities_Init(vtkClientServerInterpreter* csi);
extern void vtkDataCompressor_Init(vtkClientServerInterpreter* csi);
extern void vtkDelimitedTextWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkGlobFileNames_Init(vtkClientServerInterpreter* csi);
extern void vtkInputStream_Init(vtkClientServerInterpreter* csi);
extern void vtkJavaScriptDataWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkOutputStream_Init(vtkClientServerInterpreter* csi);
extern void vtkSortFileNames_Init(vtkClientServerInterpreter* csi);
extern void vtkTextCodec_Init(vtkClientServerInterpreter* csi);
extern void vtkTextCodecFactory_Init(vtkClientServerInterpreter* csi);
extern void vtkUTF16TextCodec_Init(vtkClientServerInterpreter* csi);
extern void vtkUTF8TextCodec_Init(vtkClientServerInterpreter* csi);
extern void vtkWriter_Init(vtkClientServerInterpreter* csi);
extern void vtkZLibDataCompressor_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayDataReader_Init(vtkClientServerInterpreter* csi);
extern void vtkArrayDataWriter_Init(vtkClientServerInterpreter* csi);


extern "C" void VTK_WRAP_CS_EXPORT vtkIOCoreCS_Initialize(
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
    PyImport_AppendInittab("vtkIOCorePython", initvtkIOCorePython);
    }

  csi->Load("vtkIOCore");
#endif

  vtkAbstractParticleWriter_Init(csi);
  vtkArrayReader_Init(csi);
  vtkArrayWriter_Init(csi);
  vtkASCIITextCodec_Init(csi);
  vtkBase64InputStream_Init(csi);
  vtkBase64OutputStream_Init(csi);
  vtkBase64Utilities_Init(csi);
  vtkDataCompressor_Init(csi);
  vtkDelimitedTextWriter_Init(csi);
  vtkGlobFileNames_Init(csi);
  vtkInputStream_Init(csi);
  vtkJavaScriptDataWriter_Init(csi);
  vtkOutputStream_Init(csi);
  vtkSortFileNames_Init(csi);
  vtkTextCodec_Init(csi);
  vtkTextCodecFactory_Init(csi);
  vtkUTF16TextCodec_Init(csi);
  vtkUTF8TextCodec_Init(csi);
  vtkWriter_Init(csi);
  vtkZLibDataCompressor_Init(csi);
  vtkArrayDataReader_Init(csi);
  vtkArrayDataWriter_Init(csi);

}
