// python wrapper for vtkPlaybackWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlaybackWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlaybackWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlaybackWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderWidgetNew
extern "C" { PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderWidgetNew
#endif

static const char **PyvtkPlaybackWidget_Doc();


static PyObject *
PyvtkPlaybackWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlaybackWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaybackWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaybackWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaybackWidget::NewInstance());

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
PyvtkPlaybackWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlaybackWidget *tempr = vtkPlaybackWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  vtkPlaybackRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaybackRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkPlaybackWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkPlaybackWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaybackWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaybackWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandar VTK class methods.\n"},
  {(char*)"IsA", PyvtkPlaybackWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandar VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkPlaybackWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlaybackWidget\nC++: vtkPlaybackWidget *NewInstance()\n\nStandar VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkPlaybackWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaybackWidget\nC++: vtkPlaybackWidget *SafeDownCast(vtkObject* o)\n\nStandar VTK class methods.\n"},
  {(char*)"SetRepresentation", PyvtkPlaybackWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkPlaybackRepresentation)\nC++: void SetRepresentation(vtkPlaybackRepresentation *r)\n\nSpecify an instance of vtkPlaybackRepresentation used to\nrepresent this widget in the scene. Note that the representation\nis a subclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkPlaybackWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaybackWidget_StaticNew()
{
  return vtkPlaybackWidget::New();
}

PyObject *PyVTKClass_vtkPlaybackWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaybackWidget_StaticNew,
    PyvtkPlaybackWidget_Methods,
    "vtkPlaybackWidget", modulename,
    NULL, NULL,
    PyvtkPlaybackWidget_Doc(),
    PyVTKClass_vtkBorderWidgetNew(modulename));
  return cls;
}

const char **PyvtkPlaybackWidget_Doc()
{
  static const char *docstring[] = {
    "vtkPlaybackWidget - 2D widget for controlling a playback stream\n\n",
    "Superclass: vtkBorderWidget\n\n",
    "This class provides support for interactively controlling the\nplayback of a serial stream of information (e.g., animation sequence,\nvideo, etc.). Controls for play, stop, advance one step forward,\nadvance one step backward, jump to beginning, and jump to end are\navailable.\n\nSee Also:\n\nvtkBorderWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaybackWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaybackWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaybackWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

