// python wrapper for vtkGenericEnSightReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericEnSightReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericEnSightReader(PyObject *, const char *); }
#ifndef DECLARED_PyEnsightReaderCellIdMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyEnsightReaderCellIdMode_Type;
#define DECLARED_PyEnsightReaderCellIdMode_Type
#endif

PyTypeObject PyEnsightReaderCellIdMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EnsightReaderCellIdMode", // tp_name
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

PyObject *PyEnsightReaderCellIdMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyEnsightReaderCellIdMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkGenericEnSightReader_Doc();

#ifndef DECLARED_PyvtkGenericEnSightReader_FileTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGenericEnSightReader_FileTypes_Type;
#define DECLARED_PyvtkGenericEnSightReader_FileTypes_Type
#endif

PyTypeObject PyvtkGenericEnSightReader_FileTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FileTypes", // tp_name
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

PyObject *PyvtkGenericEnSightReader_FileTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGenericEnSightReader_FileTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkGenericEnSightReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericEnSightReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericEnSightReader::NewInstance());

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
PyvtkGenericEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericEnSightReader *tempr = vtkGenericEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaseFileName(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetCaseFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCaseFileName() :
      op->vtkGenericEnSightReader::GetCaseFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePath(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetFilePath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePath() :
      op->vtkGenericEnSightReader::GetFilePath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetEnSightVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnSightVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnSightVersion() :
      op->vtkGenericEnSightReader::GetEnSightVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariables() :
      op->vtkGenericEnSightReader::GetNumberOfVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariables(temp0) :
      op->vtkGenericEnSightReader::GetNumberOfVariables(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGenericEnSightReader_GetNumberOfVariables_s1(self, args);
    case 1:
      return PyvtkGenericEnSightReader_GetNumberOfVariables_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfVariables");
  return NULL;
}



static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexVariables() :
      op->vtkGenericEnSightReader::GetNumberOfComplexVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfScalarsPerNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfVectorsPerNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsSymmPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsSymmPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfTensorsSymmPerNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfScalarsPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfVectorsPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsSymmPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsSymmPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfTensorsSymmPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerMeasuredNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerMeasuredNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsPerMeasuredNode() :
      op->vtkGenericEnSightReader::GetNumberOfScalarsPerMeasuredNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerMeasuredNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerMeasuredNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsPerMeasuredNode() :
      op->vtkGenericEnSightReader::GetNumberOfVectorsPerMeasuredNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexScalarsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexScalarsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfComplexScalarsPerNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVectorsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexVectorsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfComplexVectorsPerNode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexScalarsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexScalarsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfComplexScalarsPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVectorsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexVectorsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfComplexVectorsPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetDescription_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription(temp0) :
      op->vtkGenericEnSightReader::GetDescription(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetDescription_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription(temp0, temp1) :
      op->vtkGenericEnSightReader::GetDescription(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetDescription(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGenericEnSightReader_GetDescription_s1(self, args);
    case 2:
      return PyvtkGenericEnSightReader_GetDescription_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDescription");
  return NULL;
}



static PyObject *
PyvtkGenericEnSightReader_GetComplexDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComplexDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetComplexDescription(temp0) :
      op->vtkGenericEnSightReader::GetComplexDescription(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVariableType(temp0) :
      op->vtkGenericEnSightReader::GetVariableType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetComplexVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComplexVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComplexVariableType(temp0) :
      op->vtkGenericEnSightReader::GetComplexVariableType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeValue(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetTimeValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkGenericEnSightReader::GetTimeValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetMinimumTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMinimumTimeValue() :
      op->vtkGenericEnSightReader::GetMinimumTimeValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetMaximumTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaximumTimeValue() :
      op->vtkGenericEnSightReader::GetMaximumTimeValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetTimeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArrayCollection *tempr = (ap.IsBound() ?
      op->GetTimeSets() :
      op->vtkGenericEnSightReader::GetTimeSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_DetermineEnSightVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineEnSightVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = (ap.IsBound() ?
      op->DetermineEnSightVersion(temp0) :
      op->vtkGenericEnSightReader::DetermineEnSightVersion(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ReadAllVariablesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVariablesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVariablesOn();
      }
    else
      {
      op->vtkGenericEnSightReader::ReadAllVariablesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ReadAllVariablesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVariablesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVariablesOff();
      }
    else
      {
      op->vtkGenericEnSightReader::ReadAllVariablesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetReadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllVariables(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetReadAllVariables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetReadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReadAllVariables() :
      op->vtkGenericEnSightReader::GetReadAllVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkGenericEnSightReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkGenericEnSightReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkGenericEnSightReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkGenericEnSightReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkGenericEnSightReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkGenericEnSightReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkGenericEnSightReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkGenericEnSightReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkGenericEnSightReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkGenericEnSightReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkGenericEnSightReader::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkGenericEnSightReader::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrder(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkGenericEnSightReader::GetByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkGenericEnSightReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkGenericEnSightReader::GetGeometryFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      op->vtkGenericEnSightReader::SetParticleCoordinatesByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetParticleCoordinatesByIndex() :
      op->vtkGenericEnSightReader::GetParticleCoordinatesByIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOn();
      }
    else
      {
      op->vtkGenericEnSightReader::ParticleCoordinatesByIndexOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOff();
      }
    else
      {
      op->vtkGenericEnSightReader::ParticleCoordinatesByIndexOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkGenericEnSightReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericEnSightReader *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkGenericEnSightReader::GetReader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericEnSightReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericEnSightReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericEnSightReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericEnSightReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericEnSightReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCaseFileName", PyvtkGenericEnSightReader_SetCaseFileName, METH_VARARGS,
   (char*)"V.SetCaseFileName(string)\nC++: void SetCaseFileName(const char *fileName)\n\nSet/Get the Case file name.\n"},
  {(char*)"GetCaseFileName", PyvtkGenericEnSightReader_GetCaseFileName, METH_VARARGS,
   (char*)"V.GetCaseFileName() -> string\nC++: char *GetCaseFileName()\n\nSet/Get the Case file name.\n"},
  {(char*)"SetFilePath", PyvtkGenericEnSightReader_SetFilePath, METH_VARARGS,
   (char*)"V.SetFilePath(string)\nC++: void SetFilePath(char *)\n\nSet/Get the file path.\n"},
  {(char*)"GetFilePath", PyvtkGenericEnSightReader_GetFilePath, METH_VARARGS,
   (char*)"V.GetFilePath() -> string\nC++: char *GetFilePath()\n\nSet/Get the file path.\n"},
  {(char*)"GetEnSightVersion", PyvtkGenericEnSightReader_GetEnSightVersion, METH_VARARGS,
   (char*)"V.GetEnSightVersion() -> int\nC++: int GetEnSightVersion()\n\nGet the EnSight file version being read.\n"},
  {(char*)"GetNumberOfVariables", PyvtkGenericEnSightReader_GetNumberOfVariables, METH_VARARGS,
   (char*)"V.GetNumberOfVariables() -> int\nC++: int GetNumberOfVariables()\nV.GetNumberOfVariables(int) -> int\nC++: int GetNumberOfVariables(int type)\n\nGet the number of variables listed in the case file.\n"},
  {(char*)"GetNumberOfComplexVariables", PyvtkGenericEnSightReader_GetNumberOfComplexVariables, METH_VARARGS,
   (char*)"V.GetNumberOfComplexVariables() -> int\nC++: int GetNumberOfComplexVariables()\n\nGet the number of variables listed in the case file.\n"},
  {(char*)"GetNumberOfScalarsPerNode", PyvtkGenericEnSightReader_GetNumberOfScalarsPerNode, METH_VARARGS,
   (char*)"V.GetNumberOfScalarsPerNode() -> int\nC++: int GetNumberOfScalarsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfVectorsPerNode", PyvtkGenericEnSightReader_GetNumberOfVectorsPerNode, METH_VARARGS,
   (char*)"V.GetNumberOfVectorsPerNode() -> int\nC++: int GetNumberOfVectorsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfTensorsSymmPerNode", PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerNode, METH_VARARGS,
   (char*)"V.GetNumberOfTensorsSymmPerNode() -> int\nC++: int GetNumberOfTensorsSymmPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfScalarsPerElement", PyvtkGenericEnSightReader_GetNumberOfScalarsPerElement, METH_VARARGS,
   (char*)"V.GetNumberOfScalarsPerElement() -> int\nC++: int GetNumberOfScalarsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfVectorsPerElement", PyvtkGenericEnSightReader_GetNumberOfVectorsPerElement, METH_VARARGS,
   (char*)"V.GetNumberOfVectorsPerElement() -> int\nC++: int GetNumberOfVectorsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfTensorsSymmPerElement", PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerElement, METH_VARARGS,
   (char*)"V.GetNumberOfTensorsSymmPerElement() -> int\nC++: int GetNumberOfTensorsSymmPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfScalarsPerMeasuredNode", PyvtkGenericEnSightReader_GetNumberOfScalarsPerMeasuredNode, METH_VARARGS,
   (char*)"V.GetNumberOfScalarsPerMeasuredNode() -> int\nC++: int GetNumberOfScalarsPerMeasuredNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfVectorsPerMeasuredNode", PyvtkGenericEnSightReader_GetNumberOfVectorsPerMeasuredNode, METH_VARARGS,
   (char*)"V.GetNumberOfVectorsPerMeasuredNode() -> int\nC++: int GetNumberOfVectorsPerMeasuredNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexScalarsPerNode", PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerNode, METH_VARARGS,
   (char*)"V.GetNumberOfComplexScalarsPerNode() -> int\nC++: int GetNumberOfComplexScalarsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexVectorsPerNode", PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerNode, METH_VARARGS,
   (char*)"V.GetNumberOfComplexVectorsPerNode() -> int\nC++: int GetNumberOfComplexVectorsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexScalarsPerElement", PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerElement, METH_VARARGS,
   (char*)"V.GetNumberOfComplexScalarsPerElement() -> int\nC++: int GetNumberOfComplexScalarsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexVectorsPerElement", PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerElement, METH_VARARGS,
   (char*)"V.GetNumberOfComplexVectorsPerElement() -> int\nC++: int GetNumberOfComplexVectorsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetDescription", PyvtkGenericEnSightReader_GetDescription, METH_VARARGS,
   (char*)"V.GetDescription(int) -> string\nC++: const char *GetDescription(int n)\nV.GetDescription(int, int) -> string\nC++: const char *GetDescription(int n, int type)\n\nGet the nth description for a non-complex variable.\n"},
  {(char*)"GetComplexDescription", PyvtkGenericEnSightReader_GetComplexDescription, METH_VARARGS,
   (char*)"V.GetComplexDescription(int) -> string\nC++: const char *GetComplexDescription(int n)\n\nGet the nth description for a complex variable.\n"},
  {(char*)"GetVariableType", PyvtkGenericEnSightReader_GetVariableType, METH_VARARGS,
   (char*)"V.GetVariableType(int) -> int\nC++: int GetVariableType(int n)\n\nGet the variable type of variable n.\n"},
  {(char*)"GetComplexVariableType", PyvtkGenericEnSightReader_GetComplexVariableType, METH_VARARGS,
   (char*)"V.GetComplexVariableType(int) -> int\nC++: int GetComplexVariableType(int n)\n\nGet the variable type of variable n.\n"},
  {(char*)"SetTimeValue", PyvtkGenericEnSightReader_SetTimeValue, METH_VARARGS,
   (char*)"V.SetTimeValue(float)\nC++: virtual void SetTimeValue(float value)\n\nSet/Get the time value at which to get the value.\n"},
  {(char*)"GetTimeValue", PyvtkGenericEnSightReader_GetTimeValue, METH_VARARGS,
   (char*)"V.GetTimeValue() -> float\nC++: float GetTimeValue()\n\nSet/Get the time value at which to get the value.\n"},
  {(char*)"GetMinimumTimeValue", PyvtkGenericEnSightReader_GetMinimumTimeValue, METH_VARARGS,
   (char*)"V.GetMinimumTimeValue() -> float\nC++: float GetMinimumTimeValue()\n\nGet the minimum or maximum time value for this data set.\n"},
  {(char*)"GetMaximumTimeValue", PyvtkGenericEnSightReader_GetMaximumTimeValue, METH_VARARGS,
   (char*)"V.GetMaximumTimeValue() -> float\nC++: float GetMaximumTimeValue()\n\nGet the minimum or maximum time value for this data set.\n"},
  {(char*)"GetTimeSets", PyvtkGenericEnSightReader_GetTimeSets, METH_VARARGS,
   (char*)"V.GetTimeSets() -> vtkDataArrayCollection\nC++: vtkDataArrayCollection *GetTimeSets()\n\nGet the time values per time set\n"},
  {(char*)"DetermineEnSightVersion", PyvtkGenericEnSightReader_DetermineEnSightVersion, METH_VARARGS,
   (char*)"V.DetermineEnSightVersion(int) -> int\nC++: int DetermineEnSightVersion(int quiet=0)\n\nReads the FORMAT part of the case file to determine whether this\nis an EnSight6 or EnSightGold data set.  Returns an identifier\nlisted in the FileTypes enum or -1 if an error occurred or the\nfile could not be indentified as any EnSight type.\n"},
  {(char*)"ReadAllVariablesOn", PyvtkGenericEnSightReader_ReadAllVariablesOn, METH_VARARGS,
   (char*)"V.ReadAllVariablesOn()\nC++: void ReadAllVariablesOn()\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"ReadAllVariablesOff", PyvtkGenericEnSightReader_ReadAllVariablesOff, METH_VARARGS,
   (char*)"V.ReadAllVariablesOff()\nC++: void ReadAllVariablesOff()\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"SetReadAllVariables", PyvtkGenericEnSightReader_SetReadAllVariables, METH_VARARGS,
   (char*)"V.SetReadAllVariables(int)\nC++: void SetReadAllVariables(int a)\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"GetReadAllVariables", PyvtkGenericEnSightReader_GetReadAllVariables, METH_VARARGS,
   (char*)"V.GetReadAllVariables() -> int\nC++: int GetReadAllVariables()\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"GetPointDataArraySelection", PyvtkGenericEnSightReader_GetPointDataArraySelection, METH_VARARGS,
   (char*)"V.GetPointDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetCellDataArraySelection", PyvtkGenericEnSightReader_GetCellDataArraySelection, METH_VARARGS,
   (char*)"V.GetCellDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkGenericEnSightReader_GetNumberOfPointArrays, METH_VARARGS,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkGenericEnSightReader_GetNumberOfCellArrays, METH_VARARGS,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetPointArrayName", PyvtkGenericEnSightReader_GetPointArrayName, METH_VARARGS,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetCellArrayName", PyvtkGenericEnSightReader_GetCellArrayName, METH_VARARGS,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetPointArrayStatus", PyvtkGenericEnSightReader_GetPointArrayStatus, METH_VARARGS,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"GetCellArrayStatus", PyvtkGenericEnSightReader_GetCellArrayStatus, METH_VARARGS,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetPointArrayStatus", PyvtkGenericEnSightReader_SetPointArrayStatus, METH_VARARGS,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkGenericEnSightReader_SetCellArrayStatus, METH_VARARGS,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkGenericEnSightReader_SetByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkGenericEnSightReader_SetByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrder", PyvtkGenericEnSightReader_SetByteOrder, METH_VARARGS,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrder", PyvtkGenericEnSightReader_GetByteOrder, METH_VARARGS,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrderAsString", PyvtkGenericEnSightReader_GetByteOrderAsString, METH_VARARGS,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetGeometryFileName", PyvtkGenericEnSightReader_GetGeometryFileName, METH_VARARGS,
   (char*)"V.GetGeometryFileName() -> string\nC++: char *GetGeometryFileName()\n\nGet the Geometry file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"SetParticleCoordinatesByIndex", PyvtkGenericEnSightReader_SetParticleCoordinatesByIndex, METH_VARARGS,
   (char*)"V.SetParticleCoordinatesByIndex(int)\nC++: void SetParticleCoordinatesByIndex(int a)\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"GetParticleCoordinatesByIndex", PyvtkGenericEnSightReader_GetParticleCoordinatesByIndex, METH_VARARGS,
   (char*)"V.GetParticleCoordinatesByIndex() -> int\nC++: int GetParticleCoordinatesByIndex()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOn", PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOn, METH_VARARGS,
   (char*)"V.ParticleCoordinatesByIndexOn()\nC++: void ParticleCoordinatesByIndexOn()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOff", PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOff, METH_VARARGS,
   (char*)"V.ParticleCoordinatesByIndexOff()\nC++: void ParticleCoordinatesByIndexOff()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"CanReadFile", PyvtkGenericEnSightReader_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *casefilename)\n\nReturns true if the file pointed to by casefilename appears to be\na valid EnSight case file.\n"},
  {(char*)"GetReader", PyvtkGenericEnSightReader_GetReader, METH_VARARGS,
   (char*)"V.GetReader() -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *GetReader()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericEnSightReader_StaticNew()
{
  return vtkGenericEnSightReader::New();
}

PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericEnSightReader_StaticNew,
    PyvtkGenericEnSightReader_Methods,
    "vtkGenericEnSightReader", modulename,
    NULL, NULL,
    PyvtkGenericEnSightReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkGenericEnSightReader_FileTypes_Type);
    PyvtkGenericEnSightReader_FileTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGenericEnSightReader_FileTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"FileTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkGenericEnSightReader::FileTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "ENSIGHT_6", vtkGenericEnSightReader::ENSIGHT_6 },
          { "ENSIGHT_6_BINARY", vtkGenericEnSightReader::ENSIGHT_6_BINARY },
          { "ENSIGHT_GOLD", vtkGenericEnSightReader::ENSIGHT_GOLD },
          { "ENSIGHT_GOLD_BINARY", vtkGenericEnSightReader::ENSIGHT_GOLD_BINARY },
          { "ENSIGHT_MASTER_SERVER", vtkGenericEnSightReader::ENSIGHT_MASTER_SERVER },
        };

      o = PyvtkGenericEnSightReader_FileTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "FILE_BIG_ENDIAN", vtkGenericEnSightReader::FILE_BIG_ENDIAN },
          { "FILE_LITTLE_ENDIAN", vtkGenericEnSightReader::FILE_LITTLE_ENDIAN },
          { "FILE_UNKNOWN_ENDIAN", vtkGenericEnSightReader::FILE_UNKNOWN_ENDIAN },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGenericEnSightReader_Doc()
{
  static const char *docstring[] = {
    "vtkGenericEnSightReader - class to read any type of EnSight files\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "The class vtkGenericEnSightReader allows the user to read an EnSight\ndata set without a priori knowledge of what type of EnSight data set\nit is.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericEnSightReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericEnSightReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericEnSightReader", o) != 0)
    {
    Py_DECREF(o);
    }

  PyType_Ready(&PyEnsightReaderCellIdMode_Type);
  PyEnsightReaderCellIdMode_Type.tp_new = NULL;

  o = (PyObject *)&PyEnsightReaderCellIdMode_Type;
  if (o && PyDict_SetItemString(dict, (char *)"EnsightReaderCellIdMode", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; EnsightReaderCellIdMode value; }
      constants[4] = {
        { "SINGLE_PROCESS_MODE", SINGLE_PROCESS_MODE },
        { "SPARSE_MODE", SPARSE_MODE },
        { "NON_SPARSE_MODE", NON_SPARSE_MODE },
        { "IMPLICIT_STRUCTURED_MODE", IMPLICIT_STRUCTURED_MODE },
      };

    o = PyEnsightReaderCellIdMode_FromEnum(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

