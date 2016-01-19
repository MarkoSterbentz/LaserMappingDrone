// python wrapper for vtkScalarBarWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScalarBarWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScalarBarWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScalarBarWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderWidgetNew
extern "C" { PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderWidgetNew
#endif

static const char **PyvtkScalarBarWidget_Doc();


static PyObject *
PyvtkScalarBarWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScalarBarWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarBarWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarWidget::NewInstance());

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
PyvtkScalarBarWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScalarBarWidget *tempr = vtkScalarBarWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  vtkScalarBarRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkScalarBarWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetScalarBarRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarBarRepresentation *tempr = (ap.IsBound() ?
      op->GetScalarBarRepresentation() :
      op->vtkScalarBarWidget::GetScalarBarRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  vtkScalarBarActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarActor"))
    {
    if (ap.IsBound())
      {
      op->SetScalarBarActor(temp0);
      }
    else
      {
      op->vtkScalarBarWidget::SetScalarBarActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->GetScalarBarActor() :
      op->vtkScalarBarWidget::GetScalarBarActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetRepositionable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepositionable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepositionable(temp0);
      }
    else
      {
      op->vtkScalarBarWidget::SetRepositionable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetRepositionable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepositionable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepositionable() :
      op->vtkScalarBarWidget::GetRepositionable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_RepositionableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepositionableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepositionableOn();
      }
    else
      {
      op->vtkScalarBarWidget::RepositionableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_RepositionableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepositionableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepositionableOff();
      }
    else
      {
      op->vtkScalarBarWidget::RepositionableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkScalarBarWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarBarWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarBarWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarBarWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarBarWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScalarBarWidget\nC++: vtkScalarBarWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScalarBarWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScalarBarWidget\nC++: vtkScalarBarWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRepresentation", PyvtkScalarBarWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkScalarBarRepresentation)\nC++: virtual void SetRepresentation(\n    vtkScalarBarRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetScalarBarRepresentation", PyvtkScalarBarWidget_GetScalarBarRepresentation, METH_VARARGS,
   (char*)"V.GetScalarBarRepresentation() -> vtkScalarBarRepresentation\nC++: vtkScalarBarRepresentation *GetScalarBarRepresentation()\n\nReturn the representation as a vtkScalarBarRepresentation.\n"},
  {(char*)"SetScalarBarActor", PyvtkScalarBarWidget_SetScalarBarActor, METH_VARARGS,
   (char*)"V.SetScalarBarActor(vtkScalarBarActor)\nC++: virtual void SetScalarBarActor(vtkScalarBarActor *actor)\n\nGet the ScalarBar used by this Widget. One is created\nautomatically.\n"},
  {(char*)"GetScalarBarActor", PyvtkScalarBarWidget_GetScalarBarActor, METH_VARARGS,
   (char*)"V.GetScalarBarActor() -> vtkScalarBarActor\nC++: virtual vtkScalarBarActor *GetScalarBarActor()\n\nGet the ScalarBar used by this Widget. One is created\nautomatically.\n"},
  {(char*)"SetRepositionable", PyvtkScalarBarWidget_SetRepositionable, METH_VARARGS,
   (char*)"V.SetRepositionable(int)\nC++: void SetRepositionable(int a)\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\nTODO: This functionality should probably be moved to the\nsuperclass.\n"},
  {(char*)"GetRepositionable", PyvtkScalarBarWidget_GetRepositionable, METH_VARARGS,
   (char*)"V.GetRepositionable() -> int\nC++: int GetRepositionable()\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\nTODO: This functionality should probably be moved to the\nsuperclass.\n"},
  {(char*)"RepositionableOn", PyvtkScalarBarWidget_RepositionableOn, METH_VARARGS,
   (char*)"V.RepositionableOn()\nC++: void RepositionableOn()\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\nTODO: This functionality should probably be moved to the\nsuperclass.\n"},
  {(char*)"RepositionableOff", PyvtkScalarBarWidget_RepositionableOff, METH_VARARGS,
   (char*)"V.RepositionableOff()\nC++: void RepositionableOff()\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\nTODO: This functionality should probably be moved to the\nsuperclass.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkScalarBarWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScalarBarWidget_StaticNew()
{
  return vtkScalarBarWidget::New();
}

PyObject *PyVTKClass_vtkScalarBarWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScalarBarWidget_StaticNew,
    PyvtkScalarBarWidget_Methods,
    "vtkScalarBarWidget", modulename,
    NULL, NULL,
    PyvtkScalarBarWidget_Doc(),
    PyVTKClass_vtkBorderWidgetNew(modulename));
  return cls;
}

const char **PyvtkScalarBarWidget_Doc()
{
  static const char *docstring[] = {
    "vtkScalarBarWidget - 2D widget for manipulating a scalar bar\n\n",
    "Superclass: vtkBorderWidget\n\n",
    "This class provides support for interactively manipulating the\nposition, size, and orientation of a scalar bar. It listens to Left\nmouse events and mouse movement. It also listens to Right mouse\nevents and notifies any observers of Right mouse events on this\nobject when they occur. It will change the cursor shape based on its\nlocation. If the cursor is over an edge of the scalar bar it will\nchange",
    " the cursor shape to a resize edge shape. If the position of a\nscalar bar is moved to be close to the center of one of the four\nedges of the viewport, then the scalar bar will change its\norientation to align with that edge. This orientation is sticky in\nthat it will stay that orientation until the position is moved close\nto another edge.\n\nSee Also:\n\nvtkInteractorObserver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarBarWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarBarWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarBarWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

