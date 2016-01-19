// python wrapper for vtkThreeSliceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkThreeSliceFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkThreeSliceFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkThreeSliceFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkThreeSliceFilter_Doc();


static PyObject *
PyvtkThreeSliceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkThreeSliceFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreeSliceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkThreeSliceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreeSliceFilter::NewInstance());

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
PyvtkThreeSliceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkThreeSliceFilter *tempr = vtkThreeSliceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkThreeSliceFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetCutNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetCutNormal(temp0, temp1);
      }
    else
      {
      op->vtkThreeSliceFilter::SetCutNormal(temp0, temp1);
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
PyvtkThreeSliceFilter_SetCutOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetCutOrigin(temp0, temp1);
      }
    else
      {
      op->vtkThreeSliceFilter::SetCutOrigin(temp0, temp1);
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
PyvtkThreeSliceFilter_SetCutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCutValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkThreeSliceFilter::SetCutValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetNumberOfSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSlice(temp0, temp1);
      }
    else
      {
      op->vtkThreeSliceFilter::SetNumberOfSlice(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetToDefaultSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToDefaultSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetToDefaultSettings();
      }
    else
      {
      op->vtkThreeSliceFilter::SetToDefaultSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetCutOrigins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOrigins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetCutOrigins(temp0);
      }
    else
      {
      op->vtkThreeSliceFilter::SetCutOrigins(temp0);
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
PyvtkThreeSliceFilter_SetCutOrigins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOrigins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

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
      op->SetCutOrigins(temp0, temp1, temp2);
      }
    else
      {
      op->vtkThreeSliceFilter::SetCutOrigins(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreeSliceFilter_SetCutOrigins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkThreeSliceFilter_SetCutOrigins_s1(self, args);
    case 3:
      return PyvtkThreeSliceFilter_SetCutOrigins_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOrigins");
  return NULL;
}



static PyObject *
PyvtkThreeSliceFilter_EnableProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableProbe(temp0);
      }
    else
      {
      op->vtkThreeSliceFilter::EnableProbe(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_GetProbedPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbedPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->GetProbedPointData(temp0, temp1) :
      op->vtkThreeSliceFilter::GetProbedPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkThreeSliceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkThreeSliceFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThreeSliceFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThreeSliceFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkThreeSliceFilter\nC++: vtkThreeSliceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThreeSliceFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThreeSliceFilter\nC++: vtkThreeSliceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkThreeSliceFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride GetMTime because we rely on internal filters that have\ntheir own MTime\n"},
  {(char*)"SetCutNormal", PyvtkThreeSliceFilter_SetCutNormal, METH_VARARGS,
   (char*)"V.SetCutNormal(int, [float, float, float])\nC++: void SetCutNormal(int cutIndex, double normal[3])\n\nSet a Slice Normal for a given cutter\n"},
  {(char*)"SetCutOrigin", PyvtkThreeSliceFilter_SetCutOrigin, METH_VARARGS,
   (char*)"V.SetCutOrigin(int, [float, float, float])\nC++: void SetCutOrigin(int cutIndex, double origin[3])\n\nSet a slice Origin for a given cutter\n"},
  {(char*)"SetCutValue", PyvtkThreeSliceFilter_SetCutValue, METH_VARARGS,
   (char*)"V.SetCutValue(int, int, float)\nC++: void SetCutValue(int cutIndex, int index, double value)\n\nSet a slice value for a given cutter\n"},
  {(char*)"SetNumberOfSlice", PyvtkThreeSliceFilter_SetNumberOfSlice, METH_VARARGS,
   (char*)"V.SetNumberOfSlice(int, int)\nC++: void SetNumberOfSlice(int cutIndex, int size)\n\nSet number of slices for a given cutter\n"},
  {(char*)"SetToDefaultSettings", PyvtkThreeSliceFilter_SetToDefaultSettings, METH_VARARGS,
   (char*)"V.SetToDefaultSettings()\nC++: void SetToDefaultSettings()\n\nDefault settings:\n- reset the plan origin to be (0,0,0)\n- number of slice for X, Y and Z to be 0\n- Normal for SliceX=[1,0,0], SliceY=[0,1,0], SliceZ=[0,0,1]\n"},
  {(char*)"SetCutOrigins", PyvtkThreeSliceFilter_SetCutOrigins, METH_VARARGS,
   (char*)"V.SetCutOrigins([float, float, float])\nC++: void SetCutOrigins(double origin[3])\nV.SetCutOrigins(float, float, float)\nC++: void SetCutOrigins(double x, double y, double z)\n\nSet slice Origin for all cutter\n"},
  {(char*)"EnableProbe", PyvtkThreeSliceFilter_EnableProbe, METH_VARARGS,
   (char*)"V.EnableProbe(int)\nC++: void EnableProbe(int enable)\n\nEnable to probe the dataset at the given cut origin.\n"},
  {(char*)"GetProbedPointData", PyvtkThreeSliceFilter_GetProbedPointData, METH_VARARGS,
   (char*)"V.GetProbedPointData(string, float) -> bool\nC++: bool GetProbedPointData(const char *arrayName, double &value)\n\nReturn true if any data is available and provide the value as\nargument\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThreeSliceFilter_StaticNew()
{
  return vtkThreeSliceFilter::New();
}

PyObject *PyVTKClass_vtkThreeSliceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThreeSliceFilter_StaticNew,
    PyvtkThreeSliceFilter_Methods,
    "vtkThreeSliceFilter", modulename,
    NULL, NULL,
    PyvtkThreeSliceFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThreeSliceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkThreeSliceFilter - Cut vtkDataSet along 3 planes\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkThreeSliceFilter is a filter that slice the input data using 3\nplane cut. Each axis cut could embed several slices by providing\nseveral values. As output you will find 4 output ports. The output\nports are defined as follow:\n- 0: Merge of all the cutter output\n- 1: Output of the first internal vtkCutter filter\n- 2: Output of the second internal vtkCutter filter\n- 3: Output of the third internal ",
    "vtkCutter filter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThreeSliceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThreeSliceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThreeSliceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

