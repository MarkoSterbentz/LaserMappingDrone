// python wrapper for vtkTextWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderWidgetNew
extern "C" { PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderWidgetNew
#endif

static const char **PyvtkTextWidget_Doc();


static PyObject *
PyvtkTextWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextWidget::NewInstance());

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
PyvtkTextWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextWidget *tempr = vtkTextWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  vtkTextRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkTextWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextWidget_SetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  vtkTextActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextActor"))
    {
    if (ap.IsBound())
      {
      op->SetTextActor(temp0);
      }
    else
      {
      op->vtkTextWidget::SetTextActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextWidget_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkTextWidget::GetTextActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkTextWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkTextWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkTextWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkTextWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextWidget\nC++: vtkTextWidget *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkTextWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextWidget\nC++: vtkTextWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetRepresentation", PyvtkTextWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkTextRepresentation)\nC++: void SetRepresentation(vtkTextRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"SetTextActor", PyvtkTextWidget_SetTextActor, METH_VARARGS,
   (char*)"V.SetTextActor(vtkTextActor)\nC++: void SetTextActor(vtkTextActor *textActor)\n\nSpecify a vtkTextActor to manage. This is a convenient,\nalternative method to specify the representation for the widget\n(i.e., used instead of SetRepresentation()). It internally\ncreates a vtkTextRepresentation and then invokes\nvtkTextRepresentation::SetTextActor().\n"},
  {(char*)"GetTextActor", PyvtkTextWidget_GetTextActor, METH_VARARGS,
   (char*)"V.GetTextActor() -> vtkTextActor\nC++: vtkTextActor *GetTextActor()\n\nSpecify a vtkTextActor to manage. This is a convenient,\nalternative method to specify the representation for the widget\n(i.e., used instead of SetRepresentation()). It internally\ncreates a vtkTextRepresentation and then invokes\nvtkTextRepresentation::SetTextActor().\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkTextWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextWidget_StaticNew()
{
  return vtkTextWidget::New();
}

PyObject *PyVTKClass_vtkTextWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextWidget_StaticNew,
    PyvtkTextWidget_Methods,
    "vtkTextWidget", modulename,
    NULL, NULL,
    PyvtkTextWidget_Doc(),
    PyVTKClass_vtkBorderWidgetNew(modulename));
  return cls;
}

const char **PyvtkTextWidget_Doc()
{
  static const char *docstring[] = {
    "vtkTextWidget - widget for placing text on overlay plane\n\n",
    "Superclass: vtkBorderWidget\n\n",
    "This class provides support for interactively placing text on the 2D\noverlay plane. The text is defined by an instance of vtkTextActor. It\nuses the event bindings of its superclass (vtkBorderWidget). In\naddition, when the text is selected, the widget emits a\nWidgetActivateEvent that observers can watch for. This is useful for\nopening GUI dialogues to adjust font characteristics, etc. (Please\nsee t",
    "he superclass for a description of event bindings.)\n\nSee Also:\n\nvtkBorderWidget vtkCaptionWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

