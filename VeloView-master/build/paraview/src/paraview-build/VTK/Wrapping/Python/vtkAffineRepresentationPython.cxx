// python wrapper for vtkAffineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAffineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAffineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAffineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkAffineRepresentation_Doc();

#ifndef DECLARED_PyvtkAffineRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkAffineRepresentation__InteractionState_Type;
#define DECLARED_PyvtkAffineRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkAffineRepresentation__InteractionState_Type = {
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

PyObject *PyvtkAffineRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAffineRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkAffineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAffineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAffineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAffineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAffineRepresentation::NewInstance());

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
PyvtkAffineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAffineRepresentation *tempr = vtkAffineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    op->GetTransform(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkAffineRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAffineRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAffineRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAffineRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAffineRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation *op = static_cast<vtkAffineRepresentation *>(vp);

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
      op->vtkAffineRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAffineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkAffineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkAffineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkAffineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAffineRepresentation\nC++: vtkAffineRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkAffineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAffineRepresentation\nC++: vtkAffineRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"GetTransform", PyvtkAffineRepresentation_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the affine\ntransformation generated by this widget. This method copies its\ninternal transform into the transform provided. The transform is\nrelative to the initial placement of the representation (i.e.,\nwhen PlaceWidget() is invoked).\n"},
  {(char*)"SetTolerance", PyvtkAffineRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMinValue", PyvtkAffineRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkAffineRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetTolerance", PyvtkAffineRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"ShallowCopy", PyvtkAffineRepresentation_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAffineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAffineRepresentation_Methods,
    "vtkAffineRepresentation", modulename,
    NULL, NULL,
    PyvtkAffineRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkAffineRepresentation__InteractionState_Type);
    PyvtkAffineRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkAffineRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 20; c++)
      {
      typedef vtkAffineRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[20] = {
          { "Outside", vtkAffineRepresentation::Outside },
          { "Rotate", vtkAffineRepresentation::Rotate },
          { "Translate", vtkAffineRepresentation::Translate },
          { "TranslateX", vtkAffineRepresentation::TranslateX },
          { "TranslateY", vtkAffineRepresentation::TranslateY },
          { "ScaleWEdge", vtkAffineRepresentation::ScaleWEdge },
          { "ScaleEEdge", vtkAffineRepresentation::ScaleEEdge },
          { "ScaleNEdge", vtkAffineRepresentation::ScaleNEdge },
          { "ScaleSEdge", vtkAffineRepresentation::ScaleSEdge },
          { "ScaleNE", vtkAffineRepresentation::ScaleNE },
          { "ScaleSW", vtkAffineRepresentation::ScaleSW },
          { "ScaleNW", vtkAffineRepresentation::ScaleNW },
          { "ScaleSE", vtkAffineRepresentation::ScaleSE },
          { "ShearEEdge", vtkAffineRepresentation::ShearEEdge },
          { "ShearWEdge", vtkAffineRepresentation::ShearWEdge },
          { "ShearNEdge", vtkAffineRepresentation::ShearNEdge },
          { "ShearSEdge", vtkAffineRepresentation::ShearSEdge },
          { "MoveOriginX", vtkAffineRepresentation::MoveOriginX },
          { "MoveOriginY", vtkAffineRepresentation::MoveOriginY },
          { "MoveOrigin", vtkAffineRepresentation::MoveOrigin },
        };

      o = PyvtkAffineRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAffineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkAffineRepresentation - abstract class for representing affine\ntransformation widgets\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class defines an API for affine transformation widget\nrepresentations. These representations interact with vtkAffineWidget.\nThe basic functionality of the affine representation is to maintain a\ntransformation matrix.\n\nThis class may be subclassed so that alternative representations can\nbe created.  The class defines an API and a default implementation\nthat the vtkAffineWidget interacts with t",
    "o render itself in the\nscene.\n\nCaveats:\n\nThe separation of the widget event handling and representation\nenables users and developers to create new appearances for the\nwidget. It also facilitates parallel processing, where the client\napplication handles events, and remote representations of the widget\nare slaves to the client (and do not handle events).\n\nSee Also:\n\nvtkAffineWidget vtkWidgetRepresen",
    "tation vtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAffineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAffineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAffineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

