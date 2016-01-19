// python wrapper for vtkWidgetSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWidgetSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWidgetSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWidgetSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWidgetSet_Doc();


static PyObject *
PyvtkWidgetSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWidgetSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWidgetSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetSet::NewInstance());

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
PyvtkWidgetSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWidgetSet *tempr = vtkWidgetSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

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
      op->vtkWidgetSet::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkWidgetSet::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkWidgetSet::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_AddWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
    {
    if (ap.IsBound())
      {
      op->AddWidget(temp0);
      }
    else
      {
      op->vtkWidgetSet::AddWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_RemoveWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
    {
    if (ap.IsBound())
      {
      op->RemoveWidget(temp0);
      }
    else
      {
      op->vtkWidgetSet::RemoveWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNumberOfWidgets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfWidgets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfWidgets() :
      op->vtkWidgetSet::GetNumberOfWidgets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNthWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetNthWidget(temp0) :
      op->vtkWidgetSet::GetNthWidget(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetSet_Methods[] = {
  {(char*)"GetClassName", PyvtkWidgetSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkWidgetSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkWidgetSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWidgetSet\nC++: vtkWidgetSet *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkWidgetSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWidgetSet\nC++: vtkWidgetSet *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkWidgetSet_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {(char*)"EnabledOn", PyvtkWidgetSet_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {(char*)"EnabledOff", PyvtkWidgetSet_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {(char*)"AddWidget", PyvtkWidgetSet_AddWidget, METH_VARARGS,
   (char*)"V.AddWidget(vtkAbstractWidget)\nC++: void AddWidget(vtkAbstractWidget *)\n\nAdd a widget to the set.\n"},
  {(char*)"RemoveWidget", PyvtkWidgetSet_RemoveWidget, METH_VARARGS,
   (char*)"V.RemoveWidget(vtkAbstractWidget)\nC++: void RemoveWidget(vtkAbstractWidget *)\n\nRemove a widget from the set\n"},
  {(char*)"GetNumberOfWidgets", PyvtkWidgetSet_GetNumberOfWidgets, METH_VARARGS,
   (char*)"V.GetNumberOfWidgets() -> int\nC++: unsigned int GetNumberOfWidgets()\n\nGet number of widgets in the set.\n"},
  {(char*)"GetNthWidget", PyvtkWidgetSet_GetNthWidget, METH_VARARGS,
   (char*)"V.GetNthWidget(int) -> vtkAbstractWidget\nC++: vtkAbstractWidget *GetNthWidget(unsigned int)\n\nGet the Nth widget in the set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWidgetSet_StaticNew()
{
  return vtkWidgetSet::New();
}

PyObject *PyVTKClass_vtkWidgetSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWidgetSet_StaticNew,
    PyvtkWidgetSet_Methods,
    "vtkWidgetSet", modulename,
    NULL, NULL,
    PyvtkWidgetSet_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWidgetSet_Doc()
{
  static const char *docstring[] = {
    "vtkWidgetSet - Synchronize a collection on vtkWidgets drawn on\ndifferent renderwindows using the Callback - Dispatch Action\nmechanism.\n\n",
    "Superclass: vtkObject\n\n",
    "The class synchronizes a set of vtkAbstractWidget(s). Widgets\ntypically invoke \"Actions\" that drive the geometry/behaviour of their\nrepresentations in response to interactor events. Interactor\ninteractions on a render window are mapped into \"Callbacks\" by the\nwidget, from which \"Actions\" are dispatched to the entire set. This\narchitecture allows us to tie widgets existing in different render\nwindo",
    "ws together. For instance a HandleWidget might exist on the\nsagittal view. Moving it around should update the representations of\nthe corresponding handle widget that lies on the axial and coronal\nand volume views as well.\n\nUser API:\n\nA user would use this class as follows.vtkWidgetSet *set =\nvtkWidgetSet::New();\nvtkParallelopipedWidget *w1 = vtkParallelopipedWidget::New();\nset->AddWidget(w1);\nw1->",
    "SetInteractor(axialRenderWindow->GetInteractor());\nvtkParallelopipedWidget *w2 = vtkParallelopipedWidget::New();\nset->AddWidget(w2);\nw2->SetInteractor(coronalRenderWindow->GetInteractor());\nvtkParallelopipedWidget *w3 = vtkParallelopipedWidget::New();\nset->AddWidget(w3);\nw3->SetInteractor(sagittalRenderWindow->GetInteractor());\nset->SetEnabled(1);\n\nMotivation:\n\nThe motivation for this class is rea",
    "lly to provide a usable API to\ntie together multiple widgets of the same kind. To enable this,\nsubclasses of vtkAbstractWidget, must be written as follows:\n  They will generally have callback methods mapped to some user\ninteraction such\nas:this->CallbackMapper->SetCallbackMethod(vtkCommand::LeftButtonPress\nEvent,\n                        vtkEvent::NoModifier, 0, 0, NULL,\n                        vtk",
    "PaintbrushWidget::BeginDrawStrokeEvent,\n                        this,\nvtkPaintbrushWidget::BeginDrawCallback);\n\n  The callback invoked when the left button is pressed looks\nlike:void vtkPaintbrushWidget::BeginDrawCallback(vtkAbstractWidget\n*w)\n{\n  vtkPaintbrushWidget *self = vtkPaintbrushWidget::SafeDownCast(w);\n  self->WidgetSet->DispatchAction(self,\n&vtkPaintbrushWidget::BeginDrawAction);\n}\n\n  T",
    "he actual code for handling the drawing is written in the\nBeginDrawAction method.void vtkPaintbrushWidget::BeginDrawAction(\nvtkPaintbrushWidget *dispatcher)\n{\n// Do stuff to draw...\n// Here dispatcher is the widget that was interacted with, the one\nthat\n// dispatched an action to all the other widgets in its group. You\nmay, if\n// necessary find it helpful to get parameters from it.\n//   For instan",
    "ce for a ResizeAction:\n//     if (this != dispatcher)\n//       {\n//       double *newsize =\ndispatcher->GetRepresentation()->GetSize();\n//       this->WidgetRep->SetSize(newsize);\n//       }\n//     else\n//       {\n//       this->WidgetRep->IncrementSizeByDelta();\n//       }\n}\n\nCaveats:\n\nActions are always dispatched first to the activeWidget, the one\ncalling the set, and then to the other widgets ",
    "in the set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWidgetSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWidgetSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWidgetSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

