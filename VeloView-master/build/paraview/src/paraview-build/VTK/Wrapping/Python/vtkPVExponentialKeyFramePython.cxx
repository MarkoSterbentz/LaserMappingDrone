// python wrapper for vtkPVExponentialKeyFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVExponentialKeyFrame.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVExponentialKeyFrame(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVExponentialKeyFrameNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameNew
#endif

static const char **PyvtkPVExponentialKeyFrame_Doc();


static PyObject *
PyvtkPVExponentialKeyFrame_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVExponentialKeyFrame::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExponentialKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVExponentialKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExponentialKeyFrame::NewInstance());

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
PyvtkPVExponentialKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVExponentialKeyFrame *tempr = vtkPVExponentialKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

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
      op->vtkPVExponentialKeyFrame::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SetBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

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
      op->vtkPVExponentialKeyFrame::SetBase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_GetBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBase() :
      op->vtkPVExponentialKeyFrame::GetBase());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SetStartPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

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
      op->vtkPVExponentialKeyFrame::SetStartPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_GetStartPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartPower() :
      op->vtkPVExponentialKeyFrame::GetStartPower());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SetEndPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

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
      op->vtkPVExponentialKeyFrame::SetEndPower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_GetEndPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndPower() :
      op->vtkPVExponentialKeyFrame::GetEndPower());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVExponentialKeyFrame_Methods[] = {
  {(char*)"GetClassName", PyvtkPVExponentialKeyFrame_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVExponentialKeyFrame_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVExponentialKeyFrame_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVExponentialKeyFrame\nC++: vtkPVExponentialKeyFrame *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVExponentialKeyFrame_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVExponentialKeyFrame\nC++: vtkPVExponentialKeyFrame *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateValue", PyvtkPVExponentialKeyFrame_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: virtual void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cue, vtkPVKeyFrame *next)\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {(char*)"SetBase", PyvtkPVExponentialKeyFrame_SetBase, METH_VARARGS,
   (char*)"V.SetBase(float)\nC++: void SetBase(double a)\n\nBase to be used for exponential function.\n"},
  {(char*)"GetBase", PyvtkPVExponentialKeyFrame_GetBase, METH_VARARGS,
   (char*)"V.GetBase() -> float\nC++: double GetBase()\n\nBase to be used for exponential function.\n"},
  {(char*)"SetStartPower", PyvtkPVExponentialKeyFrame_SetStartPower, METH_VARARGS,
   (char*)"V.SetStartPower(float)\nC++: void SetStartPower(double a)\n\n"},
  {(char*)"GetStartPower", PyvtkPVExponentialKeyFrame_GetStartPower, METH_VARARGS,
   (char*)"V.GetStartPower() -> float\nC++: double GetStartPower()\n\n"},
  {(char*)"SetEndPower", PyvtkPVExponentialKeyFrame_SetEndPower, METH_VARARGS,
   (char*)"V.SetEndPower(float)\nC++: void SetEndPower(double a)\n\n"},
  {(char*)"GetEndPower", PyvtkPVExponentialKeyFrame_GetEndPower, METH_VARARGS,
   (char*)"V.GetEndPower() -> float\nC++: double GetEndPower()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVExponentialKeyFrame_StaticNew()
{
  return vtkPVExponentialKeyFrame::New();
}

PyObject *PyVTKClass_vtkPVExponentialKeyFrameNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVExponentialKeyFrame_StaticNew,
    PyvtkPVExponentialKeyFrame_Methods,
    "vtkPVExponentialKeyFrame", modulename,
    NULL, NULL,
    PyvtkPVExponentialKeyFrame_Doc(),
    PyVTKClass_vtkPVKeyFrameNew(modulename));
  return cls;
}

const char **PyvtkPVExponentialKeyFrame_Doc()
{
  static const char *docstring[] = {
    "vtkPVExponentialKeyFrame\n\n",
    "Superclass: vtkPVKeyFrame\n\n",
    "Interplates lineraly between consequtive key frames.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVExponentialKeyFrame(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVExponentialKeyFrameNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVExponentialKeyFrame", o) != 0)
    {
    Py_DECREF(o);
    }

}

