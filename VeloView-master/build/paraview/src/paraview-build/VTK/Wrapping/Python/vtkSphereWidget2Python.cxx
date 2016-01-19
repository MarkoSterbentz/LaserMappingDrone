// python wrapper for vtkSphereWidget2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSphereWidget2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSphereWidget2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSphereWidget2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkSphereWidget2_Doc();


static PyObject *
PyvtkSphereWidget2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSphereWidget2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSphereWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereWidget2::NewInstance());

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
PyvtkSphereWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSphereWidget2 *tempr = vtkSphereWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  vtkSphereRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphereRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkSphereWidget2::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationEnabled(temp0);
      }
    else
      {
      op->vtkSphereWidget2::SetTranslationEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkSphereWidget2::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationEnabledOn();
      }
    else
      {
      op->vtkSphereWidget2::TranslationEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationEnabledOff();
      }
    else
      {
      op->vtkSphereWidget2::TranslationEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingEnabled(temp0);
      }
    else
      {
      op->vtkSphereWidget2::SetScalingEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkSphereWidget2::GetScalingEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingEnabledOn();
      }
    else
      {
      op->vtkSphereWidget2::ScalingEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingEnabledOff();
      }
    else
      {
      op->vtkSphereWidget2::ScalingEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSphereWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkSphereWidget2::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSphereWidget2_Methods[] = {
  {(char*)"GetClassName", PyvtkSphereWidget2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard class methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkSphereWidget2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard class methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkSphereWidget2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSphereWidget2\nC++: vtkSphereWidget2 *NewInstance()\n\nStandard class methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkSphereWidget2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSphereWidget2\nC++: vtkSphereWidget2 *SafeDownCast(vtkObject* o)\n\nStandard class methods for type information and printing.\n"},
  {(char*)"SetRepresentation", PyvtkSphereWidget2_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkSphereRepresentation)\nC++: void SetRepresentation(vtkSphereRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"SetTranslationEnabled", PyvtkSphereWidget2_SetTranslationEnabled, METH_VARARGS,
   (char*)"V.SetTranslationEnabled(int)\nC++: void SetTranslationEnabled(int a)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"GetTranslationEnabled", PyvtkSphereWidget2_GetTranslationEnabled, METH_VARARGS,
   (char*)"V.GetTranslationEnabled() -> int\nC++: int GetTranslationEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"TranslationEnabledOn", PyvtkSphereWidget2_TranslationEnabledOn, METH_VARARGS,
   (char*)"V.TranslationEnabledOn()\nC++: void TranslationEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"TranslationEnabledOff", PyvtkSphereWidget2_TranslationEnabledOff, METH_VARARGS,
   (char*)"V.TranslationEnabledOff()\nC++: void TranslationEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"SetScalingEnabled", PyvtkSphereWidget2_SetScalingEnabled, METH_VARARGS,
   (char*)"V.SetScalingEnabled(int)\nC++: void SetScalingEnabled(int a)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"GetScalingEnabled", PyvtkSphereWidget2_GetScalingEnabled, METH_VARARGS,
   (char*)"V.GetScalingEnabled() -> int\nC++: int GetScalingEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"ScalingEnabledOn", PyvtkSphereWidget2_ScalingEnabledOn, METH_VARARGS,
   (char*)"V.ScalingEnabledOn()\nC++: void ScalingEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"ScalingEnabledOff", PyvtkSphereWidget2_ScalingEnabledOff, METH_VARARGS,
   (char*)"V.ScalingEnabledOff()\nC++: void ScalingEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkSphereWidget2_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkSphereRepresentation\nclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSphereWidget2_StaticNew()
{
  return vtkSphereWidget2::New();
}

PyObject *PyVTKClass_vtkSphereWidget2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSphereWidget2_StaticNew,
    PyvtkSphereWidget2_Methods,
    "vtkSphereWidget2", modulename,
    NULL, NULL,
    PyvtkSphereWidget2_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkSphereWidget2_Doc()
{
  static const char *docstring[] = {
    "vtkSphereWidget2 - 3D widget for manipulating a point on a sphere\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This 3D widget interacts with a vtkSphereRepresentation class (i.e.,\nit handles the events that drive its corresponding representation).\nIt can be used to position a point on a sphere (for example, to place\na light or camera), or to position a sphere in a scene, including\ntranslating and scaling the sphere.\n\nA nice feature of vtkSphereWidget2, like any 3D widget, is that it\nwill work in combinatio",
    "n with the current interactor style (or any\nother interactor observer). That is, if vtkSphereWidget2 does not\nhandle an event, then all other registered observers (including the\ninteractor style) have an opportunity to process the event.\nOtherwise, the vtkSphereWidget2 will terminate the processing of the\nevent that it handles.\n\nTo use this widget, you generally pair it with a\nvtkSphereRepresentat",
    "ion (or a subclass). Variuos options are\navailable in the representation for controlling how the widget\nappears, and how the widget functions.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\nIf the handle or sphere are selected:\n  LeftButtonPressEvent - select the handle or sphere\n  LeftButtonReleaseE",
    "vent - release the handle ot sphere\n  MouseMoveEvent - move the handle or translate the sphere In all the\ncases, independent of what is picked, the widget responds to the\nfollowing VTK events:\n  MiddleButtonPressEvent - translate the representation\n  MiddleButtonReleaseEvent - stop translating the representation\n  RightButtonPressEvent - scale the widget's representation\n  RightButtonReleaseEvent ",
    "- stop scaling the representation\n  MouseMoveEvent - scale (if right button) or move (if middle button)\nthe widget \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkSphereWidget2's widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect --",
    " the selection process has completed\n  vtkWidgetEvent::Scale -- some part of the widget has been selected\n  vtkWidgetEvent::EndScale -- the selection process has completed\n  vtkWidgetEvent::Translate -- some part of the widget has been\nselected\n  vtkWidgetEvent::EndTranslate -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for motion has been invoked \n\nIn turn, when these",
    " widget events are processed, the vtkSphereWidget2\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\nSee Also:\n\nvtkSphereRepresentation vtkSphereWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSphereWidget2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSphereWidget2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSphereWidget2", o) != 0)
    {
    Py_DECREF(o);
    }

}

