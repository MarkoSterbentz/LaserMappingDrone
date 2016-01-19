// python wrapper for vtkPiecewiseFunctionShiftScale
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPiecewiseFunctionShiftScale.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPiecewiseFunctionShiftScale(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPiecewiseFunctionShiftScaleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPiecewiseFunctionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPiecewiseFunctionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPiecewiseFunctionAlgorithmNew
#endif

static const char **PyvtkPiecewiseFunctionShiftScale_Doc();


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPiecewiseFunctionShiftScale::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseFunctionShiftScale::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunctionShiftScale *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseFunctionShiftScale::NewInstance());

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
PyvtkPiecewiseFunctionShiftScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPiecewiseFunctionShiftScale *tempr = vtkPiecewiseFunctionShiftScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetPositionShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionShift(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionShiftScale::SetPositionShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetPositionScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionScale(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionShiftScale::SetPositionScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetValueShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValueShift(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionShiftScale::SetValueShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetValueScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValueScale(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionShiftScale::SetValueScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetPositionShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPositionShift() :
      op->vtkPiecewiseFunctionShiftScale::GetPositionShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetPositionScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPositionScale() :
      op->vtkPiecewiseFunctionShiftScale::GetPositionScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetValueShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValueShift() :
      op->vtkPiecewiseFunctionShiftScale::GetValueShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetValueScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValueScale() :
      op->vtkPiecewiseFunctionShiftScale::GetValueScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunctionShiftScale_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseFunctionShiftScale_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseFunctionShiftScale_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseFunctionShiftScale_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPiecewiseFunctionShiftScale\nC++: vtkPiecewiseFunctionShiftScale *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseFunctionShiftScale_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseFunctionShiftScale\nC++: vtkPiecewiseFunctionShiftScale *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPositionShift", PyvtkPiecewiseFunctionShiftScale_SetPositionShift, METH_VARARGS,
   (char*)"V.SetPositionShift(float)\nC++: void SetPositionShift(double a)\n\n"},
  {(char*)"SetPositionScale", PyvtkPiecewiseFunctionShiftScale_SetPositionScale, METH_VARARGS,
   (char*)"V.SetPositionScale(float)\nC++: void SetPositionScale(double a)\n\n"},
  {(char*)"SetValueShift", PyvtkPiecewiseFunctionShiftScale_SetValueShift, METH_VARARGS,
   (char*)"V.SetValueShift(float)\nC++: void SetValueShift(double a)\n\n"},
  {(char*)"SetValueScale", PyvtkPiecewiseFunctionShiftScale_SetValueScale, METH_VARARGS,
   (char*)"V.SetValueScale(float)\nC++: void SetValueScale(double a)\n\n"},
  {(char*)"GetPositionShift", PyvtkPiecewiseFunctionShiftScale_GetPositionShift, METH_VARARGS,
   (char*)"V.GetPositionShift() -> float\nC++: double GetPositionShift()\n\n"},
  {(char*)"GetPositionScale", PyvtkPiecewiseFunctionShiftScale_GetPositionScale, METH_VARARGS,
   (char*)"V.GetPositionScale() -> float\nC++: double GetPositionScale()\n\n"},
  {(char*)"GetValueShift", PyvtkPiecewiseFunctionShiftScale_GetValueShift, METH_VARARGS,
   (char*)"V.GetValueShift() -> float\nC++: double GetValueShift()\n\n"},
  {(char*)"GetValueScale", PyvtkPiecewiseFunctionShiftScale_GetValueScale, METH_VARARGS,
   (char*)"V.GetValueScale() -> float\nC++: double GetValueScale()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseFunctionShiftScale_StaticNew()
{
  return vtkPiecewiseFunctionShiftScale::New();
}

PyObject *PyVTKClass_vtkPiecewiseFunctionShiftScaleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseFunctionShiftScale_StaticNew,
    PyvtkPiecewiseFunctionShiftScale_Methods,
    "vtkPiecewiseFunctionShiftScale", modulename,
    NULL, NULL,
    PyvtkPiecewiseFunctionShiftScale_Doc(),
    PyVTKClass_vtkPiecewiseFunctionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseFunctionShiftScale_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseFunctionShiftScale -\n\n",
    "Superclass: vtkPiecewiseFunctionAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseFunctionShiftScale(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseFunctionShiftScaleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseFunctionShiftScale", o) != 0)
    {
    Py_DECREF(o);
    }

}

