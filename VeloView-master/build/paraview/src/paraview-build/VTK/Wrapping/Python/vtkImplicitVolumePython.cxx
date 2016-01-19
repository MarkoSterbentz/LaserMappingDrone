// python wrapper for vtkImplicitVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImplicitVolume.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImplicitVolume(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImplicitVolumeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitVolume_Doc();


static PyObject *
PyvtkImplicitVolume_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImplicitVolume::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitVolume::NewInstance());

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
PyvtkImplicitVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImplicitVolume *tempr = vtkImplicitVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitVolume::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitVolume::EvaluateFunction(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitVolume_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitVolume::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitVolume_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitVolume_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitVolume_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitVolume_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

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

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkImplicitVolume::EvaluateGradient(temp0, temp1);
      }

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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_SetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetVolume(temp0);
      }
    else
      {
      op->vtkImplicitVolume::SetVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkImplicitVolume::GetVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutValue(temp0);
      }
    else
      {
      op->vtkImplicitVolume::SetOutValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkImplicitVolume::GetOutValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitVolume_SetOutGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

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
      op->SetOutGradient(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImplicitVolume::SetOutGradient(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitVolume_SetOutGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutGradient(temp0);
      }
    else
      {
      op->vtkImplicitVolume::SetOutGradient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitVolume_SetOutGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitVolume_SetOutGradient_s1(self, args);
    case 1:
      return PyvtkImplicitVolume_SetOutGradient_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutGradient");
  return NULL;
}



static PyObject *
PyvtkImplicitVolume_GetOutGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitVolume *op = static_cast<vtkImplicitVolume *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutGradient() :
      op->vtkImplicitVolume::GetOutGradient());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitVolume_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitVolume_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitVolume_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitVolume_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImplicitVolume\nC++: vtkImplicitVolume *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitVolume_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitVolume\nC++: vtkImplicitVolume *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkImplicitVolume_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturns the mtime also considering the volume.  This also calls\nUpdate on the volume, and it therefore must be called before the\nfunction is evaluated.\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitVolume_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitVolume_EvaluateGradient, METH_VARARGS,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\n"},
  {(char*)"SetVolume", PyvtkImplicitVolume_SetVolume, METH_VARARGS,
   (char*)"V.SetVolume(vtkImageData)\nC++: virtual void SetVolume(vtkImageData *)\n\nSpecify the volume for the implicit function.\n"},
  {(char*)"GetVolume", PyvtkImplicitVolume_GetVolume, METH_VARARGS,
   (char*)"V.GetVolume() -> vtkImageData\nC++: vtkImageData *GetVolume()\n\nSpecify the volume for the implicit function.\n"},
  {(char*)"SetOutValue", PyvtkImplicitVolume_SetOutValue, METH_VARARGS,
   (char*)"V.SetOutValue(float)\nC++: void SetOutValue(double a)\n\nSet the function value to use for points outside of the dataset.\n"},
  {(char*)"GetOutValue", PyvtkImplicitVolume_GetOutValue, METH_VARARGS,
   (char*)"V.GetOutValue() -> float\nC++: double GetOutValue()\n\nSet the function value to use for points outside of the dataset.\n"},
  {(char*)"SetOutGradient", PyvtkImplicitVolume_SetOutGradient, METH_VARARGS,
   (char*)"V.SetOutGradient(float, float, float)\nC++: void SetOutGradient(double, double, double)\nV.SetOutGradient((float, float, float))\nC++: void SetOutGradient(double a[3])\n\n"},
  {(char*)"GetOutGradient", PyvtkImplicitVolume_GetOutGradient, METH_VARARGS,
   (char*)"V.GetOutGradient() -> (float, float, float)\nC++: double *GetOutGradient()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitVolume_StaticNew()
{
  return vtkImplicitVolume::New();
}

PyObject *PyVTKClass_vtkImplicitVolumeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitVolume_StaticNew,
    PyvtkImplicitVolume_Methods,
    "vtkImplicitVolume", modulename,
    NULL, NULL,
    PyvtkImplicitVolume_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitVolume_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitVolume - treat a volume as if it were an implicit function\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitVolume treats a volume (e.g., structured point dataset) as\nif it were an implicit function. This means it computes a function\nvalue and gradient. vtkImplicitVolume is a concrete implementation of\nvtkImplicitFunction.\n\nvtkImplicitDataSet computes the function (at the point x) by\nperforming cell interpolation. That is, it finds the cell containing\nx, and then uses the cell's interpolation",
    " functions to compute an\ninterpolated scalar value at x. (A similar approach is used to find\nthe gradient, if requested.) Points outside of the dataset are\nassigned the value of the ivar OutValue, and the gradient value\nOutGradient.\n\nCaveats:\n\nThe input volume data is only updated when GetMTime() is called.\nWorks for 3D structured points datasets, 0D-2D datasets won't work\nproperly.\n\nSee Also:\n\nvt",
    "kImplicitFunction vtkImplicitDataSet vtkClipPolyData vtkCutter\nvtkImplicitWindowFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitVolume(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitVolumeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitVolume", o) != 0)
    {
    Py_DECREF(o);
    }

}

