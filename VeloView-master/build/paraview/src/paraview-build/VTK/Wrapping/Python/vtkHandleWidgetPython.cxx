// python wrapper for vtkHandleWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHandleWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHandleWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHandleWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkHandleWidget_Doc();

#ifndef DECLARED_PyvtkHandleWidget__WidgetState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkHandleWidget__WidgetState_Type;
#define DECLARED_PyvtkHandleWidget__WidgetState_Type
#endif

PyTypeObject PyvtkHandleWidget__WidgetState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"_WidgetState", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkHandleWidget__WidgetState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHandleWidget__WidgetState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkHandleWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHandleWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleWidget::NewInstance());

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
PyvtkHandleWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHandleWidget *tempr = vtkHandleWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  vtkHandleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkHandleWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation() :
      op->vtkHandleWidget::GetHandleRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkHandleWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetEnableAxisConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAxisConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableAxisConstraint(temp0);
      }
    else
      {
      op->vtkHandleWidget::SetEnableAxisConstraint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetEnableAxisConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAxisConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableAxisConstraint() :
      op->vtkHandleWidget::GetEnableAxisConstraint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableAxisConstraintOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAxisConstraintOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAxisConstraintOn();
      }
    else
      {
      op->vtkHandleWidget::EnableAxisConstraintOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableAxisConstraintOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAxisConstraintOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAxisConstraintOff();
      }
    else
      {
      op->vtkHandleWidget::EnableAxisConstraintOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetAllowHandleResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowHandleResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowHandleResize(temp0);
      }
    else
      {
      op->vtkHandleWidget::SetAllowHandleResize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetAllowHandleResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowHandleResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowHandleResize() :
      op->vtkHandleWidget::GetAllowHandleResize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_AllowHandleResizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowHandleResizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowHandleResizeOn();
      }
    else
      {
      op->vtkHandleWidget::AllowHandleResizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_AllowHandleResizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowHandleResizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowHandleResizeOff();
      }
    else
      {
      op->vtkHandleWidget::AllowHandleResizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkHandleWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHandleWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkHandleWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class macros.\n"},
  {(char*)"IsA", PyvtkHandleWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class macros.\n"},
  {(char*)"NewInstance", PyvtkHandleWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHandleWidget\nC++: vtkHandleWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {(char*)"SafeDownCast", PyvtkHandleWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHandleWidget\nC++: vtkHandleWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class macros.\n"},
  {(char*)"SetRepresentation", PyvtkHandleWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkHandleRepresentation)\nC++: void SetRepresentation(vtkHandleRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetHandleRepresentation", PyvtkHandleWidget_GetHandleRepresentation, METH_VARARGS,
   (char*)"V.GetHandleRepresentation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation()\n\nReturn the representation as a vtkHandleRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkHandleWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set. By\ndefault an instance of vtkPointHandleRepresenation3D is created.\n"},
  {(char*)"SetEnableAxisConstraint", PyvtkHandleWidget_SetEnableAxisConstraint, METH_VARARGS,
   (char*)"V.SetEnableAxisConstraint(int)\nC++: void SetEnableAxisConstraint(int a)\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {(char*)"GetEnableAxisConstraint", PyvtkHandleWidget_GetEnableAxisConstraint, METH_VARARGS,
   (char*)"V.GetEnableAxisConstraint() -> int\nC++: int GetEnableAxisConstraint()\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {(char*)"EnableAxisConstraintOn", PyvtkHandleWidget_EnableAxisConstraintOn, METH_VARARGS,
   (char*)"V.EnableAxisConstraintOn()\nC++: void EnableAxisConstraintOn()\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {(char*)"EnableAxisConstraintOff", PyvtkHandleWidget_EnableAxisConstraintOff, METH_VARARGS,
   (char*)"V.EnableAxisConstraintOff()\nC++: void EnableAxisConstraintOff()\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {(char*)"SetAllowHandleResize", PyvtkHandleWidget_SetAllowHandleResize, METH_VARARGS,
   (char*)"V.SetAllowHandleResize(int)\nC++: void SetAllowHandleResize(int a)\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {(char*)"GetAllowHandleResize", PyvtkHandleWidget_GetAllowHandleResize, METH_VARARGS,
   (char*)"V.GetAllowHandleResize() -> int\nC++: int GetAllowHandleResize()\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {(char*)"AllowHandleResizeOn", PyvtkHandleWidget_AllowHandleResizeOn, METH_VARARGS,
   (char*)"V.AllowHandleResizeOn()\nC++: void AllowHandleResizeOn()\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {(char*)"AllowHandleResizeOff", PyvtkHandleWidget_AllowHandleResizeOff, METH_VARARGS,
   (char*)"V.AllowHandleResizeOff()\nC++: void AllowHandleResizeOff()\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {(char*)"GetWidgetState", PyvtkHandleWidget_GetWidgetState, METH_VARARGS,
   (char*)"V.GetWidgetState() -> int\nC++: int GetWidgetState()\n\nGet the widget state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHandleWidget_StaticNew()
{
  return vtkHandleWidget::New();
}

PyObject *PyVTKClass_vtkHandleWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHandleWidget_StaticNew,
    PyvtkHandleWidget_Methods,
    "vtkHandleWidget", modulename,
    NULL, NULL,
    PyvtkHandleWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkHandleWidget__WidgetState_Type);
    PyvtkHandleWidget__WidgetState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkHandleWidget__WidgetState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_WidgetState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkHandleWidget::_WidgetState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "Start", vtkHandleWidget::Start },
          { "Active", vtkHandleWidget::Active },
        };

      o = PyvtkHandleWidget__WidgetState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkHandleWidget_Doc()
{
  static const char *docstring[] = {
    "vtkHandleWidget - a general widget for moving handles\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkHandleWidget is used to position a handle.  A handle is a\nwidget with a position (in display and world space). Various\nappearances are available depending on its associated representation.\nThe widget provides methods for translation, including constrained\ntranslation along coordinate axes. To use this widget, create and\nassociate a representation with the widget.\n\nEvent Bindings:\n\nBy defaul",
    "t, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - select focal point of widget\n  LeftButtonReleaseEvent - end selection\n  MiddleButtonPressEvent - translate widget\n  MiddleButtonReleaseEvent - end translation\n  RightButtonPressEvent - scale widget\n  RightButtonReleaseEvent - end scaling\n  MouseMoveEvent ",
    "- interactive movement across widget \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkHandleWidget's widget events:\n\n\n  vtkWidgetEvent::Select -- focal point is being selected\n  vtkWidgetEvent::EndSelect -- the selection process has completed\n  vtkWidgetEvent::Translate -- translate the widget\n  ",
    "vtkWidgetEvent::EndTranslate -- end widget translation\n  vtkWidgetEvent::Scale -- scale the widget\n  vtkWidgetEvent::EndScale -- end scaling the widget\n  vtkWidgetEvent::Move -- a request for widget motion \n\nIn turn, when these widget events are processed, the vtkHandleWidget\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkW",
    "idgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHandleWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHandleWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHandleWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

