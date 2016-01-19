// python wrapper for vtkShepardMethod
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkShepardMethod.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkShepardMethod(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkShepardMethodNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkShepardMethod_Doc();


static PyObject *
PyvtkShepardMethod_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkShepardMethod::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShepardMethod::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShepardMethod *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShepardMethod::NewInstance());

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
PyvtkShepardMethod_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkShepardMethod *tempr = vtkShepardMethod::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0, temp1) :
      op->vtkShepardMethod::ComputeModelBounds(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkShepardMethod::GetSampleDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

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
      op->SetSampleDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkShepardMethod::SetSampleDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSampleDimensions(temp0);
      }
    else
      {
      op->vtkShepardMethod::SetSampleDimensions(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkShepardMethod_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkShepardMethod_SetSampleDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return NULL;
}



static PyObject *
PyvtkShepardMethod_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDistance(temp0);
      }
    else
      {
      op->vtkShepardMethod::SetMaximumDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkShepardMethod::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkShepardMethod::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkShepardMethod::GetMaximumDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkShepardMethod::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetModelBounds(temp0);
      }
    else
      {
      op->vtkShepardMethod::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkShepardMethod_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkShepardMethod_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkShepardMethod_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkShepardMethod::GetModelBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkShepardMethod::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetNullValue() :
      op->vtkShepardMethod::GetNullValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkShepardMethod_Methods[] = {
  {(char*)"GetClassName", PyvtkShepardMethod_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShepardMethod_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShepardMethod_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkShepardMethod\nC++: vtkShepardMethod *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShepardMethod_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShepardMethod\nC++: vtkShepardMethod *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ComputeModelBounds", PyvtkShepardMethod_ComputeModelBounds, METH_VARARGS,
   (char*)"V.ComputeModelBounds([float, float, float], [float, float, float])\n     -> float\nC++: double ComputeModelBounds(double origin[3], double ar[3])\n\nCompute ModelBounds from input geometry.\n"},
  {(char*)"GetSampleDimensions", PyvtkShepardMethod_GetSampleDimensions, METH_VARARGS,
   (char*)"V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSpecify i-j-k dimensions on which to sample input points.\n"},
  {(char*)"SetSampleDimensions", PyvtkShepardMethod_SetSampleDimensions, METH_VARARGS,
   (char*)"V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet the i-j-k dimensions on which to sample the distance\nfunction.\n"},
  {(char*)"SetMaximumDistance", PyvtkShepardMethod_SetMaximumDistance, METH_VARARGS,
   (char*)"V.SetMaximumDistance(float)\nC++: void SetMaximumDistance(double)\n\nSpecify influence distance of each input point. This distance is\na fraction of the length of the diagonal of the sample space.\nThus, values of 1.0 will cause each input point to influence all\npoints in the structured point dataset. Values less than 1.0 can\nimprove performance significantly.\n"},
  {(char*)"GetMaximumDistanceMinValue", PyvtkShepardMethod_GetMaximumDistanceMinValue, METH_VARARGS,
   (char*)"V.GetMaximumDistanceMinValue() -> float\nC++: double GetMaximumDistanceMinValue()\n\nSpecify influence distance of each input point. This distance is\na fraction of the length of the diagonal of the sample space.\nThus, values of 1.0 will cause each input point to influence all\npoints in the structured point dataset. Values less than 1.0 can\nimprove performance significantly.\n"},
  {(char*)"GetMaximumDistanceMaxValue", PyvtkShepardMethod_GetMaximumDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumDistanceMaxValue() -> float\nC++: double GetMaximumDistanceMaxValue()\n\nSpecify influence distance of each input point. This distance is\na fraction of the length of the diagonal of the sample space.\nThus, values of 1.0 will cause each input point to influence all\npoints in the structured point dataset. Values less than 1.0 can\nimprove performance significantly.\n"},
  {(char*)"GetMaximumDistance", PyvtkShepardMethod_GetMaximumDistance, METH_VARARGS,
   (char*)"V.GetMaximumDistance() -> float\nC++: double GetMaximumDistance()\n\nSpecify influence distance of each input point. This distance is\na fraction of the length of the diagonal of the sample space.\nThus, values of 1.0 will cause each input point to influence all\npoints in the structured point dataset. Values less than 1.0 can\nimprove performance significantly.\n"},
  {(char*)"SetModelBounds", PyvtkShepardMethod_SetModelBounds, METH_VARARGS,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {(char*)"GetModelBounds", PyvtkShepardMethod_GetModelBounds, METH_VARARGS,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the position in space to perform the sampling.\n"},
  {(char*)"SetNullValue", PyvtkShepardMethod_SetNullValue, METH_VARARGS,
   (char*)"V.SetNullValue(float)\nC++: void SetNullValue(double a)\n\nSet the Null value for output points not receiving a contribution\nfrom the input points.\n"},
  {(char*)"GetNullValue", PyvtkShepardMethod_GetNullValue, METH_VARARGS,
   (char*)"V.GetNullValue() -> float\nC++: double GetNullValue()\n\nSet the Null value for output points not receiving a contribution\nfrom the input points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShepardMethod_StaticNew()
{
  return vtkShepardMethod::New();
}

PyObject *PyVTKClass_vtkShepardMethodNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShepardMethod_StaticNew,
    PyvtkShepardMethod_Methods,
    "vtkShepardMethod", modulename,
    NULL, NULL,
    PyvtkShepardMethod_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkShepardMethod_Doc()
{
  static const char *docstring[] = {
    "vtkShepardMethod - sample unstructured points onto structured points\nusing the method of Shepard\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkShepardMethod is a filter used to visualize unstructured point\ndata using Shepard's method. The method works by resampling the\nunstructured points onto a structured points set. The influence\nfunctions are described as \"inverse distance weighted\". Once the\nstructured points are computed, the usual visualization techniques\n(e.g., iso-contouring or volume rendering) can be used visualize the\nstruc",
    "tured points.\n\nCaveats:\n\nThe input to this filter is any dataset type. This filter can be used\nto resample any form of data, i.e., the input data need not be\nunstructured.\n\nThe bounds of the data (i.e., the sample space) is automatically\ncomputed if not set by the user.\n\nIf you use a maximum distance less than 1.0, some output points may\nnever receive a contribution. The final value of these point",
    "s can be\nspecified with the \"NullValue\" instance variable.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShepardMethod(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShepardMethodNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShepardMethod", o) != 0)
    {
    Py_DECREF(o);
    }

}

