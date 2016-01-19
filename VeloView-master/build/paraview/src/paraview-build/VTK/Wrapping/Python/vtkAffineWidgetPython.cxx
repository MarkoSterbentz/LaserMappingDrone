// python wrapper for vtkAffineWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAffineWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAffineWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAffineWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkAffineWidget_Doc();


static PyObject *
PyvtkAffineWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAffineWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAffineWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAffineWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAffineWidget::NewInstance());

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
PyvtkAffineWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAffineWidget *tempr = vtkAffineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  vtkAffineRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAffineRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkAffineWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_GetAffineRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAffineRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAffineRepresentation *tempr = (ap.IsBound() ?
      op->GetAffineRepresentation() :
      op->vtkAffineWidget::GetAffineRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkAffineWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineWidget *op = static_cast<vtkAffineWidget *>(vp);

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
      op->vtkAffineWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAffineWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkAffineWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class macros.\n"},
  {(char*)"IsA", PyvtkAffineWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class macros.\n"},
  {(char*)"NewInstance", PyvtkAffineWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAffineWidget\nC++: vtkAffineWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {(char*)"SafeDownCast", PyvtkAffineWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAffineWidget\nC++: vtkAffineWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class macros.\n"},
  {(char*)"SetRepresentation", PyvtkAffineWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkAffineRepresentation)\nC++: void SetRepresentation(vtkAffineRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetAffineRepresentation", PyvtkAffineWidget_GetAffineRepresentation, METH_VARARGS,
   (char*)"V.GetAffineRepresentation() -> vtkAffineRepresentation\nC++: vtkAffineRepresentation *GetAffineRepresentation()\n\nReturn the representation as a vtkAffineRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkAffineWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetEnabled", PyvtkAffineWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods for activating this widget. This implementation extends\nthe superclasses' in order to resize the widget handles due to a\nrender start event.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAffineWidget_StaticNew()
{
  return vtkAffineWidget::New();
}

PyObject *PyVTKClass_vtkAffineWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAffineWidget_StaticNew,
    PyvtkAffineWidget_Methods,
    "vtkAffineWidget", modulename,
    NULL, NULL,
    PyvtkAffineWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkAffineWidget_Doc()
{
  static const char *docstring[] = {
    "vtkAffineWidget - perform affine transformations\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkAffineWidget is used to perform affine transformations on\nobjects. (Affine transformations are transformations that keep\nparallel lines parallel. Affine transformations include translation,\nscaling, rotation, and shearing.)\n\nTo use this widget, set the widget representation. The representation\nmaintains a transformation matrix and other instance variables\nconsistent with the transformations",
    " applied by this widget.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - select widget: depending on which part is\nselected\n                         translation, rotation, scaling, or shearing\nmay follow.\n  LeftButtonReleaseEvent - end selection of widget.\n  MouseMoveEvent - ",
    "interactive movement across widget \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkAffineWidget's widget events:\n\n\n  vtkWidgetEvent::Select -- focal point is being selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for widget motion \n\n",
    "In turn, when these widget events are processed, the vtkAffineWidget\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAffineWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAffineWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAffineWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

