// python wrapper for vtkElevationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkElevationFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkElevationFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkElevationFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkElevationFilter_Doc();


static PyObject *
PyvtkElevationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkElevationFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkElevationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkElevationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkElevationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkElevationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkElevationFilter::NewInstance());

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
PyvtkElevationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkElevationFilter *tempr = vtkElevationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkElevationFilter_SetLowPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetLowPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkElevationFilter::SetLowPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetLowPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLowPoint(temp0);
      }
    else
      {
      op->vtkElevationFilter::SetLowPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetLowPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkElevationFilter_SetLowPoint_s1(self, args);
    case 1:
      return PyvtkElevationFilter_SetLowPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLowPoint");
  return NULL;
}



static PyObject *
PyvtkElevationFilter_GetLowPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetLowPoint() :
      op->vtkElevationFilter::GetLowPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkElevationFilter_SetHighPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetHighPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkElevationFilter::SetHighPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetHighPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetHighPoint(temp0);
      }
    else
      {
      op->vtkElevationFilter::SetHighPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetHighPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkElevationFilter_SetHighPoint_s1(self, args);
    case 1:
      return PyvtkElevationFilter_SetHighPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHighPoint");
  return NULL;
}



static PyObject *
PyvtkElevationFilter_GetHighPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetHighPoint() :
      op->vtkElevationFilter::GetHighPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkElevationFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0, temp1);
      }
    else
      {
      op->vtkElevationFilter::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0);
      }
    else
      {
      op->vtkElevationFilter::SetScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkElevationFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkElevationFilter_SetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return NULL;
}



static PyObject *
PyvtkElevationFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkElevationFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkElevationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkElevationFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkElevationFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkElevationFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkElevationFilter\nC++: vtkElevationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkElevationFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkElevationFilter\nC++: vtkElevationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLowPoint", PyvtkElevationFilter_SetLowPoint, METH_VARARGS,
   (char*)"V.SetLowPoint(float, float, float)\nC++: void SetLowPoint(double, double, double)\nV.SetLowPoint((float, float, float))\nC++: void SetLowPoint(double a[3])\n\n"},
  {(char*)"GetLowPoint", PyvtkElevationFilter_GetLowPoint, METH_VARARGS,
   (char*)"V.GetLowPoint() -> (float, float, float)\nC++: double *GetLowPoint()\n\nDefine one end of the line (small scalar values).  Default is\n(0,0,0).\n"},
  {(char*)"SetHighPoint", PyvtkElevationFilter_SetHighPoint, METH_VARARGS,
   (char*)"V.SetHighPoint(float, float, float)\nC++: void SetHighPoint(double, double, double)\nV.SetHighPoint((float, float, float))\nC++: void SetHighPoint(double a[3])\n\n"},
  {(char*)"GetHighPoint", PyvtkElevationFilter_GetHighPoint, METH_VARARGS,
   (char*)"V.GetHighPoint() -> (float, float, float)\nC++: double *GetHighPoint()\n\nDefine other end of the line (large scalar values).  Default is\n(0,0,1).\n"},
  {(char*)"SetScalarRange", PyvtkElevationFilter_SetScalarRange, METH_VARARGS,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {(char*)"GetScalarRange", PyvtkElevationFilter_GetScalarRange, METH_VARARGS,
   (char*)"V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nSpecify range to map scalars into.  Default is [0, 1].\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkElevationFilter_StaticNew()
{
  return vtkElevationFilter::New();
}

PyObject *PyVTKClass_vtkElevationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkElevationFilter_StaticNew,
    PyvtkElevationFilter_Methods,
    "vtkElevationFilter", modulename,
    NULL, NULL,
    PyvtkElevationFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkElevationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkElevationFilter - generate scalars along a specified direction\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkElevationFilter is a filter to generate scalar values from a\ndataset.  The scalar values lie within a user specified range, and\nare generated by computing a projection of each dataset point onto a\nline. The line can be oriented arbitrarily. A typical example is to\ngenerate scalars based on elevation or height above a plane.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkElevationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkElevationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkElevationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

