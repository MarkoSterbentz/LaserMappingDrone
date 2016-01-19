// python wrapper for vtkPEnSightReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPEnSightReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPEnSightReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPEnSightReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkPGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkPGenericEnSightReaderNew
#endif

static const char **PyvtkPEnSightReader_Doc();

#ifndef DECLARED_PyvtkPEnSightReader_ElementTypesList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPEnSightReader_ElementTypesList_Type;
#define DECLARED_PyvtkPEnSightReader_ElementTypesList_Type
#endif

PyTypeObject PyvtkPEnSightReader_ElementTypesList_Type = {
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

PyObject *PyvtkPEnSightReader_ElementTypesList_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPEnSightReader_ElementTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkPEnSightReader_VariableTypesList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPEnSightReader_VariableTypesList_Type;
#define DECLARED_PyvtkPEnSightReader_VariableTypesList_Type
#endif

PyTypeObject PyvtkPEnSightReader_VariableTypesList_Type = {
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

PyObject *PyvtkPEnSightReader_VariableTypesList_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPEnSightReader_VariableTypesList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkPEnSightReader_SectionTypeList_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPEnSightReader_SectionTypeList_Type;
#define DECLARED_PyvtkPEnSightReader_SectionTypeList_Type
#endif

PyTypeObject PyvtkPEnSightReader_SectionTypeList_Type = {
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

PyObject *PyvtkPEnSightReader_SectionTypeList_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPEnSightReader_SectionTypeList_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPEnSightReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPEnSightReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEnSightReader::NewInstance());

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
PyvtkPEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPEnSightReader *tempr = vtkPEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_GetMeasuredFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasuredFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMeasuredFileName() :
      op->vtkPEnSightReader::GetMeasuredFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_GetMatchFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMatchFileName() :
      op->vtkPEnSightReader::GetMatchFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_SetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

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
      op->vtkPEnSightReader::SetParticleCoordinatesByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_GetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParticleCoordinatesByIndex() :
      op->vtkPEnSightReader::GetParticleCoordinatesByIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_ParticleCoordinatesByIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOn();
      }
    else
      {
      op->vtkPEnSightReader::ParticleCoordinatesByIndexOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPEnSightReader_ParticleCoordinatesByIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightReader *op = static_cast<vtkPEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOff();
      }
    else
      {
      op->vtkPEnSightReader::ParticleCoordinatesByIndexOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPEnSightReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPEnSightReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPEnSightReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPEnSightReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPEnSightReader\nC++: vtkPEnSightReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPEnSightReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPEnSightReader\nC++: vtkPEnSightReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMeasuredFileName", PyvtkPEnSightReader_GetMeasuredFileName, METH_VARARGS,
   (char*)"V.GetMeasuredFileName() -> string\nC++: char *GetMeasuredFileName()\n\nGet the Measured file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"GetMatchFileName", PyvtkPEnSightReader_GetMatchFileName, METH_VARARGS,
   (char*)"V.GetMatchFileName() -> string\nC++: char *GetMatchFileName()\n\nGet the Match file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"SetParticleCoordinatesByIndex", PyvtkPEnSightReader_SetParticleCoordinatesByIndex, METH_VARARGS,
   (char*)"V.SetParticleCoordinatesByIndex(int)\nC++: void SetParticleCoordinatesByIndex(int a)\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"GetParticleCoordinatesByIndex", PyvtkPEnSightReader_GetParticleCoordinatesByIndex, METH_VARARGS,
   (char*)"V.GetParticleCoordinatesByIndex() -> int\nC++: int GetParticleCoordinatesByIndex()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOn", PyvtkPEnSightReader_ParticleCoordinatesByIndexOn, METH_VARARGS,
   (char*)"V.ParticleCoordinatesByIndexOn()\nC++: void ParticleCoordinatesByIndexOn()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOff", PyvtkPEnSightReader_ParticleCoordinatesByIndexOff, METH_VARARGS,
   (char*)"V.ParticleCoordinatesByIndexOff()\nC++: void ParticleCoordinatesByIndexOff()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPEnSightReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPEnSightReader_Methods,
    "vtkPEnSightReader", modulename,
    NULL, NULL,
    PyvtkPEnSightReader_Doc(),
    PyVTKClass_vtkPGenericEnSightReaderNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPEnSightReader_ElementTypesList_Type);
    PyvtkPEnSightReader_ElementTypesList_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPEnSightReader_ElementTypesList_Type;
    if (o && PyDict_SetItemString(d, (char *)"ElementTypesList", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkPEnSightReader_VariableTypesList_Type);
    PyvtkPEnSightReader_VariableTypesList_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPEnSightReader_VariableTypesList_Type;
    if (o && PyDict_SetItemString(d, (char *)"VariableTypesList", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkPEnSightReader_SectionTypeList_Type);
    PyvtkPEnSightReader_SectionTypeList_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPEnSightReader_SectionTypeList_Type;
    if (o && PyDict_SetItemString(d, (char *)"SectionTypeList", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 18; c++)
      {
      typedef vtkPEnSightReader::ElementTypesList cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[18] = {
          { "POINT", vtkPEnSightReader::POINT },
          { "BAR2", vtkPEnSightReader::BAR2 },
          { "BAR3", vtkPEnSightReader::BAR3 },
          { "NSIDED", vtkPEnSightReader::NSIDED },
          { "TRIA3", vtkPEnSightReader::TRIA3 },
          { "TRIA6", vtkPEnSightReader::TRIA6 },
          { "QUAD4", vtkPEnSightReader::QUAD4 },
          { "QUAD8", vtkPEnSightReader::QUAD8 },
          { "NFACED", vtkPEnSightReader::NFACED },
          { "TETRA4", vtkPEnSightReader::TETRA4 },
          { "TETRA10", vtkPEnSightReader::TETRA10 },
          { "PYRAMID5", vtkPEnSightReader::PYRAMID5 },
          { "PYRAMID13", vtkPEnSightReader::PYRAMID13 },
          { "HEXA8", vtkPEnSightReader::HEXA8 },
          { "HEXA20", vtkPEnSightReader::HEXA20 },
          { "PENTA6", vtkPEnSightReader::PENTA6 },
          { "PENTA15", vtkPEnSightReader::PENTA15 },
          { "NUMBER_OF_ELEMENT_TYPES", vtkPEnSightReader::NUMBER_OF_ELEMENT_TYPES },
        };

      o = PyvtkPEnSightReader_ElementTypesList_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 12; c++)
      {
      typedef vtkPEnSightReader::VariableTypesList cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[12] = {
          { "SCALAR_PER_NODE", vtkPEnSightReader::SCALAR_PER_NODE },
          { "VECTOR_PER_NODE", vtkPEnSightReader::VECTOR_PER_NODE },
          { "TENSOR_SYMM_PER_NODE", vtkPEnSightReader::TENSOR_SYMM_PER_NODE },
          { "SCALAR_PER_ELEMENT", vtkPEnSightReader::SCALAR_PER_ELEMENT },
          { "VECTOR_PER_ELEMENT", vtkPEnSightReader::VECTOR_PER_ELEMENT },
          { "TENSOR_SYMM_PER_ELEMENT", vtkPEnSightReader::TENSOR_SYMM_PER_ELEMENT },
          { "SCALAR_PER_MEASURED_NODE", vtkPEnSightReader::SCALAR_PER_MEASURED_NODE },
          { "VECTOR_PER_MEASURED_NODE", vtkPEnSightReader::VECTOR_PER_MEASURED_NODE },
          { "COMPLEX_SCALAR_PER_NODE", vtkPEnSightReader::COMPLEX_SCALAR_PER_NODE },
          { "COMPLEX_VECTOR_PER_NODE", vtkPEnSightReader::COMPLEX_VECTOR_PER_NODE },
          { "COMPLEX_SCALAR_PER_ELEMENT", vtkPEnSightReader::COMPLEX_SCALAR_PER_ELEMENT },
          { "COMPLEX_VECTOR_PER_ELEMENT", vtkPEnSightReader::COMPLEX_VECTOR_PER_ELEMENT },
        };

      o = PyvtkPEnSightReader_VariableTypesList_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkPEnSightReader::SectionTypeList cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "COORDINATES", vtkPEnSightReader::COORDINATES },
          { "BLOCK", vtkPEnSightReader::BLOCK },
          { "ELEMENT", vtkPEnSightReader::ELEMENT },
        };

      o = PyvtkPEnSightReader_SectionTypeList_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPEnSightReader_Doc()
{
  static const char *docstring[] = {
    "vtkPEnSightReader\n\n",
    "Superclass: vtkPGenericEnSightReader\n\n",
    "Superclass for EnSight file parallel readers\n\nThanks:\n\nThis file has been developed as part of the CARRIOCAS (Distributed\ncomputation over ultra high optical internet network ) project (\nhttp://www.carriocas.org/index.php?lng=ang ) of the SYSTEM@TIC French\nICT Cluster (http://www.systematic-paris-region.org/en/index.html)\nunder the supervision of CEA (http://www.cea.fr) and EDF\n(http://www.edf.fr)",
    " by Oxalya (http://www.oxalya.com)\n\n\n Copyright (c) CEA\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPEnSightReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPEnSightReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPEnSightReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

