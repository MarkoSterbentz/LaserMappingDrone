// python wrapper for vtkProStarReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProStarReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProStarReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProStarReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkProStarReader_Doc();

#ifndef DECLARED_PyvtkProStarReader_cellType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkProStarReader_cellType_Type;
#define DECLARED_PyvtkProStarReader_cellType_Type
#endif

PyTypeObject PyvtkProStarReader_cellType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"cellType", // tp_name
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

PyObject *PyvtkProStarReader_cellType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProStarReader_cellType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkProStarReader_shapeType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkProStarReader_shapeType_Type;
#define DECLARED_PyvtkProStarReader_shapeType_Type
#endif

PyTypeObject PyvtkProStarReader_shapeType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"shapeType", // tp_name
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

PyObject *PyvtkProStarReader_shapeType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProStarReader_shapeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkProStarReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProStarReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProStarReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProStarReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProStarReader::NewInstance());

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
PyvtkProStarReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProStarReader *tempr = vtkProStarReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkProStarReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkProStarReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkProStarReader::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetScaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMinValue() :
      op->vtkProStarReader::GetScaleFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetScaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMaxValue() :
      op->vtkProStarReader::GetScaleFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkProStarReader::GetScaleFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProStarReader_Methods[] = {
  {(char*)"GetClassName", PyvtkProStarReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProStarReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProStarReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProStarReader\nC++: vtkProStarReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProStarReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProStarReader\nC++: vtkProStarReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkProStarReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the file name prefix of the cel/vrt files to read. The\nreader will try to open FileName.cel and FileName.vrt files.\n"},
  {(char*)"GetFileName", PyvtkProStarReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the file name prefix of the cel/vrt files to read. The\nreader will try to open FileName.cel and FileName.vrt files.\n"},
  {(char*)"SetScaleFactor", PyvtkProStarReader_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double)\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {(char*)"GetScaleFactorMinValue", PyvtkProStarReader_GetScaleFactorMinValue, METH_VARARGS,
   (char*)"V.GetScaleFactorMinValue() -> float\nC++: double GetScaleFactorMinValue()\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {(char*)"GetScaleFactorMaxValue", PyvtkProStarReader_GetScaleFactorMaxValue, METH_VARARGS,
   (char*)"V.GetScaleFactorMaxValue() -> float\nC++: double GetScaleFactorMaxValue()\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {(char*)"GetScaleFactor", PyvtkProStarReader_GetScaleFactor, METH_VARARGS,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProStarReader_StaticNew()
{
  return vtkProStarReader::New();
}

PyObject *PyVTKClass_vtkProStarReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProStarReader_StaticNew,
    PyvtkProStarReader_Methods,
    "vtkProStarReader", modulename,
    NULL, NULL,
    PyvtkProStarReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkProStarReader_cellType_Type);
    PyvtkProStarReader_cellType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkProStarReader_cellType_Type;
    if (o && PyDict_SetItemString(d, (char *)"cellType", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkProStarReader_shapeType_Type);
    PyvtkProStarReader_shapeType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkProStarReader_shapeType_Type;
    if (o && PyDict_SetItemString(d, (char *)"shapeType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkProStarReader::cellType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "starcdFluidType", vtkProStarReader::starcdFluidType },
          { "starcdSolidType", vtkProStarReader::starcdSolidType },
          { "starcdBaffleType", vtkProStarReader::starcdBaffleType },
          { "starcdShellType", vtkProStarReader::starcdShellType },
          { "starcdLineType", vtkProStarReader::starcdLineType },
          { "starcdPointType", vtkProStarReader::starcdPointType },
        };

      o = PyvtkProStarReader_cellType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 8; c++)
      {
      typedef vtkProStarReader::shapeType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[8] = {
          { "starcdPoint", vtkProStarReader::starcdPoint },
          { "starcdLine", vtkProStarReader::starcdLine },
          { "starcdShell", vtkProStarReader::starcdShell },
          { "starcdHex", vtkProStarReader::starcdHex },
          { "starcdPrism", vtkProStarReader::starcdPrism },
          { "starcdTet", vtkProStarReader::starcdTet },
          { "starcdPyr", vtkProStarReader::starcdPyr },
          { "starcdPoly", vtkProStarReader::starcdPoly },
        };

      o = PyvtkProStarReader_shapeType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkProStarReader_Doc()
{
  static const char *docstring[] = {
    "vtkProStarReader - Reads geometry in proSTAR (STARCD) file format.\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkProStarReader creates an unstructured grid dataset. It reads\n.cel/.vrt files stored in proSTAR (STARCD) ASCII format.\n\nThanks:\n\nReader written by Mark Olesen\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProStarReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProStarReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProStarReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

