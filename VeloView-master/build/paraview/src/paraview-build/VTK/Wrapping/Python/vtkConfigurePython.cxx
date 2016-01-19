// python wrapper for vtkConfigure
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkConfigure.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkConfigure(PyObject *, const char *); }
void PyVTKAddFile_vtkConfigure(
  PyObject *dict, const char *)
{
  PyObject *o;
  for (int c = 0; c < 11; c++)
    {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_MAX_THREADS", 64 },
        { "VTK_SIZEOF_CHAR", 1 },
        { "VTK_SIZEOF_SHORT", 2 },
        { "VTK_SIZEOF_INT", 4 },
        { "VTK_SIZEOF_LONG", 8 },
        { "VTK_SIZEOF_FLOAT", 4 },
        { "VTK_SIZEOF_DOUBLE", 8 },
        { "VTK_SIZEOF_VOID_P", 8 },
        { "VTK_SIZEOF_LONG_LONG", 8 },
        { "VTK_TYPE_CHAR_IS_SIGNED", 1 },
        { "VTK_STREAM_EOF_SEVERITY", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  o = PyString_FromString((char *)("/usr/bin/c++"));
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_CXX_COMPILER", o);
    Py_DECREF(o);
    }
}

