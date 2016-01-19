// python wrapper for vtkSeedWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSeedWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSeedWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSeedWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkSeedWidget_Doc();


static PyObject *
PyvtkSeedWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSeedWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSeedWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSeedWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSeedWidget::NewInstance());

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
PyvtkSeedWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSeedWidget *tempr = vtkSeedWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

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
      op->vtkSeedWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentRenderer(temp0);
      }
    else
      {
      op->vtkSeedWidget::SetCurrentRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkSeedWidget::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  vtkSeedRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSeedRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkSeedWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_GetSeedRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSeedRepresentation *tempr = (ap.IsBound() ?
      op->GetSeedRepresentation() :
      op->vtkSeedWidget::GetSeedRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkSeedWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessEvents(temp0);
      }
    else
      {
      op->vtkSeedWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_CompleteInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompleteInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompleteInteraction();
      }
    else
      {
      op->vtkSeedWidget::CompleteInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_RestartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestartInteraction();
      }
    else
      {
      op->vtkSeedWidget::RestartInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_CreateNewHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNewHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->CreateNewHandle() :
      op->vtkSeedWidget::CreateNewHandle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeleteSeed(temp0);
      }
    else
      {
      op->vtkSeedWidget::DeleteSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->GetSeed(temp0) :
      op->vtkSeedWidget::GetSeed(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkSeedWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSeedWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkSeedWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkSeedWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkSeedWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSeedWidget\nC++: vtkSeedWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkSeedWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSeedWidget\nC++: vtkSeedWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkSeedWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetCurrentRenderer", PyvtkSeedWidget_SetCurrentRenderer, METH_VARARGS,
   (char*)"V.SetCurrentRenderer(vtkRenderer)\nC++: virtual void SetCurrentRenderer(vtkRenderer *)\n\nSet the current renderer. This method also propagates to all the\nchild handle widgets, if any exist\n"},
  {(char*)"SetInteractor", PyvtkSeedWidget_SetInteractor, METH_VARARGS,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *)\n\nSet the interactor. This method also propagates to all the child\nhandle widgets, if any exist\n"},
  {(char*)"SetRepresentation", PyvtkSeedWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkSeedRepresentation)\nC++: void SetRepresentation(vtkSeedRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetSeedRepresentation", PyvtkSeedWidget_GetSeedRepresentation, METH_VARARGS,
   (char*)"V.GetSeedRepresentation() -> vtkSeedRepresentation\nC++: vtkSeedRepresentation *GetSeedRepresentation()\n\nReturn the representation as a vtkSeedRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSeedWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"SetProcessEvents", PyvtkSeedWidget_SetProcessEvents, METH_VARARGS,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {(char*)"CompleteInteraction", PyvtkSeedWidget_CompleteInteraction, METH_VARARGS,
   (char*)"V.CompleteInteraction()\nC++: virtual void CompleteInteraction()\n\nMethod to be called when the seed widget should stop responding\nto the place point interaction. The seed widget, when defined\nallows you place seeds by clicking on the render window. Use this\nmethod to indicate that you would like to stop placing seeds\ninteractively. If you'd like the widget to stop responding to\n*any* user interaction simply disable event processing by the\nwidget by calling\n  widget->ProcessEventsOff()\n"},
  {(char*)"RestartInteraction", PyvtkSeedWidget_RestartInteraction, METH_VARARGS,
   (char*)"V.RestartInteraction()\nC++: virtual void RestartInteraction()\n\nMethod to be called when the seed widget should start responding\nto the interaction.\n"},
  {(char*)"CreateNewHandle", PyvtkSeedWidget_CreateNewHandle, METH_VARARGS,
   (char*)"V.CreateNewHandle() -> vtkHandleWidget\nC++: virtual vtkHandleWidget *CreateNewHandle()\n\nUse this method to programmatically create a new handle. In\ninteractive mode, (when the widget is in the PlacingSeeds state)\nthis method is automatically invoked. The method returns the\nhandle created. A valid seed representation must exist for the\nwidget to create a new handle.\n"},
  {(char*)"DeleteSeed", PyvtkSeedWidget_DeleteSeed, METH_VARARGS,
   (char*)"V.DeleteSeed(int)\nC++: void DeleteSeed(int n)\n\nDelete the nth seed.\n"},
  {(char*)"GetSeed", PyvtkSeedWidget_GetSeed, METH_VARARGS,
   (char*)"V.GetSeed(int) -> vtkHandleWidget\nC++: vtkHandleWidget *GetSeed(int n)\n\nGet the nth seed\n"},
  {(char*)"GetWidgetState", PyvtkSeedWidget_GetWidgetState, METH_VARARGS,
   (char*)"V.GetWidgetState() -> int\nC++: int GetWidgetState()\n\nGet the widget state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSeedWidget_StaticNew()
{
  return vtkSeedWidget::New();
}

PyObject *PyVTKClass_vtkSeedWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSeedWidget_StaticNew,
    PyvtkSeedWidget_Methods,
    "vtkSeedWidget", modulename,
    NULL, NULL,
    PyvtkSeedWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "Start", vtkSeedWidget::Start },
          { "PlacingSeeds", vtkSeedWidget::PlacingSeeds },
          { "PlacedSeeds", vtkSeedWidget::PlacedSeeds },
          { "MovingSeed", vtkSeedWidget::MovingSeed },
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

const char **PyvtkSeedWidget_Doc()
{
  static const char *docstring[] = {
    "vtkSeedWidget - place multiple seed points\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkSeedWidget is used to placed multiple seed points in the\nscene. The seed points can be used for operations like connectivity,\nsegmentation, and region growing.\n\nTo use this widget, specify an instance of vtkSeedWidget and a\nrepresentation (a subclass of vtkSeedRepresentation). The widget is\nimplemented using multiple instances of vtkHandleWidget which can be\nused to position the seed points",
    " (after they are initially placed).\nThe representations for these handle widgets are provided by the\nvtkSeedRepresentation.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - add a point or select a handle (i.e., seed)\n  RightButtonPressEvent - finish adding the seeds\n  MouseMov",
    "eEvent - move a handle (i.e., seed)\n  LeftButtonReleaseEvent - release the selected handle (seed) \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkSeedWidget's widget events:\n\n\n  vtkWidgetEvent::AddPoint -- add one point; depending on the state\n                              it may the first or se",
    "cond point added.\nOr,\n                              if near handle, select handle.\n  vtkWidgetEvent::Completed -- finished adding seeds.\n  vtkWidgetEvent::Move -- move the second point or handle depending\non the state.\n  vtkWidgetEvent::EndSelect -- the handle manipulation process has\ncompleted. \n\nThis widget invokes the following VTK events on itself (which\nobservers can listen for):\n\n\n  vtkComma",
    "nd::StartInteractionEvent (beginning to interact)\n  vtkCommand::EndInteractionEvent (completing interaction)\n  vtkCommand::InteractionEvent (moving after selecting something)\n  vtkCommand::PlacePointEvent (after point is positioned;\n                               call data includes handle id (0,1)) \n\nSee Also:\n\nvtkHandleWidget vtkSeedReoresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSeedWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSeedWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSeedWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

