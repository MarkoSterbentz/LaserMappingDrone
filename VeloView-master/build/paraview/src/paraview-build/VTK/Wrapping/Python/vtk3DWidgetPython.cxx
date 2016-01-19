// python wrapper for vtk3DWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtk3DWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtk3DWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **Pyvtk3DWidget_Doc();


static PyObject *
Pyvtk3DWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtk3DWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtk3DWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DWidget::NewInstance());

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
Pyvtk3DWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtk3DWidget *tempr = vtk3DWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->PlaceWidget(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
Pyvtk3DWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtk3DWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
Pyvtk3DWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtk3DWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
Pyvtk3DWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return Pyvtk3DWidget_PlaceWidget_s1(self, args);
    case 0:
      return Pyvtk3DWidget_PlaceWidget_s2(self, args);
    case 6:
      return Pyvtk3DWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
Pyvtk3DWidget_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  vtkProp3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->SetProp3D(temp0);
      }
    else
      {
      op->vtk3DWidget::SetProp3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtk3DWidget::GetProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtk3DWidget::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtk3DWidget::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtk3DWidget::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlaceFactor(temp0);
      }
    else
      {
      op->vtk3DWidget::SetPlaceFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetPlaceFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactorMinValue() :
      op->vtk3DWidget::GetPlaceFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetPlaceFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactorMaxValue() :
      op->vtk3DWidget::GetPlaceFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactor() :
      op->vtk3DWidget::GetPlaceFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHandleSize(temp0);
      }
    else
      {
      op->vtk3DWidget::SetHandleSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetHandleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeMinValue() :
      op->vtk3DWidget::GetHandleSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetHandleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeMaxValue() :
      op->vtk3DWidget::GetHandleSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHandleSize() :
      op->vtk3DWidget::GetHandleSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef Pyvtk3DWidget_Methods[] = {
  {(char*)"GetClassName", Pyvtk3DWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", Pyvtk3DWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", Pyvtk3DWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtk3DWidget\nC++: vtk3DWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", Pyvtk3DWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtk3DWidget\nC++: vtk3DWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PlaceWidget", Pyvtk3DWidget_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: virtual void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: virtual void PlaceWidget(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {(char*)"SetProp3D", Pyvtk3DWidget_SetProp3D, METH_VARARGS,
   (char*)"V.SetProp3D(vtkProp3D)\nC++: virtual void SetProp3D(vtkProp3D *)\n\nSpecify a vtkProp3D around which to place the widget. This is not\nrequired, but if supplied, it is used to initially position the\nwidget.\n"},
  {(char*)"GetProp3D", Pyvtk3DWidget_GetProp3D, METH_VARARGS,
   (char*)"V.GetProp3D() -> vtkProp3D\nC++: vtkProp3D *GetProp3D()\n\nSpecify a vtkProp3D around which to place the widget. This is not\nrequired, but if supplied, it is used to initially position the\nwidget.\n"},
  {(char*)"SetInputData", Pyvtk3DWidget_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *)\n\nSpecify the input dataset. This is not required, but if supplied,\nand no vtkProp3D is specified, it is used to initially position\nthe widget.\n"},
  {(char*)"SetInputConnection", Pyvtk3DWidget_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nSpecify the input dataset. This is not required, but if supplied,\nand no vtkProp3D is specified, it is used to initially position\nthe widget.\n"},
  {(char*)"GetInput", Pyvtk3DWidget_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataSet\nC++: virtual vtkDataSet *GetInput()\n\nSpecify the input dataset. This is not required, but if supplied,\nand no vtkProp3D is specified, it is used to initially position\nthe widget.\n"},
  {(char*)"SetPlaceFactor", Pyvtk3DWidget_SetPlaceFactor, METH_VARARGS,
   (char*)"V.SetPlaceFactor(float)\nC++: void SetPlaceFactor(double)\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"GetPlaceFactorMinValue", Pyvtk3DWidget_GetPlaceFactorMinValue, METH_VARARGS,
   (char*)"V.GetPlaceFactorMinValue() -> float\nC++: double GetPlaceFactorMinValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"GetPlaceFactorMaxValue", Pyvtk3DWidget_GetPlaceFactorMaxValue, METH_VARARGS,
   (char*)"V.GetPlaceFactorMaxValue() -> float\nC++: double GetPlaceFactorMaxValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"GetPlaceFactor", Pyvtk3DWidget_GetPlaceFactor, METH_VARARGS,
   (char*)"V.GetPlaceFactor() -> float\nC++: double GetPlaceFactor()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {(char*)"SetHandleSize", Pyvtk3DWidget_SetHandleSize, METH_VARARGS,
   (char*)"V.SetHandleSize(float)\nC++: void SetHandleSize(double)\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {(char*)"GetHandleSizeMinValue", Pyvtk3DWidget_GetHandleSizeMinValue, METH_VARARGS,
   (char*)"V.GetHandleSizeMinValue() -> float\nC++: double GetHandleSizeMinValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {(char*)"GetHandleSizeMaxValue", Pyvtk3DWidget_GetHandleSizeMaxValue, METH_VARARGS,
   (char*)"V.GetHandleSizeMaxValue() -> float\nC++: double GetHandleSizeMaxValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {(char*)"GetHandleSize", Pyvtk3DWidget_GetHandleSize, METH_VARARGS,
   (char*)"V.GetHandleSize() -> float\nC++: double GetHandleSize()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtk3DWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    Pyvtk3DWidget_Methods,
    "vtk3DWidget", modulename,
    NULL, NULL,
    Pyvtk3DWidget_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));
  return cls;
}

const char **Pyvtk3DWidget_Doc()
{
  static const char *docstring[] = {
    "vtk3DWidget - an abstract superclass for 3D widgets\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "vtk3DWidget is an abstract superclass for 3D interactor observers.\nThese 3D widgets represent themselves in the scene, and have special\ncallbacks associated with them that allows interactive manipulation\nof the widget. Inparticular, the difference between a vtk3DWidget and\nits abstract superclass vtkInteractorObserver is that vtk3DWidgets\nare \"placed\" in 3D space.  vtkInteractorObservers have no n",
    "otion of\nwhere they are placed, and may not exist in 3D space at all.  3D\nwidgets also provide auxiliary functions like producing a\ntransformation, creating polydata (for seeding streamlines, probes,\netc.) or creating implicit functions. See the concrete subclasses for\nparticulars.\n\nTypically the widget is used by specifying a vtkProp3D or VTK dataset\nas input, and then invoking the \"On\" method to",
    " activate it. (You can\nalso specify a bounding box to help position the widget.) Prior to\ninvoking the On() method, the user may also wish to use the\nPlaceWidget() to initially position it. The 'i' (for \"interactor\")\nkeypresses also can be used to turn the widgets on and off (methods\nexist to change the key value and enable keypress activiation).\n\nTo support interactive manipulation of objects, th",
    "is class (and\nsubclasses) invoke the events StartInteractionEvent,\nInteractionEvent, and EndInteractionEvent.  These events are invoked\nwhen the vtk3DWidget enters a state where rapid response is desired:\nmouse motion, etc. The events can be used, for example, to set the\ndesired update frame rate (StartInteractionEvent), operate on the\nvtkProp3D or other object (InteractionEvent), and set the desi",
    "red\nframe rate back to normal values (EndInteractionEvent).\n\nNote that the Priority attribute inherited from vtkInteractorObserver\nhas a new default value which is now 0.5 so that all 3D widgets have\na higher priority than the usual interactor styles.\n\nSee Also:\n\nvtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\nvtkSphereWidget vtkImplicitPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtk3DWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtk3DWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtk3DWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

