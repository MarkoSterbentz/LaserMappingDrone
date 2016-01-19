// python wrapper for vtkSliderWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSliderWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSliderWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSliderWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkSliderWidget_Doc();


static PyObject *
PyvtkSliderWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSliderWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliderWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliderWidget::NewInstance());

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
PyvtkSliderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSliderWidget *tempr = vtkSliderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  vtkSliderRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkSliderWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetSliderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSliderRepresentation *tempr = (ap.IsBound() ?
      op->GetSliderRepresentation() :
      op->vtkSliderWidget::GetSliderRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationMode(temp0);
      }
    else
      {
      op->vtkSliderWidget::SetAnimationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetAnimationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnimationModeMinValue() :
      op->vtkSliderWidget::GetAnimationModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetAnimationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnimationModeMaxValue() :
      op->vtkSliderWidget::GetAnimationModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetAnimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAnimationMode() :
      op->vtkSliderWidget::GetAnimationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationModeToOff();
      }
    else
      {
      op->vtkSliderWidget::SetAnimationModeToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationModeToJump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationModeToJump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationModeToJump();
      }
    else
      {
      op->vtkSliderWidget::SetAnimationModeToJump();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationModeToAnimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationModeToAnimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationModeToAnimate();
      }
    else
      {
      op->vtkSliderWidget::SetAnimationModeToAnimate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetNumberOfAnimationSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAnimationSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfAnimationSteps(temp0);
      }
    else
      {
      op->vtkSliderWidget::SetNumberOfAnimationSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetNumberOfAnimationStepsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationStepsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationStepsMinValue() :
      op->vtkSliderWidget::GetNumberOfAnimationStepsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetNumberOfAnimationStepsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationStepsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationStepsMaxValue() :
      op->vtkSliderWidget::GetNumberOfAnimationStepsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetNumberOfAnimationSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationSteps() :
      op->vtkSliderWidget::GetNumberOfAnimationSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkSliderWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSliderWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkSliderWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkSliderWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkSliderWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSliderWidget\nC++: vtkSliderWidget *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkSliderWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliderWidget\nC++: vtkSliderWidget *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetRepresentation", PyvtkSliderWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkSliderRepresentation)\nC++: void SetRepresentation(vtkSliderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetSliderRepresentation", PyvtkSliderWidget_GetSliderRepresentation, METH_VARARGS,
   (char*)"V.GetSliderRepresentation() -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *GetSliderRepresentation()\n\nReturn the representation as a vtkSliderRepresentation.\n"},
  {(char*)"SetAnimationMode", PyvtkSliderWidget_SetAnimationMode, METH_VARARGS,
   (char*)"V.SetAnimationMode(int)\nC++: void SetAnimationMode(int)\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"GetAnimationModeMinValue", PyvtkSliderWidget_GetAnimationModeMinValue, METH_VARARGS,
   (char*)"V.GetAnimationModeMinValue() -> int\nC++: int GetAnimationModeMinValue()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"GetAnimationModeMaxValue", PyvtkSliderWidget_GetAnimationModeMaxValue, METH_VARARGS,
   (char*)"V.GetAnimationModeMaxValue() -> int\nC++: int GetAnimationModeMaxValue()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"GetAnimationMode", PyvtkSliderWidget_GetAnimationMode, METH_VARARGS,
   (char*)"V.GetAnimationMode() -> int\nC++: int GetAnimationMode()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"SetAnimationModeToOff", PyvtkSliderWidget_SetAnimationModeToOff, METH_VARARGS,
   (char*)"V.SetAnimationModeToOff()\nC++: void SetAnimationModeToOff()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"SetAnimationModeToJump", PyvtkSliderWidget_SetAnimationModeToJump, METH_VARARGS,
   (char*)"V.SetAnimationModeToJump()\nC++: void SetAnimationModeToJump()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"SetAnimationModeToAnimate", PyvtkSliderWidget_SetAnimationModeToAnimate, METH_VARARGS,
   (char*)"V.SetAnimationModeToAnimate()\nC++: void SetAnimationModeToAnimate()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {(char*)"SetNumberOfAnimationSteps", PyvtkSliderWidget_SetNumberOfAnimationSteps, METH_VARARGS,
   (char*)"V.SetNumberOfAnimationSteps(int)\nC++: void SetNumberOfAnimationSteps(int)\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {(char*)"GetNumberOfAnimationStepsMinValue", PyvtkSliderWidget_GetNumberOfAnimationStepsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfAnimationStepsMinValue() -> int\nC++: int GetNumberOfAnimationStepsMinValue()\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {(char*)"GetNumberOfAnimationStepsMaxValue", PyvtkSliderWidget_GetNumberOfAnimationStepsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfAnimationStepsMaxValue() -> int\nC++: int GetNumberOfAnimationStepsMaxValue()\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {(char*)"GetNumberOfAnimationSteps", PyvtkSliderWidget_GetNumberOfAnimationSteps, METH_VARARGS,
   (char*)"V.GetNumberOfAnimationSteps() -> int\nC++: int GetNumberOfAnimationSteps()\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSliderWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSliderWidget_StaticNew()
{
  return vtkSliderWidget::New();
}

PyObject *PyVTKClass_vtkSliderWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSliderWidget_StaticNew,
    PyvtkSliderWidget_Methods,
    "vtkSliderWidget", modulename,
    NULL, NULL,
    PyvtkSliderWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkSliderWidget_Doc()
{
  static const char *docstring[] = {
    "vtkSliderWidget - set a value by manipulating a slider\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkSliderWidget is used to set a scalar value in an application. \nThis class assumes that a slider is moved along a 1D parameter space\n(e.g., a spherical bead that can be moved along a tube).  Moving the\nslider modifies the value of the widget, which can be used to set\nparameters on other objects. Note that the actual appearance of the\nwidget depends on the specific representation for the widg",
    "et.\n\nTo use this widget, set the widget representation. The representation\nis assumed to consist of a tube, two end caps, and a slider (the\ndetails may vary depending on the particulars of the representation).\nThen in the representation you will typically set minimum and maximum\nvalue, as well as the current value. The position of the slider must\nalso be set, as well as various properties.\n\nEvent ",
    "Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\nIf the slider bead is selected:\n  LeftButtonPressEvent - select slider (if on slider)\n  LeftButtonReleaseEvent - release slider (if selected)\n  MouseMoveEvent - move slider If the end caps or slider tube are\nselected:\n  LeftButtonPressEvent - move (or animate) ",
    "to cap or point on tube; \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkSliderWidget's widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for slider motion ",
    "has been\ninvoked \n\nIn turn, when these widget events are processed, the vtkSliderWidget\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliderWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliderWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliderWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

