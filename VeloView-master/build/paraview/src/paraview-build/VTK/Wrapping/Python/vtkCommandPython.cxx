// python wrapper for vtkCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkCommand.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCommand(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCommandNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectBaseNew
extern "C" { PyObject *PyVTKClass_vtkObjectBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectBaseNew
#endif

static const char **PyvtkCommand_Doc();

#ifndef DECLARED_PyvtkCommand_EventIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCommand_EventIds_Type;
#define DECLARED_PyvtkCommand_EventIds_Type
#endif

PyTypeObject PyvtkCommand_EventIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventIds", // tp_name
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

PyObject *PyvtkCommand_EventIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCommand_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCommand_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCommand::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommand::NewInstance());

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
PyvtkCommand_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCommand *tempr = vtkCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Execute(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetStringFromEventId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkCommand::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetEventIdFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned long tempr = vtkCommand::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_SetAbortFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbortFlag(temp0);
      }
    else
      {
      op->vtkCommand::SetAbortFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetAbortFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAbortFlag() :
      op->vtkCommand::GetAbortFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_AbortFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortFlagOn();
      }
    else
      {
      op->vtkCommand::AbortFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_AbortFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortFlagOff();
      }
    else
      {
      op->vtkCommand::AbortFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_SetPassiveObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassiveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassiveObserver(temp0);
      }
    else
      {
      op->vtkCommand::SetPassiveObserver(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetPassiveObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassiveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassiveObserver() :
      op->vtkCommand::GetPassiveObserver());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_PassiveObserverOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassiveObserverOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassiveObserverOn();
      }
    else
      {
      op->vtkCommand::PassiveObserverOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_PassiveObserverOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassiveObserverOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassiveObserverOff();
      }
    else
      {
      op->vtkCommand::PassiveObserverOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCommand_Methods[] = {
  {(char*)"GetClassName", PyvtkCommand_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommand_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommand_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCommand\nC++: vtkCommand *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCommand_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCommand\nC++: vtkCommand *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Execute", PyvtkCommand_Execute, METH_VARARGS,
   (char*)"V.Execute(vtkObject, int, )\nC++: virtual void Execute(vtkObject *caller,\n    unsigned long eventId, void *callData)\n\nAll derived classes of vtkCommand must implement this method.\nThis is the method that actually does the work of the callback.\nThe caller argument is the object invoking the event, the eventId\nparameter is the id of the event, and callData parameter is data\nthat can be passed into the execute method. (Note:\nvtkObject::InvokeEvent() takes two parameters: the event id (or\nname) and call data. Typically call data is NULL, but the user\ncan package data and pass it this way. Alternatively, a derived\nclass of vtkCommand can be used to pass data.)\n"},
  {(char*)"GetStringFromEventId", PyvtkCommand_GetStringFromEventId, METH_VARARGS | METH_STATIC,
   (char*)"V.GetStringFromEventId(int) -> string\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {(char*)"GetEventIdFromString", PyvtkCommand_GetEventIdFromString, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEventIdFromString(string) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {(char*)"SetAbortFlag", PyvtkCommand_SetAbortFlag, METH_VARARGS,
   (char*)"V.SetAbortFlag(int)\nC++: void SetAbortFlag(int f)\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"GetAbortFlag", PyvtkCommand_GetAbortFlag, METH_VARARGS,
   (char*)"V.GetAbortFlag() -> int\nC++: int GetAbortFlag()\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"AbortFlagOn", PyvtkCommand_AbortFlagOn, METH_VARARGS,
   (char*)"V.AbortFlagOn()\nC++: void AbortFlagOn()\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"AbortFlagOff", PyvtkCommand_AbortFlagOff, METH_VARARGS,
   (char*)"V.AbortFlagOff()\nC++: void AbortFlagOff()\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"SetPassiveObserver", PyvtkCommand_SetPassiveObserver, METH_VARARGS,
   (char*)"V.SetPassiveObserver(int)\nC++: void SetPassiveObserver(int f)\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {(char*)"GetPassiveObserver", PyvtkCommand_GetPassiveObserver, METH_VARARGS,
   (char*)"V.GetPassiveObserver() -> int\nC++: int GetPassiveObserver()\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {(char*)"PassiveObserverOn", PyvtkCommand_PassiveObserverOn, METH_VARARGS,
   (char*)"V.PassiveObserverOn()\nC++: void PassiveObserverOn()\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {(char*)"PassiveObserverOff", PyvtkCommand_PassiveObserverOff, METH_VARARGS,
   (char*)"V.PassiveObserverOff()\nC++: void PassiveObserverOff()\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCommandNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCommand_Methods,
    "vtkCommand", modulename,
    NULL, NULL,
    PyvtkCommand_Doc(),
    PyVTKClass_vtkObjectBaseNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCommand_EventIds_Type);
    PyvtkCommand_EventIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCommand_EventIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 97; c++)
      {
      typedef vtkCommand::EventIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[97] = {
          { "NoEvent", vtkCommand::NoEvent },
          { "AnyEvent", vtkCommand::AnyEvent },
          { "DeleteEvent", vtkCommand::DeleteEvent },
          { "StartEvent", vtkCommand::StartEvent },
          { "EndEvent", vtkCommand::EndEvent },
          { "RenderEvent", vtkCommand::RenderEvent },
          { "ProgressEvent", vtkCommand::ProgressEvent },
          { "PickEvent", vtkCommand::PickEvent },
          { "StartPickEvent", vtkCommand::StartPickEvent },
          { "EndPickEvent", vtkCommand::EndPickEvent },
          { "AbortCheckEvent", vtkCommand::AbortCheckEvent },
          { "ExitEvent", vtkCommand::ExitEvent },
          { "LeftButtonPressEvent", vtkCommand::LeftButtonPressEvent },
          { "LeftButtonReleaseEvent", vtkCommand::LeftButtonReleaseEvent },
          { "MiddleButtonPressEvent", vtkCommand::MiddleButtonPressEvent },
          { "MiddleButtonReleaseEvent", vtkCommand::MiddleButtonReleaseEvent },
          { "RightButtonPressEvent", vtkCommand::RightButtonPressEvent },
          { "RightButtonReleaseEvent", vtkCommand::RightButtonReleaseEvent },
          { "EnterEvent", vtkCommand::EnterEvent },
          { "LeaveEvent", vtkCommand::LeaveEvent },
          { "KeyPressEvent", vtkCommand::KeyPressEvent },
          { "KeyReleaseEvent", vtkCommand::KeyReleaseEvent },
          { "CharEvent", vtkCommand::CharEvent },
          { "ExposeEvent", vtkCommand::ExposeEvent },
          { "ConfigureEvent", vtkCommand::ConfigureEvent },
          { "TimerEvent", vtkCommand::TimerEvent },
          { "MouseMoveEvent", vtkCommand::MouseMoveEvent },
          { "MouseWheelForwardEvent", vtkCommand::MouseWheelForwardEvent },
          { "MouseWheelBackwardEvent", vtkCommand::MouseWheelBackwardEvent },
          { "ActiveCameraEvent", vtkCommand::ActiveCameraEvent },
          { "CreateCameraEvent", vtkCommand::CreateCameraEvent },
          { "ResetCameraEvent", vtkCommand::ResetCameraEvent },
          { "ResetCameraClippingRangeEvent", vtkCommand::ResetCameraClippingRangeEvent },
          { "ModifiedEvent", vtkCommand::ModifiedEvent },
          { "WindowLevelEvent", vtkCommand::WindowLevelEvent },
          { "StartWindowLevelEvent", vtkCommand::StartWindowLevelEvent },
          { "EndWindowLevelEvent", vtkCommand::EndWindowLevelEvent },
          { "ResetWindowLevelEvent", vtkCommand::ResetWindowLevelEvent },
          { "SetOutputEvent", vtkCommand::SetOutputEvent },
          { "ErrorEvent", vtkCommand::ErrorEvent },
          { "WarningEvent", vtkCommand::WarningEvent },
          { "StartInteractionEvent", vtkCommand::StartInteractionEvent },
          { "InteractionEvent", vtkCommand::InteractionEvent },
          { "EndInteractionEvent", vtkCommand::EndInteractionEvent },
          { "EnableEvent", vtkCommand::EnableEvent },
          { "DisableEvent", vtkCommand::DisableEvent },
          { "CreateTimerEvent", vtkCommand::CreateTimerEvent },
          { "DestroyTimerEvent", vtkCommand::DestroyTimerEvent },
          { "PlacePointEvent", vtkCommand::PlacePointEvent },
          { "PlaceWidgetEvent", vtkCommand::PlaceWidgetEvent },
          { "CursorChangedEvent", vtkCommand::CursorChangedEvent },
          { "ExecuteInformationEvent", vtkCommand::ExecuteInformationEvent },
          { "RenderWindowMessageEvent", vtkCommand::RenderWindowMessageEvent },
          { "WrongTagEvent", vtkCommand::WrongTagEvent },
          { "StartAnimationCueEvent", vtkCommand::StartAnimationCueEvent },
          { "AnimationCueTickEvent", vtkCommand::AnimationCueTickEvent },
          { "EndAnimationCueEvent", vtkCommand::EndAnimationCueEvent },
          { "VolumeMapperRenderEndEvent", vtkCommand::VolumeMapperRenderEndEvent },
          { "VolumeMapperRenderProgressEvent", vtkCommand::VolumeMapperRenderProgressEvent },
          { "VolumeMapperRenderStartEvent", vtkCommand::VolumeMapperRenderStartEvent },
          { "VolumeMapperComputeGradientsEndEvent", vtkCommand::VolumeMapperComputeGradientsEndEvent },
          { "VolumeMapperComputeGradientsProgressEvent", vtkCommand::VolumeMapperComputeGradientsProgressEvent },
          { "VolumeMapperComputeGradientsStartEvent", vtkCommand::VolumeMapperComputeGradientsStartEvent },
          { "WidgetModifiedEvent", vtkCommand::WidgetModifiedEvent },
          { "WidgetValueChangedEvent", vtkCommand::WidgetValueChangedEvent },
          { "WidgetActivateEvent", vtkCommand::WidgetActivateEvent },
          { "ConnectionCreatedEvent", vtkCommand::ConnectionCreatedEvent },
          { "ConnectionClosedEvent", vtkCommand::ConnectionClosedEvent },
          { "DomainModifiedEvent", vtkCommand::DomainModifiedEvent },
          { "PropertyModifiedEvent", vtkCommand::PropertyModifiedEvent },
          { "UpdateEvent", vtkCommand::UpdateEvent },
          { "RegisterEvent", vtkCommand::RegisterEvent },
          { "UnRegisterEvent", vtkCommand::UnRegisterEvent },
          { "UpdateInformationEvent", vtkCommand::UpdateInformationEvent },
          { "AnnotationChangedEvent", vtkCommand::AnnotationChangedEvent },
          { "SelectionChangedEvent", vtkCommand::SelectionChangedEvent },
          { "UpdatePropertyEvent", vtkCommand::UpdatePropertyEvent },
          { "ViewProgressEvent", vtkCommand::ViewProgressEvent },
          { "UpdateDataEvent", vtkCommand::UpdateDataEvent },
          { "CurrentChangedEvent", vtkCommand::CurrentChangedEvent },
          { "ComputeVisiblePropBoundsEvent", vtkCommand::ComputeVisiblePropBoundsEvent },
          { "TDxMotionEvent", vtkCommand::TDxMotionEvent },
          { "TDxButtonPressEvent", vtkCommand::TDxButtonPressEvent },
          { "TDxButtonReleaseEvent", vtkCommand::TDxButtonReleaseEvent },
          { "HoverEvent", vtkCommand::HoverEvent },
          { "LoadStateEvent", vtkCommand::LoadStateEvent },
          { "SaveStateEvent", vtkCommand::SaveStateEvent },
          { "StateChangedEvent", vtkCommand::StateChangedEvent },
          { "WindowMakeCurrentEvent", vtkCommand::WindowMakeCurrentEvent },
          { "WindowIsCurrentEvent", vtkCommand::WindowIsCurrentEvent },
          { "WindowFrameEvent", vtkCommand::WindowFrameEvent },
          { "HighlightEvent", vtkCommand::HighlightEvent },
          { "WindowSupportsOpenGLEvent", vtkCommand::WindowSupportsOpenGLEvent },
          { "WindowIsDirectEvent", vtkCommand::WindowIsDirectEvent },
          { "UncheckedPropertyModifiedEvent", vtkCommand::UncheckedPropertyModifiedEvent },
          { "MessageEvent", vtkCommand::MessageEvent },
          { "UserEvent", vtkCommand::UserEvent },
        };

      o = PyvtkCommand_EventIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCommand_Doc()
{
  static const char *docstring[] = {
    "vtkCommand - superclass for callback/observer methods\n\n",
    "Superclass: vtkObjectBase\n\n",
    "vtkCommand is an implementation of the observer/command design\npattern.  In this design pattern, any instance of vtkObject can be\n\"observed\" for any events it might invoke. For example, vtkRenderer\ninvokes a StartEvent as it begins to render and a EndEvent when it\nfinishes rendering. Filters (subclasses of vtkProcessObject) invoke\nStartEvent, ProgressEvent, and EndEvent as the filter processes dat",
    "a.\nObservers of events are added with the AddObserver() method found in\nvtkObject.  AddObserver(), besides requiring an event id or name,\nalso takes an instance of vtkCommand (or a subclasses). Note that\nvtkCommand is meant to be subclassed, so that you can package the\ninformation necessary to support your callback.\n\nEvent processing can be organized in priority lists, so it is\npossible to truncat",
    "e the processing of a particular event by setting\nthe AbortFlag variable. The priority is set using the AddObserver()\nmethod.  By default the priority is 0, events of the same priority\nare processed in last-in-first-processed order. The ordering/aborting\nof events is important for things like 3D widgets, which handle an\nevent if the widget is selected (and then aborting further processing\nof that ",
    "event).  Otherwise. the event is passed along for further\nprocessing.\n\nWhen an instance of vtkObject invokes an event, it also passes an\noptional void pointer to a callData. This callData is NULL most of\nthe time. The callData is not specific to a type of event but\nspecific to a type of vtkObject invoking a specific event. For\ninstance, vtkCommand::PickEvent is invoked by vtkProp with a NULL\ncallD",
    "ata but is invoked by vtkInteractorStyleImage with a pointer to\nthe vtkInteractorStyleImage object itself.\n\nHere is the list of events that may be invoked with a non-NULL\ncallData.\n- vtkCommand::ProgressEvent\n- most of the objects return a pointer to a double value ranged\n  between 0.0 and 1.0\n- Infovis/vtkFixedWidthTextReader returns a pointer to a float value\n  equal to the number of lines read ",
    "so far.\n- vtkCommand::ErrorEvent\n- an error message as a const char * string\n- vtkCommand::WarningEvent\n- a warning message as a const char * string\n- vtkCommand::StartAnimationCueEvent\n- a pointer to a vtkAnimationCue::AnimationCueInfo object\n- vtkCommand::EndAnimationCueEvent\n- a pointer to a vtkAnimationCue::AnimationCueInfo object\n- vtkCommand::AnimationCueTickEvent\n- a pointer to a vtkAnimati",
    "onCue::AnimationCueInfo object\n- vtkCommand::PickEvent\n- Common/vtkProp returns NULL\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::StartPickEvent\n- Rendering/vtkPropPicker returns NULL\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::EndPickEvent\n- Rendering/vtkPropPicker returns NULL\n- Rendering/vtkInteractorStyleImage returns a pointer",
    " to itself\n- vtkCommand::WrongTagEvent\n- Parallel/vtkSocketCommunicator returns a received tag as a char *\n- vtkCommand::SelectionChangedEvent\n- Views/vtkView returns NULL\n- Views/vtkDataRepresentation returns a pointer to a vtkSelection\n- Rendering/vtkInteractorStyleRubberBand2D returns an array of 5\n  unsigned integers (p1x, p1y, p2x, p2y, mode), where mode is\n  vtkInteractorStyleRubberBand2D::S",
    "ELECT_UNION or\n  vtkInteractorStyleRubberBand2D::SELECT_NORMAL\n- vtkCommand::AnnotationChangedEvent\n- GUISupport/Qt/vtkQtAnnotationView returns a pointer to a\n  vtkAnnotationLayers\n- vtkCommand::PlacePointEvent\n- Widgets/vtkSeedWidget returns a pointer to an int, being the\n  current handle number\n- vtkCommand::ResetWindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n",
    "  (window and level)\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::StartWindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n  (window and level)\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::EndWindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n  (window and level)\n- Rende",
    "ring/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::WindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n  (window and level)\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::CharEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QKeyEvent *\n- vtkCommand::TimerEvent\n- most of the objects return ",
    "a to an int representing a timer id\n- Rendering/vtkXRenderWindowTclInteractor returns NULL\n- Widgets/vtkHoverWidget returns NULL\n- vtkCommand::CreateTimerEvent\n- Rendering/vtkGenericRenderWindowInteractor returns a to an int\n  representing a timer id\n- vtkCommand::DestroyTimerEvent\n- Rendering/vtkGenericRenderWindowInteractor returns a to an int\n  representing a timer id\n- vtkCommand::UserEvent\n- ",
    "most of the objects return NULL\n- Infovis/vtkInteractorStyleTreeMapHover returns a pointer to a\n  vtkIdType representing a pedigree id\n- vtkCommand::KeyPressEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QKeyEvent*\n- vtkCommand::KeyReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QKeyEvent*\n- vtkCommand::LeftButtonPressEvent\n- most o",
    "f the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::LeftButtonReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::MouseMoveEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::MouseWheelForwardEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVT",
    "KWidget returns a QWheelEvent*\n- vtkCommand::MouseWheelBackwardEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QWheelEvent*\n- vtkCommand::RightButtonPressEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::RightButtonReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtk",
    "Command::MiddleButtonPressEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::MiddleButtonReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::CursorChangedEvent\n- most of the objects return a pointer to an int representing a shape\n- Rendering/vtkInteractorObserver returns NULL\n- vtkComman",
    "d::ResetCameraEvent\n- Rendering/vtkRenderer returns a pointer to itself\n- vtkCommand::ResetCameraClippingRangeEvent\n- Rendering/vtkRenderer returns a pointer to itself\n- vtkCommand::ActiveCameraEvent\n- Rendering/vtkRenderer returns a pointer to the active camera\n- vtkCommand::CreateCameraEvent\n- Rendering/vtkRenderer returns a pointer to the created camera\n- vtkCommand::EnterEvent\n- most of the ob",
    "jects return NULL\n- GUISupport/Qt/QVTKWidget returns a QEvent*\n- vtkCommand::LeaveEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QEvent*\n- vtkCommand::RenderWindowMessageEvent\n- Rendering/vtkWin32OpenGLRenderWindow return a pointer to a UINT\n  message\n- vtkCommand::ComputeVisiblePropBoundsEvent\n- Rendering/vtkRenderer returns a pointer to itself\n- QVTKWidget::ContextM",
    "enuEvent\n- GUISupport/Qt/QVTKWidget returns a QContextMenuEvent*\n- QVTKWidget::DragEnterEvent\n- GUISupport/Qt/QVTKWidget returns a QDragEnterEvent*\n- QVTKWidget::DragMoveEvent\n- GUISupport/Qt/QVTKWidget returns a QDragMoveEvent*\n- QVTKWidget::DragLeaveEvent\n- GUISupport/Qt/QVTKWidget returns a QDragLeaveEvent*\n- QVTKWidget::DropEvent\n- GUISupport/Qt/QVTKWidget returns a QDropEvent*\n- vtkCommand::V",
    "iewProgressEvent\n- View/vtkView returns a ViewProgressEventCallData*\n- vtkCommand::VolumeMapperRenderProgressEvent\n- A pointer to a double value between 0.0 and 1.0\n- vtkCommand::VolumeMapperComputeGradientsProgressEvent\n- A pointer to a double value between 0.0 and 1.0\n- vtkCommand::TDxMotionEvent (TDx=3DConnexion)\n- A vtkTDxMotionEventInfo*\n- vtkCommand::TDxButtonPressEvent\n- A int* being the nu",
    "mber of the button\n- vtkCommand::TDxButtonReleaseEvent\n- A int* being the number of the button\n\nSee Also:\n\nvtkObject vtkCallbackCommand vtkOldStyleCallbackCommand\nvtkInteractorObserver vtk3DWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommand(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommandNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommand", o) != 0)
    {
    Py_DECREF(o);
    }

}

