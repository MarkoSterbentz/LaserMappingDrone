// python wrapper for vtkCheckerboardWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCheckerboardWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCheckerboardWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCheckerboardWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkCheckerboardWidget_Doc();


static PyObject *
PyvtkCheckerboardWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCheckerboardWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCheckerboardWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCheckerboardWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCheckerboardWidget::NewInstance());

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
PyvtkCheckerboardWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCheckerboardWidget *tempr = vtkCheckerboardWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

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
      op->vtkCheckerboardWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  vtkCheckerboardRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCheckerboardRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkCheckerboardWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_GetCheckerboardRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCheckerboardRepresentation *tempr = (ap.IsBound() ?
      op->GetCheckerboardRepresentation() :
      op->vtkCheckerboardWidget::GetCheckerboardRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkCheckerboardWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCheckerboardWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkCheckerboardWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkCheckerboardWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkCheckerboardWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCheckerboardWidget\nC++: vtkCheckerboardWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkCheckerboardWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCheckerboardWidget\nC++: vtkCheckerboardWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkCheckerboardWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetRepresentation", PyvtkCheckerboardWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkCheckerboardRepresentation)\nC++: void SetRepresentation(vtkCheckerboardRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetCheckerboardRepresentation", PyvtkCheckerboardWidget_GetCheckerboardRepresentation, METH_VARARGS,
   (char*)"V.GetCheckerboardRepresentation() -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *GetCheckerboardRepresentation(\n    )\n\nReturn the representation as a vtkCheckerboardRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkCheckerboardWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCheckerboardWidget_StaticNew()
{
  return vtkCheckerboardWidget::New();
}

PyObject *PyVTKClass_vtkCheckerboardWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCheckerboardWidget_StaticNew,
    PyvtkCheckerboardWidget_Methods,
    "vtkCheckerboardWidget", modulename,
    NULL, NULL,
    PyvtkCheckerboardWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkCheckerboardWidget_Doc()
{
  static const char *docstring[] = {
    "vtkCheckerboardWidget - interactively set the number of divisions in\n2D image checkerboard\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkCheckerboardWidget is used to interactively control an\ninstance of vtkImageCheckerboard (and an associated vtkImageActor\nused to display the checkerboard). The user can adjust the number of\ndivisions in each of the i-j directions in a 2D image. A frame\nappears around the vtkImageActor with sliders along each side of the\nframe. The user can interactively adjust the sliders to the desired\nnum",
    "ber of checkerboard subdivisions.\n\nTo use this widget, specify an instance of vtkImageCheckerboard and\nan instance of vtkImageActor. By default, the widget responds to the\nfollowing events:\n\nIf the slider bead is selected:\n  LeftButtonPressEvent - select slider (if on slider)\n  LeftButtonReleaseEvent - release slider\n  MouseMoveEvent - move slider If the end caps or slider tube of a\nslider are sel",
    "ected:\n  LeftButtonPressEvent - jump (or animate) to cap or point on tube; \nIt is possible to change these event bindings. Please refer to the\ndocumentation for vtkSliderWidget for more information. Advanced\nusers may directly access and manipulate the sliders by obtaining the\ninstances of vtkSliderWidget composing the vtkCheckerboard widget.\n\nSee Also:\n\nvtkImageCheckerboard vtkImageActor vtkSlide",
    "rWidget\nvtkRectilinearWipeWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCheckerboardWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCheckerboardWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCheckerboardWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

