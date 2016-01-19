// python wrapper for vtkPVCompositeKeyFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCompositeKeyFrame.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCompositeKeyFrame(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCompositeKeyFrameNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameNew
#endif

static const char **PyvtkPVCompositeKeyFrame_Doc();


static PyObject *
PyvtkPVCompositeKeyFrame_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCompositeKeyFrame::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCompositeKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeKeyFrame::NewInstance());

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
PyvtkPVCompositeKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCompositeKeyFrame *tempr = vtkPVCompositeKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_RemoveAllKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllKeyValues();
      }
    else
      {
      op->vtkPVCompositeKeyFrame::RemoveAllKeyValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyTime(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetKeyTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyValue(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetKeyValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetKeyValue(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetKeyValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVCompositeKeyFrame_SetKeyValue_s1(self, args);
    case 2:
      return PyvtkPVCompositeKeyFrame_SetKeyValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyValue");
  return NULL;
}



static PyObject *
PyvtkPVCompositeKeyFrame_SetNumberOfKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfKeyValues(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetNumberOfKeyValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBase(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetBase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetStartPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartPower(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetStartPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetEndPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPower(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetEndPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhase(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetPhase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrequency(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetFrequency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetType(temp0);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::SetType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTypeMinValue() :
      op->vtkPVCompositeKeyFrame::GetTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTypeMaxValue() :
      op->vtkPVCompositeKeyFrame::GetTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPVCompositeKeyFrame::GetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeAsString() :
      op->vtkPVCompositeKeyFrame::GetTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeAsString_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeAsString");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkPVCompositeKeyFrame::GetTypeAsString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVCompositeKeyFrame_GetTypeAsString_s1(self, args);
    case 1:
      return PyvtkPVCompositeKeyFrame_GetTypeAsString_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTypeAsString");
  return NULL;
}



static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeFromString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkPVCompositeKeyFrame::GetTypeFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  vtkPVAnimationCue *temp1 = NULL;
  vtkPVKeyFrame *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVAnimationCue") &&
      ap.GetVTKObject(temp2, "vtkPVKeyFrame"))
    {
    if (ap.IsBound())
      {
      op->UpdateValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVCompositeKeyFrame::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeKeyFrame_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCompositeKeyFrame_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCompositeKeyFrame_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCompositeKeyFrame_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCompositeKeyFrame\nC++: vtkPVCompositeKeyFrame *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCompositeKeyFrame_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCompositeKeyFrame\nC++: vtkPVCompositeKeyFrame *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveAllKeyValues", PyvtkPVCompositeKeyFrame_RemoveAllKeyValues, METH_VARARGS,
   (char*)"V.RemoveAllKeyValues()\nC++: virtual void RemoveAllKeyValues()\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {(char*)"SetKeyTime", PyvtkPVCompositeKeyFrame_SetKeyTime, METH_VARARGS,
   (char*)"V.SetKeyTime(float)\nC++: virtual void SetKeyTime(double time)\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {(char*)"SetKeyValue", PyvtkPVCompositeKeyFrame_SetKeyValue, METH_VARARGS,
   (char*)"V.SetKeyValue(float)\nC++: virtual void SetKeyValue(double val)\nV.SetKeyValue(int, float)\nC++: virtual void SetKeyValue(unsigned int index, double val)\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {(char*)"SetNumberOfKeyValues", PyvtkPVCompositeKeyFrame_SetNumberOfKeyValues, METH_VARARGS,
   (char*)"V.SetNumberOfKeyValues(int)\nC++: virtual void SetNumberOfKeyValues(unsigned int num)\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {(char*)"SetBase", PyvtkPVCompositeKeyFrame_SetBase, METH_VARARGS,
   (char*)"V.SetBase(float)\nC++: void SetBase(double val)\n\nPassed on to the ExponentialKeyFrame.\n"},
  {(char*)"SetStartPower", PyvtkPVCompositeKeyFrame_SetStartPower, METH_VARARGS,
   (char*)"V.SetStartPower(float)\nC++: void SetStartPower(double val)\n\nPassed on to the ExponentialKeyFrame.\n"},
  {(char*)"SetEndPower", PyvtkPVCompositeKeyFrame_SetEndPower, METH_VARARGS,
   (char*)"V.SetEndPower(float)\nC++: void SetEndPower(double val)\n\nPassed on to the ExponentialKeyFrame.\n"},
  {(char*)"SetPhase", PyvtkPVCompositeKeyFrame_SetPhase, METH_VARARGS,
   (char*)"V.SetPhase(float)\nC++: void SetPhase(double val)\n\nPassed on to the SinusoidKeyFrame.\n"},
  {(char*)"SetFrequency", PyvtkPVCompositeKeyFrame_SetFrequency, METH_VARARGS,
   (char*)"V.SetFrequency(float)\nC++: void SetFrequency(double val)\n\nPassed on to the SinusoidKeyFrame.\n"},
  {(char*)"SetOffset", PyvtkPVCompositeKeyFrame_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double val)\n\nPassed on to the SinusoidKeyFrame.\n"},
  {(char*)"SetType", PyvtkPVCompositeKeyFrame_SetType, METH_VARARGS,
   (char*)"V.SetType(int)\nC++: void SetType(int)\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {(char*)"GetTypeMinValue", PyvtkPVCompositeKeyFrame_GetTypeMinValue, METH_VARARGS,
   (char*)"V.GetTypeMinValue() -> int\nC++: int GetTypeMinValue()\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {(char*)"GetTypeMaxValue", PyvtkPVCompositeKeyFrame_GetTypeMaxValue, METH_VARARGS,
   (char*)"V.GetTypeMaxValue() -> int\nC++: int GetTypeMaxValue()\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {(char*)"GetType", PyvtkPVCompositeKeyFrame_GetType, METH_VARARGS,
   (char*)"V.GetType() -> int\nC++: int GetType()\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {(char*)"GetTypeAsString", PyvtkPVCompositeKeyFrame_GetTypeAsString, METH_VARARGS,
   (char*)"V.GetTypeAsString() -> string\nC++: const char *GetTypeAsString()\nV.GetTypeAsString(int) -> string\nC++: static const char *GetTypeAsString(int)\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {(char*)"GetTypeFromString", PyvtkPVCompositeKeyFrame_GetTypeFromString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetTypeFromString(string) -> int\nC++: static int GetTypeFromString(const char *string)\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {(char*)"UpdateValue", PyvtkPVCompositeKeyFrame_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: virtual void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cue, vtkPVKeyFrame *next)\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCompositeKeyFrame_StaticNew()
{
  return vtkPVCompositeKeyFrame::New();
}

PyObject *PyVTKClass_vtkPVCompositeKeyFrameNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCompositeKeyFrame_StaticNew,
    PyvtkPVCompositeKeyFrame_Methods,
    "vtkPVCompositeKeyFrame", modulename,
    NULL, NULL,
    PyvtkPVCompositeKeyFrame_Doc(),
    PyVTKClass_vtkPVKeyFrameNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "NONE", vtkPVCompositeKeyFrame::NONE },
          { "BOOLEAN", vtkPVCompositeKeyFrame::BOOLEAN },
          { "RAMP", vtkPVCompositeKeyFrame::RAMP },
          { "EXPONENTIAL", vtkPVCompositeKeyFrame::EXPONENTIAL },
          { "SINUSOID", vtkPVCompositeKeyFrame::SINUSOID },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVCompositeKeyFrame_Doc()
{
  static const char *docstring[] = {
    "vtkPVCompositeKeyFrame - composite keyframe.\n\n",
    "Superclass: vtkPVKeyFrame\n\n",
    "There are many different types of keyframes such as\nvtkPVSinusoidKeyFrame, vtkPVRampKeyFrame etc. This is keyframe that\nhas all different types of keyframes as internal objects and provides\nAPI to choose one of them as the active type. This is helpful in GUIs\nthat allow for switching the type of keyframe on the fly without much\neffort from the GUI.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCompositeKeyFrame(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCompositeKeyFrameNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCompositeKeyFrame", o) != 0)
    {
    Py_DECREF(o);
    }

}

