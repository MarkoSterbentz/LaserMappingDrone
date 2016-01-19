// python wrapper for vtkCaptionWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCaptionWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCaptionWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCaptionWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderWidgetNew
extern "C" { PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderWidgetNew
#endif

static const char **PyvtkCaptionWidget_Doc();


static PyObject *
PyvtkCaptionWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCaptionWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaptionWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaptionWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaptionWidget::NewInstance());

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
PyvtkCaptionWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCaptionWidget *tempr = vtkCaptionWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

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
      op->vtkCaptionWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  vtkCaptionRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCaptionRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkCaptionWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_SetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  vtkCaptionActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCaptionActor2D"))
    {
    if (ap.IsBound())
      {
      op->SetCaptionActor2D(temp0);
      }
    else
      {
      op->vtkCaptionWidget::SetCaptionActor2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_GetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetCaptionActor2D() :
      op->vtkCaptionWidget::GetCaptionActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkCaptionWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCaptionWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkCaptionWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class methods.\n"},
  {(char*)"IsA", PyvtkCaptionWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkCaptionWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCaptionWidget\nC++: vtkCaptionWidget *NewInstance()\n\nStandard VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkCaptionWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCaptionWidget\nC++: vtkCaptionWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class methods.\n"},
  {(char*)"SetEnabled", PyvtkCaptionWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int enabling)\n\nOverride superclasses' SetEnabled() method because the caption\nleader has its own dedicated widget.\n"},
  {(char*)"SetRepresentation", PyvtkCaptionWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkCaptionRepresentation)\nC++: void SetRepresentation(vtkCaptionRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"SetCaptionActor2D", PyvtkCaptionWidget_SetCaptionActor2D, METH_VARARGS,
   (char*)"V.SetCaptionActor2D(vtkCaptionActor2D)\nC++: void SetCaptionActor2D(vtkCaptionActor2D *capActor)\n\nSpecify a vtkCaptionActor2D to manage. This is convenient,\nalternative method to SetRepresentation(). It internally create a\nvtkCaptionRepresentation and then invokes\nvtkCaptionRepresentation::SetCaptionActor2D().\n"},
  {(char*)"GetCaptionActor2D", PyvtkCaptionWidget_GetCaptionActor2D, METH_VARARGS,
   (char*)"V.GetCaptionActor2D() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetCaptionActor2D()\n\nSpecify a vtkCaptionActor2D to manage. This is convenient,\nalternative method to SetRepresentation(). It internally create a\nvtkCaptionRepresentation and then invokes\nvtkCaptionRepresentation::SetCaptionActor2D().\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkCaptionWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCaptionWidget_StaticNew()
{
  return vtkCaptionWidget::New();
}

PyObject *PyVTKClass_vtkCaptionWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCaptionWidget_StaticNew,
    PyvtkCaptionWidget_Methods,
    "vtkCaptionWidget", modulename,
    NULL, NULL,
    PyvtkCaptionWidget_Doc(),
    PyVTKClass_vtkBorderWidgetNew(modulename));
  return cls;
}

const char **PyvtkCaptionWidget_Doc()
{
  static const char *docstring[] = {
    "vtkCaptionWidget - widget for placing a caption (text plus leader)\n\n",
    "Superclass: vtkBorderWidget\n\n",
    "This class provides support for interactively placing a caption on\nthe 2D overlay plane. A caption is defined by some text with a leader\n(e.g., arrow) that points from the text to a point in the scene. The\ncaption is represented by a vtkCaptionRepresentation. It uses the\nevent bindings of its superclass (vtkBorderWidget) to control the\nplacement of the text, and adds the ability to move the attach",
    "ment\npoint around. In addition, when the caption text is selected, the\nwidget emits a ActivateEvent that observers can watch for. This is\nuseful for opening GUI dialogoues to adjust font characteristics,\netc. (Please see the superclass for a description of event bindings.)\n\nNote that this widget extends the behavior of its superclass\nvtkBorderWidget. The end point of the leader can be selected and",
    "\nmoved around with an internal vtkHandleWidget.\n\nSee Also:\n\nvtkBorderWidget vtkTextWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCaptionWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCaptionWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCaptionWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

