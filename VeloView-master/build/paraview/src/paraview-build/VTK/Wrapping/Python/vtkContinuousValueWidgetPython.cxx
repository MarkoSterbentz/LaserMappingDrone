// python wrapper for vtkContinuousValueWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContinuousValueWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContinuousValueWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContinuousValueWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkContinuousValueWidget_Doc();


static PyObject *
PyvtkContinuousValueWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContinuousValueWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContinuousValueWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContinuousValueWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContinuousValueWidget::NewInstance());

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
PyvtkContinuousValueWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContinuousValueWidget *tempr = vtkContinuousValueWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  vtkContinuousValueWidgetRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContinuousValueWidgetRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkContinuousValueWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_GetContinuousValueWidgetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousValueWidgetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContinuousValueWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetContinuousValueWidgetRepresentation() :
      op->vtkContinuousValueWidget::GetContinuousValueWidgetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkContinuousValueWidget::GetValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkContinuousValueWidget::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContinuousValueWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkContinuousValueWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkContinuousValueWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkContinuousValueWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContinuousValueWidget\nC++: vtkContinuousValueWidget *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkContinuousValueWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContinuousValueWidget\nC++: vtkContinuousValueWidget *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetRepresentation", PyvtkContinuousValueWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkContinuousValueWidgetRepresentation)\nC++: void SetRepresentation(\n    vtkContinuousValueWidgetRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetContinuousValueWidgetRepresentation", PyvtkContinuousValueWidget_GetContinuousValueWidgetRepresentation, METH_VARARGS,
   (char*)"V.GetContinuousValueWidgetRepresentation()\n    -> vtkContinuousValueWidgetRepresentation\nC++: vtkContinuousValueWidgetRepresentation *GetContinuousValueWidgetRepresentation(\n    )\n\nReturn the representation as a\nvtkContinuousValueWidgetRepresentation.\n"},
  {(char*)"GetValue", PyvtkContinuousValueWidget_GetValue, METH_VARARGS,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nGet the value for this widget.\n"},
  {(char*)"SetValue", PyvtkContinuousValueWidget_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float)\nC++: void SetValue(double v)\n\nGet the value for this widget.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkContinuousValueWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkContinuousValueWidget_Methods,
    "vtkContinuousValueWidget", modulename,
    NULL, NULL,
    PyvtkContinuousValueWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkContinuousValueWidget_Doc()
{
  static const char *docstring[] = {
    "vtkContinuousValueWidget - set a value by manipulating something\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkContinuousValueWidget is used to adjust a scalar value in an\napplication. Note that the actual appearance of the widget depends on\nthe specific representation for the widget.\n\nTo use this widget, set the widget representation. (the details may\nvary depending on the particulars of the representation).\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwat",
    "ches the vtkRenderWindowInteractor for these events):\n\nIf the slider bead is selected:\n  LeftButtonPressEvent - select slider\n  LeftButtonReleaseEvent - release slider\n  MouseMoveEvent - move slider \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkContinuousValueWidget's widget events:\n\n\n  vtkWid",
    "getEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for slider motion has been\ninvoked \n\nIn turn, when these widget events are processed, the\nvtkContinuousValueWidget invokes the following VTK events on itself\n(which observers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (on v",
    "tkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContinuousValueWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContinuousValueWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContinuousValueWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

