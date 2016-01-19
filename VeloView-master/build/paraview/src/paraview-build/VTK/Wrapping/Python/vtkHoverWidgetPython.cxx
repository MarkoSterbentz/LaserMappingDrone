// python wrapper for vtkHoverWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHoverWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHoverWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHoverWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkHoverWidget_Doc();


static PyObject *
PyvtkHoverWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHoverWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHoverWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHoverWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHoverWidget::NewInstance());

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
PyvtkHoverWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHoverWidget *tempr = vtkHoverWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerDuration(temp0);
      }
    else
      {
      op->vtkHoverWidget::SetTimerDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkHoverWidget::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkHoverWidget::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkHoverWidget::GetTimerDuration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkHoverWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHoverWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkHoverWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHoverWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkHoverWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkHoverWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkHoverWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHoverWidget\nC++: vtkHoverWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkHoverWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHoverWidget\nC++: vtkHoverWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetTimerDuration", PyvtkHoverWidget_SetTimerDuration, METH_VARARGS,
   (char*)"V.SetTimerDuration(int)\nC++: void SetTimerDuration(int)\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {(char*)"GetTimerDurationMinValue", PyvtkHoverWidget_GetTimerDurationMinValue, METH_VARARGS,
   (char*)"V.GetTimerDurationMinValue() -> int\nC++: int GetTimerDurationMinValue()\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {(char*)"GetTimerDurationMaxValue", PyvtkHoverWidget_GetTimerDurationMaxValue, METH_VARARGS,
   (char*)"V.GetTimerDurationMaxValue() -> int\nC++: int GetTimerDurationMaxValue()\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {(char*)"GetTimerDuration", PyvtkHoverWidget_GetTimerDuration, METH_VARARGS,
   (char*)"V.GetTimerDuration() -> int\nC++: int GetTimerDuration()\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {(char*)"SetEnabled", PyvtkHoverWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it performs special\ntimer-related operations.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkHoverWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nA default representation, of which there is none, is created.\nNote that the superclasses vtkAbstractWidget::GetRepresentation()\nmethod returns NULL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHoverWidget_StaticNew()
{
  return vtkHoverWidget::New();
}

PyObject *PyVTKClass_vtkHoverWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHoverWidget_StaticNew,
    PyvtkHoverWidget_Methods,
    "vtkHoverWidget", modulename,
    NULL, NULL,
    PyvtkHoverWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkHoverWidget_Doc()
{
  static const char *docstring[] = {
    "vtkHoverWidget - invoke a vtkTimerEvent when hovering\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkHoverWidget is used to invoke an event when hovering in a\nrender window. Hovering occurs when mouse motion (in the render\nwindow) does not occur for a specified amount of time (i.e.,\nTimerDuration). This class can be used as is (by observing\nTimerEvents) or for class derivation for those classes wishing to do\nmore with the hover event.\n\nTo use this widget, specify an instance of vtkHoverWid",
    "get and specify\nthe time (in milliseconds) defining the hover period. Unlike most\nwidgets, this widget does not require a representation (although\nsubclasses like vtkBalloonWidget do require a representation).\n\nEvent Bindings:\n\nBy default, the widget observes the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  MouseMoveEvent - manages a timer used to det",
    "ermine whether the\nmouse\n                   is hovering.\n  TimerEvent - when the time between events (e.g., mouse move), then\na\n               timer event is invoked.\n  KeyPressEvent - when the \"Enter\" key is pressed after the balloon\nappears,\n                  a callback is activated (e.g.,\nWidgetActivateEvent). \n\nNote that the event bindings described above can be changed using\nthis class's vtkW",
    "idgetEventTranslator. This class translates VTK\nevents into the vtkHoverWidget's widget events:\n\n\n  vtkWidgetEvent::Move -- start (or reset) the timer\n  vtkWidgetEvent::TimedOut -- when enough time is elapsed between\ndefined\n                              VTK events the hover event is invoked.\n  vtkWidgetEvent::SelectAction -- activate any callbacks associated\n                                  with",
    " the balloon. \n\nThis widget invokes the following VTK events on itself when the\nwidget determines that it is hovering. Note that observers of this\nwidget can listen for these events and take appropriate action.\n\n\n  vtkCommand::TimerEvent (when hovering is determined to occur)\n  vtkCommand::EndInteractionEvent (after a hover has occurred and the\n                                   mouse begins movin",
    "g again).\n  vtkCommand::WidgetActivateEvent (when the balloon is selected with\na\n                                   keypress). \n\nSee Also:\n\nvtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHoverWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHoverWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHoverWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

