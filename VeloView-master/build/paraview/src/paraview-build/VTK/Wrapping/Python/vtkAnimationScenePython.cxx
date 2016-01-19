// python wrapper for vtkAnimationScene
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnimationScene.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnimationScene(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnimationSceneNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationCueNew
#endif

static const char **PyvtkAnimationScene_Doc();

#ifndef DECLARED_PyvtkAnimationScene_PlayModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAnimationScene_PlayModes_Type;
#define DECLARED_PyvtkAnimationScene_PlayModes_Type
#endif

PyTypeObject PyvtkAnimationScene_PlayModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"PlayModes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkAnimationScene_PlayModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAnimationScene_PlayModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAnimationScene_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnimationScene::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationScene::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnimationScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationScene::NewInstance());

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
PyvtkAnimationScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnimationScene *tempr = vtkAnimationScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlayMode(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetPlayMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToSequence();
      }
    else
      {
      op->vtkAnimationScene::SetModeToSequence();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToRealTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRealTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToRealTime();
      }
    else
      {
      op->vtkAnimationScene::SetModeToRealTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPlayMode() :
      op->vtkAnimationScene::GetPlayMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrameRate(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetFrameRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFrameRate() :
      op->vtkAnimationScene::GetFrameRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
    {
    if (ap.IsBound())
      {
      op->AddCue(temp0);
      }
    else
      {
      op->vtkAnimationScene::AddCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
    {
    if (ap.IsBound())
      {
      op->RemoveCue(temp0);
      }
    else
      {
      op->vtkAnimationScene::RemoveCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveAllCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllCues();
      }
    else
      {
      op->vtkAnimationScene::RemoveAllCues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetNumberOfCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCues() :
      op->vtkAnimationScene::GetNumberOfCues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkAnimationScene::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkAnimationScene::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
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
      op->vtkAnimationScene::SetLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkAnimationScene::GetLoop());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationTime(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetAnimationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAnimationTime() :
      op->vtkAnimationScene::GetAnimationTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeMode(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetTimeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsInPlay() :
      op->vtkAnimationScene::IsInPlay());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnimationScene_Methods[] = {
  {(char*)"GetClassName", PyvtkAnimationScene_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnimationScene_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnimationScene_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnimationScene\nC++: vtkAnimationScene *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnimationScene_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnimationScene\nC++: vtkAnimationScene *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlayMode", PyvtkAnimationScene_SetPlayMode, METH_VARARGS,
   (char*)"V.SetPlayMode(int)\nC++: void SetPlayMode(int a)\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"SetModeToSequence", PyvtkAnimationScene_SetModeToSequence, METH_VARARGS,
   (char*)"V.SetModeToSequence()\nC++: void SetModeToSequence()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"SetModeToRealTime", PyvtkAnimationScene_SetModeToRealTime, METH_VARARGS,
   (char*)"V.SetModeToRealTime()\nC++: void SetModeToRealTime()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"GetPlayMode", PyvtkAnimationScene_GetPlayMode, METH_VARARGS,
   (char*)"V.GetPlayMode() -> int\nC++: int GetPlayMode()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"SetFrameRate", PyvtkAnimationScene_SetFrameRate, METH_VARARGS,
   (char*)"V.SetFrameRate(float)\nC++: void SetFrameRate(double a)\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {(char*)"GetFrameRate", PyvtkAnimationScene_GetFrameRate, METH_VARARGS,
   (char*)"V.GetFrameRate() -> float\nC++: double GetFrameRate()\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {(char*)"AddCue", PyvtkAnimationScene_AddCue, METH_VARARGS,
   (char*)"V.AddCue(vtkAnimationCue)\nC++: void AddCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"RemoveCue", PyvtkAnimationScene_RemoveCue, METH_VARARGS,
   (char*)"V.RemoveCue(vtkAnimationCue)\nC++: void RemoveCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"RemoveAllCues", PyvtkAnimationScene_RemoveAllCues, METH_VARARGS,
   (char*)"V.RemoveAllCues()\nC++: void RemoveAllCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"GetNumberOfCues", PyvtkAnimationScene_GetNumberOfCues, METH_VARARGS,
   (char*)"V.GetNumberOfCues() -> int\nC++: int GetNumberOfCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"Play", PyvtkAnimationScene_Play, METH_VARARGS,
   (char*)"V.Play()\nC++: virtual void Play()\n\nStarts playing the animation scene. Fires a\nvtkCommand::StartEvent before play beings and\nvtkCommand::EndEvent after play ends.\n"},
  {(char*)"Stop", PyvtkAnimationScene_Stop, METH_VARARGS,
   (char*)"V.Stop()\nC++: void Stop()\n\nStops the animation scene that is running.\n"},
  {(char*)"SetLoop", PyvtkAnimationScene_SetLoop, METH_VARARGS,
   (char*)"V.SetLoop(int)\nC++: void SetLoop(int a)\n\nEnable/Disable animation loop.\n"},
  {(char*)"GetLoop", PyvtkAnimationScene_GetLoop, METH_VARARGS,
   (char*)"V.GetLoop() -> int\nC++: int GetLoop()\n\nEnable/Disable animation loop.\n"},
  {(char*)"SetAnimationTime", PyvtkAnimationScene_SetAnimationTime, METH_VARARGS,
   (char*)"V.SetAnimationTime(float)\nC++: void SetAnimationTime(double time)\n\nMakes the state of the scene same as the given time.\n"},
  {(char*)"GetAnimationTime", PyvtkAnimationScene_GetAnimationTime, METH_VARARGS,
   (char*)"V.GetAnimationTime() -> float\nC++: double GetAnimationTime()\n\nMakes the state of the scene same as the given time.\n"},
  {(char*)"SetTimeMode", PyvtkAnimationScene_SetTimeMode, METH_VARARGS,
   (char*)"V.SetTimeMode(int)\nC++: virtual void SetTimeMode(int mode)\n\nOverridden to allow change to Normalized mode only if none of the\nconstituent cues is in Relative time mode.\n"},
  {(char*)"IsInPlay", PyvtkAnimationScene_IsInPlay, METH_VARARGS,
   (char*)"V.IsInPlay() -> int\nC++: int IsInPlay()\n\nReturns if the animation is being played.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnimationScene_StaticNew()
{
  return vtkAnimationScene::New();
}

PyObject *PyVTKClass_vtkAnimationSceneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnimationScene_StaticNew,
    PyvtkAnimationScene_Methods,
    "vtkAnimationScene", modulename,
    NULL, NULL,
    PyvtkAnimationScene_Doc(),
    PyVTKClass_vtkAnimationCueNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAnimationScene_PlayModes_Type);
    PyvtkAnimationScene_PlayModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAnimationScene_PlayModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"PlayModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkAnimationScene::PlayModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "PLAYMODE_SEQUENCE", vtkAnimationScene::PLAYMODE_SEQUENCE },
          { "PLAYMODE_REALTIME", vtkAnimationScene::PLAYMODE_REALTIME },
        };

      o = PyvtkAnimationScene_PlayModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAnimationScene_Doc()
{
  static const char *docstring[] = {
    "vtkAnimationScene - the animation scene manager.\n\n",
    "Superclass: vtkAnimationCue\n\n",
    "vtkAnimationCue and vtkAnimationScene provide the framework to\nsupport animations in VTK. vtkAnimationCue represents an entity that\nchanges/ animates with time, while vtkAnimationScene represents scene\nor setup for the animation, which consists of individual cues or\nother scenes.\n\nA scene can be played in real time mode, or as a seqence of frames\n1/frame rate apart in time.\n\nSee Also:\n\nvtkAnimatio",
    "nCue\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnimationScene(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnimationSceneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnimationScene", o) != 0)
    {
    Py_DECREF(o);
    }

}

