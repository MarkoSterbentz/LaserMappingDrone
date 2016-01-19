// python wrapper for vtkStreamPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreamPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStreamerNew
extern "C" { PyObject *PyVTKClass_vtkStreamerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamerNew
#endif

static const char **PyvtkStreamPoints_Doc();


static PyObject *
PyvtkStreamPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamPoints::NewInstance());

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
PyvtkStreamPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamPoints *tempr = vtkStreamPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_SetTimeIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeIncrement(temp0);
      }
    else
      {
      op->vtkStreamPoints::SetTimeIncrement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_GetTimeIncrementMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeIncrementMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeIncrementMinValue() :
      op->vtkStreamPoints::GetTimeIncrementMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_GetTimeIncrementMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeIncrementMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeIncrementMaxValue() :
      op->vtkStreamPoints::GetTimeIncrementMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_GetTimeIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeIncrement() :
      op->vtkStreamPoints::GetTimeIncrement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamPoints\nC++: vtkStreamPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamPoints\nC++: vtkStreamPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeIncrement", PyvtkStreamPoints_SetTimeIncrement, METH_VARARGS,
   (char*)"V.SetTimeIncrement(float)\nC++: void SetTimeIncrement(double)\n\nSpecify the separation of points in terms of absolute time.\n"},
  {(char*)"GetTimeIncrementMinValue", PyvtkStreamPoints_GetTimeIncrementMinValue, METH_VARARGS,
   (char*)"V.GetTimeIncrementMinValue() -> float\nC++: double GetTimeIncrementMinValue()\n\nSpecify the separation of points in terms of absolute time.\n"},
  {(char*)"GetTimeIncrementMaxValue", PyvtkStreamPoints_GetTimeIncrementMaxValue, METH_VARARGS,
   (char*)"V.GetTimeIncrementMaxValue() -> float\nC++: double GetTimeIncrementMaxValue()\n\nSpecify the separation of points in terms of absolute time.\n"},
  {(char*)"GetTimeIncrement", PyvtkStreamPoints_GetTimeIncrement, METH_VARARGS,
   (char*)"V.GetTimeIncrement() -> float\nC++: double GetTimeIncrement()\n\nSpecify the separation of points in terms of absolute time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamPoints_StaticNew()
{
  return vtkStreamPoints::New();
}

PyObject *PyVTKClass_vtkStreamPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamPoints_StaticNew,
    PyvtkStreamPoints_Methods,
    "vtkStreamPoints", modulename,
    NULL, NULL,
    PyvtkStreamPoints_Doc(),
    PyVTKClass_vtkStreamerNew(modulename));
  return cls;
}

const char **PyvtkStreamPoints_Doc()
{
  static const char *docstring[] = {
    "vtkStreamPoints - generate points along streamer separated by\nconstant time increment\n\n",
    "Superclass: vtkStreamer\n\n",
    "vtkStreamPoints is a filter that generates points along a streamer.\nThe points are separated by a constant time increment. The resulting\nvisual effect (especially when coupled with vtkGlyph3D) is an\nindication of particle speed.\n\nSee Also:\n\nvtkStreamer vtkStreamLine vtkDashedStreamLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

