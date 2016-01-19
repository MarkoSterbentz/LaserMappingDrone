// python wrapper for vtkSequenceAnimationPlayer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSequenceAnimationPlayer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSequenceAnimationPlayer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSequenceAnimationPlayerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationPlayerNew
extern "C" { PyObject *PyVTKClass_vtkAnimationPlayerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationPlayerNew
#endif

static const char **PyvtkSequenceAnimationPlayer_Doc();


static PyObject *
PyvtkSequenceAnimationPlayer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSequenceAnimationPlayer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSequenceAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSequenceAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSequenceAnimationPlayer::NewInstance());

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
PyvtkSequenceAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSequenceAnimationPlayer *tempr = vtkSequenceAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfFrames(temp0);
      }
    else
      {
      op->vtkSequenceAnimationPlayer::SetNumberOfFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_GetNumberOfFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMinValue() :
      op->vtkSequenceAnimationPlayer::GetNumberOfFramesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_GetNumberOfFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMaxValue() :
      op->vtkSequenceAnimationPlayer::GetNumberOfFramesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkSequenceAnimationPlayer::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSequenceAnimationPlayer_Methods[] = {
  {(char*)"GetClassName", PyvtkSequenceAnimationPlayer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSequenceAnimationPlayer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSequenceAnimationPlayer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSequenceAnimationPlayer\nC++: vtkSequenceAnimationPlayer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSequenceAnimationPlayer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSequenceAnimationPlayer\nC++: vtkSequenceAnimationPlayer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfFrames", PyvtkSequenceAnimationPlayer_SetNumberOfFrames, METH_VARARGS,
   (char*)"V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int)\n\n"},
  {(char*)"GetNumberOfFramesMinValue", PyvtkSequenceAnimationPlayer_GetNumberOfFramesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfFramesMinValue() -> int\nC++: int GetNumberOfFramesMinValue()\n\n"},
  {(char*)"GetNumberOfFramesMaxValue", PyvtkSequenceAnimationPlayer_GetNumberOfFramesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfFramesMaxValue() -> int\nC++: int GetNumberOfFramesMaxValue()\n\n"},
  {(char*)"GetNumberOfFrames", PyvtkSequenceAnimationPlayer_GetNumberOfFrames, METH_VARARGS,
   (char*)"V.GetNumberOfFrames() -> int\nC++: int GetNumberOfFrames()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSequenceAnimationPlayer_StaticNew()
{
  return vtkSequenceAnimationPlayer::New();
}

PyObject *PyVTKClass_vtkSequenceAnimationPlayerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSequenceAnimationPlayer_StaticNew,
    PyvtkSequenceAnimationPlayer_Methods,
    "vtkSequenceAnimationPlayer", modulename,
    NULL, NULL,
    PyvtkSequenceAnimationPlayer_Doc(),
    PyVTKClass_vtkAnimationPlayerNew(modulename));
  return cls;
}

const char **PyvtkSequenceAnimationPlayer_Doc()
{
  static const char *docstring[] = {
    "vtkSequenceAnimationPlayer\n\n",
    "Superclass: vtkAnimationPlayer\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSequenceAnimationPlayer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSequenceAnimationPlayerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSequenceAnimationPlayer", o) != 0)
    {
    Py_DECREF(o);
    }

}

