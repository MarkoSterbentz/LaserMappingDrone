// python wrapper for vtkGraphLayoutFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphLayoutFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphLayoutFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphLayoutFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGraphLayoutFilter_Doc();


static PyObject *
PyvtkGraphLayoutFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphLayoutFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphLayoutFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphLayoutFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphLayoutFilter::NewInstance());

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
PyvtkGraphLayoutFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphLayoutFilter *tempr = vtkGraphLayoutFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

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
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkGraphLayoutFilter::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGraphBounds(temp0);
      }
    else
      {
      op->vtkGraphLayoutFilter::SetGraphBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkGraphLayoutFilter_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkGraphLayoutFilter_SetGraphBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return NULL;
}



static PyObject *
PyvtkGraphLayoutFilter_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetGraphBounds() :
      op->vtkGraphLayoutFilter::GetGraphBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticBoundsComputation(temp0);
      }
    else
      {
      op->vtkGraphLayoutFilter::SetAutomaticBoundsComputation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticBoundsComputation() :
      op->vtkGraphLayoutFilter::GetAutomaticBoundsComputation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticBoundsComputationOn();
      }
    else
      {
      op->vtkGraphLayoutFilter::AutomaticBoundsComputationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticBoundsComputationOff();
      }
    else
      {
      op->vtkGraphLayoutFilter::AutomaticBoundsComputationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxNumberOfIterations(temp0);
      }
    else
      {
      op->vtkGraphLayoutFilter::SetMaxNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMinValue() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMaxValue() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterations() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoolDownRate(temp0);
      }
    else
      {
      op->vtkGraphLayoutFilter::SetCoolDownRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMinValue() :
      op->vtkGraphLayoutFilter::GetCoolDownRateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMaxValue() :
      op->vtkGraphLayoutFilter::GetCoolDownRateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRate() :
      op->vtkGraphLayoutFilter::GetCoolDownRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreeDimensionalLayout(temp0);
      }
    else
      {
      op->vtkGraphLayoutFilter::SetThreeDimensionalLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLayout() :
      op->vtkGraphLayoutFilter::GetThreeDimensionalLayout());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLayoutOn();
      }
    else
      {
      op->vtkGraphLayoutFilter::ThreeDimensionalLayoutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLayoutOff();
      }
    else
      {
      op->vtkGraphLayoutFilter::ThreeDimensionalLayoutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphLayoutFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphLayoutFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphLayoutFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphLayoutFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphLayoutFilter\nC++: vtkGraphLayoutFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphLayoutFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphLayoutFilter\nC++: vtkGraphLayoutFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraphBounds", PyvtkGraphLayoutFilter_SetGraphBounds, METH_VARARGS,
   (char*)"V.SetGraphBounds(float, float, float, float, float, float)\nC++: void SetGraphBounds(double, double, double, double, double,\n    double)\nV.SetGraphBounds((float, float, float, float, float, float))\nC++: void SetGraphBounds(double a[6])\n\n"},
  {(char*)"GetGraphBounds", PyvtkGraphLayoutFilter_GetGraphBounds, METH_VARARGS,
   (char*)"V.GetGraphBounds() -> (float, float, float, float, float, float)\nC++: double *GetGraphBounds()\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {(char*)"SetAutomaticBoundsComputation", PyvtkGraphLayoutFilter_SetAutomaticBoundsComputation, METH_VARARGS,
   (char*)"V.SetAutomaticBoundsComputation(int)\nC++: void SetAutomaticBoundsComputation(int a)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"GetAutomaticBoundsComputation", PyvtkGraphLayoutFilter_GetAutomaticBoundsComputation, METH_VARARGS,
   (char*)"V.GetAutomaticBoundsComputation() -> int\nC++: int GetAutomaticBoundsComputation()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"AutomaticBoundsComputationOn", PyvtkGraphLayoutFilter_AutomaticBoundsComputationOn, METH_VARARGS,
   (char*)"V.AutomaticBoundsComputationOn()\nC++: void AutomaticBoundsComputationOn()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"AutomaticBoundsComputationOff", PyvtkGraphLayoutFilter_AutomaticBoundsComputationOff, METH_VARARGS,
   (char*)"V.AutomaticBoundsComputationOff()\nC++: void AutomaticBoundsComputationOff()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"SetMaxNumberOfIterations", PyvtkGraphLayoutFilter_SetMaxNumberOfIterations, METH_VARARGS,
   (char*)"V.SetMaxNumberOfIterations(int)\nC++: void SetMaxNumberOfIterations(int)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {(char*)"GetMaxNumberOfIterationsMinValue", PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMinValue, METH_VARARGS,
   (char*)"V.GetMaxNumberOfIterationsMinValue() -> int\nC++: int GetMaxNumberOfIterationsMinValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {(char*)"GetMaxNumberOfIterationsMaxValue", PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMaxValue, METH_VARARGS,
   (char*)"V.GetMaxNumberOfIterationsMaxValue() -> int\nC++: int GetMaxNumberOfIterationsMaxValue()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {(char*)"GetMaxNumberOfIterations", PyvtkGraphLayoutFilter_GetMaxNumberOfIterations, METH_VARARGS,
   (char*)"V.GetMaxNumberOfIterations() -> int\nC++: int GetMaxNumberOfIterations()\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {(char*)"SetCoolDownRate", PyvtkGraphLayoutFilter_SetCoolDownRate, METH_VARARGS,
   (char*)"V.SetCoolDownRate(float)\nC++: void SetCoolDownRate(double)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"GetCoolDownRateMinValue", PyvtkGraphLayoutFilter_GetCoolDownRateMinValue, METH_VARARGS,
   (char*)"V.GetCoolDownRateMinValue() -> float\nC++: double GetCoolDownRateMinValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"GetCoolDownRateMaxValue", PyvtkGraphLayoutFilter_GetCoolDownRateMaxValue, METH_VARARGS,
   (char*)"V.GetCoolDownRateMaxValue() -> float\nC++: double GetCoolDownRateMaxValue()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"GetCoolDownRate", PyvtkGraphLayoutFilter_GetCoolDownRate, METH_VARARGS,
   (char*)"V.GetCoolDownRate() -> float\nC++: double GetCoolDownRate()\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {(char*)"SetThreeDimensionalLayout", PyvtkGraphLayoutFilter_SetThreeDimensionalLayout, METH_VARARGS,
   (char*)"V.SetThreeDimensionalLayout(int)\nC++: void SetThreeDimensionalLayout(int a)\n\n"},
  {(char*)"GetThreeDimensionalLayout", PyvtkGraphLayoutFilter_GetThreeDimensionalLayout, METH_VARARGS,
   (char*)"V.GetThreeDimensionalLayout() -> int\nC++: int GetThreeDimensionalLayout()\n\n"},
  {(char*)"ThreeDimensionalLayoutOn", PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOn, METH_VARARGS,
   (char*)"V.ThreeDimensionalLayoutOn()\nC++: void ThreeDimensionalLayoutOn()\n\n"},
  {(char*)"ThreeDimensionalLayoutOff", PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOff, METH_VARARGS,
   (char*)"V.ThreeDimensionalLayoutOff()\nC++: void ThreeDimensionalLayoutOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphLayoutFilter_StaticNew()
{
  return vtkGraphLayoutFilter::New();
}

PyObject *PyVTKClass_vtkGraphLayoutFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphLayoutFilter_StaticNew,
    PyvtkGraphLayoutFilter_Methods,
    "vtkGraphLayoutFilter", modulename,
    NULL, NULL,
    PyvtkGraphLayoutFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphLayoutFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGraphLayoutFilter - nice layout of undirected graphs in 3D\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGraphLayoutFilter will reposition a network of nodes, connected by\nlines or polylines, into a more pleasing arrangement. The class\nimplements a simple force-directed placement algorithm (Fruchterman &\nReingold \"Graph Drawing by Force-directed Placement\"\nSoftware-Practice and Experience 21(11) 1991).\n\nThe input to the filter is a vtkPolyData representing the undirected\ngraphs. A graph is represe",
    "nted by a set of polylines and/or lines.\nThe output is also a vtkPolyData, where the point positions have been\nmodified. To use the filter, specify whether you wish the layout to\noccur in 2D or 3D; the bounds in which the graph should lie (note\nthat you can just use automatic bounds computation); and modify the\ncool down rate (controls the final process of simulated annealing).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphLayoutFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphLayoutFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphLayoutFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

