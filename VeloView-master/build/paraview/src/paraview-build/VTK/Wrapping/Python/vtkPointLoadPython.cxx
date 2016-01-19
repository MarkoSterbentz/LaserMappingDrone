// python wrapper for vtkPointLoad
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointLoad.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointLoad(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointLoadNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkPointLoad_Doc();


static PyObject *
PyvtkPointLoad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointLoad::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointLoad::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointLoad *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointLoad::NewInstance());

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
PyvtkPointLoad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointLoad *tempr = vtkPointLoad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_SetLoadValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLoadValue(temp0);
      }
    else
      {
      op->vtkPointLoad::SetLoadValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_GetLoadValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLoadValue() :
      op->vtkPointLoad::GetLoadValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

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
      op->vtkPointLoad::SetSampleDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLoad_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

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
      op->vtkPointLoad::SetSampleDimensions(temp0);
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
PyvtkPointLoad_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointLoad_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkPointLoad_SetSampleDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return NULL;
}



static PyObject *
PyvtkPointLoad_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkPointLoad::GetSampleDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

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
      op->vtkPointLoad::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLoad_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

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
      op->vtkPointLoad::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointLoad_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkPointLoad_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkPointLoad_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkPointLoad_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkPointLoad::GetModelBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_SetPoissonsRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoissonsRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPoissonsRatio(temp0);
      }
    else
      {
      op->vtkPointLoad::SetPoissonsRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_GetPoissonsRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoissonsRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPoissonsRatio() :
      op->vtkPointLoad::GetPoissonsRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_SetComputeEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeEffectiveStress(temp0);
      }
    else
      {
      op->vtkPointLoad::SetComputeEffectiveStress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_GetComputeEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeEffectiveStress() :
      op->vtkPointLoad::GetComputeEffectiveStress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_ComputeEffectiveStressOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeEffectiveStressOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeEffectiveStressOn();
      }
    else
      {
      op->vtkPointLoad::ComputeEffectiveStressOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointLoad_ComputeEffectiveStressOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeEffectiveStressOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeEffectiveStressOff();
      }
    else
      {
      op->vtkPointLoad::ComputeEffectiveStressOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointLoad_Methods[] = {
  {(char*)"GetClassName", PyvtkPointLoad_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointLoad_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointLoad_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointLoad\nC++: vtkPointLoad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointLoad_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointLoad\nC++: vtkPointLoad *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLoadValue", PyvtkPointLoad_SetLoadValue, METH_VARARGS,
   (char*)"V.SetLoadValue(float)\nC++: void SetLoadValue(double a)\n\nSet/Get value of applied load.\n"},
  {(char*)"GetLoadValue", PyvtkPointLoad_GetLoadValue, METH_VARARGS,
   (char*)"V.GetLoadValue() -> float\nC++: double GetLoadValue()\n\nSet/Get value of applied load.\n"},
  {(char*)"SetSampleDimensions", PyvtkPointLoad_SetSampleDimensions, METH_VARARGS,
   (char*)"V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSpecify the dimensions of the volume. A stress tensor will be\ncomputed for each point in the volume.\n"},
  {(char*)"GetSampleDimensions", PyvtkPointLoad_GetSampleDimensions, METH_VARARGS,
   (char*)"V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSpecify the dimensions of the volume. A stress tensor will be\ncomputed for each point in the volume.\n"},
  {(char*)"SetModelBounds", PyvtkPointLoad_SetModelBounds, METH_VARARGS,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {(char*)"GetModelBounds", PyvtkPointLoad_GetModelBounds, METH_VARARGS,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the region in space over which the tensors are computed.\nThe point load is assumed to be applied at top center of the\nvolume.\n"},
  {(char*)"SetPoissonsRatio", PyvtkPointLoad_SetPoissonsRatio, METH_VARARGS,
   (char*)"V.SetPoissonsRatio(float)\nC++: void SetPoissonsRatio(double a)\n\nSet/Get Poisson's ratio.\n"},
  {(char*)"GetPoissonsRatio", PyvtkPointLoad_GetPoissonsRatio, METH_VARARGS,
   (char*)"V.GetPoissonsRatio() -> float\nC++: double GetPoissonsRatio()\n\nSet/Get Poisson's ratio.\n"},
  {(char*)"SetComputeEffectiveStress", PyvtkPointLoad_SetComputeEffectiveStress, METH_VARARGS,
   (char*)"V.SetComputeEffectiveStress(int)\nC++: void SetComputeEffectiveStress(int)\n\nTurn on/off computation of effective stress scalar. These methods\ndo nothing. The effective stress is always computed.\n"},
  {(char*)"GetComputeEffectiveStress", PyvtkPointLoad_GetComputeEffectiveStress, METH_VARARGS,
   (char*)"V.GetComputeEffectiveStress() -> int\nC++: int GetComputeEffectiveStress()\n\nTurn on/off computation of effective stress scalar. These methods\ndo nothing. The effective stress is always computed.\n"},
  {(char*)"ComputeEffectiveStressOn", PyvtkPointLoad_ComputeEffectiveStressOn, METH_VARARGS,
   (char*)"V.ComputeEffectiveStressOn()\nC++: void ComputeEffectiveStressOn()\n\nTurn on/off computation of effective stress scalar. These methods\ndo nothing. The effective stress is always computed.\n"},
  {(char*)"ComputeEffectiveStressOff", PyvtkPointLoad_ComputeEffectiveStressOff, METH_VARARGS,
   (char*)"V.ComputeEffectiveStressOff()\nC++: void ComputeEffectiveStressOff()\n\nTurn on/off computation of effective stress scalar. These methods\ndo nothing. The effective stress is always computed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointLoad_StaticNew()
{
  return vtkPointLoad::New();
}

PyObject *PyVTKClass_vtkPointLoadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointLoad_StaticNew,
    PyvtkPointLoad_Methods,
    "vtkPointLoad", modulename,
    NULL, NULL,
    PyvtkPointLoad_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointLoad_Doc()
{
  static const char *docstring[] = {
    "vtkPointLoad - compute stress tensors given point load on\nsemi-infinite domain\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkPointLoad is a source object that computes stress tensors on a\nvolume. The tensors are computed from the application of a point load\non a semi-infinite domain. (The analytical results are adapted from\nSaada - see text.) It also is possible to compute effective stress\nscalars if desired. This object serves as a specialized data\ngenerator for some of the examples in the text.\n\nSee Also:\n\nvtkTenso",
    "rGlyph, vtkHyperStreamline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointLoad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointLoadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointLoad", o) != 0)
    {
    Py_DECREF(o);
    }

}

