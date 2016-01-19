// python wrapper for vtkRTAnalyticSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRTAnalyticSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRTAnalyticSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRTAnalyticSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkRTAnalyticSource_Doc();


static PyObject *
PyvtkRTAnalyticSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRTAnalyticSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRTAnalyticSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRTAnalyticSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRTAnalyticSource::NewInstance());

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
PyvtkRTAnalyticSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRTAnalyticSource *tempr = vtkRTAnalyticSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRTAnalyticSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkRTAnalyticSource::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

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
      op->vtkRTAnalyticSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRTAnalyticSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

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
      op->vtkRTAnalyticSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRTAnalyticSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRTAnalyticSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkRTAnalyticSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkRTAnalyticSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRTAnalyticSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkRTAnalyticSource::GetMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetStandardDeviation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStandardDeviation() :
      op->vtkRTAnalyticSource::GetStandardDeviation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetXFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXFreq(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetXFreq(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetXFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXFreq() :
      op->vtkRTAnalyticSource::GetXFreq());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetYFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYFreq(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetYFreq(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetYFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYFreq() :
      op->vtkRTAnalyticSource::GetYFreq());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetZFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZFreq(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetZFreq(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetZFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZFreq() :
      op->vtkRTAnalyticSource::GetZFreq());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetXMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMag(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetXMag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetXMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXMag() :
      op->vtkRTAnalyticSource::GetXMag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetYMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYMag(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetYMag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetYMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYMag() :
      op->vtkRTAnalyticSource::GetYMag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetZMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZMag(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetZMag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetZMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZMag() :
      op->vtkRTAnalyticSource::GetZMag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubsampleRate(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetSubsampleRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRate() :
      op->vtkRTAnalyticSource::GetSubsampleRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRTAnalyticSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRTAnalyticSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRTAnalyticSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRTAnalyticSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRTAnalyticSource\nC++: vtkRTAnalyticSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRTAnalyticSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRTAnalyticSource\nC++: vtkRTAnalyticSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkRTAnalyticSource_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nSet/Get the extent of the whole output image. Initial value is\n{-10,10,-10,10,-10,10}\n"},
  {(char*)"GetWholeExtent", PyvtkRTAnalyticSource_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetCenter", PyvtkRTAnalyticSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkRTAnalyticSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetMaximum", PyvtkRTAnalyticSource_SetMaximum, METH_VARARGS,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nSet/Get the Maximum value of the function. Initial value is\n255.0.\n"},
  {(char*)"GetMaximum", PyvtkRTAnalyticSource_GetMaximum, METH_VARARGS,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nSet/Get the Maximum value of the function. Initial value is\n255.0.\n"},
  {(char*)"SetStandardDeviation", PyvtkRTAnalyticSource_SetStandardDeviation, METH_VARARGS,
   (char*)"V.SetStandardDeviation(float)\nC++: void SetStandardDeviation(double a)\n\nSet/Get the standard deviation of the function. Initial value is\n0.5.\n"},
  {(char*)"GetStandardDeviation", PyvtkRTAnalyticSource_GetStandardDeviation, METH_VARARGS,
   (char*)"V.GetStandardDeviation() -> float\nC++: double GetStandardDeviation()\n\nSet/Get the standard deviation of the function. Initial value is\n0.5.\n"},
  {(char*)"SetXFreq", PyvtkRTAnalyticSource_SetXFreq, METH_VARARGS,
   (char*)"V.SetXFreq(float)\nC++: void SetXFreq(double a)\n\nSet/Get the natural frequency in x. Initial value is 60.\n"},
  {(char*)"GetXFreq", PyvtkRTAnalyticSource_GetXFreq, METH_VARARGS,
   (char*)"V.GetXFreq() -> float\nC++: double GetXFreq()\n\nSet/Get the natural frequency in x. Initial value is 60.\n"},
  {(char*)"SetYFreq", PyvtkRTAnalyticSource_SetYFreq, METH_VARARGS,
   (char*)"V.SetYFreq(float)\nC++: void SetYFreq(double a)\n\nSet/Get the natural frequency in y. Initial value is 30.\n"},
  {(char*)"GetYFreq", PyvtkRTAnalyticSource_GetYFreq, METH_VARARGS,
   (char*)"V.GetYFreq() -> float\nC++: double GetYFreq()\n\nSet/Get the natural frequency in y. Initial value is 30.\n"},
  {(char*)"SetZFreq", PyvtkRTAnalyticSource_SetZFreq, METH_VARARGS,
   (char*)"V.SetZFreq(float)\nC++: void SetZFreq(double a)\n\nSet/Get the natural frequency in z. Initial value is 40.\n"},
  {(char*)"GetZFreq", PyvtkRTAnalyticSource_GetZFreq, METH_VARARGS,
   (char*)"V.GetZFreq() -> float\nC++: double GetZFreq()\n\nSet/Get the natural frequency in z. Initial value is 40.\n"},
  {(char*)"SetXMag", PyvtkRTAnalyticSource_SetXMag, METH_VARARGS,
   (char*)"V.SetXMag(float)\nC++: void SetXMag(double a)\n\nSet/Get the magnitude in x. Initial value is 10.\n"},
  {(char*)"GetXMag", PyvtkRTAnalyticSource_GetXMag, METH_VARARGS,
   (char*)"V.GetXMag() -> float\nC++: double GetXMag()\n\nSet/Get the magnitude in x. Initial value is 10.\n"},
  {(char*)"SetYMag", PyvtkRTAnalyticSource_SetYMag, METH_VARARGS,
   (char*)"V.SetYMag(float)\nC++: void SetYMag(double a)\n\nSet/Get the magnitude in y. Initial value is 18.\n"},
  {(char*)"GetYMag", PyvtkRTAnalyticSource_GetYMag, METH_VARARGS,
   (char*)"V.GetYMag() -> float\nC++: double GetYMag()\n\nSet/Get the magnitude in y. Initial value is 18.\n"},
  {(char*)"SetZMag", PyvtkRTAnalyticSource_SetZMag, METH_VARARGS,
   (char*)"V.SetZMag(float)\nC++: void SetZMag(double a)\n\nSet/Get the magnitude in z. Initial value is 5.\n"},
  {(char*)"GetZMag", PyvtkRTAnalyticSource_GetZMag, METH_VARARGS,
   (char*)"V.GetZMag() -> float\nC++: double GetZMag()\n\nSet/Get the magnitude in z. Initial value is 5.\n"},
  {(char*)"SetSubsampleRate", PyvtkRTAnalyticSource_SetSubsampleRate, METH_VARARGS,
   (char*)"V.SetSubsampleRate(int)\nC++: void SetSubsampleRate(int a)\n\nSet/Get the sub-sample rate. Initial value is 1.\n"},
  {(char*)"GetSubsampleRate", PyvtkRTAnalyticSource_GetSubsampleRate, METH_VARARGS,
   (char*)"V.GetSubsampleRate() -> int\nC++: int GetSubsampleRate()\n\nSet/Get the sub-sample rate. Initial value is 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRTAnalyticSource_StaticNew()
{
  return vtkRTAnalyticSource::New();
}

PyObject *PyVTKClass_vtkRTAnalyticSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRTAnalyticSource_StaticNew,
    PyvtkRTAnalyticSource_Methods,
    "vtkRTAnalyticSource", modulename,
    NULL, NULL,
    PyvtkRTAnalyticSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRTAnalyticSource_Doc()
{
  static const char *docstring[] = {
    "vtkRTAnalyticSource - Create an image for regression testing\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkRTAnalyticSource just produces images with pixel values determined\nby a Maximum*Gaussian*XMag*sin(XFreq*x)*sin(YFreq*y)*cos(ZFreq*z)\nValues are float scalars on point data with name \"RTData\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRTAnalyticSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRTAnalyticSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRTAnalyticSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

