// python wrapper for vtkAMRCutPlane
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAMRCutPlane.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRCutPlane(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRCutPlaneNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRCutPlane_Doc();


static PyObject *
PyvtkAMRCutPlane_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRCutPlane::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRCutPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRCutPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRCutPlane::NewInstance());

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
PyvtkAMRCutPlane_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRCutPlane *tempr = vtkAMRCutPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRCutPlane::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkAMRCutPlane::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRCutPlane_SetCenter_s1(self, args);
    case 1:
      return PyvtkAMRCutPlane_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkAMRCutPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRCutPlane::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkAMRCutPlane::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRCutPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkAMRCutPlane_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkAMRCutPlane_SetLevelOfResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelOfResolution(temp0);
      }
    else
      {
      op->vtkAMRCutPlane::SetLevelOfResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetLevelOfResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOfResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLevelOfResolution() :
      op->vtkAMRCutPlane::GetLevelOfResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetUseNativeCutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeCutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNativeCutter(temp0);
      }
    else
      {
      op->vtkAMRCutPlane::SetUseNativeCutter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetUseNativeCutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNativeCutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseNativeCutter() :
      op->vtkAMRCutPlane::GetUseNativeCutter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_UseNativeCutterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNativeCutterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNativeCutterOn();
      }
    else
      {
      op->vtkAMRCutPlane::UseNativeCutterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_UseNativeCutterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNativeCutterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNativeCutterOff();
      }
    else
      {
      op->vtkAMRCutPlane::UseNativeCutterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->vtkAMRCutPlane::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRCutPlane::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRCutPlane::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRCutPlane::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRCutPlane_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRCutPlane_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRCutPlane_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRCutPlane_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRCutPlane\nC++: vtkAMRCutPlane *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRCutPlane_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRCutPlane\nC++: vtkAMRCutPlane *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkAMRCutPlane_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"SetNormal", PyvtkAMRCutPlane_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"SetLevelOfResolution", PyvtkAMRCutPlane_SetLevelOfResolution, METH_VARARGS,
   (char*)"V.SetLevelOfResolution(int)\nC++: void SetLevelOfResolution(int a)\n\nSets the level of resolution\n"},
  {(char*)"GetLevelOfResolution", PyvtkAMRCutPlane_GetLevelOfResolution, METH_VARARGS,
   (char*)"V.GetLevelOfResolution() -> int\nC++: int GetLevelOfResolution()\n\nSets the level of resolution\n"},
  {(char*)"SetUseNativeCutter", PyvtkAMRCutPlane_SetUseNativeCutter, METH_VARARGS,
   (char*)"V.SetUseNativeCutter(bool)\nC++: void SetUseNativeCutter(bool a)\n\n\n"},
  {(char*)"GetUseNativeCutter", PyvtkAMRCutPlane_GetUseNativeCutter, METH_VARARGS,
   (char*)"V.GetUseNativeCutter() -> bool\nC++: bool GetUseNativeCutter()\n\n\n"},
  {(char*)"UseNativeCutterOn", PyvtkAMRCutPlane_UseNativeCutterOn, METH_VARARGS,
   (char*)"V.UseNativeCutterOn()\nC++: void UseNativeCutterOn()\n\n\n"},
  {(char*)"UseNativeCutterOff", PyvtkAMRCutPlane_UseNativeCutterOff, METH_VARARGS,
   (char*)"V.UseNativeCutterOff()\nC++: void UseNativeCutterOff()\n\n\n"},
  {(char*)"SetController", PyvtkAMRCutPlane_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *a)\n\nSet/Get a multiprocess controller for parallel processing. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"GetController", PyvtkAMRCutPlane_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess controller for parallel processing. By\ndefault this parameter is set to NULL by the constructor.\n"},
  {(char*)"FillInputPortInformation", PyvtkAMRCutPlane_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {(char*)"FillOutputPortInformation", PyvtkAMRCutPlane_FillOutputPortInformation, METH_VARARGS,
   (char*)"V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillOutputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRCutPlane_StaticNew()
{
  return vtkAMRCutPlane::New();
}

PyObject *PyVTKClass_vtkAMRCutPlaneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRCutPlane_StaticNew,
    PyvtkAMRCutPlane_Methods,
    "vtkAMRCutPlane", modulename,
    NULL, NULL,
    PyvtkAMRCutPlane_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRCutPlane_Doc()
{
  static const char *docstring[] = {
    "vtkAMRCutPlane.h -- Cuts an AMR dataset\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A concrete instance of vtkMultiBlockDataSet that provides\nfunctionality for cutting an AMR dataset (an instance of\nvtkOverlappingAMR) with user supplied implicit plane function defined\nby a normal and center.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRCutPlane(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRCutPlaneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRCutPlane", o) != 0)
    {
    Py_DECREF(o);
    }

}

