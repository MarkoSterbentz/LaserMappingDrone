// python wrapper for vtkPResampleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPResampleFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPResampleFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPResampleFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkPResampleFilter_Doc();


static PyObject *
PyvtkPResampleFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPResampleFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPResampleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPResampleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPResampleFilter::NewInstance());

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
PyvtkPResampleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPResampleFilter *tempr = vtkPResampleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPResampleFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPResampleFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseInputBounds(temp0);
      }
    else
      {
      op->vtkPResampleFilter::SetUseInputBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseInputBounds() :
      op->vtkPResampleFilter::GetUseInputBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_UseInputBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInputBoundsOn();
      }
    else
      {
      op->vtkPResampleFilter::UseInputBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_UseInputBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInputBoundsOff();
      }
    else
      {
      op->vtkPResampleFilter::UseInputBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetCustomSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkPResampleFilter::SetCustomSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomSamplingBounds(temp0);
      }
    else
      {
      op->vtkPResampleFilter::SetCustomSamplingBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkPResampleFilter_SetCustomSamplingBounds_s1(self, args);
    case 1:
      return PyvtkPResampleFilter_SetCustomSamplingBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomSamplingBounds");
  return NULL;
}



static PyObject *
PyvtkPResampleFilter_GetCustomSamplingBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCustomSamplingBounds() :
      op->vtkPResampleFilter::GetCustomSamplingBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetSamplingDimension_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSamplingDimension(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPResampleFilter::SetSamplingDimension(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetSamplingDimension_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSamplingDimension(temp0);
      }
    else
      {
      op->vtkPResampleFilter::SetSamplingDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetSamplingDimension(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPResampleFilter_SetSamplingDimension_s1(self, args);
    case 1:
      return PyvtkPResampleFilter_SetSamplingDimension_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingDimension");
  return NULL;
}



static PyObject *
PyvtkPResampleFilter_GetSamplingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingDimension() :
      op->vtkPResampleFilter::GetSamplingDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkPResampleFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPResampleFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPResampleFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPResampleFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPResampleFilter\nC++: vtkPResampleFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPResampleFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPResampleFilter\nC++: vtkPResampleFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPResampleFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPResampleFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {(char*)"SetUseInputBounds", PyvtkPResampleFilter_SetUseInputBounds, METH_VARARGS,
   (char*)"V.SetUseInputBounds(int)\nC++: void SetUseInputBounds(int a)\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {(char*)"GetUseInputBounds", PyvtkPResampleFilter_GetUseInputBounds, METH_VARARGS,
   (char*)"V.GetUseInputBounds() -> int\nC++: int GetUseInputBounds()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {(char*)"UseInputBoundsOn", PyvtkPResampleFilter_UseInputBoundsOn, METH_VARARGS,
   (char*)"V.UseInputBoundsOn()\nC++: void UseInputBoundsOn()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {(char*)"UseInputBoundsOff", PyvtkPResampleFilter_UseInputBoundsOff, METH_VARARGS,
   (char*)"V.UseInputBoundsOff()\nC++: void UseInputBoundsOff()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {(char*)"SetCustomSamplingBounds", PyvtkPResampleFilter_SetCustomSamplingBounds, METH_VARARGS,
   (char*)"V.SetCustomSamplingBounds(float, float, float, float, float,\n    float)\nC++: void SetCustomSamplingBounds(double, double, double, double,\n    double, double)\nV.SetCustomSamplingBounds((float, float, float, float, float,\n    float))\nC++: void SetCustomSamplingBounds(double a[6])\n\n"},
  {(char*)"GetCustomSamplingBounds", PyvtkPResampleFilter_GetCustomSamplingBounds, METH_VARARGS,
   (char*)"V.GetCustomSamplingBounds() -> (float, float, float, float, float,\n     float)\nC++: double *GetCustomSamplingBounds()\n\n"},
  {(char*)"SetSamplingDimension", PyvtkPResampleFilter_SetSamplingDimension, METH_VARARGS,
   (char*)"V.SetSamplingDimension(int, int, int)\nC++: void SetSamplingDimension(int, int, int)\nV.SetSamplingDimension((int, int, int))\nC++: void SetSamplingDimension(int a[3])\n\n"},
  {(char*)"GetSamplingDimension", PyvtkPResampleFilter_GetSamplingDimension, METH_VARARGS,
   (char*)"V.GetSamplingDimension() -> (int, int, int)\nC++: int *GetSamplingDimension()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPResampleFilter_StaticNew()
{
  return vtkPResampleFilter::New();
}

PyObject *PyVTKClass_vtkPResampleFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPResampleFilter_StaticNew,
    PyvtkPResampleFilter_Methods,
    "vtkPResampleFilter", modulename,
    NULL, NULL,
    PyvtkPResampleFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPResampleFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPResampleFilter - probe dataset in parallel using a vtkImageData\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPResampleFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPResampleFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPResampleFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

