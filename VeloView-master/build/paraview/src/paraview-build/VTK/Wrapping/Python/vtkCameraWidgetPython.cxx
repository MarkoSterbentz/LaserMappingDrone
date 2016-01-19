// python wrapper for vtkCameraWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCameraWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCameraWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCameraWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBorderWidgetNew
extern "C" { PyObject *PyVTKClass_vtkBorderWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderWidgetNew
#endif

static const char **PyvtkCameraWidget_Doc();


static PyObject *
PyvtkCameraWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraWidget *op = static_cast<vtkCameraWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCameraWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraWidget *op = static_cast<vtkCameraWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraWidget *op = static_cast<vtkCameraWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCameraWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraWidget::NewInstance());

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
PyvtkCameraWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCameraWidget *tempr = vtkCameraWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCameraWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraWidget *op = static_cast<vtkCameraWidget *>(vp);

  vtkCameraRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkCameraWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCameraWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraWidget *op = static_cast<vtkCameraWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkCameraWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCameraWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkCameraWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandar VTK class methods.\n"},
  {(char*)"IsA", PyvtkCameraWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandar VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkCameraWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCameraWidget\nC++: vtkCameraWidget *NewInstance()\n\nStandar VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkCameraWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCameraWidget\nC++: vtkCameraWidget *SafeDownCast(vtkObject* o)\n\nStandar VTK class methods.\n"},
  {(char*)"SetRepresentation", PyvtkCameraWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkCameraRepresentation)\nC++: void SetRepresentation(vtkCameraRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkCameraWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCameraWidget_StaticNew()
{
  return vtkCameraWidget::New();
}

PyObject *PyVTKClass_vtkCameraWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCameraWidget_StaticNew,
    PyvtkCameraWidget_Methods,
    "vtkCameraWidget", modulename,
    NULL, NULL,
    PyvtkCameraWidget_Doc(),
    PyVTKClass_vtkBorderWidgetNew(modulename));
  return cls;
}

const char **PyvtkCameraWidget_Doc()
{
  static const char *docstring[] = {
    "vtkCameraWidget - 2D widget for saving a series of camera views\n\n",
    "Superclass: vtkBorderWidget\n\n",
    "This class provides support for interactively saving a series of\ncamera views into an interpolated path (using vtkCameraInterpolator).\nTo use the class start by specifying a camera to interpolate, and\nthen simply start recording by hitting the \"record\" button,\nmanipulate the camera (by using an interactor, direct scripting, or\nany other means), and then save the camera view. Repeat this process\nto",
    " record a series of views.  The user can then play back\ninterpolated camera views using the vtkCameraInterpolator.\n\nSee Also:\n\nvtkBorderWidget vtkCameraInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCameraWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCameraWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCameraWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

