// python wrapper for vtkResliceCursorWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkResliceCursorWidget_Doc();


static PyObject *
PyvtkResliceCursorWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorWidget::NewInstance());

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
PyvtkResliceCursorWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorWidget *tempr = vtkResliceCursorWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  vtkResliceCursorRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursorRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkResliceCursorWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_GetResliceCursorRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorRepresentation *tempr = (ap.IsBound() ?
      op->GetResliceCursorRepresentation() :
      op->vtkResliceCursorWidget::GetResliceCursorRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkResliceCursorWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

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
      op->vtkResliceCursorWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_SetManageWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManageWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManageWindowLevel(temp0);
      }
    else
      {
      op->vtkResliceCursorWidget::SetManageWindowLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_GetManageWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManageWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetManageWindowLevel() :
      op->vtkResliceCursorWidget::GetManageWindowLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_ManageWindowLevelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManageWindowLevelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManageWindowLevelOn();
      }
    else
      {
      op->vtkResliceCursorWidget::ManageWindowLevelOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_ManageWindowLevelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManageWindowLevelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManageWindowLevelOff();
      }
    else
      {
      op->vtkResliceCursorWidget::ManageWindowLevelOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorWidget_ResetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorWidget *op = static_cast<vtkResliceCursorWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetResliceCursor();
      }
    else
      {
      op->vtkResliceCursorWidget::ResetResliceCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class macros.\n"},
  {(char*)"IsA", PyvtkResliceCursorWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class macros.\n"},
  {(char*)"NewInstance", PyvtkResliceCursorWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorWidget\nC++: vtkResliceCursorWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursorWidget\nC++: vtkResliceCursorWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class macros.\n"},
  {(char*)"SetRepresentation", PyvtkResliceCursorWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkResliceCursorRepresentation)\nC++: void SetRepresentation(vtkResliceCursorRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetResliceCursorRepresentation", PyvtkResliceCursorWidget_GetResliceCursorRepresentation, METH_VARARGS,
   (char*)"V.GetResliceCursorRepresentation()\n    -> vtkResliceCursorRepresentation\nC++: vtkResliceCursorRepresentation *GetResliceCursorRepresentation(\n    )\n\nReturn the representation as a vtkResliceCursorRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkResliceCursorWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetEnabled", PyvtkResliceCursorWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods for activiating this widget. This implementation extends\nthe superclasses' in order to resize the widget handles due to a\nrender start event.\n"},
  {(char*)"SetManageWindowLevel", PyvtkResliceCursorWidget_SetManageWindowLevel, METH_VARARGS,
   (char*)"V.SetManageWindowLevel(int)\nC++: void SetManageWindowLevel(int a)\n\nAlso perform window level ?\n"},
  {(char*)"GetManageWindowLevel", PyvtkResliceCursorWidget_GetManageWindowLevel, METH_VARARGS,
   (char*)"V.GetManageWindowLevel() -> int\nC++: int GetManageWindowLevel()\n\nAlso perform window level ?\n"},
  {(char*)"ManageWindowLevelOn", PyvtkResliceCursorWidget_ManageWindowLevelOn, METH_VARARGS,
   (char*)"V.ManageWindowLevelOn()\nC++: void ManageWindowLevelOn()\n\nAlso perform window level ?\n"},
  {(char*)"ManageWindowLevelOff", PyvtkResliceCursorWidget_ManageWindowLevelOff, METH_VARARGS,
   (char*)"V.ManageWindowLevelOff()\nC++: void ManageWindowLevelOff()\n\nAlso perform window level ?\n"},
  {(char*)"ResetResliceCursor", PyvtkResliceCursorWidget_ResetResliceCursor, METH_VARARGS,
   (char*)"V.ResetResliceCursor()\nC++: virtual void ResetResliceCursor()\n\nReset the cursor back to its initial state\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursorWidget_StaticNew()
{
  return vtkResliceCursorWidget::New();
}

PyObject *PyVTKClass_vtkResliceCursorWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursorWidget_StaticNew,
    PyvtkResliceCursorWidget_Methods,
    "vtkResliceCursorWidget", modulename,
    NULL, NULL,
    PyvtkResliceCursorWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "WindowLevelEvent", vtkResliceCursorWidget::WindowLevelEvent },
          { "ResliceAxesChangedEvent", vtkResliceCursorWidget::ResliceAxesChangedEvent },
          { "ResliceThicknessChangedEvent", vtkResliceCursorWidget::ResliceThicknessChangedEvent },
          { "ResetCursorEvent", vtkResliceCursorWidget::ResetCursorEvent },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkResliceCursorWidget_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorWidget - represent a reslice cursor\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This class represents a reslice cursor that can be used to perform\ninteractive thick slab MPR's through data. It consists of two cross\nsectional hairs, with an optional thickness. The hairs may have a\nhole in the center. These may be translated or rotated independent of\neach other in the view. The result is used to reslice the data along\nthese cross sections. This allows the user to perform multi-",
    "planar\nthin or thick reformat of the data on an image view, rather than a 3D\nview. The class internally uses vtkImageSlabReslice or\nvtkImageReslice depending on the modes in vtkResliceCursor to do its\nreslicing. The slab thickness is set interactively from the widget.\nThe slab resolution (ie the number of blend points) is set as the\nminimum spacing along any dimension from the dataset.\n\nSee Also:\n",
    "\nvtkImageSlabReslice vtkResliceCursorLineRepresentation\nvtkResliceCursor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

