// python wrapper for vtkAnimationCue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnimationCue.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnimationCue(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAnimationCue_Doc();

#ifndef DECLARED_PyvtkAnimationCue_TimeCodes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAnimationCue_TimeCodes_Type;
#define DECLARED_PyvtkAnimationCue_TimeCodes_Type
#endif

PyTypeObject PyvtkAnimationCue_TimeCodes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"TimeCodes", // tp_name
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

PyObject *PyvtkAnimationCue_TimeCodes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAnimationCue_TimeCodes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnimationCue::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationCue::NewInstance());

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
PyvtkAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnimationCue *tempr = vtkAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

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
      op->vtkAnimationCue::SetTimeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeMode() :
      op->vtkAnimationCue::GetTimeMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeModeToRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeModeToRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTimeModeToRelative();
      }
    else
      {
      op->vtkAnimationCue::SetTimeModeToRelative();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeModeToNormalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeModeToNormalized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTimeModeToNormalized();
      }
    else
      {
      op->vtkAnimationCue::SetTimeModeToNormalized();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartTime(temp0);
      }
    else
      {
      op->vtkAnimationCue::SetStartTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStartTime() :
      op->vtkAnimationCue::GetStartTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndTime(temp0);
      }
    else
      {
      op->vtkAnimationCue::SetEndTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEndTime() :
      op->vtkAnimationCue::GetEndTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_Tick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

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
      op->vtkAnimationCue::Tick(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAnimationCue::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkAnimationCue::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAnimationTime() :
      op->vtkAnimationCue::GetAnimationTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetDeltaTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDeltaTime() :
      op->vtkAnimationCue::GetDeltaTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetClockTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetClockTime() :
      op->vtkAnimationCue::GetClockTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkAnimationCue_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnimationCue_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnimationCue_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnimationCue\nC++: vtkAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnimationCue_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnimationCue\nC++: vtkAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeMode", PyvtkAnimationCue_SetTimeMode, METH_VARARGS,
   (char*)"V.SetTimeMode(int)\nC++: virtual void SetTimeMode(int mode)\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"GetTimeMode", PyvtkAnimationCue_GetTimeMode, METH_VARARGS,
   (char*)"V.GetTimeMode() -> int\nC++: int GetTimeMode()\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"SetTimeModeToRelative", PyvtkAnimationCue_SetTimeModeToRelative, METH_VARARGS,
   (char*)"V.SetTimeModeToRelative()\nC++: void SetTimeModeToRelative()\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"SetTimeModeToNormalized", PyvtkAnimationCue_SetTimeModeToNormalized, METH_VARARGS,
   (char*)"V.SetTimeModeToNormalized()\nC++: void SetTimeModeToNormalized()\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"SetStartTime", PyvtkAnimationCue_SetStartTime, METH_VARARGS,
   (char*)"V.SetStartTime(float)\nC++: void SetStartTime(double a)\n\nGet/Set the Start time for this cue. When the current time is >=\nStartTime, the Cue is in ACTIVE state. if Current time i <\nStartTime, the Cue is in UNINITIALIZED state. Whenever the cue\nenters the ACTIVE state from an INACTIVE state, it triggers the\nStartEvent. The Start time is in seconds relative to the start of\nthe container Scene (when in Relative time mode) or is normalized\nover the span of the container Scene (when in Normalized time\nmode).\n"},
  {(char*)"GetStartTime", PyvtkAnimationCue_GetStartTime, METH_VARARGS,
   (char*)"V.GetStartTime() -> float\nC++: double GetStartTime()\n\nGet/Set the Start time for this cue. When the current time is >=\nStartTime, the Cue is in ACTIVE state. if Current time i <\nStartTime, the Cue is in UNINITIALIZED state. Whenever the cue\nenters the ACTIVE state from an INACTIVE state, it triggers the\nStartEvent. The Start time is in seconds relative to the start of\nthe container Scene (when in Relative time mode) or is normalized\nover the span of the container Scene (when in Normalized time\nmode).\n"},
  {(char*)"SetEndTime", PyvtkAnimationCue_SetEndTime, METH_VARARGS,
   (char*)"V.SetEndTime(float)\nC++: void SetEndTime(double a)\n\nGet/Set the End time for this cue. When the current time is >\nEndTime, the Cue is in INACTIVE state. Whenever the cue leaves an\nACTIVE state to enter INACTIVE state, the EndEvent is triggered.\nThe End time is in seconds relative to the start of the container\nScene (when in Relative time mode) or is normalized over the span\nof the container Scene (when in Normalized time mode).\n"},
  {(char*)"GetEndTime", PyvtkAnimationCue_GetEndTime, METH_VARARGS,
   (char*)"V.GetEndTime() -> float\nC++: double GetEndTime()\n\nGet/Set the End time for this cue. When the current time is >\nEndTime, the Cue is in INACTIVE state. Whenever the cue leaves an\nACTIVE state to enter INACTIVE state, the EndEvent is triggered.\nThe End time is in seconds relative to the start of the container\nScene (when in Relative time mode) or is normalized over the span\nof the container Scene (when in Normalized time mode).\n"},
  {(char*)"Tick", PyvtkAnimationCue_Tick, METH_VARARGS,
   (char*)"V.Tick(float, float, float)\nC++: virtual void Tick(double currenttime, double deltatime,\n    double clocktime)\n\nIndicates a tick or point in time in the animation. Triggers a\nTick event if currenttime >= StartTime and currenttime <=\nEndTime. Whenever the state of the cue changes, either StartEvent\nor EndEvent is triggerred depending upon whether the cue entered\nActive state or quit active state respectively. The current time\nis relative to the start of the container Scene (when in Relative\ntime mode) or is normalized over the span of the container Scene\n(when in Normalized time mode). deltatime is the time since last\ncall to Tick. deltatime also can be in seconds relative to the\nstart of the container Scene or normalized depending upon the\ncue's Time mode. clocktime is the time from the scene i.e. it\ndoes not depend on the time mode for the cue. For the first call\nto Tick after a call to Initialize(), the deltatime is 0;\n"},
  {(char*)"Initialize", PyvtkAnimationCue_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nCalled when the playing of the scene begins. This will set the\nCue to UNINITIALIZED state.\n"},
  {(char*)"Finalize", PyvtkAnimationCue_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\nCalled when the scene reaches the end. If the cue state is ACTIVE\nwhen this method is called, this will trigger a\nEndAnimationCueEvent.\n"},
  {(char*)"GetAnimationTime", PyvtkAnimationCue_GetAnimationTime, METH_VARARGS,
   (char*)"V.GetAnimationTime() -> float\nC++: double GetAnimationTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the AnimationTime to the\ntime of the tick.\n"},
  {(char*)"GetDeltaTime", PyvtkAnimationCue_GetDeltaTime, METH_VARARGS,
   (char*)"V.GetDeltaTime() -> float\nC++: double GetDeltaTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the DeltaTime to the\ndifference in time between the current tick and the last tick.\n"},
  {(char*)"GetClockTime", PyvtkAnimationCue_GetClockTime, METH_VARARGS,
   (char*)"V.GetClockTime() -> float\nC++: double GetClockTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the ClockTime to the time\nof the tick. ClockTime is directly the time from the animation\nscene neither normalized nor offsetted to the start of the scene.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnimationCue_StaticNew()
{
  return vtkAnimationCue::New();
}

PyObject *PyVTKClass_vtkAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnimationCue_StaticNew,
    PyvtkAnimationCue_Methods,
    "vtkAnimationCue", modulename,
    NULL, NULL,
    PyvtkAnimationCue_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAnimationCue_TimeCodes_Type);
    PyvtkAnimationCue_TimeCodes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAnimationCue_TimeCodes_Type;
    if (o && PyDict_SetItemString(d, (char *)"TimeCodes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkAnimationCue::TimeCodes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "TIMEMODE_NORMALIZED", vtkAnimationCue::TIMEMODE_NORMALIZED },
          { "TIMEMODE_RELATIVE", vtkAnimationCue::TIMEMODE_RELATIVE },
        };

      o = PyvtkAnimationCue_TimeCodes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkAnimationCue - a seqin an animation.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAnimationCue and vtkAnimationScene provide the framework to\nsupport animations in VTK. vtkAnimationCue represents an entity that\nchanges/ animates with time, while vtkAnimationScene represents scene\nor setup for the animation, which consists on individual cues or\nother scenes.\n\nA cue has three states: UNINITIALIZED, ACTIVE and INACTIVE.\nUNINITIALIZED represents an point in time before the start",
    " time of\nthe cue. The cue is in ACTIVE state at a point in time between start\ntime and end time for the cue. While, beyond the end time, it is in\nINACTIVE state. When the cue enters the ACTIVE state,\nStartAnimationCueEvent is fired. This event may be handled to\ninitialize the entity to be animated. When the cue leaves the ACTIVE\nstate, EndAnimationCueEvent is fired, which can be handled to cleanup",
    "\nafter having run the animation. For every request to render during\nthe ACTIVE state, AnimationCueTickEvent is fired, which must be\nhandled to perform the actual animation.\n\nSee Also:\n\nvtkAnimationScene\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

