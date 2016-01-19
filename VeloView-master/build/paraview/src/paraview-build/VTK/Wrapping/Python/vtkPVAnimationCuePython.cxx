// python wrapper for vtkPVAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVAnimationCue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAnimationCue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAnimationCueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationCueNew
#endif

static const char **PyvtkPVAnimationCue_Doc();


static PyObject *
PyvtkPVAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAnimationCue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAnimationCue::NewInstance());

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
PyvtkPVAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAnimationCue *tempr = vtkPVAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedElement(temp0);
      }
    else
      {
      op->vtkPVAnimationCue::SetAnimatedElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnimatedElement() :
      op->vtkPVAnimationCue::GetAnimatedElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  vtkPVCueManipulator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVCueManipulator"))
    {
    if (ap.IsBound())
      {
      op->SetManipulator(temp0);
      }
    else
      {
      op->vtkPVAnimationCue::SetManipulator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCueManipulator *tempr = (ap.IsBound() ?
      op->GetManipulator() :
      op->vtkPVAnimationCue::GetManipulator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkPVAnimationCue::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVAnimationCue::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkPVAnimationCue::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkPVAnimationCue::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_BeginUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BeginUpdateAnimationValues();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetAnimationValue(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_EndUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->EndUpdateAnimationValues();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetUseAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseAnimationTime(temp0);
      }
    else
      {
      op->vtkPVAnimationCue::SetUseAnimationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetUseAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseAnimationTime() :
      op->vtkPVAnimationCue::GetUseAnimationTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVAnimationCue::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_Tick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

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
      op->Tick(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVAnimationCue::Tick(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkPVAnimationCue::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAnimationCue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAnimationCue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAnimationCue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAnimationCue\nC++: vtkPVAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAnimationCue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAnimationCue\nC++: vtkPVAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAnimatedElement", PyvtkPVAnimationCue_SetAnimatedElement, METH_VARARGS,
   (char*)"V.SetAnimatedElement(int)\nC++: void SetAnimatedElement(int a)\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {(char*)"GetAnimatedElement", PyvtkPVAnimationCue_GetAnimatedElement, METH_VARARGS,
   (char*)"V.GetAnimatedElement() -> int\nC++: int GetAnimatedElement()\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {(char*)"SetManipulator", PyvtkPVAnimationCue_SetManipulator, METH_VARARGS,
   (char*)"V.SetManipulator(vtkPVCueManipulator)\nC++: void SetManipulator(vtkPVCueManipulator *)\n\nGet/Set the manipulator used to compute values for each instance\nin the animation. Note that the time passed to the Manipulator is\nnormalized [0,1] to the extents of this cue.\n"},
  {(char*)"GetManipulator", PyvtkPVAnimationCue_GetManipulator, METH_VARARGS,
   (char*)"V.GetManipulator() -> vtkPVCueManipulator\nC++: vtkPVCueManipulator *GetManipulator()\n\nGet/Set the manipulator used to compute values for each instance\nin the animation. Note that the time passed to the Manipulator is\nnormalized [0,1] to the extents of this cue.\n"},
  {(char*)"SetEnabled", PyvtkPVAnimationCue_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: void SetEnabled(int a)\n\nEnable/Disable this cue.\n"},
  {(char*)"GetEnabled", PyvtkPVAnimationCue_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> int\nC++: int GetEnabled()\n\nEnable/Disable this cue.\n"},
  {(char*)"EnabledOn", PyvtkPVAnimationCue_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nEnable/Disable this cue.\n"},
  {(char*)"EnabledOff", PyvtkPVAnimationCue_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nEnable/Disable this cue.\n"},
  {(char*)"BeginUpdateAnimationValues", PyvtkPVAnimationCue_BeginUpdateAnimationValues, METH_VARARGS,
   (char*)"V.BeginUpdateAnimationValues()\nC++: virtual void BeginUpdateAnimationValues()\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {(char*)"SetAnimationValue", PyvtkPVAnimationCue_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(int, float)\nC++: virtual void SetAnimationValue(int index, double value)\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {(char*)"EndUpdateAnimationValues", PyvtkPVAnimationCue_EndUpdateAnimationValues, METH_VARARGS,
   (char*)"V.EndUpdateAnimationValues()\nC++: virtual void EndUpdateAnimationValues()\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {(char*)"SetUseAnimationTime", PyvtkPVAnimationCue_SetUseAnimationTime, METH_VARARGS,
   (char*)"V.SetUseAnimationTime(bool)\nC++: void SetUseAnimationTime(bool a)\n\nWhen set to true, the manipulator is skipped and the key frame\nvalue is set by using the ClockTime directly. false by default.\n"},
  {(char*)"GetUseAnimationTime", PyvtkPVAnimationCue_GetUseAnimationTime, METH_VARARGS,
   (char*)"V.GetUseAnimationTime() -> bool\nC++: bool GetUseAnimationTime()\n\nWhen set to true, the manipulator is skipped and the key frame\nvalue is set by using the ClockTime directly. false by default.\n"},
  {(char*)"Initialize", PyvtkPVAnimationCue_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nOverridden to ignore the calls when this->Enabled == false.\n"},
  {(char*)"Tick", PyvtkPVAnimationCue_Tick, METH_VARARGS,
   (char*)"V.Tick(float, float, float)\nC++: virtual void Tick(double currenttime, double deltatime,\n    double clocktime)\n\nOverridden to ignore the calls when this->Enabled == false.\n"},
  {(char*)"Finalize", PyvtkPVAnimationCue_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\nOverridden to ignore the calls when this->Enabled == false.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVAnimationCue_Methods,
    "vtkPVAnimationCue", modulename,
    NULL, NULL,
    PyvtkPVAnimationCue_Doc(),
    PyVTKClass_vtkAnimationCueNew(modulename));
  return cls;
}

const char **PyvtkPVAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkPVAnimationCue - proxy for vtkAnimationCue.\n\n",
    "Superclass: vtkAnimationCue\n\n",
    "This is a proxy for vtkAnimationCue. All animation proxies are client\nside proxies. This class needs a vtkPVCueManipulator. The Manipulator\nperforms the actual interpolation.\n\nSee Also:\n\nvtkAnimationCue vtkSMAnimationSceneProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

