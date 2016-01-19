// python wrapper for vtkBrownianPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBrownianPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBrownianPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBrownianPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkBrownianPoints_Doc();


static PyObject *
PyvtkBrownianPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBrownianPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBrownianPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrownianPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBrownianPoints::NewInstance());

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
PyvtkBrownianPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBrownianPoints *tempr = vtkBrownianPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumSpeed(temp0);
      }
    else
      {
      op->vtkBrownianPoints::SetMinimumSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeedMinValue() :
      op->vtkBrownianPoints::GetMinimumSpeedMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeedMaxValue() :
      op->vtkBrownianPoints::GetMinimumSpeedMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeed() :
      op->vtkBrownianPoints::GetMinimumSpeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumSpeed(temp0);
      }
    else
      {
      op->vtkBrownianPoints::SetMaximumSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeedMinValue() :
      op->vtkBrownianPoints::GetMaximumSpeedMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeedMaxValue() :
      op->vtkBrownianPoints::GetMaximumSpeedMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeed() :
      op->vtkBrownianPoints::GetMaximumSpeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBrownianPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkBrownianPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBrownianPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBrownianPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBrownianPoints\nC++: vtkBrownianPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBrownianPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBrownianPoints\nC++: vtkBrownianPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMinimumSpeed", PyvtkBrownianPoints_SetMinimumSpeed, METH_VARARGS,
   (char*)"V.SetMinimumSpeed(float)\nC++: void SetMinimumSpeed(double)\n\nSet the minimum speed value.\n"},
  {(char*)"GetMinimumSpeedMinValue", PyvtkBrownianPoints_GetMinimumSpeedMinValue, METH_VARARGS,
   (char*)"V.GetMinimumSpeedMinValue() -> float\nC++: double GetMinimumSpeedMinValue()\n\nSet the minimum speed value.\n"},
  {(char*)"GetMinimumSpeedMaxValue", PyvtkBrownianPoints_GetMinimumSpeedMaxValue, METH_VARARGS,
   (char*)"V.GetMinimumSpeedMaxValue() -> float\nC++: double GetMinimumSpeedMaxValue()\n\nSet the minimum speed value.\n"},
  {(char*)"GetMinimumSpeed", PyvtkBrownianPoints_GetMinimumSpeed, METH_VARARGS,
   (char*)"V.GetMinimumSpeed() -> float\nC++: double GetMinimumSpeed()\n\nSet the minimum speed value.\n"},
  {(char*)"SetMaximumSpeed", PyvtkBrownianPoints_SetMaximumSpeed, METH_VARARGS,
   (char*)"V.SetMaximumSpeed(float)\nC++: void SetMaximumSpeed(double)\n\nSet the maximum speed value.\n"},
  {(char*)"GetMaximumSpeedMinValue", PyvtkBrownianPoints_GetMaximumSpeedMinValue, METH_VARARGS,
   (char*)"V.GetMaximumSpeedMinValue() -> float\nC++: double GetMaximumSpeedMinValue()\n\nSet the maximum speed value.\n"},
  {(char*)"GetMaximumSpeedMaxValue", PyvtkBrownianPoints_GetMaximumSpeedMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumSpeedMaxValue() -> float\nC++: double GetMaximumSpeedMaxValue()\n\nSet the maximum speed value.\n"},
  {(char*)"GetMaximumSpeed", PyvtkBrownianPoints_GetMaximumSpeed, METH_VARARGS,
   (char*)"V.GetMaximumSpeed() -> float\nC++: double GetMaximumSpeed()\n\nSet the maximum speed value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBrownianPoints_StaticNew()
{
  return vtkBrownianPoints::New();
}

PyObject *PyVTKClass_vtkBrownianPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBrownianPoints_StaticNew,
    PyvtkBrownianPoints_Methods,
    "vtkBrownianPoints", modulename,
    NULL, NULL,
    PyvtkBrownianPoints_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBrownianPoints_Doc()
{
  static const char *docstring[] = {
    "vtkBrownianPoints - assign random vector to points\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkBrownianPoints is a filter object that assigns a random vector\n(i.e., magnitude and direction) to each point. The minimum and\nmaximum speed values can be controlled by the user.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBrownianPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBrownianPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBrownianPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

