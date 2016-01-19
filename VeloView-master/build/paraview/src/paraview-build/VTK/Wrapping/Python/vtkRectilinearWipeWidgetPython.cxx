// python wrapper for vtkRectilinearWipeWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRectilinearWipeWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRectilinearWipeWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRectilinearWipeWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkRectilinearWipeWidget_Doc();


static PyObject *
PyvtkRectilinearWipeWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRectilinearWipeWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearWipeWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearWipeWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearWipeWidget::NewInstance());

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
PyvtkRectilinearWipeWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRectilinearWipeWidget *tempr = vtkRectilinearWipeWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  vtkRectilinearWipeRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRectilinearWipeRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkRectilinearWipeWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_GetRectilinearWipeRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearWipeRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearWipeRepresentation *tempr = (ap.IsBound() ?
      op->GetRectilinearWipeRepresentation() :
      op->vtkRectilinearWipeWidget::GetRectilinearWipeRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkRectilinearWipeWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearWipeWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearWipeWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkRectilinearWipeWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkRectilinearWipeWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRectilinearWipeWidget\nC++: vtkRectilinearWipeWidget *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearWipeWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearWipeWidget\nC++: vtkRectilinearWipeWidget *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetRepresentation", PyvtkRectilinearWipeWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkRectilinearWipeRepresentation)\nC++: void SetRepresentation(vtkRectilinearWipeRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetRectilinearWipeRepresentation", PyvtkRectilinearWipeWidget_GetRectilinearWipeRepresentation, METH_VARARGS,
   (char*)"V.GetRectilinearWipeRepresentation()\n    -> vtkRectilinearWipeRepresentation\nC++: vtkRectilinearWipeRepresentation *GetRectilinearWipeRepresentation(\n    )\n\nReturn the representation as a vtkRectilinearWipeRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkRectilinearWipeWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearWipeWidget_StaticNew()
{
  return vtkRectilinearWipeWidget::New();
}

PyObject *PyVTKClass_vtkRectilinearWipeWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearWipeWidget_StaticNew,
    PyvtkRectilinearWipeWidget_Methods,
    "vtkRectilinearWipeWidget", modulename,
    NULL, NULL,
    PyvtkRectilinearWipeWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkRectilinearWipeWidget_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearWipeWidget - interactively control an instance of\nvtkImageRectilinearWipe filter\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkRectilinearWipeWidget is used to interactively control an\ninstance of vtkImageRectilinearWipe (and an associated vtkImageActor\nused to display the rectilinear wipe). A rectilinear wipe is a 2x2\ncheckerboard pattern created by combining two separate images, where\nvarious combinations of the checker squares are possible. Using this\nwidget, the user can adjust the layout of the checker pattern",
    ", such\nas moving the center point, moving the horizontal separator, or\nmoving the vertical separator. These capabilities are particularly\nuseful for comparing two images.\n\nTo use this widget, specify its representation (by default the\nrepresentation is an instance of vtkRectilinearWipeProp). The\nrepresentation generally requires that you specify an instance of\nvtkImageRectilinearWipe and an instan",
    "ce of vtkImageActor. Other\ninstance variables may also be required to be set -- see the\ndocumentation for vtkRectilinearWipeProp (or appropriate subclass).\n\nBy default, the widget responds to the following events:\n\nSelecting the center point, horizontal separator, and verticel\nseparator:\n  LeftButtonPressEvent - move the separators\n  LeftButtonReleaseEvent - release the separators\n  MouseMoveEvent",
    " - move the separators  Selecting the center point\nallows you to move the horizontal and vertical separators\nsimultaneously. Otherwise only horizontal or vertical motion is\npossible/\n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkRectilinearWipeWidget's widget events:\n\n\n  vtkWidgetEvent::Select ",
    "-- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for motion has been invoked \n\nIn turn, when these widget events are processed, the\nvtkRectilinearWipeWidget invokes the following VTK events (which\nobservers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkComman",
    "d::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\nCaveats:\n\nThe appearance of this widget is defined by its representation,\nincluding any properties associated with the representation.  The\nwidget representation is a type of vtkProp that defines a particular\nAPI that works with this widget. If desired, the vtkProp may be\nsubclassed to ",
    "create new looks for the widget.\n\nSee Also:\n\nvtkRectilinearWipeProp vtkImageRectilinearWipe vtkImageActor\nvtkCheckerboardWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearWipeWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearWipeWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearWipeWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

