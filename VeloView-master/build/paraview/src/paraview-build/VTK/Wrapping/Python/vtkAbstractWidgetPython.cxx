// python wrapper for vtkAbstractWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **PyvtkAbstractWidget_Doc();


static PyObject *
PyvtkAbstractWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractWidget::NewInstance());

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
PyvtkAbstractWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractWidget *tempr = vtkAbstractWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

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
      op->vtkAbstractWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessEvents(temp0);
      }
    else
      {
      op->vtkAbstractWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMinValue() :
      op->vtkAbstractWidget::GetProcessEventsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMaxValue() :
      op->vtkAbstractWidget::GetProcessEventsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkAbstractWidget::GetProcessEvents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessEventsOn();
      }
    else
      {
      op->vtkAbstractWidget::ProcessEventsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessEventsOff();
      }
    else
      {
      op->vtkAbstractWidget::ProcessEventsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->GetEventTranslator() :
      op->vtkAbstractWidget::GetEventTranslator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->CreateDefaultRepresentation();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkAbstractWidget::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
    {
    if (ap.IsBound())
      {
      op->SetParent(temp0);
      }
    else
      {
      op->vtkAbstractWidget::SetParent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkAbstractWidget::GetParent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkAbstractWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetManagesCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManagesCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManagesCursor(temp0);
      }
    else
      {
      op->vtkAbstractWidget::SetManagesCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetManagesCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManagesCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetManagesCursor() :
      op->vtkAbstractWidget::GetManagesCursor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ManagesCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManagesCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManagesCursorOn();
      }
    else
      {
      op->vtkAbstractWidget::ManagesCursorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ManagesCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManagesCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManagesCursorOff();
      }
    else
      {
      op->vtkAbstractWidget::ManagesCursorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPriority(temp0);
      }
    else
      {
      op->vtkAbstractWidget::SetPriority(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros implementing standard VTK methods.\n"},
  {(char*)"IsA", PyvtkAbstractWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros implementing standard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkAbstractWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractWidget\nC++: vtkAbstractWidget *NewInstance()\n\nStandard macros implementing standard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkAbstractWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractWidget\nC++: vtkAbstractWidget *SafeDownCast(vtkObject* o)\n\nStandard macros implementing standard VTK methods.\n"},
  {(char*)"SetEnabled", PyvtkAbstractWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods for activating this widget. Note that the widget\nrepresentation must be specified or the widget will not appear.\nProcessEvents (On by default) must be On for Enabled widget to\nrespond to interaction. If ProcessEvents is Off,\nenabling/disabling a widget merely affects the visibility of the\nrepresentation.\n"},
  {(char*)"SetProcessEvents", PyvtkAbstractWidget_SetProcessEvents, METH_VARARGS,
   (char*)"V.SetProcessEvents(int)\nC++: void SetProcessEvents(int)\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetProcessEventsMinValue", PyvtkAbstractWidget_GetProcessEventsMinValue, METH_VARARGS,
   (char*)"V.GetProcessEventsMinValue() -> int\nC++: int GetProcessEventsMinValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetProcessEventsMaxValue", PyvtkAbstractWidget_GetProcessEventsMaxValue, METH_VARARGS,
   (char*)"V.GetProcessEventsMaxValue() -> int\nC++: int GetProcessEventsMaxValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetProcessEvents", PyvtkAbstractWidget_GetProcessEvents, METH_VARARGS,
   (char*)"V.GetProcessEvents() -> int\nC++: int GetProcessEvents()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"ProcessEventsOn", PyvtkAbstractWidget_ProcessEventsOn, METH_VARARGS,
   (char*)"V.ProcessEventsOn()\nC++: void ProcessEventsOn()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"ProcessEventsOff", PyvtkAbstractWidget_ProcessEventsOff, METH_VARARGS,
   (char*)"V.ProcessEventsOff()\nC++: void ProcessEventsOff()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetEventTranslator", PyvtkAbstractWidget_GetEventTranslator, METH_VARARGS,
   (char*)"V.GetEventTranslator() -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *GetEventTranslator()\n\nGet the event translator. Careful manipulation of this class\nenables the user to override the default event bindings.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkAbstractWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set. The\nrepresentation defines the geometry of the widget (i.e., how it\nappears) as well as providing special methods for manipulting the\nstate and appearance of the widget.\n"},
  {(char*)"Render", PyvtkAbstractWidget_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: void Render()\n\nThis method is called by subclasses when a render method is to be\ninvoked on the vtkRenderWindowInteractor. This method should be\ncalled (instead of vtkRenderWindow::Render() because it has built\ninto it optimizations for minimizing renders and/or speeding\nrenders.\n"},
  {(char*)"SetParent", PyvtkAbstractWidget_SetParent, METH_VARARGS,
   (char*)"V.SetParent(vtkAbstractWidget)\nC++: void SetParent(vtkAbstractWidget *parent)\n\nSpecifying a parent to this widget is used when creating\ncomposite widgets. It is an internal method not meant to be used\nby the public. When a widget has a parent, it defers the\nrendering to the parent. It may also defer managing the cursor\n(see ManagesCursor ivar).\n"},
  {(char*)"GetParent", PyvtkAbstractWidget_GetParent, METH_VARARGS,
   (char*)"V.GetParent() -> vtkAbstractWidget\nC++: vtkAbstractWidget *GetParent()\n\nSpecifying a parent to this widget is used when creating\ncomposite widgets. It is an internal method not meant to be used\nby the public. When a widget has a parent, it defers the\nrendering to the parent. It may also defer managing the cursor\n(see ManagesCursor ivar).\n"},
  {(char*)"GetRepresentation", PyvtkAbstractWidget_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> vtkWidgetRepresentation\nC++: vtkWidgetRepresentation *GetRepresentation()\n\nReturn an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp (typically a subclass of\nvtkWidgetRepresenation) so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"SetManagesCursor", PyvtkAbstractWidget_SetManagesCursor, METH_VARARGS,
   (char*)"V.SetManagesCursor(int)\nC++: void SetManagesCursor(int a)\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {(char*)"GetManagesCursor", PyvtkAbstractWidget_GetManagesCursor, METH_VARARGS,
   (char*)"V.GetManagesCursor() -> int\nC++: int GetManagesCursor()\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {(char*)"ManagesCursorOn", PyvtkAbstractWidget_ManagesCursorOn, METH_VARARGS,
   (char*)"V.ManagesCursorOn()\nC++: void ManagesCursorOn()\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {(char*)"ManagesCursorOff", PyvtkAbstractWidget_ManagesCursorOff, METH_VARARGS,
   (char*)"V.ManagesCursorOff()\nC++: void ManagesCursorOff()\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {(char*)"SetPriority", PyvtkAbstractWidget_SetPriority, METH_VARARGS,
   (char*)"V.SetPriority(float)\nC++: virtual void SetPriority(float)\n\nOverride the superclass method. This will automatically change\nthe priority of the widget. Unlike the superclass documentation,\nno methods such as SetInteractor to null and reset it etc. are\nnecessary\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractWidget_Methods,
    "vtkAbstractWidget", modulename,
    NULL, NULL,
    PyvtkAbstractWidget_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));
  return cls;
}

const char **PyvtkAbstractWidget_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractWidget - define the API for widget / widget representation\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "The vtkAbstractWidget defines an API and implements methods common to\nall widgets using the interaction/representation design. In this\ndesign, the term interaction means that part of the widget that\nperforms event handling, while the representation corresponds to a\nvtkProp (or the subclass vtkWidgetRepresentation) used to represent\nthe widget. vtkAbstractWidget also implements some methods common ",
    "to\nall subclasses.\n\nNote that vtkAbstractWidget provides access to the\nvtkWidgetEventTranslator.  This class is responsible for translating\nVTK events (defined in vtkCommand.h) into widget events (defined in\nvtkWidgetEvent.h). This class can be manipulated so that different\nVTK events can be mapped into widget events, thereby allowing the\nmodification of event bindings. Each subclass of vtkAbstrac",
    "tWidget\ndefines the events to which it responds.\n\nCaveats:\n\nNote that the pair ( vtkAbstractWidget / vtkWidgetRepresentation ) is\nan implementation of the second generation VTK Widgets design. In the\nfirst generation design, widgets were implemented in a single\nmonolithic class. This design was problematic because in\nclient-server application it was difficult to manage widgets\nproperly. Also, new ",
    "\"representations\" or look-and-feel, for a widget\nrequired a whole new class, with a lot of redundant code. The\nseparation of the widget event handling and representation enables\nusers and developers to create new appearances for the widget. It\nalso facilitates parallel processing, where the client application\nhandles events, and remote representations of the widget are slaves\nto the client (and do",
    " not handle events).\n\nSee Also:\n\nvtkWidgetRepresentation vtkWidgetEventTranslator\nvtkWidgetCallbackMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

