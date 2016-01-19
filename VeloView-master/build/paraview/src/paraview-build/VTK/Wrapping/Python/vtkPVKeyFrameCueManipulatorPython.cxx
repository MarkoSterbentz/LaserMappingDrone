// python wrapper for vtkPVKeyFrameCueManipulator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVKeyFrameCueManipulator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVKeyFrameCueManipulator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVKeyFrameCueManipulatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVCueManipulatorNew
extern "C" { PyObject *PyVTKClass_vtkPVCueManipulatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVCueManipulatorNew
#endif

static const char **PyvtkPVKeyFrameCueManipulator_Doc();


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVKeyFrameCueManipulator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrameCueManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVKeyFrameCueManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrameCueManipulator::NewInstance());

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
PyvtkPVKeyFrameCueManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVKeyFrameCueManipulator *tempr = vtkPVKeyFrameCueManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_AddKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
    {
    int tempr = (ap.IsBound() ?
      op->AddKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::AddKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetLastAddedKeyFrameIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAddedKeyFrameIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLastAddedKeyFrameIndex() :
      op->vtkPVKeyFrameCueManipulator::GetLastAddedKeyFrameIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_RemoveKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

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
      op->vtkPVKeyFrameCueManipulator::RemoveKeyFrame(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_RemoveAllKeyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllKeyFrames();
      }
    else
      {
      op->vtkPVKeyFrameCueManipulator::RemoveAllKeyFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetStartKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetStartKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetStartKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetEndKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetEndKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetEndKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetNextKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetNextKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetNextKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetPreviousKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetPreviousKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetPreviousKeyFrame(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetNumberOfKeyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfKeyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfKeyFrames() :
      op->vtkPVKeyFrameCueManipulator::GetNumberOfKeyFrames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetKeyFrameAtIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyFrameAtIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetKeyFrameAtIndex(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetKeyFrameAtIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVKeyFrameCueManipulator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVKeyFrameCueManipulator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVKeyFrameCueManipulator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVKeyFrameCueManipulator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVKeyFrameCueManipulator\nC++: vtkPVKeyFrameCueManipulator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVKeyFrameCueManipulator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVKeyFrameCueManipulator\nC++: vtkPVKeyFrameCueManipulator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddKeyFrame", PyvtkPVKeyFrameCueManipulator_AddKeyFrame, METH_VARARGS,
   (char*)"V.AddKeyFrame(vtkPVKeyFrame) -> int\nC++: int AddKeyFrame(vtkPVKeyFrame *keyframe)\n\nAdd a key frame. Key frames are stored in a map, keyed by the\nKeyFrameTime. If two keyframes have the same key time, only one\nof then will be considered. It returns the index of the added\nframe in the collection.\n"},
  {(char*)"GetLastAddedKeyFrameIndex", PyvtkPVKeyFrameCueManipulator_GetLastAddedKeyFrameIndex, METH_VARARGS,
   (char*)"V.GetLastAddedKeyFrameIndex() -> int\nC++: int GetLastAddedKeyFrameIndex()\n\nThis method returns the index of the last added key frame. Note\nthat this index is valid only until none of the keyframes are\nmodified. This is even provided as a method so that this value\ncan be accessed via properties.\n"},
  {(char*)"RemoveKeyFrame", PyvtkPVKeyFrameCueManipulator_RemoveKeyFrame, METH_VARARGS,
   (char*)"V.RemoveKeyFrame(vtkPVKeyFrame)\nC++: void RemoveKeyFrame(vtkPVKeyFrame *keyframe)\n\nRemoves a key frame at the specified time, if any.\n"},
  {(char*)"RemoveAllKeyFrames", PyvtkPVKeyFrameCueManipulator_RemoveAllKeyFrames, METH_VARARGS,
   (char*)"V.RemoveAllKeyFrames()\nC++: void RemoveAllKeyFrames()\n\nRemoves all key frames, if any.\n"},
  {(char*)"GetKeyFrame", PyvtkPVKeyFrameCueManipulator_GetKeyFrame, METH_VARARGS,
   (char*)"V.GetKeyFrame(float) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetKeyFrame(double time)\n\nReturns a pointer to the key frame at the given time. If no key\nframe exists at the given time, it returns NULL.\n"},
  {(char*)"GetStartKeyFrame", PyvtkPVKeyFrameCueManipulator_GetStartKeyFrame, METH_VARARGS,
   (char*)"V.GetStartKeyFrame(float) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetStartKeyFrame(double time)\n\nGiven the current time, determine the key frames between which\nthe current time lies. Returns the key frame time. If the current\ntime coincides with a key frame, both methods\n(GetStartKeyFrameTime and GetEndKeyFrameTime) return that key\nkeyframes time which is same as time. If the current time is\nbefore the first key frame or after the last key frame, then this\nmethod return -1.\n"},
  {(char*)"GetEndKeyFrame", PyvtkPVKeyFrameCueManipulator_GetEndKeyFrame, METH_VARARGS,
   (char*)"V.GetEndKeyFrame(float) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetEndKeyFrame(double time)\n\nGiven the current time, determine the key frames between which\nthe current time lies. Returns the key frame time. If the current\ntime coincides with a key frame, both methods\n(GetStartKeyFrameTime and GetEndKeyFrameTime) return that key\nkeyframes time which is same as time. If the current time is\nbefore the first key frame or after the last key frame, then this\nmethod return -1.\n"},
  {(char*)"GetNextKeyFrame", PyvtkPVKeyFrameCueManipulator_GetNextKeyFrame, METH_VARARGS,
   (char*)"V.GetNextKeyFrame(vtkPVKeyFrame) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetNextKeyFrame(vtkPVKeyFrame *keyFrame)\n\nGet the next/previous key frame relative to argument key frame.\nReturns NULL when no next/previous frame exists.\n"},
  {(char*)"GetPreviousKeyFrame", PyvtkPVKeyFrameCueManipulator_GetPreviousKeyFrame, METH_VARARGS,
   (char*)"V.GetPreviousKeyFrame(vtkPVKeyFrame) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetPreviousKeyFrame(vtkPVKeyFrame *keyFrame)\n\nGet the next/previous key frame relative to argument key frame.\nReturns NULL when no next/previous frame exists.\n"},
  {(char*)"GetNumberOfKeyFrames", PyvtkPVKeyFrameCueManipulator_GetNumberOfKeyFrames, METH_VARARGS,
   (char*)"V.GetNumberOfKeyFrames() -> int\nC++: unsigned int GetNumberOfKeyFrames()\n\nGet the number of keyframes.\n"},
  {(char*)"GetKeyFrameAtIndex", PyvtkPVKeyFrameCueManipulator_GetKeyFrameAtIndex, METH_VARARGS,
   (char*)"V.GetKeyFrameAtIndex(int) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetKeyFrameAtIndex(int index)\n\nAccess the keyframe collection using the indices. Keyframes are\nsorted according to increasing key frame time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVKeyFrameCueManipulator_StaticNew()
{
  return vtkPVKeyFrameCueManipulator::New();
}

PyObject *PyVTKClass_vtkPVKeyFrameCueManipulatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVKeyFrameCueManipulator_StaticNew,
    PyvtkPVKeyFrameCueManipulator_Methods,
    "vtkPVKeyFrameCueManipulator", modulename,
    NULL, NULL,
    PyvtkPVKeyFrameCueManipulator_Doc(),
    PyVTKClass_vtkPVCueManipulatorNew(modulename));
  return cls;
}

const char **PyvtkPVKeyFrameCueManipulator_Doc()
{
  static const char *docstring[] = {
    "vtkPVKeyFrameCueManipulator - animation manipulator\n\n",
    "Superclass: vtkPVCueManipulator\n\n",
    "This is a Manipulator that support key framing. Key frames are stored\nin a vector ordered by their keyframe time. Ordering of keyframes\nwith same key time is arbritary. This class ensures that the\nkeyframes are always maintained in the correct order. How the values\nfor the animated property are interpolated between successive\nkeyframes depends on the the type of the preceding keyframe. Thus\nthis c",
    "lass doesn't perform the interpolation instead delegates it to\nthe keyframe object affecting the property at the current time value.\n\\li vtkPVCueManipulator::StateModifiedEvent -\nThis event is fired when the manipulator modifies the animated proxy.\n\\li vtkCommand::ModifiedEvent -\nis fired when the keyframes are changed i.e. added/removed/modified.\n\nSee Also:\n\nvtkPVAnimationCue vtkPVCueManipulator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVKeyFrameCueManipulator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVKeyFrameCueManipulatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVKeyFrameCueManipulator", o) != 0)
    {
    Py_DECREF(o);
    }

}

