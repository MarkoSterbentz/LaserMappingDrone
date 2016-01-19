// python wrapper for vtkOutlineCornerSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOutlineCornerSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOutlineCornerSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOutlineCornerSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOutlineSourceNew
extern "C" { PyObject *PyVTKClass_vtkOutlineSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkOutlineSourceNew
#endif

static const char **PyvtkOutlineCornerSource_Doc();


static PyObject *
PyvtkOutlineCornerSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOutlineCornerSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineCornerSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOutlineCornerSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineCornerSource::NewInstance());

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
PyvtkOutlineCornerSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOutlineCornerSource *tempr = vtkOutlineCornerSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerFactor(temp0);
      }
    else
      {
      op->vtkOutlineCornerSource::SetCornerFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMinValue() :
      op->vtkOutlineCornerSource::GetCornerFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactorMaxValue() :
      op->vtkOutlineCornerSource::GetCornerFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCornerFactor() :
      op->vtkOutlineCornerSource::GetCornerFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkOutlineCornerSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkOutlineCornerSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineCornerSource_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineCornerSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineCornerSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineCornerSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOutlineCornerSource\nC++: vtkOutlineCornerSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineCornerSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineCornerSource\nC++: vtkOutlineCornerSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCornerFactor", PyvtkOutlineCornerSource_SetCornerFactor, METH_VARARGS,
   (char*)"V.SetCornerFactor(float)\nC++: void SetCornerFactor(double)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMinValue", PyvtkOutlineCornerSource_GetCornerFactorMinValue, METH_VARARGS,
   (char*)"V.GetCornerFactorMinValue() -> float\nC++: double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMaxValue", PyvtkOutlineCornerSource_GetCornerFactorMaxValue, METH_VARARGS,
   (char*)"V.GetCornerFactorMaxValue() -> float\nC++: double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactor", PyvtkOutlineCornerSource_GetCornerFactor, METH_VARARGS,
   (char*)"V.GetCornerFactor() -> float\nC++: double GetCornerFactor()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkOutlineCornerSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkOutlineCornerSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineCornerSource_StaticNew()
{
  return vtkOutlineCornerSource::New();
}

PyObject *PyVTKClass_vtkOutlineCornerSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineCornerSource_StaticNew,
    PyvtkOutlineCornerSource_Methods,
    "vtkOutlineCornerSource", modulename,
    NULL, NULL,
    PyvtkOutlineCornerSource_Doc(),
    PyVTKClass_vtkOutlineSourceNew(modulename));
  return cls;
}

const char **PyvtkOutlineCornerSource_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineCornerSource - create wireframe outline corners around\nbounding box\n\n",
    "Superclass: vtkOutlineSource\n\n",
    "vtkOutlineCornerSource creates wireframe outline corners around a\nuser-specified bounding box.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineCornerSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineCornerSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineCornerSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

