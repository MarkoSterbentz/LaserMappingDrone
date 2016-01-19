// python wrapper for vtkPOpenFOAMReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPOpenFOAMReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPOpenFOAMReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPOpenFOAMReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpenFOAMReaderNew
extern "C" { PyObject *PyVTKClass_vtkOpenFOAMReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenFOAMReaderNew
#endif

static const char **PyvtkPOpenFOAMReader_Doc();

#ifndef DECLARED_PyvtkPOpenFOAMReader_caseType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPOpenFOAMReader_caseType_Type;
#define DECLARED_PyvtkPOpenFOAMReader_caseType_Type
#endif

PyTypeObject PyvtkPOpenFOAMReader_caseType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"caseType", // tp_name
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

PyObject *PyvtkPOpenFOAMReader_caseType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPOpenFOAMReader_caseType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPOpenFOAMReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPOpenFOAMReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPOpenFOAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPOpenFOAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPOpenFOAMReader::NewInstance());

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
PyvtkPOpenFOAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPOpenFOAMReader *tempr = vtkPOpenFOAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_SetCaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaseType(temp0);
      }
    else
      {
      op->vtkPOpenFOAMReader::SetCaseType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_GetCaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    typedef vtkPOpenFOAMReader::caseType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetCaseType() :
      op->vtkPOpenFOAMReader::GetCaseType());

    if (!ap.ErrorOccurred())
      {
      result = PyvtkPOpenFOAMReader_caseType_FromEnum(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

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
      op->vtkPOpenFOAMReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOpenFOAMReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOpenFOAMReader *op = static_cast<vtkPOpenFOAMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPOpenFOAMReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPOpenFOAMReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPOpenFOAMReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOpenFOAMReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOpenFOAMReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPOpenFOAMReader\nC++: vtkPOpenFOAMReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOpenFOAMReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOpenFOAMReader\nC++: vtkPOpenFOAMReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCaseType", PyvtkPOpenFOAMReader_SetCaseType, METH_VARARGS,
   (char*)"V.SetCaseType(int)\nC++: void SetCaseType(const int t)\n\nSet and get case type. 0 = decomposed case, 1 = reconstructed\ncase.\n"},
  {(char*)"GetCaseType", PyvtkPOpenFOAMReader_GetCaseType, METH_VARARGS,
   (char*)"V.GetCaseType() ->\nC++: caseType GetCaseType()\n\nSet and get case type. 0 = decomposed case, 1 = reconstructed\ncase.\n"},
  {(char*)"SetController", PyvtkPOpenFOAMReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPOpenFOAMReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOpenFOAMReader_StaticNew()
{
  return vtkPOpenFOAMReader::New();
}

PyObject *PyVTKClass_vtkPOpenFOAMReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOpenFOAMReader_StaticNew,
    PyvtkPOpenFOAMReader_Methods,
    "vtkPOpenFOAMReader", modulename,
    NULL, NULL,
    PyvtkPOpenFOAMReader_Doc(),
    PyVTKClass_vtkOpenFOAMReaderNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPOpenFOAMReader_caseType_Type);
    PyvtkPOpenFOAMReader_caseType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPOpenFOAMReader_caseType_Type;
    if (o && PyDict_SetItemString(d, (char *)"caseType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkPOpenFOAMReader::caseType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "DECOMPOSED_CASE", vtkPOpenFOAMReader::DECOMPOSED_CASE },
          { "RECONSTRUCTED_CASE", vtkPOpenFOAMReader::RECONSTRUCTED_CASE },
        };

      o = PyvtkPOpenFOAMReader_caseType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPOpenFOAMReader_Doc()
{
  static const char *docstring[] = {
    "vtkPOpenFOAMReader - reads a decomposed dataset in OpenFOAM format\n\n",
    "Superclass: vtkOpenFOAMReader\n\n",
    "vtkPOpenFOAMReader creates a multiblock dataset. It reads\nparallel-decomposed mesh information and time dependent data.  The\npolyMesh folders contain mesh information. The time folders contain\ntransient data for the cells. Each folder can contain any number of\ndata files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOpenFOAMReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOpenFOAMReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOpenFOAMReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

