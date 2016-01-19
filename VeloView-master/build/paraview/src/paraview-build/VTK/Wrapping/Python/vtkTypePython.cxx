// python wrapper for vtkType
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkType.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkType(PyObject *, const char *); }
void PyVTKAddFile_vtkType(
  PyObject *dict, const char *)
{
  PyObject *o;
  for (int c = 0; c < 62; c++)
    {
    static const struct { const char *name; int value; }
      constants[62] = {
        { "VTK_VOID", 0 },
        { "VTK_BIT", 1 },
        { "VTK_CHAR", 2 },
        { "VTK_SIGNED_CHAR", 15 },
        { "VTK_UNSIGNED_CHAR", 3 },
        { "VTK_SHORT", 4 },
        { "VTK_UNSIGNED_SHORT", 5 },
        { "VTK_INT", 6 },
        { "VTK_UNSIGNED_INT", 7 },
        { "VTK_LONG", 8 },
        { "VTK_UNSIGNED_LONG", 9 },
        { "VTK_FLOAT", 10 },
        { "VTK_DOUBLE", 11 },
        { "VTK_ID_TYPE", 12 },
        { "VTK_STRING", 13 },
        { "VTK_OPAQUE", 14 },
        { "VTK_LONG_LONG", 16 },
        { "VTK_UNSIGNED_LONG_LONG", 17 },
        { "VTK___INT64", 18 },
        { "VTK_UNSIGNED___INT64", 19 },
        { "VTK_VARIANT", 20 },
        { "VTK_OBJECT", 21 },
        { "VTK_UNICODE_STRING", 22 },
        { "VTK_POLY_DATA", 0 },
        { "VTK_STRUCTURED_POINTS", 1 },
        { "VTK_STRUCTURED_GRID", 2 },
        { "VTK_RECTILINEAR_GRID", 3 },
        { "VTK_UNSTRUCTURED_GRID", 4 },
        { "VTK_PIECEWISE_FUNCTION", 5 },
        { "VTK_IMAGE_DATA", 6 },
        { "VTK_DATA_OBJECT", 7 },
        { "VTK_DATA_SET", 8 },
        { "VTK_POINT_SET", 9 },
        { "VTK_UNIFORM_GRID", 10 },
        { "VTK_COMPOSITE_DATA_SET", 11 },
        { "VTK_MULTIGROUP_DATA_SET", 12 },
        { "VTK_MULTIBLOCK_DATA_SET", 13 },
        { "VTK_HIERARCHICAL_DATA_SET", 14 },
        { "VTK_HIERARCHICAL_BOX_DATA_SET", 15 },
        { "VTK_GENERIC_DATA_SET", 16 },
        { "VTK_HYPER_OCTREE", 17 },
        { "VTK_TEMPORAL_DATA_SET", 18 },
        { "VTK_TABLE", 19 },
        { "VTK_GRAPH", 20 },
        { "VTK_TREE", 21 },
        { "VTK_SELECTION", 22 },
        { "VTK_DIRECTED_GRAPH", 23 },
        { "VTK_UNDIRECTED_GRAPH", 24 },
        { "VTK_MULTIPIECE_DATA_SET", 25 },
        { "VTK_DIRECTED_ACYCLIC_GRAPH", 26 },
        { "VTK_ARRAY_DATA", 27 },
        { "VTK_REEB_GRAPH", 28 },
        { "VTK_UNIFORM_GRID_AMR", 29 },
        { "VTK_NON_OVERLAPPING_AMR", 30 },
        { "VTK_OVERLAPPING_AMR", 31 },
        { "VTK_HYPER_TREE_GRID", 32 },
        { "VTK_MOLECULE", 33 },
        { "VTK_PISTON_DATA_OBJECT", 34 },
        { "VTK_PATH", 35 },
        { "VTK_UNSTRUCTURED_GRID_BASE", 36 },
        { "VTK_BIT_MIN", 0 },
        { "VTK_BIT_MAX", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; char value; }
      constants[2] = {
        { "VTK_CHAR_MIN", VTK_TYPE_CAST(char, 0x80) },
        { "VTK_CHAR_MAX", VTK_TYPE_CAST(char, 0x7f) },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; signed char value; }
      constants[2] = {
        { "VTK_SIGNED_CHAR_MIN", VTK_TYPE_CAST(signed char, 0x80) },
        { "VTK_SIGNED_CHAR_MAX", VTK_TYPE_CAST(signed char, 0x7f) },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; unsigned char value; }
      constants[2] = {
        { "VTK_UNSIGNED_CHAR_MIN", VTK_TYPE_CAST(unsigned char, 0u) },
        { "VTK_UNSIGNED_CHAR_MAX", VTK_TYPE_CAST(unsigned char, 0xffu) },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; short value; }
      constants[2] = {
        { "VTK_SHORT_MIN", VTK_TYPE_CAST(short, 0x8000) },
        { "VTK_SHORT_MAX", VTK_TYPE_CAST(short, 0x7fff) },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; unsigned short value; }
      constants[2] = {
        { "VTK_UNSIGNED_SHORT_MIN", VTK_TYPE_CAST(unsigned short, 0u) },
        { "VTK_UNSIGNED_SHORT_MAX", VTK_TYPE_CAST(unsigned short, 0xffffu) },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_INT_MIN", VTK_TYPE_CAST(int, ~(~0u >> 1)) },
        { "VTK_INT_MAX", VTK_TYPE_CAST(int, ~0u >> 1) },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; unsigned int value; }
      constants[2] = {
        { "VTK_UNSIGNED_INT_MIN", VTK_TYPE_CAST(unsigned int, 0) },
        { "VTK_UNSIGNED_INT_MAX", VTK_TYPE_CAST(unsigned int, ~0u) },
      };

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
    o = PyInt_FromLong(constants[c].value);
#else
    o = PyLong_FromUnsignedLong(constants[c].value);
#endif
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_LONG_MIN", VTK_TYPE_CAST(long, ~(~0ul >> 1)) },
        { "VTK_LONG_MAX", VTK_TYPE_CAST(long, ~0ul >> 1) },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; unsigned long long value; }
      constants[2] = {
        { "VTK_UNSIGNED_LONG_MIN", VTK_TYPE_CAST(unsigned long, 0ul) },
        { "VTK_UNSIGNED_LONG_MAX", VTK_TYPE_CAST(unsigned long, ~0ul) },
      };

    o = PyLong_FromUnsignedLongLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; float value; }
      constants[2] = {
        { "VTK_FLOAT_MIN", VTK_TYPE_CAST(float, -1.0e+38f) },
        { "VTK_FLOAT_MAX", VTK_TYPE_CAST(float,  1.0e+38f) },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; double value; }
      constants[2] = {
        { "VTK_DOUBLE_MIN", VTK_TYPE_CAST(double, -1.0e+299) },
        { "VTK_DOUBLE_MAX", VTK_TYPE_CAST(double,  1.0e+299) },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_LONG_LONG_MIN", VTK_TYPE_CAST(long long, ~(~0ull >> 1)) },
        { "VTK_LONG_LONG_MAX", VTK_TYPE_CAST(long long, ~0ull >> 1) },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; unsigned long long value; }
      constants[2] = {
        { "VTK_UNSIGNED_LONG_LONG_MIN", VTK_TYPE_CAST(unsigned long long, 0ull) },
        { "VTK_UNSIGNED_LONG_LONG_MAX", VTK_TYPE_CAST(unsigned long long, ~0ull) },
      };

    o = PyLong_FromUnsignedLongLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  o = PyInt_FromLong(VTK_INT_MAX);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_LARGE_INTEGER", o);
    Py_DECREF(o);
    }
  o = PyFloat_FromDouble(VTK_FLOAT_MAX);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_LARGE_FLOAT", o);
    Py_DECREF(o);
    }
  for (int c = 0; c < 11; c++)
    {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_TYPE_UINT8", VTK_UNSIGNED_CHAR },
        { "VTK_TYPE_INT8", VTK_CHAR },
        { "VTK_TYPE_UINT16", VTK_UNSIGNED_SHORT },
        { "VTK_TYPE_INT16", VTK_SHORT },
        { "VTK_TYPE_UINT32", VTK_UNSIGNED_INT },
        { "VTK_TYPE_INT32", VTK_INT },
        { "VTK_TYPE_UINT64", VTK_UNSIGNED_LONG_LONG },
        { "VTK_TYPE_INT64", VTK_LONG_LONG },
        { "VTK_TYPE_FLOAT32", VTK_FLOAT },
        { "VTK_TYPE_FLOAT64", VTK_DOUBLE },
        { "VTK_SIZEOF_ID_TYPE", VTK_SIZEOF_LONG_LONG },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; long long value; }
      constants[3] = {
        { "VTK_ID_MIN", VTK_LONG_LONG_MIN },
        { "VTK_ID_MAX", VTK_LONG_LONG_MAX },
        { "VTK_LARGE_ID", VTK_ID_MAX },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

