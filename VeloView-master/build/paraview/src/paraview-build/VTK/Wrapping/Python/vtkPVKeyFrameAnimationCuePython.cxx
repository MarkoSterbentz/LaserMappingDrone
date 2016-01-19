// python wrapper for vtkPVKeyFrameAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVKeyFrameAnimationCue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVKeyFrameAnimationCue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVKeyFrameAnimationCueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkPVAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVAnimationCueNew
#endif

static const char **PyvtkPVKeyFrameAnimationCue_Doc();


static PyObject *
PyvtkPVKeyFrameAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVKeyFrameAnimationCue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrameAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVKeyFrameAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrameAnimationCue::NewInstance());

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
PyvtkPVKeyFrameAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVKeyFrameAnimationCue *tempr = vtkPVKeyFrameAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_AddKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  vtkPVKeyFrame *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
    {
    int tempr = (ap.IsBound() ?
      op->AddKeyFrame(temp0) :
      op->vtkPVKeyFrameAnimationCue::AddKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_GetLastAddedKeyFrameIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAddedKeyFrameIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastAddedKeyFrameIndex() :
      op->vtkPVKeyFrameAnimationCue::GetLastAddedKeyFrameIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_RemoveKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  vtkPVKeyFrame *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
    {
    if (ap.IsBound())
      {
      op->RemoveKeyFrame(temp0);
      }
    else
      {
      op->vtkPVKeyFrameAnimationCue::RemoveKeyFrame(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_RemoveAllKeyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllKeyFrames();
      }
    else
      {
      op->vtkPVKeyFrameAnimationCue::RemoveAllKeyFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVKeyFrameAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkPVKeyFrameAnimationCue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVKeyFrameAnimationCue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVKeyFrameAnimationCue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVKeyFrameAnimationCue\nC++: vtkPVKeyFrameAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVKeyFrameAnimationCue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVKeyFrameAnimationCue\nC++: vtkPVKeyFrameAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddKeyFrame", PyvtkPVKeyFrameAnimationCue_AddKeyFrame, METH_VARARGS,
   (char*)"V.AddKeyFrame(vtkPVKeyFrame) -> int\nC++: int AddKeyFrame(vtkPVKeyFrame *keyframe)\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {(char*)"GetLastAddedKeyFrameIndex", PyvtkPVKeyFrameAnimationCue_GetLastAddedKeyFrameIndex, METH_VARARGS,
   (char*)"V.GetLastAddedKeyFrameIndex() -> int\nC++: int GetLastAddedKeyFrameIndex()\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {(char*)"RemoveKeyFrame", PyvtkPVKeyFrameAnimationCue_RemoveKeyFrame, METH_VARARGS,
   (char*)"V.RemoveKeyFrame(vtkPVKeyFrame)\nC++: void RemoveKeyFrame(vtkPVKeyFrame *)\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {(char*)"RemoveAllKeyFrames", PyvtkPVKeyFrameAnimationCue_RemoveAllKeyFrames, METH_VARARGS,
   (char*)"V.RemoveAllKeyFrames()\nC++: void RemoveAllKeyFrames()\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVKeyFrameAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVKeyFrameAnimationCue_Methods,
    "vtkPVKeyFrameAnimationCue", modulename,
    NULL, NULL,
    PyvtkPVKeyFrameAnimationCue_Doc(),
    PyVTKClass_vtkPVAnimationCueNew(modulename));
  return cls;
}

const char **PyvtkPVKeyFrameAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkPVKeyFrameAnimationCue\n\n",
    "Superclass: vtkPVAnimationCue\n\n",
    "vtkPVKeyFrameAnimationCue is a specialization of vtkPVAnimationCue\nthat uses the vtkPVKeyFrameCueManipulator as the manipulator.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVKeyFrameAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVKeyFrameAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVKeyFrameAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

