// python wrapper for vtkVersionMacros
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkVersionMacros.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVersionMacros(PyObject *, const char *); }
void PyVTKAddFile_vtkVersionMacros(
  PyObject *dict, const char *)
{
  PyObject *o;
  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_MAJOR_VERSION", 6 },
        { "VTK_MINOR_VERSION", 2 },
        { "VTK_BUILD_VERSION", 0 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  o = PyString_FromString((char *)("6.2.0"));
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_VERSION", o);
    Py_DECREF(o);
    }
}

