// python wrapper for vtkButtonRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkButtonRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkButtonRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkButtonRepresentation_Doc();

#ifndef DECLARED_PyvtkButtonRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkButtonRepresentation__InteractionState_Type;
#define DECLARED_PyvtkButtonRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkButtonRepresentation__InteractionState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"_InteractionState", // tp_name
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

PyObject *PyvtkButtonRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkButtonRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkButtonRepresentation__HighlightState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkButtonRepresentation__HighlightState_Type;
#define DECLARED_PyvtkButtonRepresentation__HighlightState_Type
#endif

PyTypeObject PyvtkButtonRepresentation__HighlightState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"_HighlightState", // tp_name
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

PyObject *PyvtkButtonRepresentation__HighlightState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkButtonRepresentation__HighlightState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkButtonRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkButtonRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButtonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkButtonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButtonRepresentation::NewInstance());

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
PyvtkButtonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkButtonRepresentation *tempr = vtkButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_SetNumberOfStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfStates(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::SetNumberOfStates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetNumberOfStatesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStatesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStatesMinValue() :
      op->vtkButtonRepresentation::GetNumberOfStatesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetNumberOfStatesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStatesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStatesMaxValue() :
      op->vtkButtonRepresentation::GetNumberOfStatesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkButtonRepresentation::GetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_SetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetState(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::SetState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_NextState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NextState();
      }
    else
      {
      op->vtkButtonRepresentation::NextState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_PreviousState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreviousState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreviousState();
      }
    else
      {
      op->vtkButtonRepresentation::PreviousState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetHighlightState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighlightState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHighlightState() :
      op->vtkButtonRepresentation::GetHighlightState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkButtonRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkButtonRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkButtonRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkButtonRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkButtonRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkButtonRepresentation\nC++: vtkButtonRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkButtonRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkButtonRepresentation\nC++: vtkButtonRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"SetNumberOfStates", PyvtkButtonRepresentation_SetNumberOfStates, METH_VARARGS,
   (char*)"V.SetNumberOfStates(int)\nC++: void SetNumberOfStates(int)\n\nRetrieve the current button state.\n"},
  {(char*)"GetNumberOfStatesMinValue", PyvtkButtonRepresentation_GetNumberOfStatesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfStatesMinValue() -> int\nC++: int GetNumberOfStatesMinValue()\n\nRetrieve the current button state.\n"},
  {(char*)"GetNumberOfStatesMaxValue", PyvtkButtonRepresentation_GetNumberOfStatesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfStatesMaxValue() -> int\nC++: int GetNumberOfStatesMaxValue()\n\nRetrieve the current button state.\n"},
  {(char*)"GetState", PyvtkButtonRepresentation_GetState, METH_VARARGS,
   (char*)"V.GetState() -> int\nC++: int GetState()\n\nRetrieve the current button state.\n"},
  {(char*)"SetState", PyvtkButtonRepresentation_SetState, METH_VARARGS,
   (char*)"V.SetState(int)\nC++: virtual void SetState(int state)\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traveral. The \"state\" integral\nvalue will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {(char*)"NextState", PyvtkButtonRepresentation_NextState, METH_VARARGS,
   (char*)"V.NextState()\nC++: virtual void NextState()\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traveral. The \"state\" integral\nvalue will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {(char*)"PreviousState", PyvtkButtonRepresentation_PreviousState, METH_VARARGS,
   (char*)"V.PreviousState()\nC++: virtual void PreviousState()\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traveral. The \"state\" integral\nvalue will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {(char*)"Highlight", PyvtkButtonRepresentation_Highlight, METH_VARARGS,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int)\n\nThese methods control the appearance of the button as it is being\ninteracted with. Subclasses will behave differently depending on\ntheir particulars.  HighlightHovering is used when the mouse\npointer moves over the button. HighlightSelecting is set when the\nbutton is selected. Otherwise, the HighlightNormal is used. The\nHighlight() method will throw a vtkCommand::HighlightEvent.\n"},
  {(char*)"GetHighlightState", PyvtkButtonRepresentation_GetHighlightState, METH_VARARGS,
   (char*)"V.GetHighlightState() -> int\nC++: int GetHighlightState()\n\nThese methods control the appearance of the button as it is being\ninteracted with. Subclasses will behave differently depending on\ntheir particulars.  HighlightHovering is used when the mouse\npointer moves over the button. HighlightSelecting is set when the\nbutton is selected. Otherwise, the HighlightNormal is used. The\nHighlight() method will throw a vtkCommand::HighlightEvent.\n"},
  {(char*)"ShallowCopy", PyvtkButtonRepresentation_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nSatisfy some of vtkProp's API.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkButtonRepresentation_Methods,
    "vtkButtonRepresentation", modulename,
    NULL, NULL,
    PyvtkButtonRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkButtonRepresentation__InteractionState_Type);
    PyvtkButtonRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkButtonRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkButtonRepresentation__HighlightState_Type);
    PyvtkButtonRepresentation__HighlightState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkButtonRepresentation__HighlightState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_HighlightState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkButtonRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "Outside", vtkButtonRepresentation::Outside },
          { "Inside", vtkButtonRepresentation::Inside },
        };

      o = PyvtkButtonRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkButtonRepresentation::_HighlightState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "HighlightNormal", vtkButtonRepresentation::HighlightNormal },
          { "HighlightHovering", vtkButtonRepresentation::HighlightHovering },
          { "HighlightSelecting", vtkButtonRepresentation::HighlightSelecting },
        };

      o = PyvtkButtonRepresentation__HighlightState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkButtonRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkButtonRepresentation - abstract class defines the representation\nfor a vtkButtonWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This abstract class is used to specify how the vtkButtonWidget should\ninteract with representations of the vtkButtonWidget. This class may\nbe subclassed so that alternative representations can be created. The\nclass defines an API, and a default implementation, that the\nvtkButtonWidget interacts with to render itself in the scene.\n\nThe vtkButtonWidget assumes an n-state button so that traveral\nmeth",
    "ods are available for changing, querying and manipulating state.\nDerived classed determine the actual appearance. The state is\nrepresented by an integral value 0<=state<numStates.\n\nTo use this representation, always begin by specifying the number of\nstates. Then follow with the necessary information to represent each\nstate (done through a subclass API).\n\nSee Also:\n\nvtkButtonWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkButtonRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkButtonRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkButtonRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

