// python wrapper for vtkPVKeyFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVKeyFrame.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVKeyFrame(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVKeyFrame_Doc();


static PyObject *
PyvtkPVKeyFrame_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVKeyFrame::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrame::NewInstance());

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
PyvtkPVKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVKeyFrame *tempr = vtkPVKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_SetKeyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

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
      op->vtkPVKeyFrame::SetKeyTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_GetKeyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyTime() :
      op->vtkPVKeyFrame::GetKeyTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_SetKeyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

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
      op->vtkPVKeyFrame::SetKeyValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVKeyFrame_SetKeyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

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
      op->vtkPVKeyFrame::SetKeyValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVKeyFrame_SetKeyValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVKeyFrame_SetKeyValue_s1(self, args);
    case 2:
      return PyvtkPVKeyFrame_SetKeyValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyValue");
  return NULL;
}



static PyObject *
PyvtkPVKeyFrame_GetKeyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyValue() :
      op->vtkPVKeyFrame::GetKeyValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVKeyFrame_GetKeyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetKeyValue(temp0) :
      op->vtkPVKeyFrame::GetKeyValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVKeyFrame_GetKeyValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVKeyFrame_GetKeyValue_s1(self, args);
    case 1:
      return PyvtkPVKeyFrame_GetKeyValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetKeyValue");
  return NULL;
}



static PyObject *
PyvtkPVKeyFrame_RemoveAllKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllKeyValues();
      }
    else
      {
      op->vtkPVKeyFrame::RemoveAllKeyValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_GetNumberOfKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfKeyValues() :
      op->vtkPVKeyFrame::GetNumberOfKeyValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_SetNumberOfKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

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
      op->vtkPVKeyFrame::SetNumberOfKeyValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrame *op = static_cast<vtkPVKeyFrame *>(vp);

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
      op->vtkPVKeyFrame::UpdateValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVKeyFrame_Methods[] = {
  {(char*)"GetClassName", PyvtkPVKeyFrame_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVKeyFrame_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVKeyFrame_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVKeyFrame_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKeyTime", PyvtkPVKeyFrame_SetKeyTime, METH_VARARGS,
   (char*)"V.SetKeyTime(float)\nC++: void SetKeyTime(double a)\n\nKey time is the time at which this key frame is associated.\nKeyTime ranges from [0,1], where 0 is the start time of the cue\nfor which this is a key frame and 1 is that cue's end time.\n"},
  {(char*)"GetKeyTime", PyvtkPVKeyFrame_GetKeyTime, METH_VARARGS,
   (char*)"V.GetKeyTime() -> float\nC++: double GetKeyTime()\n\nKey time is the time at which this key frame is associated.\nKeyTime ranges from [0,1], where 0 is the start time of the cue\nfor which this is a key frame and 1 is that cue's end time.\n"},
  {(char*)"SetKeyValue", PyvtkPVKeyFrame_SetKeyValue, METH_VARARGS,
   (char*)"V.SetKeyValue(float)\nC++: virtual void SetKeyValue(double val)\nV.SetKeyValue(int, float)\nC++: virtual void SetKeyValue(unsigned int index, double val)\n\nGet/Set the animated value at this key frame. Note that is the\nnumber of values is adjusted to fit the index specified in\nSetKeyValue.\n"},
  {(char*)"GetKeyValue", PyvtkPVKeyFrame_GetKeyValue, METH_VARARGS,
   (char*)"V.GetKeyValue() -> float\nC++: double GetKeyValue()\nV.GetKeyValue(int) -> float\nC++: double GetKeyValue(unsigned int index)\n\nGet/Set the animated value at this key frame. Note that is the\nnumber of values is adjusted to fit the index specified in\nSetKeyValue.\n"},
  {(char*)"RemoveAllKeyValues", PyvtkPVKeyFrame_RemoveAllKeyValues, METH_VARARGS,
   (char*)"V.RemoveAllKeyValues()\nC++: virtual void RemoveAllKeyValues()\n\nRemoves all key values.\n"},
  {(char*)"GetNumberOfKeyValues", PyvtkPVKeyFrame_GetNumberOfKeyValues, METH_VARARGS,
   (char*)"V.GetNumberOfKeyValues() -> int\nC++: unsigned int GetNumberOfKeyValues()\n\nSet/Get the number of key values this key frame currently stores.\n"},
  {(char*)"SetNumberOfKeyValues", PyvtkPVKeyFrame_SetNumberOfKeyValues, METH_VARARGS,
   (char*)"V.SetNumberOfKeyValues(int)\nC++: virtual void SetNumberOfKeyValues(unsigned int num)\n\nSet/Get the number of key values this key frame currently stores.\n"},
  {(char*)"UpdateValue", PyvtkPVKeyFrame_UpdateValue, METH_VARARGS,
   (char*)"V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: virtual void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cue, vtkPVKeyFrame *next)\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVKeyFrame_StaticNew()
{
  return vtkPVKeyFrame::New();
}

PyObject *PyVTKClass_vtkPVKeyFrameNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVKeyFrame_StaticNew,
    PyvtkPVKeyFrame_Methods,
    "vtkPVKeyFrame", modulename,
    NULL, NULL,
    PyvtkPVKeyFrame_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVKeyFrame_Doc()
{
  static const char *docstring[] = {
    "vtkPVKeyFrame\n\n",
    "Superclass: vtkObject\n\n",
    "Base class for key frames. A key frame is responsible to interpolate\nthe curve between it self and a consequent key frame. A new subclass\nis needed for each type of interpolation available between two key\nframes. This class can be instantiated to create a no-action key\nframe.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVKeyFrame(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVKeyFrameNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVKeyFrame", o) != 0)
    {
    Py_DECREF(o);
    }

}

