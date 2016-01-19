// python wrapper for vtkAnimationPlayer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnimationPlayer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnimationPlayer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnimationPlayerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAnimationPlayer_Doc();


static PyObject *
PyvtkAnimationPlayer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnimationPlayer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationPlayer::NewInstance());

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
PyvtkAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnimationPlayer *tempr = vtkAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_SetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  vtkSMAnimationScene *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMAnimationScene"))
    {
    if (ap.IsBound())
      {
      op->SetAnimationScene(temp0);
      }
    else
      {
      op->vtkAnimationPlayer::SetAnimationScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationScene *tempr = (ap.IsBound() ?
      op->GetAnimationScene() :
      op->vtkAnimationPlayer::GetAnimationScene());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkAnimationPlayer::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkAnimationPlayer::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_IsInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsInPlay() :
      op->vtkAnimationPlayer::IsInPlay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GetInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetInPlay() :
      op->vtkAnimationPlayer::GetInPlay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLoop(temp0);
      }
    else
      {
      op->vtkAnimationPlayer::SetLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkAnimationPlayer::GetLoop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToNext();
      }
    else
      {
      op->vtkAnimationPlayer::GoToNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToPrevious(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToPrevious");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToPrevious();
      }
    else
      {
      op->vtkAnimationPlayer::GoToPrevious();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToFirst();
      }
    else
      {
      op->vtkAnimationPlayer::GoToFirst();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToLast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToLast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GoToLast();
      }
    else
      {
      op->vtkAnimationPlayer::GoToLast();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAnimationPlayer_Methods[] = {
  {(char*)"GetClassName", PyvtkAnimationPlayer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnimationPlayer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnimationPlayer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnimationPlayer\nC++: vtkAnimationPlayer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnimationPlayer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnimationPlayer\nC++: vtkAnimationPlayer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAnimationScene", PyvtkAnimationPlayer_SetAnimationScene, METH_VARARGS,
   (char*)"V.SetAnimationScene(vtkSMAnimationScene)\nC++: virtual void SetAnimationScene(vtkSMAnimationScene *)\n\nSet the animation scene that is to be played by this player. Note\nthat the animation scene is not reference counted to avoid loops.\n"},
  {(char*)"GetAnimationScene", PyvtkAnimationPlayer_GetAnimationScene, METH_VARARGS,
   (char*)"V.GetAnimationScene() -> vtkSMAnimationScene\nC++: vtkSMAnimationScene *GetAnimationScene()\n\nSet the animation scene that is to be played by this player. Note\nthat the animation scene is not reference counted to avoid loops.\n"},
  {(char*)"Play", PyvtkAnimationPlayer_Play, METH_VARARGS,
   (char*)"V.Play()\nC++: void Play()\n\nStart playing the animation. Fires StartEvent when play begins\nand EndEvent when play stops.\n"},
  {(char*)"Stop", PyvtkAnimationPlayer_Stop, METH_VARARGS,
   (char*)"V.Stop()\nC++: void Stop()\n\nStop playing the animation.\n"},
  {(char*)"IsInPlay", PyvtkAnimationPlayer_IsInPlay, METH_VARARGS,
   (char*)"V.IsInPlay() -> int\nC++: int IsInPlay()\n\nReturns if the animation is currently playing.\n"},
  {(char*)"GetInPlay", PyvtkAnimationPlayer_GetInPlay, METH_VARARGS,
   (char*)"V.GetInPlay() -> bool\nC++: bool GetInPlay()\n\nReturns if the animation is currently playing.\n"},
  {(char*)"SetLoop", PyvtkAnimationPlayer_SetLoop, METH_VARARGS,
   (char*)"V.SetLoop(bool)\nC++: void SetLoop(bool a)\n\nSet to true to play the animation in a loop.\n"},
  {(char*)"GetLoop", PyvtkAnimationPlayer_GetLoop, METH_VARARGS,
   (char*)"V.GetLoop() -> bool\nC++: bool GetLoop()\n\nSet to true to play the animation in a loop.\n"},
  {(char*)"GoToNext", PyvtkAnimationPlayer_GoToNext, METH_VARARGS,
   (char*)"V.GoToNext()\nC++: void GoToNext()\n\nTake the animation scene to next frame.\n"},
  {(char*)"GoToPrevious", PyvtkAnimationPlayer_GoToPrevious, METH_VARARGS,
   (char*)"V.GoToPrevious()\nC++: void GoToPrevious()\n\nTake animation scene to previous frame.\n"},
  {(char*)"GoToFirst", PyvtkAnimationPlayer_GoToFirst, METH_VARARGS,
   (char*)"V.GoToFirst()\nC++: void GoToFirst()\n\nTake animation scene to first frame.\n"},
  {(char*)"GoToLast", PyvtkAnimationPlayer_GoToLast, METH_VARARGS,
   (char*)"V.GoToLast()\nC++: void GoToLast()\n\nTake animation scene to last frame.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAnimationPlayerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAnimationPlayer_Methods,
    "vtkAnimationPlayer", modulename,
    NULL, NULL,
    PyvtkAnimationPlayer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAnimationPlayer_Doc()
{
  static const char *docstring[] = {
    "vtkAnimationPlayer\n\n",
    "Superclass: vtkObject\n\n",
    "Abstract superclass for an animation player.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnimationPlayer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnimationPlayerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnimationPlayer", o) != 0)
    {
    Py_DECREF(o);
    }

}

