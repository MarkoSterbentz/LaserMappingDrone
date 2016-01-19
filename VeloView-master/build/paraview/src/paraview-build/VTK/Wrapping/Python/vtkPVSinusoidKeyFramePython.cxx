// python wrapper for vtkPVSinusoidKeyFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSinusoidKeyFrame.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSinusoidKeyFrame(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSinusoidKeyFrameNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameNew
#endif

static const char **PyvtkPVSinusoidKeyFrame_Doc();


static PyObject *
PyvtkPVSinusoidKeyFrame_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSinusoidKeyFrame::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSinusoidKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSinusoidKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSinusoidKeyFrame::NewInstance());

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
PyvtkPVSinusoidKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSinusoidKeyFrame *tempr = vtkPVSinusoidKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

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
      op->vtkPVSinusoidKeyFrame::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

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
      op->vtkPVSinusoidKeyFrame::SetPhase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_GetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhase() :
      op->vtkPVSinusoidKeyFrame::GetPhase());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

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
      op->vtkPVSinusoidKeyFrame::SetFrequency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_GetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFrequency() :
      op->vtkPVSinusoidKeyFrame::GetFrequency());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

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
      op->vtkPVSinusoidKeyFrame::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkPVSinusoidKeyFrame::GetOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSinusoidKeyFrame_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSinusoidKeyFrame_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSinusoidKeyFrame_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSinusoidKeyFrame_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSinusoidKeyFrame\nC++: vtkPVSinusoidKeyFrame *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSinusoidKeyFrame_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSinusoidKeyFrame\nC++: vtkPVSinusoidKeyFrame *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"UpdateValue", PyvtkPVSinusoidKeyFrame_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: virtual void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cue, vtkPVKeyFrame *next)\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {(char*)"SetPhase", PyvtkPVSinusoidKeyFrame_SetPhase, METH_VARARGS,
   (char*)"V.SetPhase(float)\nC++: void SetPhase(double a)\n\nGet/Set the phase for the sine wave.\n"},
  {(char*)"GetPhase", PyvtkPVSinusoidKeyFrame_GetPhase, METH_VARARGS,
   (char*)"V.GetPhase() -> float\nC++: double GetPhase()\n\nGet/Set the phase for the sine wave.\n"},
  {(char*)"SetFrequency", PyvtkPVSinusoidKeyFrame_SetFrequency, METH_VARARGS,
   (char*)"V.SetFrequency(float)\nC++: void SetFrequency(double a)\n\nGet/Set the frequency for the sine wave in number of cycles for\nthe entire length of this keyframe i.e. until the next key frame.\n"},
  {(char*)"GetFrequency", PyvtkPVSinusoidKeyFrame_GetFrequency, METH_VARARGS,
   (char*)"V.GetFrequency() -> float\nC++: double GetFrequency()\n\nGet/Set the frequency for the sine wave in number of cycles for\nthe entire length of this keyframe i.e. until the next key frame.\n"},
  {(char*)"SetOffset", PyvtkPVSinusoidKeyFrame_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double a)\n\nGet/Set the Wave offset.\n"},
  {(char*)"GetOffset", PyvtkPVSinusoidKeyFrame_GetOffset, METH_VARARGS,
   (char*)"V.GetOffset() -> float\nC++: double GetOffset()\n\nGet/Set the Wave offset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSinusoidKeyFrame_StaticNew()
{
  return vtkPVSinusoidKeyFrame::New();
}

PyObject *PyVTKClass_vtkPVSinusoidKeyFrameNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSinusoidKeyFrame_StaticNew,
    PyvtkPVSinusoidKeyFrame_Methods,
    "vtkPVSinusoidKeyFrame", modulename,
    NULL, NULL,
    PyvtkPVSinusoidKeyFrame_Doc(),
    PyVTKClass_vtkPVKeyFrameNew(modulename));
  return cls;
}

const char **PyvtkPVSinusoidKeyFrame_Doc()
{
  static const char *docstring[] = {
    "vtkPVSinusoidKeyFrame\n\n",
    "Superclass: vtkPVKeyFrame\n\n",
    "Interplates a sinusoid. At any given time t, the resultant value\nobtained from this keyframe is given by : value = this->Offset + (Key\nValue) * Sin (2*pi*theta); where theta = this->Frequency*t +\n(this->Phase/360). As is clear from  the equation, the amplitude of\nthe wave is obtained from the value of the keyframe.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSinusoidKeyFrame(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSinusoidKeyFrameNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSinusoidKeyFrame", o) != 0)
    {
    Py_DECREF(o);
    }

}

