// python wrapper for vtkEnSightReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSightReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSightReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
#endif

static const char **PyvtkEnSightReader_Doc();

#ifndef DECLARED_PyvtkEnSightReader_ElementTypesList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkEnSightReader_ElementTypesList_Type;
#define DECLARED_PyvtkEnSightReader_ElementTypesList_Type
#endif

PyTypeObject PyvtkEnSightReader_ElementTypesList_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ElementTypesList", // tp_name
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

PyObject *PyvtkEnSightReader_ElementTypesList_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEnSightReader_ElementTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkEnSightReader_VariableTypesList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkEnSightReader_VariableTypesList_Type;
#define DECLARED_PyvtkEnSightReader_VariableTypesList_Type
#endif

PyTypeObject PyvtkEnSightReader_VariableTypesList_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"VariableTypesList", // tp_name
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

PyObject *PyvtkEnSightReader_VariableTypesList_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEnSightReader_VariableTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkEnSightReader_SectionTypeList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkEnSightReader_SectionTypeList_Type;
#define DECLARED_PyvtkEnSightReader_SectionTypeList_Type
#endif

PyTypeObject PyvtkEnSightReader_SectionTypeList_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"SectionTypeList", // tp_name
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

PyObject *PyvtkEnSightReader_SectionTypeList_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEnSightReader_SectionTypeList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkEnSightReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSightReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightReader::NewInstance());

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
PyvtkEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSightReader *tempr = vtkEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetMeasuredFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasuredFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMeasuredFileName() :
      op->vtkEnSightReader::GetMeasuredFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetMatchFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMatchFileName() :
      op->vtkEnSightReader::GetMatchFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_SetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParticleCoordinatesByIndex(temp0);
      }
    else
      {
      op->vtkEnSightReader::SetParticleCoordinatesByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParticleCoordinatesByIndex() :
      op->vtkEnSightReader::GetParticleCoordinatesByIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_ParticleCoordinatesByIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOn();
      }
    else
      {
      op->vtkEnSightReader::ParticleCoordinatesByIndexOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_ParticleCoordinatesByIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOff();
      }
    else
      {
      op->vtkEnSightReader::ParticleCoordinatesByIndexOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSightReader\nC++: vtkEnSightReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightReader\nC++: vtkEnSightReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMeasuredFileName", PyvtkEnSightReader_GetMeasuredFileName, METH_VARARGS,
   (char*)"V.GetMeasuredFileName() -> string\nC++: char *GetMeasuredFileName()\n\nGet the Measured file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"GetMatchFileName", PyvtkEnSightReader_GetMatchFileName, METH_VARARGS,
   (char*)"V.GetMatchFileName() -> string\nC++: char *GetMatchFileName()\n\nGet the Match file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"SetParticleCoordinatesByIndex", PyvtkEnSightReader_SetParticleCoordinatesByIndex, METH_VARARGS,
   (char*)"V.SetParticleCoordinatesByIndex(int)\nC++: void SetParticleCoordinatesByIndex(int a)\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"GetParticleCoordinatesByIndex", PyvtkEnSightReader_GetParticleCoordinatesByIndex, METH_VARARGS,
   (char*)"V.GetParticleCoordinatesByIndex() -> int\nC++: int GetParticleCoordinatesByIndex()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOn", PyvtkEnSightReader_ParticleCoordinatesByIndexOn, METH_VARARGS,
   (char*)"V.ParticleCoordinatesByIndexOn()\nC++: void ParticleCoordinatesByIndexOn()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOff", PyvtkEnSightReader_ParticleCoordinatesByIndexOff, METH_VARARGS,
   (char*)"V.ParticleCoordinatesByIndexOff()\nC++: void ParticleCoordinatesByIndexOff()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkEnSightReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkEnSightReader_Methods,
    "vtkEnSightReader", modulename,
    NULL, NULL,
    PyvtkEnSightReader_Doc(),
    PyVTKClass_vtkGenericEnSightReaderNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkEnSightReader_ElementTypesList_Type);
    PyvtkEnSightReader_ElementTypesList_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkEnSightReader_ElementTypesList_Type;
    if (o && PyDict_SetItemString(d, (char *)"ElementTypesList", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkEnSightReader_VariableTypesList_Type);
    PyvtkEnSightReader_VariableTypesList_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkEnSightReader_VariableTypesList_Type;
    if (o && PyDict_SetItemString(d, (char *)"VariableTypesList", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkEnSightReader_SectionTypeList_Type);
    PyvtkEnSightReader_SectionTypeList_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkEnSightReader_SectionTypeList_Type;
    if (o && PyDict_SetItemString(d, (char *)"SectionTypeList", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 18; c++)
      {
      typedef vtkEnSightReader::ElementTypesList cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[18] = {
          { "POINT", vtkEnSightReader::POINT },
          { "BAR2", vtkEnSightReader::BAR2 },
          { "BAR3", vtkEnSightReader::BAR3 },
          { "NSIDED", vtkEnSightReader::NSIDED },
          { "TRIA3", vtkEnSightReader::TRIA3 },
          { "TRIA6", vtkEnSightReader::TRIA6 },
          { "QUAD4", vtkEnSightReader::QUAD4 },
          { "QUAD8", vtkEnSightReader::QUAD8 },
          { "NFACED", vtkEnSightReader::NFACED },
          { "TETRA4", vtkEnSightReader::TETRA4 },
          { "TETRA10", vtkEnSightReader::TETRA10 },
          { "PYRAMID5", vtkEnSightReader::PYRAMID5 },
          { "PYRAMID13", vtkEnSightReader::PYRAMID13 },
          { "HEXA8", vtkEnSightReader::HEXA8 },
          { "HEXA20", vtkEnSightReader::HEXA20 },
          { "PENTA6", vtkEnSightReader::PENTA6 },
          { "PENTA15", vtkEnSightReader::PENTA15 },
          { "NUMBER_OF_ELEMENT_TYPES", vtkEnSightReader::NUMBER_OF_ELEMENT_TYPES },
        };

      o = PyvtkEnSightReader_ElementTypesList_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 12; c++)
      {
      typedef vtkEnSightReader::VariableTypesList cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[12] = {
          { "SCALAR_PER_NODE", vtkEnSightReader::SCALAR_PER_NODE },
          { "VECTOR_PER_NODE", vtkEnSightReader::VECTOR_PER_NODE },
          { "TENSOR_SYMM_PER_NODE", vtkEnSightReader::TENSOR_SYMM_PER_NODE },
          { "SCALAR_PER_ELEMENT", vtkEnSightReader::SCALAR_PER_ELEMENT },
          { "VECTOR_PER_ELEMENT", vtkEnSightReader::VECTOR_PER_ELEMENT },
          { "TENSOR_SYMM_PER_ELEMENT", vtkEnSightReader::TENSOR_SYMM_PER_ELEMENT },
          { "SCALAR_PER_MEASURED_NODE", vtkEnSightReader::SCALAR_PER_MEASURED_NODE },
          { "VECTOR_PER_MEASURED_NODE", vtkEnSightReader::VECTOR_PER_MEASURED_NODE },
          { "COMPLEX_SCALAR_PER_NODE", vtkEnSightReader::COMPLEX_SCALAR_PER_NODE },
          { "COMPLEX_VECTOR_PER_NODE", vtkEnSightReader::COMPLEX_VECTOR_PER_NODE },
          { "COMPLEX_SCALAR_PER_ELEMENT", vtkEnSightReader::COMPLEX_SCALAR_PER_ELEMENT },
          { "COMPLEX_VECTOR_PER_ELEMENT", vtkEnSightReader::COMPLEX_VECTOR_PER_ELEMENT },
        };

      o = PyvtkEnSightReader_VariableTypesList_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkEnSightReader::SectionTypeList cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "COORDINATES", vtkEnSightReader::COORDINATES },
          { "BLOCK", vtkEnSightReader::BLOCK },
          { "ELEMENT", vtkEnSightReader::ELEMENT },
        };

      o = PyvtkEnSightReader_SectionTypeList_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkEnSightReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightReader - superclass for EnSight file readers\n\n",
    "Superclass: vtkGenericEnSightReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

