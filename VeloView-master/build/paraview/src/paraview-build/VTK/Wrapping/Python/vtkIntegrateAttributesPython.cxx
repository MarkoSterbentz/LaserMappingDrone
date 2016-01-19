// python wrapper for vtkIntegrateAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIntegrateAttributes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIntegrateAttributes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIntegrateAttributesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkIntegrateAttributes_Doc();

#ifndef DECLARED_PyvtkIntegrateAttributes_CommunicationIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkIntegrateAttributes_CommunicationIds_Type;
#define DECLARED_PyvtkIntegrateAttributes_CommunicationIds_Type
#endif

PyTypeObject PyvtkIntegrateAttributes_CommunicationIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"CommunicationIds", // tp_name
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

PyObject *PyvtkIntegrateAttributes_CommunicationIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkIntegrateAttributes_CommunicationIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkIntegrateAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIntegrateAttributes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntegrateAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIntegrateAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntegrateAttributes::NewInstance());

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
PyvtkIntegrateAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIntegrateAttributes *tempr = vtkIntegrateAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIntegrateAttributes_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntegrateAttributes *op = static_cast<vtkIntegrateAttributes *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkIntegrateAttributes::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkIntegrateAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkIntegrateAttributes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIntegrateAttributes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIntegrateAttributes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIntegrateAttributes\nC++: vtkIntegrateAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIntegrateAttributes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIntegrateAttributes\nC++: vtkIntegrateAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkIntegrateAttributes_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIntegrateAttributes_StaticNew()
{
  return vtkIntegrateAttributes::New();
}

PyObject *PyVTKClass_vtkIntegrateAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIntegrateAttributes_StaticNew,
    PyvtkIntegrateAttributes_Methods,
    "vtkIntegrateAttributes", modulename,
    NULL, NULL,
    PyvtkIntegrateAttributes_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkIntegrateAttributes_CommunicationIds_Type);
    PyvtkIntegrateAttributes_CommunicationIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkIntegrateAttributes_CommunicationIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"CommunicationIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkIntegrateAttributes::CommunicationIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "IntegrateAttrInfo", vtkIntegrateAttributes::IntegrateAttrInfo },
          { "IntegrateAttrData", vtkIntegrateAttributes::IntegrateAttrData },
        };

      o = PyvtkIntegrateAttributes_CommunicationIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkIntegrateAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkIntegrateAttributes - Integrates lines, surfaces and volume.\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Integrates all point and cell data attributes while computing length,\narea or volume.  Works for 1D, 2D or 3D.  Only one dimensionality at\na time.  For volume, this filter ignores all but 3D cells.  It will\nnot compute the volume contained in a closed surface. The output of\nthis filter is a single point and vertex.  The attributes for this\npoint and cell will contain the integration results for th",
    "e\ncorresponding input attributes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIntegrateAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIntegrateAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIntegrateAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

