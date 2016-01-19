// python wrapper for vtkPVAxesWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVAxesWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAxesWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAxesWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **PyvtkPVAxesWidget_Doc();


static PyObject *
PyvtkPVAxesWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAxesWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAxesWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAxesWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAxesWidget::NewInstance());

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
PyvtkPVAxesWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAxesWidget *tempr = vtkPVAxesWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetAxesActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  vtkPVAxesActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVAxesActor"))
    {
    if (ap.IsBound())
      {
      op->SetAxesActor(temp0);
      }
    else
      {
      op->vtkPVAxesWidget::SetAxesActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetAxesActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAxesActor *tempr = (ap.IsBound() ?
      op->GetAxesActor() :
      op->vtkPVAxesWidget::GetAxesActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->vtkPVAxesWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetParentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetParentRenderer(temp0);
      }
    else
      {
      op->vtkPVAxesWidget::SetParentRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetParentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetParentRenderer() :
      op->vtkPVAxesWidget::GetParentRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkPVAxesWidget::GetRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_ExecuteEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->ExecuteEvent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVAxesWidget::ExecuteEvent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->vtkPVAxesWidget::SetInteractive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkPVAxesWidget::GetInteractive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_InteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveOn();
      }
    else
      {
      op->vtkPVAxesWidget::InteractiveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_InteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveOff();
      }
    else
      {
      op->vtkPVAxesWidget::InteractiveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->vtkPVAxesWidget::SetOutlineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutlineColor() :
      op->vtkPVAxesWidget::GetOutlineColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->SetAxisLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVAxesWidget::SetAxisLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisLabelColor() :
      op->vtkPVAxesWidget::GetAxisLabelColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->vtkPVAxesWidget::SetViewport(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkPVAxesWidget::GetViewport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAxesWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAxesWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAxesWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAxesWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAxesWidget\nC++: vtkPVAxesWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAxesWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAxesWidget\nC++: vtkPVAxesWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAxesActor", PyvtkPVAxesWidget_SetAxesActor, METH_VARARGS,
   (char*)"V.SetAxesActor(vtkPVAxesActor)\nC++: void SetAxesActor(vtkPVAxesActor *actor)\n\nSet/get the axes actor to be displayed in this 3D widget.\n"},
  {(char*)"GetAxesActor", PyvtkPVAxesWidget_GetAxesActor, METH_VARARGS,
   (char*)"V.GetAxesActor() -> vtkPVAxesActor\nC++: vtkPVAxesActor *GetAxesActor()\n\nSet/get the axes actor to be displayed in this 3D widget.\n"},
  {(char*)"SetEnabled", PyvtkPVAxesWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nEnable the 3D widget.\n"},
  {(char*)"SetParentRenderer", PyvtkPVAxesWidget_SetParentRenderer, METH_VARARGS,
   (char*)"V.SetParentRenderer(vtkRenderer)\nC++: void SetParentRenderer(vtkRenderer *ren)\n\nSet the renderer this 3D widget will be contained in.\n"},
  {(char*)"GetParentRenderer", PyvtkPVAxesWidget_GetParentRenderer, METH_VARARGS,
   (char*)"V.GetParentRenderer() -> vtkRenderer\nC++: vtkRenderer *GetParentRenderer()\n\nSet the renderer this 3D widget will be contained in.\n"},
  {(char*)"GetRenderer", PyvtkPVAxesWidget_GetRenderer, METH_VARARGS,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet the renderer.\n"},
  {(char*)"ExecuteEvent", PyvtkPVAxesWidget_ExecuteEvent, METH_VARARGS,
   (char*)"V.ExecuteEvent(vtkObject, int, )\nC++: void ExecuteEvent(vtkObject *o, unsigned long event,\n    void *calldata)\n\nCallback to keep the camera for the axes actor up to date with\nthe camera in the parent renderer\n"},
  {(char*)"SetInteractive", PyvtkPVAxesWidget_SetInteractive, METH_VARARGS,
   (char*)"V.SetInteractive(int)\nC++: void SetInteractive(int state)\n\nSet/get whether to allow this 3D widget to be interactively\nmoved/scaled.\n"},
  {(char*)"GetInteractive", PyvtkPVAxesWidget_GetInteractive, METH_VARARGS,
   (char*)"V.GetInteractive() -> int\nC++: int GetInteractive()\n\nSet/get whether to allow this 3D widget to be interactively\nmoved/scaled.\n"},
  {(char*)"InteractiveOn", PyvtkPVAxesWidget_InteractiveOn, METH_VARARGS,
   (char*)"V.InteractiveOn()\nC++: void InteractiveOn()\n\nSet/get whether to allow this 3D widget to be interactively\nmoved/scaled.\n"},
  {(char*)"InteractiveOff", PyvtkPVAxesWidget_InteractiveOff, METH_VARARGS,
   (char*)"V.InteractiveOff()\nC++: void InteractiveOff()\n\nSet/get whether to allow this 3D widget to be interactively\nmoved/scaled.\n"},
  {(char*)"SetOutlineColor", PyvtkPVAxesWidget_SetOutlineColor, METH_VARARGS,
   (char*)"V.SetOutlineColor(float, float, float)\nC++: void SetOutlineColor(double r, double g, double b)\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this 3D\nwidget.\n"},
  {(char*)"GetOutlineColor", PyvtkPVAxesWidget_GetOutlineColor, METH_VARARGS,
   (char*)"V.GetOutlineColor() -> (float, ...)\nC++: double *GetOutlineColor()\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this 3D\nwidget.\n"},
  {(char*)"SetAxisLabelColor", PyvtkPVAxesWidget_SetAxisLabelColor, METH_VARARGS,
   (char*)"V.SetAxisLabelColor(float, float, float)\nC++: void SetAxisLabelColor(double r, double g, double b)\n\nSet/get the color of the axis labels of this widget.\n"},
  {(char*)"GetAxisLabelColor", PyvtkPVAxesWidget_GetAxisLabelColor, METH_VARARGS,
   (char*)"V.GetAxisLabelColor() -> (float, ...)\nC++: double *GetAxisLabelColor()\n\nSet/get the color of the axis labels of this widget.\n"},
  {(char*)"SetViewport", PyvtkPVAxesWidget_SetViewport, METH_VARARGS,
   (char*)"V.SetViewport(float, float, float, float)\nC++: void SetViewport(double minX, double minY, double maxX,\n    double maxY)\n\nSet/get the viewport to position/size this 3D widget.\n"},
  {(char*)"GetViewport", PyvtkPVAxesWidget_GetViewport, METH_VARARGS,
   (char*)"V.GetViewport() -> (float, ...)\nC++: double *GetViewport()\n\nSet/get the viewport to position/size this 3D widget.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVAxesWidget_StaticNew()
{
  return vtkPVAxesWidget::New();
}

PyObject *PyVTKClass_vtkPVAxesWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVAxesWidget_StaticNew,
    PyvtkPVAxesWidget_Methods,
    "vtkPVAxesWidget", modulename,
    NULL, NULL,
    PyvtkPVAxesWidget_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"RendererLayer", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkPVAxesWidget_Doc()
{
  static const char *docstring[] = {
    "vtkPVAxesWidget - A widget to manipulate an axe\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "This widget creates and manages its own vtkPVAxesActor.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAxesWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAxesWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAxesWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

