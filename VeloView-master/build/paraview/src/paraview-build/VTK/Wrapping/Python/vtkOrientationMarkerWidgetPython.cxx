// python wrapper for vtkOrientationMarkerWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOrientationMarkerWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOrientationMarkerWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOrientationMarkerWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **PyvtkOrientationMarkerWidget_Doc();


static PyObject *
PyvtkOrientationMarkerWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOrientationMarkerWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientationMarkerWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOrientationMarkerWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientationMarkerWidget::NewInstance());

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
PyvtkOrientationMarkerWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOrientationMarkerWidget *tempr = vtkOrientationMarkerWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetOrientationMarker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMarker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetOrientationMarker(temp0);
      }
    else
      {
      op->vtkOrientationMarkerWidget::SetOrientationMarker(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetOrientationMarker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetOrientationMarker() :
      op->vtkOrientationMarkerWidget::GetOrientationMarker());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

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
      op->vtkOrientationMarkerWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_ExecuteCameraUpdateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteCameraUpdateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteCameraUpdateEvent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOrientationMarkerWidget::ExecuteCameraUpdateEvent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractive(temp0);
      }
    else
      {
      op->vtkOrientationMarkerWidget::SetInteractive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkOrientationMarkerWidget::GetInteractive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_InteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveOn();
      }
    else
      {
      op->vtkOrientationMarkerWidget::InteractiveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_InteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveOff();
      }
    else
      {
      op->vtkOrientationMarkerWidget::InteractiveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

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
      op->SetOutlineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOrientationMarkerWidget::SetOutlineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutlineColor() :
      op->vtkOrientationMarkerWidget::GetOutlineColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkOrientationMarkerWidget::SetViewport(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkOrientationMarkerWidget::GetViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkOrientationMarkerWidget::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkOrientationMarkerWidget::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkOrientationMarkerWidget::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkOrientationMarkerWidget::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrientationMarkerWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkOrientationMarkerWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOrientationMarkerWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOrientationMarkerWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOrientationMarkerWidget\nC++: vtkOrientationMarkerWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOrientationMarkerWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOrientationMarkerWidget\nC++: vtkOrientationMarkerWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOrientationMarker", PyvtkOrientationMarkerWidget_SetOrientationMarker, METH_VARARGS,
   (char*)"V.SetOrientationMarker(vtkProp)\nC++: virtual void SetOrientationMarker(vtkProp *prop)\n\nSet/get the orientation marker to be displayed in this widget.\n"},
  {(char*)"GetOrientationMarker", PyvtkOrientationMarkerWidget_GetOrientationMarker, METH_VARARGS,
   (char*)"V.GetOrientationMarker() -> vtkProp\nC++: vtkProp *GetOrientationMarker()\n\nSet/get the orientation marker to be displayed in this widget.\n"},
  {(char*)"SetEnabled", PyvtkOrientationMarkerWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nEnable/disable the widget. Default is 0 (disabled).\n"},
  {(char*)"ExecuteCameraUpdateEvent", PyvtkOrientationMarkerWidget_ExecuteCameraUpdateEvent, METH_VARARGS,
   (char*)"V.ExecuteCameraUpdateEvent(vtkObject, int, )\nC++: void ExecuteCameraUpdateEvent(vtkObject *o,\n    unsigned long event, void *calldata)\n\nCallback to keep the camera for the orientation marker up to date\nwith the camera in the parent renderer.\n"},
  {(char*)"SetInteractive", PyvtkOrientationMarkerWidget_SetInteractive, METH_VARARGS,
   (char*)"V.SetInteractive(int)\nC++: void SetInteractive(int state)\n\nSet/get whether to allow this widget to be interactively\nmoved/scaled. Default is On.\n"},
  {(char*)"GetInteractive", PyvtkOrientationMarkerWidget_GetInteractive, METH_VARARGS,
   (char*)"V.GetInteractive() -> int\nC++: int GetInteractive()\n\nSet/get whether to allow this widget to be interactively\nmoved/scaled. Default is On.\n"},
  {(char*)"InteractiveOn", PyvtkOrientationMarkerWidget_InteractiveOn, METH_VARARGS,
   (char*)"V.InteractiveOn()\nC++: void InteractiveOn()\n\nSet/get whether to allow this widget to be interactively\nmoved/scaled. Default is On.\n"},
  {(char*)"InteractiveOff", PyvtkOrientationMarkerWidget_InteractiveOff, METH_VARARGS,
   (char*)"V.InteractiveOff()\nC++: void InteractiveOff()\n\nSet/get whether to allow this widget to be interactively\nmoved/scaled. Default is On.\n"},
  {(char*)"SetOutlineColor", PyvtkOrientationMarkerWidget_SetOutlineColor, METH_VARARGS,
   (char*)"V.SetOutlineColor(float, float, float)\nC++: void SetOutlineColor(double r, double g, double b)\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this\nwidget. Default is white (1,1,1).\n"},
  {(char*)"GetOutlineColor", PyvtkOrientationMarkerWidget_GetOutlineColor, METH_VARARGS,
   (char*)"V.GetOutlineColor() -> (float, ...)\nC++: double *GetOutlineColor()\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this\nwidget. Default is white (1,1,1).\n"},
  {(char*)"SetViewport", PyvtkOrientationMarkerWidget_SetViewport, METH_VARARGS,
   (char*)"V.SetViewport(float, float, float, float)\nC++: void SetViewport(double minX, double minY, double maxX,\n    double maxY)\n\nSet/get the viewport to position/size this widget. Default is\nbottom left corner (0,0,0.2,0.2).\n"},
  {(char*)"GetViewport", PyvtkOrientationMarkerWidget_GetViewport, METH_VARARGS,
   (char*)"V.GetViewport() -> (float, ...)\nC++: double *GetViewport()\n\nSet/get the viewport to position/size this widget. Default is\nbottom left corner (0,0,0.2,0.2).\n"},
  {(char*)"SetTolerance", PyvtkOrientationMarkerWidget_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetToleranceMinValue", PyvtkOrientationMarkerWidget_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetToleranceMaxValue", PyvtkOrientationMarkerWidget_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {(char*)"GetTolerance", PyvtkOrientationMarkerWidget_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrientationMarkerWidget_StaticNew()
{
  return vtkOrientationMarkerWidget::New();
}

PyObject *PyVTKClass_vtkOrientationMarkerWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrientationMarkerWidget_StaticNew,
    PyvtkOrientationMarkerWidget_Methods,
    "vtkOrientationMarkerWidget", modulename,
    NULL, NULL,
    PyvtkOrientationMarkerWidget_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));
  return cls;
}

const char **PyvtkOrientationMarkerWidget_Doc()
{
  static const char *docstring[] = {
    "vtkOrientationMarkerWidget - 2D widget for manipulating a marker prop\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "This class provides support for interactively manipulating the\nposition, size, and apparent orientation of a prop that represents an\norientation marker.  This class works by adding its internal renderer\nto an external \"parent\" renderer on a different layer.  The input\norientation marker is rendered as an overlay on the parent renderer\nand, thus, appears superposed over all props in the parent's sc",
    "ene. \nThe camera view of the orientation the marker is made to match that\nof the parent's by means of an observer mechanism, giving the\nillusion that the orientation of the marker reflects that of the\nprop(s) in the parent's scene.\n\nThe widget listens to left mouse button and mouse movement events. It\nwill change the cursor shape based on its location. If the cursor is\nover the overlay renderer, i",
    "t will change the cursor shape to a\nSIZEALL shape or to a resize corner shape (e.g., SIZENW) if the\ncursor is near a corner. If the left mouse button is pressed and held\ndown while moving, the overlay renderer, and hence, the orientation\nmarker, is resized or moved.  I the case of a resize operation,\nreleasing the left mouse button causes the widget to enforce its\nrenderer to be square.  The diago",
    "nally opposite corner to the one\nmoved is repositioned such that all edges of the renderer have the\nsame length: the minimum.\n\nTo use this object, there are two key steps: 1) invoke\nSetInteractor() with the argument of the method a\nvtkRenderWindowInteractor, and 2) invoke SetOrientationMarker with an\ninstance of vtkProp (see caveats below). Specifically, vtkAxesActor\nand vtkAnnotatedCubeActor are ",
    "two classes designed to work with this\nclass.  A composite orientation marker can be generated by adding\ninstances of vtkAxesActor and vtkAnnotatedCubeActor to a\nvtkPropAssembly, which can then be set as the input orientation\nmarker. The widget can be also be set up in a non-interactive fashion\nby setting Ineractive to Off and sizing/placing the overlay renderer\nin its parent renderer by calling t",
    "he widget's SetViewport method.\n\nCaveats:\n\nThe input orientation marker prop should calculate its bounds as\nthough they are symmetric about it's origin.  This must currently be\ndone to correctly implement the camera synchronization between the\nivar renderer and the renderer associated with the set interactor. \nImportantly, the InteractorStyle associated with the interactor must\nbe of the type vtkI",
    "nteractorStyle*Camera. Where desirable, the parent\nrenderer should be set by the SetDefaultRenderer method.  The parent\nrenderer's number of layers is modified to 2 where required.\n\nSee Also:\n\nvtkInteractorObserver vtkXYPlotWidget vtkScalarBarWidget vtkAxesActor\nvtkAnnotatedCubeActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrientationMarkerWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrientationMarkerWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrientationMarkerWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

