// python wrapper for vtkXMLWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkInformationVector.h"
#include "vtkXMLWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkXMLWriter_Doc();

#ifndef DECLARED_PyvtkXMLWriter_CompressorType_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkXMLWriter_CompressorType_Type;
#define DECLARED_PyvtkXMLWriter_CompressorType_Type
#endif

PyTypeObject PyvtkXMLWriter_CompressorType_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"CompressorType", // tp_name
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

PyObject *PyvtkXMLWriter_CompressorType_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkXMLWriter_CompressorType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkXMLWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLWriter::NewInstance());

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
PyvtkXMLWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLWriter *tempr = vtkXMLWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      op->vtkXMLWriter::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkXMLWriter::GetByteOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkXMLWriter::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkXMLWriter::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetHeaderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeaderType(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetHeaderType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetHeaderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHeaderType() :
      op->vtkXMLWriter::GetHeaderType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetHeaderTypeToUInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderTypeToUInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHeaderTypeToUInt32();
      }
    else
      {
      op->vtkXMLWriter::SetHeaderTypeToUInt32();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetHeaderTypeToUInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderTypeToUInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHeaderTypeToUInt64();
      }
    else
      {
      op->vtkXMLWriter::SetHeaderTypeToUInt64();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdType(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetIdType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIdType() :
      op->vtkXMLWriter::GetIdType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdTypeToInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIdTypeToInt32();
      }
    else
      {
      op->vtkXMLWriter::SetIdTypeToInt32();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdTypeToInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIdTypeToInt64();
      }
    else
      {
      op->vtkXMLWriter::SetIdTypeToInt64();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      op->vtkXMLWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToOutputString(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkXMLWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkXMLWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkXMLWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkXMLWriter::GetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataCompressor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataCompressor"))
    {
    if (ap.IsBound())
      {
      op->SetCompressor(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetCompressor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataCompressor *tempr = (ap.IsBound() ?
      op->GetCompressor() :
      op->vtkXMLWriter::GetCompressor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompressorType(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetCompressorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressorTypeToNone();
      }
    else
      {
      op->vtkXMLWriter::SetCompressorTypeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToZLib(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToZLib");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressorTypeToZLib();
      }
    else
      {
      op->vtkXMLWriter::SetCompressorTypeToZLib();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlockSize(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetBlockSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    size_t tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkXMLWriter::GetBlockSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataMode(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetDataMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataMode() :
      op->vtkXMLWriter::GetDataMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToAscii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAscii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataModeToAscii();
      }
    else
      {
      op->vtkXMLWriter::SetDataModeToAscii();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataModeToBinary();
      }
    else
      {
      op->vtkXMLWriter::SetDataModeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToAppended(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAppended");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataModeToAppended();
      }
    else
      {
      op->vtkXMLWriter::SetDataModeToAppended();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEncodeAppendedData(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetEncodeAppendedData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEncodeAppendedData() :
      op->vtkXMLWriter::GetEncodeAppendedData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_EncodeAppendedDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EncodeAppendedDataOn();
      }
    else
      {
      op->vtkXMLWriter::EncodeAppendedDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_EncodeAppendedDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EncodeAppendedDataOff();
      }
    else
      {
      op->vtkXMLWriter::EncodeAppendedDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkXMLWriter::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXMLWriter_SetInputData_s1(self, args);
    case 2:
      return PyvtkXMLWriter_SetInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkXMLWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkXMLWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXMLWriter_GetInput_s1(self, args);
    case 0:
      return PyvtkXMLWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkXMLWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    const char *tempr = op->GetDefaultFileExtension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkXMLWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkXMLWriter::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkXMLWriter::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0, temp1);
      }
    else
      {
      op->vtkXMLWriter::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXMLWriter_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkXMLWriter_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkXMLWriter_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkXMLWriter::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTimeSteps(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetNumberOfTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkXMLWriter::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkXMLWriter::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteNextTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteNextTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteNextTime(temp0);
      }
    else
      {
      op->vtkXMLWriter::WriteNextTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLWriter\nC++: vtkXMLWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLWriter\nC++: vtkXMLWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetByteOrder", PyvtkXMLWriter_SetByteOrder, METH_VARARGS,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"GetByteOrder", PyvtkXMLWriter_GetByteOrder, METH_VARARGS,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkXMLWriter_SetByteOrderToBigEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkXMLWriter_SetByteOrderToLittleEndian, METH_VARARGS,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"SetHeaderType", PyvtkXMLWriter_SetHeaderType, METH_VARARGS,
   (char*)"V.SetHeaderType(int)\nC++: virtual void SetHeaderType(int)\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {(char*)"GetHeaderType", PyvtkXMLWriter_GetHeaderType, METH_VARARGS,
   (char*)"V.GetHeaderType() -> int\nC++: int GetHeaderType()\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {(char*)"SetHeaderTypeToUInt32", PyvtkXMLWriter_SetHeaderTypeToUInt32, METH_VARARGS,
   (char*)"V.SetHeaderTypeToUInt32()\nC++: void SetHeaderTypeToUInt32()\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {(char*)"SetHeaderTypeToUInt64", PyvtkXMLWriter_SetHeaderTypeToUInt64, METH_VARARGS,
   (char*)"V.SetHeaderTypeToUInt64()\nC++: void SetHeaderTypeToUInt64()\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {(char*)"SetIdType", PyvtkXMLWriter_SetIdType, METH_VARARGS,
   (char*)"V.SetIdType(int)\nC++: virtual void SetIdType(int)\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"GetIdType", PyvtkXMLWriter_GetIdType, METH_VARARGS,
   (char*)"V.GetIdType() -> int\nC++: int GetIdType()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"SetIdTypeToInt32", PyvtkXMLWriter_SetIdTypeToInt32, METH_VARARGS,
   (char*)"V.SetIdTypeToInt32()\nC++: void SetIdTypeToInt32()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"SetIdTypeToInt64", PyvtkXMLWriter_SetIdTypeToInt64, METH_VARARGS,
   (char*)"V.SetIdTypeToInt64()\nC++: void SetIdTypeToInt64()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"SetFileName", PyvtkXMLWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the output file.\n"},
  {(char*)"GetFileName", PyvtkXMLWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {(char*)"SetWriteToOutputString", PyvtkXMLWriter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(int)\nC++: void SetWriteToOutputString(int a)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetWriteToOutputString", PyvtkXMLWriter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> int\nC++: int GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkXMLWriter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkXMLWriter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetOutputString", PyvtkXMLWriter_GetOutputString, METH_VARARGS,
   (char*)"V.GetOutputString() -> string\nC++: std::string GetOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"SetCompressor", PyvtkXMLWriter_SetCompressor, METH_VARARGS,
   (char*)"V.SetCompressor(vtkDataCompressor)\nC++: virtual void SetCompressor(vtkDataCompressor *)\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {(char*)"GetCompressor", PyvtkXMLWriter_GetCompressor, METH_VARARGS,
   (char*)"V.GetCompressor() -> vtkDataCompressor\nC++: vtkDataCompressor *GetCompressor()\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {(char*)"SetCompressorType", PyvtkXMLWriter_SetCompressorType, METH_VARARGS,
   (char*)"V.SetCompressorType(int)\nC++: void SetCompressorType(int compressorType)\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {(char*)"SetCompressorTypeToNone", PyvtkXMLWriter_SetCompressorTypeToNone, METH_VARARGS,
   (char*)"V.SetCompressorTypeToNone()\nC++: void SetCompressorTypeToNone()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {(char*)"SetCompressorTypeToZLib", PyvtkXMLWriter_SetCompressorTypeToZLib, METH_VARARGS,
   (char*)"V.SetCompressorTypeToZLib()\nC++: void SetCompressorTypeToZLib()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {(char*)"SetBlockSize", PyvtkXMLWriter_SetBlockSize, METH_VARARGS,
   (char*)"V.SetBlockSize(int)\nC++: virtual void SetBlockSize(size_t blockSize)\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {(char*)"GetBlockSize", PyvtkXMLWriter_GetBlockSize, METH_VARARGS,
   (char*)"V.GetBlockSize() -> int\nC++: size_t GetBlockSize()\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {(char*)"SetDataMode", PyvtkXMLWriter_SetDataMode, METH_VARARGS,
   (char*)"V.SetDataMode(int)\nC++: void SetDataMode(int a)\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"GetDataMode", PyvtkXMLWriter_GetDataMode, METH_VARARGS,
   (char*)"V.GetDataMode() -> int\nC++: int GetDataMode()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetDataModeToAscii", PyvtkXMLWriter_SetDataModeToAscii, METH_VARARGS,
   (char*)"V.SetDataModeToAscii()\nC++: void SetDataModeToAscii()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetDataModeToBinary", PyvtkXMLWriter_SetDataModeToBinary, METH_VARARGS,
   (char*)"V.SetDataModeToBinary()\nC++: void SetDataModeToBinary()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetDataModeToAppended", PyvtkXMLWriter_SetDataModeToAppended, METH_VARARGS,
   (char*)"V.SetDataModeToAppended()\nC++: void SetDataModeToAppended()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetEncodeAppendedData", PyvtkXMLWriter_SetEncodeAppendedData, METH_VARARGS,
   (char*)"V.SetEncodeAppendedData(int)\nC++: void SetEncodeAppendedData(int a)\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"GetEncodeAppendedData", PyvtkXMLWriter_GetEncodeAppendedData, METH_VARARGS,
   (char*)"V.GetEncodeAppendedData() -> int\nC++: int GetEncodeAppendedData()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"EncodeAppendedDataOn", PyvtkXMLWriter_EncodeAppendedDataOn, METH_VARARGS,
   (char*)"V.EncodeAppendedDataOn()\nC++: void EncodeAppendedDataOn()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"EncodeAppendedDataOff", PyvtkXMLWriter_EncodeAppendedDataOff, METH_VARARGS,
   (char*)"V.EncodeAppendedDataOff()\nC++: void EncodeAppendedDataOff()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"SetInputData", PyvtkXMLWriter_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {(char*)"GetInput", PyvtkXMLWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {(char*)"Write", PyvtkXMLWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {(char*)"SetTimeStep", PyvtkXMLWriter_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to write.\n"},
  {(char*)"GetTimeStep", PyvtkXMLWriter_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to write.\n"},
  {(char*)"GetTimeStepRange", PyvtkXMLWriter_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkXMLWriter_SetTimeStepRange, METH_VARARGS,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkXMLWriter_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nSet the number of time steps\n"},
  {(char*)"SetNumberOfTimeSteps", PyvtkXMLWriter_SetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.SetNumberOfTimeSteps(int)\nC++: void SetNumberOfTimeSteps(int a)\n\nSet the number of time steps\n"},
  {(char*)"Start", PyvtkXMLWriter_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: void Start()\n\nAPI to interface an outside the VTK pipeline control\n"},
  {(char*)"Stop", PyvtkXMLWriter_Stop, METH_VARARGS,
   (char*)"V.Stop()\nC++: void Stop()\n\nAPI to interface an outside the VTK pipeline control\n"},
  {(char*)"WriteNextTime", PyvtkXMLWriter_WriteNextTime, METH_VARARGS,
   (char*)"V.WriteNextTime(float)\nC++: void WriteNextTime(double time)\n\nAPI to interface an outside the VTK pipeline control\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLWriter_Methods,
    "vtkXMLWriter", modulename,
    NULL, NULL,
    PyvtkXMLWriter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkXMLWriter_CompressorType_Type);
    PyvtkXMLWriter_CompressorType_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkXMLWriter_CompressorType_Type;
    if (o && PyDict_SetItemString(d, (char *)"CompressorType", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 9; c++)
      {
      static const struct { const char *name; int value; }
        constants[9] = {
          { "BigEndian", vtkXMLWriter::BigEndian },
          { "LittleEndian", vtkXMLWriter::LittleEndian },
          { "Ascii", vtkXMLWriter::Ascii },
          { "Binary", vtkXMLWriter::Binary },
          { "Appended", vtkXMLWriter::Appended },
          { "Int32", vtkXMLWriter::Int32 },
          { "Int64", vtkXMLWriter::Int64 },
          { "UInt32", vtkXMLWriter::UInt32 },
          { "UInt64", vtkXMLWriter::UInt64 },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkXMLWriter::CompressorType cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "NONE", vtkXMLWriter::NONE },
          { "ZLIB", vtkXMLWriter::ZLIB },
        };

      o = PyvtkXMLWriter_CompressorType_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkXMLWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLWriter - Superclass for VTK's XML file writers.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkXMLWriter provides methods implementing most of the functionality\nneeded to write VTK XML file formats.  Concrete subclasses provide\nactual writer implementations calling upon this functionality.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

