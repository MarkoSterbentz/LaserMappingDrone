// python wrapper for vtkMarkerUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMarkerUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMarkerUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMarkerUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMarkerUtilities_Doc();


static PyObject *
PyvtkMarkerUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkerUtilities *op = static_cast<vtkMarkerUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMarkerUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarkerUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkerUtilities *op = static_cast<vtkMarkerUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMarkerUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarkerUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkerUtilities *op = static_cast<vtkMarkerUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMarkerUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMarkerUtilities::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkMarkerUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMarkerUtilities *tempr = vtkMarkerUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarkerUtilities_GenerateMarker(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateMarker");

  vtkImageData *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkMarkerUtilities::GenerateMarker(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMarkerUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkMarkerUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMarkerUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMarkerUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMarkerUtilities\nC++: vtkMarkerUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMarkerUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMarkerUtilities\nC++: vtkMarkerUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GenerateMarker", PyvtkMarkerUtilities_GenerateMarker, METH_VARARGS | METH_STATIC,
   (char*)"V.GenerateMarker(vtkImageData, int, int)\nC++: static void GenerateMarker(vtkImageData *data, int style,\n    int width)\n\nGenerate the requested symbol of a particular style and size.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMarkerUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMarkerUtilities_Methods,
    "vtkMarkerUtilities", modulename,
    NULL, NULL,
    PyvtkMarkerUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "NONE", vtkMarkerUtilities::NONE },
          { "CROSS", vtkMarkerUtilities::CROSS },
          { "PLUS", vtkMarkerUtilities::PLUS },
          { "SQUARE", vtkMarkerUtilities::SQUARE },
          { "CIRCLE", vtkMarkerUtilities::CIRCLE },
          { "DIAMOND", vtkMarkerUtilities::DIAMOND },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMarkerUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkMarkerUtilities - Utilities for generating marker images\n\n",
    "Superclass: vtkObject\n\n",
    "This class programmatically generates markers of a specified size for\nvarious marker styles.\n\nSee Also:\n\nvtkPlotLine, vtkPlotPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMarkerUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMarkerUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMarkerUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

