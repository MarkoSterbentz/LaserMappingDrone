// python wrapper for vtkGL2PSExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGL2PSExporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGL2PSExporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGL2PSExporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkGL2PSExporter_Doc();

#ifndef DECLARED_PyvtkGL2PSExporter_OutputFormat_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGL2PSExporter_OutputFormat_Type;
#define DECLARED_PyvtkGL2PSExporter_OutputFormat_Type
#endif

PyTypeObject PyvtkGL2PSExporter_OutputFormat_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"OutputFormat", // tp_name
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

PyObject *PyvtkGL2PSExporter_OutputFormat_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGL2PSExporter_OutputFormat_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkGL2PSExporter_SortScheme_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGL2PSExporter_SortScheme_Type;
#define DECLARED_PyvtkGL2PSExporter_SortScheme_Type
#endif

PyTypeObject PyvtkGL2PSExporter_SortScheme_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"SortScheme", // tp_name
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

PyObject *PyvtkGL2PSExporter_SortScheme_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGL2PSExporter_SortScheme_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkGL2PSExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGL2PSExporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGL2PSExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGL2PSExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGL2PSExporter::NewInstance());

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
PyvtkGL2PSExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGL2PSExporter *tempr = vtkGL2PSExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkGL2PSExporter::GetFilePrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkGL2PSExporter::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_UsePainterSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsePainterSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UsePainterSettings();
      }
    else
      {
      op->vtkGL2PSExporter::UsePainterSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileFormat(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetFileFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormatMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileFormatMinValue() :
      op->vtkGL2PSExporter::GetFileFormatMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormatMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileFormatMaxValue() :
      op->vtkGL2PSExporter::GetFileFormatMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileFormat() :
      op->vtkGL2PSExporter::GetFileFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileFormatToPS();
      }
    else
      {
      op->vtkGL2PSExporter::SetFileFormatToPS();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToEPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToEPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileFormatToEPS();
      }
    else
      {
      op->vtkGL2PSExporter::SetFileFormatToEPS();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToPDF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToPDF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileFormatToPDF();
      }
    else
      {
      op->vtkGL2PSExporter::SetFileFormatToPDF();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToTeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToTeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileFormatToTeX();
      }
    else
      {
      op->vtkGL2PSExporter::SetFileFormatToTeX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetFileFormatToSVG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatToSVG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileFormatToSVG();
      }
    else
      {
      op->vtkGL2PSExporter::SetFileFormatToSVG();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetFileFormatAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileFormatAsString() :
      op->vtkGL2PSExporter::GetFileFormatAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSort(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetSort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSortMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortMinValue() :
      op->vtkGL2PSExporter::GetSortMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSortMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSortMaxValue() :
      op->vtkGL2PSExporter::GetSortMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSort() :
      op->vtkGL2PSExporter::GetSort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSortToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortToOff();
      }
    else
      {
      op->vtkGL2PSExporter::SetSortToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSortToSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortToSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortToSimple();
      }
    else
      {
      op->vtkGL2PSExporter::SetSortToSimple();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSortToBSP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortToBSP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSortToBSP();
      }
    else
      {
      op->vtkGL2PSExporter::SetSortToBSP();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSortAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSortAsString() :
      op->vtkGL2PSExporter::GetSortAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetCompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompress(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetCompress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetCompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompress() :
      op->vtkGL2PSExporter::GetCompress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_CompressOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompressOn();
      }
    else
      {
      op->vtkGL2PSExporter::CompressOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_CompressOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompressOff();
      }
    else
      {
      op->vtkGL2PSExporter::CompressOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawBackground(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetDrawBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkGL2PSExporter::GetDrawBackground());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawBackgroundOn();
      }
    else
      {
      op->vtkGL2PSExporter::DrawBackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawBackgroundOff();
      }
    else
      {
      op->vtkGL2PSExporter::DrawBackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSimpleLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimpleLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSimpleLineOffset(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetSimpleLineOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSimpleLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSimpleLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSimpleLineOffset() :
      op->vtkGL2PSExporter::GetSimpleLineOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SimpleLineOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SimpleLineOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SimpleLineOffsetOn();
      }
    else
      {
      op->vtkGL2PSExporter::SimpleLineOffsetOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SimpleLineOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SimpleLineOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SimpleLineOffsetOff();
      }
    else
      {
      op->vtkGL2PSExporter::SimpleLineOffsetOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetSilent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSilent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSilent(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetSilent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetSilent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSilent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSilent() :
      op->vtkGL2PSExporter::GetSilent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SilentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SilentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SilentOn();
      }
    else
      {
      op->vtkGL2PSExporter::SilentOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SilentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SilentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SilentOff();
      }
    else
      {
      op->vtkGL2PSExporter::SilentOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetBestRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBestRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBestRoot(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetBestRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetBestRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBestRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBestRoot() :
      op->vtkGL2PSExporter::GetBestRoot());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_BestRootOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BestRootOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BestRootOn();
      }
    else
      {
      op->vtkGL2PSExporter::BestRootOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_BestRootOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BestRootOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BestRootOff();
      }
    else
      {
      op->vtkGL2PSExporter::BestRootOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkGL2PSExporter::GetText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextOn();
      }
    else
      {
      op->vtkGL2PSExporter::TextOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextOff();
      }
    else
      {
      op->vtkGL2PSExporter::TextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetLandscape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLandscape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLandscape(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetLandscape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetLandscape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandscape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLandscape() :
      op->vtkGL2PSExporter::GetLandscape());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_LandscapeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LandscapeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LandscapeOn();
      }
    else
      {
      op->vtkGL2PSExporter::LandscapeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_LandscapeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LandscapeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LandscapeOff();
      }
    else
      {
      op->vtkGL2PSExporter::LandscapeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetPS3Shading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPS3Shading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPS3Shading(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetPS3Shading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetPS3Shading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPS3Shading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPS3Shading() :
      op->vtkGL2PSExporter::GetPS3Shading());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_PS3ShadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PS3ShadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PS3ShadingOn();
      }
    else
      {
      op->vtkGL2PSExporter::PS3ShadingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_PS3ShadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PS3ShadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PS3ShadingOff();
      }
    else
      {
      op->vtkGL2PSExporter::PS3ShadingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetOcclusionCull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionCull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOcclusionCull(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetOcclusionCull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetOcclusionCull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionCull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOcclusionCull() :
      op->vtkGL2PSExporter::GetOcclusionCull());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_OcclusionCullOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OcclusionCullOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OcclusionCullOn();
      }
    else
      {
      op->vtkGL2PSExporter::OcclusionCullOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_OcclusionCullOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OcclusionCullOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OcclusionCullOff();
      }
    else
      {
      op->vtkGL2PSExporter::OcclusionCullOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetWrite3DPropsAsRasterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrite3DPropsAsRasterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWrite3DPropsAsRasterImage(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetWrite3DPropsAsRasterImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetWrite3DPropsAsRasterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrite3DPropsAsRasterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWrite3DPropsAsRasterImage() :
      op->vtkGL2PSExporter::GetWrite3DPropsAsRasterImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_Write3DPropsAsRasterImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write3DPropsAsRasterImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write3DPropsAsRasterImageOn();
      }
    else
      {
      op->vtkGL2PSExporter::Write3DPropsAsRasterImageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_Write3DPropsAsRasterImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write3DPropsAsRasterImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write3DPropsAsRasterImageOff();
      }
    else
      {
      op->vtkGL2PSExporter::Write3DPropsAsRasterImageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetTextAsPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextAsPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextAsPath(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetTextAsPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetTextAsPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextAsPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTextAsPath() :
      op->vtkGL2PSExporter::GetTextAsPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextAsPathOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextAsPathOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextAsPathOn();
      }
    else
      {
      op->vtkGL2PSExporter::TextAsPathOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_TextAsPathOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextAsPathOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextAsPathOff();
      }
    else
      {
      op->vtkGL2PSExporter::TextAsPathOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetRasterExclusions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRasterExclusions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->SetRasterExclusions(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetRasterExclusions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetRasterExclusions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRasterExclusions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetRasterExclusions() :
      op->vtkGL2PSExporter::GetRasterExclusions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetPointSizeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSizeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSizeFactor(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetPointSizeFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetPointSizeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeFactor() :
      op->vtkGL2PSExporter::GetPointSizeFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_SetLineWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidthFactor(temp0);
      }
    else
      {
      op->vtkGL2PSExporter::SetLineWidthFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGL2PSExporter_GetLineWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGL2PSExporter *op = static_cast<vtkGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthFactor() :
      op->vtkGL2PSExporter::GetLineWidthFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGL2PSExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkGL2PSExporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGL2PSExporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGL2PSExporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGL2PSExporter\nC++: vtkGL2PSExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGL2PSExporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGL2PSExporter\nC++: vtkGL2PSExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilePrefix", PyvtkGL2PSExporter_SetFilePrefix, METH_VARARGS,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .ps or .eps or .tex appended to them\ndepending on the other options chosen.\n"},
  {(char*)"GetFilePrefix", PyvtkGL2PSExporter_GetFilePrefix, METH_VARARGS,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .ps or .eps or .tex appended to them\ndepending on the other options chosen.\n"},
  {(char*)"SetTitle", PyvtkGL2PSExporter_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet the title for the output, if supported. If NULL, \"VTK GL2PS\nExport\" is used.\n"},
  {(char*)"GetTitle", PyvtkGL2PSExporter_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet the title for the output, if supported. If NULL, \"VTK GL2PS\nExport\" is used.\n"},
  {(char*)"UsePainterSettings", PyvtkGL2PSExporter_UsePainterSettings, METH_VARARGS,
   (char*)"V.UsePainterSettings()\nC++: void UsePainterSettings()\n\nConfigure the exporter to expect a painter-ordered 2D rendering,\nthat is, a rendering at a fixed depth where primitives are drawn\nfrom the bottom up. This disables sorting, which will break the\npainter ordering, and turns off the simple line offset, which can\ncause line primitives to be drawn on top of all other geometry.\n"},
  {(char*)"SetFileFormat", PyvtkGL2PSExporter_SetFileFormat, METH_VARARGS,
   (char*)"V.SetFileFormat(int)\nC++: void SetFileFormat(int)\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"GetFileFormatMinValue", PyvtkGL2PSExporter_GetFileFormatMinValue, METH_VARARGS,
   (char*)"V.GetFileFormatMinValue() -> int\nC++: int GetFileFormatMinValue()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"GetFileFormatMaxValue", PyvtkGL2PSExporter_GetFileFormatMaxValue, METH_VARARGS,
   (char*)"V.GetFileFormatMaxValue() -> int\nC++: int GetFileFormatMaxValue()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"GetFileFormat", PyvtkGL2PSExporter_GetFileFormat, METH_VARARGS,
   (char*)"V.GetFileFormat() -> int\nC++: int GetFileFormat()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"SetFileFormatToPS", PyvtkGL2PSExporter_SetFileFormatToPS, METH_VARARGS,
   (char*)"V.SetFileFormatToPS()\nC++: void SetFileFormatToPS()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"SetFileFormatToEPS", PyvtkGL2PSExporter_SetFileFormatToEPS, METH_VARARGS,
   (char*)"V.SetFileFormatToEPS()\nC++: void SetFileFormatToEPS()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"SetFileFormatToPDF", PyvtkGL2PSExporter_SetFileFormatToPDF, METH_VARARGS,
   (char*)"V.SetFileFormatToPDF()\nC++: void SetFileFormatToPDF()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"SetFileFormatToTeX", PyvtkGL2PSExporter_SetFileFormatToTeX, METH_VARARGS,
   (char*)"V.SetFileFormatToTeX()\nC++: void SetFileFormatToTeX()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"SetFileFormatToSVG", PyvtkGL2PSExporter_SetFileFormatToSVG, METH_VARARGS,
   (char*)"V.SetFileFormatToSVG()\nC++: void SetFileFormatToSVG()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"GetFileFormatAsString", PyvtkGL2PSExporter_GetFileFormatAsString, METH_VARARGS,
   (char*)"V.GetFileFormatAsString() -> string\nC++: const char *GetFileFormatAsString()\n\nSpecify the format of file to write out.  This can be one of:\nPS_FILE, EPS_FILE, PDF_FILE, TEX_FILE.  Defaults to EPS_FILE.\nDepending on the option chosen it generates the appropriate file\n(with correct extension) when the Write function is called.\n"},
  {(char*)"SetSort", PyvtkGL2PSExporter_SetSort, METH_VARARGS,
   (char*)"V.SetSort(int)\nC++: void SetSort(int)\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"GetSortMinValue", PyvtkGL2PSExporter_GetSortMinValue, METH_VARARGS,
   (char*)"V.GetSortMinValue() -> int\nC++: int GetSortMinValue()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"GetSortMaxValue", PyvtkGL2PSExporter_GetSortMaxValue, METH_VARARGS,
   (char*)"V.GetSortMaxValue() -> int\nC++: int GetSortMaxValue()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"GetSort", PyvtkGL2PSExporter_GetSort, METH_VARARGS,
   (char*)"V.GetSort() -> int\nC++: int GetSort()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"SetSortToOff", PyvtkGL2PSExporter_SetSortToOff, METH_VARARGS,
   (char*)"V.SetSortToOff()\nC++: void SetSortToOff()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"SetSortToSimple", PyvtkGL2PSExporter_SetSortToSimple, METH_VARARGS,
   (char*)"V.SetSortToSimple()\nC++: void SetSortToSimple()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"SetSortToBSP", PyvtkGL2PSExporter_SetSortToBSP, METH_VARARGS,
   (char*)"V.SetSortToBSP()\nC++: void SetSortToBSP()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"GetSortAsString", PyvtkGL2PSExporter_GetSortAsString, METH_VARARGS,
   (char*)"V.GetSortAsString() -> string\nC++: const char *GetSortAsString()\n\nSet the the type of sorting algorithm to order primitives from\nback to front.  Successive algorithms are more memory intensive. \nSimple is the default but BSP is perhaps the best.\n"},
  {(char*)"SetCompress", PyvtkGL2PSExporter_SetCompress, METH_VARARGS,
   (char*)"V.SetCompress(int)\nC++: void SetCompress(int a)\n\nTurn on/off compression when generating PostScript or PDF output.\nBy default compression is on.\n"},
  {(char*)"GetCompress", PyvtkGL2PSExporter_GetCompress, METH_VARARGS,
   (char*)"V.GetCompress() -> int\nC++: int GetCompress()\n\nTurn on/off compression when generating PostScript or PDF output.\nBy default compression is on.\n"},
  {(char*)"CompressOn", PyvtkGL2PSExporter_CompressOn, METH_VARARGS,
   (char*)"V.CompressOn()\nC++: void CompressOn()\n\nTurn on/off compression when generating PostScript or PDF output.\nBy default compression is on.\n"},
  {(char*)"CompressOff", PyvtkGL2PSExporter_CompressOff, METH_VARARGS,
   (char*)"V.CompressOff()\nC++: void CompressOff()\n\nTurn on/off compression when generating PostScript or PDF output.\nBy default compression is on.\n"},
  {(char*)"SetDrawBackground", PyvtkGL2PSExporter_SetDrawBackground, METH_VARARGS,
   (char*)"V.SetDrawBackground(int)\nC++: void SetDrawBackground(int a)\n\nTurn on/off drawing the background frame.  If off the background\nis treated as white.  By default the background is drawn.\n"},
  {(char*)"GetDrawBackground", PyvtkGL2PSExporter_GetDrawBackground, METH_VARARGS,
   (char*)"V.GetDrawBackground() -> int\nC++: int GetDrawBackground()\n\nTurn on/off drawing the background frame.  If off the background\nis treated as white.  By default the background is drawn.\n"},
  {(char*)"DrawBackgroundOn", PyvtkGL2PSExporter_DrawBackgroundOn, METH_VARARGS,
   (char*)"V.DrawBackgroundOn()\nC++: void DrawBackgroundOn()\n\nTurn on/off drawing the background frame.  If off the background\nis treated as white.  By default the background is drawn.\n"},
  {(char*)"DrawBackgroundOff", PyvtkGL2PSExporter_DrawBackgroundOff, METH_VARARGS,
   (char*)"V.DrawBackgroundOff()\nC++: void DrawBackgroundOff()\n\nTurn on/off drawing the background frame.  If off the background\nis treated as white.  By default the background is drawn.\n"},
  {(char*)"SetSimpleLineOffset", PyvtkGL2PSExporter_SetSimpleLineOffset, METH_VARARGS,
   (char*)"V.SetSimpleLineOffset(int)\nC++: void SetSimpleLineOffset(int a)\n\nTurn on/off the GL2PS_SIMPLE_LINE_OFFSET option.  When enabled a\nsmall offset is added in the z-buffer to all the lines in the\nplot.  This results in an anti-aliasing like solution.  Defaults\nto on.\n"},
  {(char*)"GetSimpleLineOffset", PyvtkGL2PSExporter_GetSimpleLineOffset, METH_VARARGS,
   (char*)"V.GetSimpleLineOffset() -> int\nC++: int GetSimpleLineOffset()\n\nTurn on/off the GL2PS_SIMPLE_LINE_OFFSET option.  When enabled a\nsmall offset is added in the z-buffer to all the lines in the\nplot.  This results in an anti-aliasing like solution.  Defaults\nto on.\n"},
  {(char*)"SimpleLineOffsetOn", PyvtkGL2PSExporter_SimpleLineOffsetOn, METH_VARARGS,
   (char*)"V.SimpleLineOffsetOn()\nC++: void SimpleLineOffsetOn()\n\nTurn on/off the GL2PS_SIMPLE_LINE_OFFSET option.  When enabled a\nsmall offset is added in the z-buffer to all the lines in the\nplot.  This results in an anti-aliasing like solution.  Defaults\nto on.\n"},
  {(char*)"SimpleLineOffsetOff", PyvtkGL2PSExporter_SimpleLineOffsetOff, METH_VARARGS,
   (char*)"V.SimpleLineOffsetOff()\nC++: void SimpleLineOffsetOff()\n\nTurn on/off the GL2PS_SIMPLE_LINE_OFFSET option.  When enabled a\nsmall offset is added in the z-buffer to all the lines in the\nplot.  This results in an anti-aliasing like solution.  Defaults\nto on.\n"},
  {(char*)"SetSilent", PyvtkGL2PSExporter_SetSilent, METH_VARARGS,
   (char*)"V.SetSilent(int)\nC++: void SetSilent(int a)\n\nTurn on/off GL2PS messages sent to stderr (GL2PS_SILENT).  When\nenabled GL2PS messages are suppressed.  Defaults to off.\n"},
  {(char*)"GetSilent", PyvtkGL2PSExporter_GetSilent, METH_VARARGS,
   (char*)"V.GetSilent() -> int\nC++: int GetSilent()\n\nTurn on/off GL2PS messages sent to stderr (GL2PS_SILENT).  When\nenabled GL2PS messages are suppressed.  Defaults to off.\n"},
  {(char*)"SilentOn", PyvtkGL2PSExporter_SilentOn, METH_VARARGS,
   (char*)"V.SilentOn()\nC++: void SilentOn()\n\nTurn on/off GL2PS messages sent to stderr (GL2PS_SILENT).  When\nenabled GL2PS messages are suppressed.  Defaults to off.\n"},
  {(char*)"SilentOff", PyvtkGL2PSExporter_SilentOff, METH_VARARGS,
   (char*)"V.SilentOff()\nC++: void SilentOff()\n\nTurn on/off GL2PS messages sent to stderr (GL2PS_SILENT).  When\nenabled GL2PS messages are suppressed.  Defaults to off.\n"},
  {(char*)"SetBestRoot", PyvtkGL2PSExporter_SetBestRoot, METH_VARARGS,
   (char*)"V.SetBestRoot(int)\nC++: void SetBestRoot(int a)\n\nTurn on/off the GL2PS_BEST_ROOT option.  When enabled the\nconstruction of the BSP tree is optimized by choosing the root\nprimitives leading to the minimum number of splits.  Defaults to\non.\n"},
  {(char*)"GetBestRoot", PyvtkGL2PSExporter_GetBestRoot, METH_VARARGS,
   (char*)"V.GetBestRoot() -> int\nC++: int GetBestRoot()\n\nTurn on/off the GL2PS_BEST_ROOT option.  When enabled the\nconstruction of the BSP tree is optimized by choosing the root\nprimitives leading to the minimum number of splits.  Defaults to\non.\n"},
  {(char*)"BestRootOn", PyvtkGL2PSExporter_BestRootOn, METH_VARARGS,
   (char*)"V.BestRootOn()\nC++: void BestRootOn()\n\nTurn on/off the GL2PS_BEST_ROOT option.  When enabled the\nconstruction of the BSP tree is optimized by choosing the root\nprimitives leading to the minimum number of splits.  Defaults to\non.\n"},
  {(char*)"BestRootOff", PyvtkGL2PSExporter_BestRootOff, METH_VARARGS,
   (char*)"V.BestRootOff()\nC++: void BestRootOff()\n\nTurn on/off the GL2PS_BEST_ROOT option.  When enabled the\nconstruction of the BSP tree is optimized by choosing the root\nprimitives leading to the minimum number of splits.  Defaults to\non.\n"},
  {(char*)"SetText", PyvtkGL2PSExporter_SetText, METH_VARARGS,
   (char*)"V.SetText(int)\nC++: void SetText(int a)\n\nTurn on/off drawing the text.  If on (default) the text is drawn.\nIf the FileFormat is set to TeX output then a LaTeX picture is\ngenerated with the text strings.  If off text output is\nsuppressed.\n"},
  {(char*)"GetText", PyvtkGL2PSExporter_GetText, METH_VARARGS,
   (char*)"V.GetText() -> int\nC++: int GetText()\n\nTurn on/off drawing the text.  If on (default) the text is drawn.\nIf the FileFormat is set to TeX output then a LaTeX picture is\ngenerated with the text strings.  If off text output is\nsuppressed.\n"},
  {(char*)"TextOn", PyvtkGL2PSExporter_TextOn, METH_VARARGS,
   (char*)"V.TextOn()\nC++: void TextOn()\n\nTurn on/off drawing the text.  If on (default) the text is drawn.\nIf the FileFormat is set to TeX output then a LaTeX picture is\ngenerated with the text strings.  If off text output is\nsuppressed.\n"},
  {(char*)"TextOff", PyvtkGL2PSExporter_TextOff, METH_VARARGS,
   (char*)"V.TextOff()\nC++: void TextOff()\n\nTurn on/off drawing the text.  If on (default) the text is drawn.\nIf the FileFormat is set to TeX output then a LaTeX picture is\ngenerated with the text strings.  If off text output is\nsuppressed.\n"},
  {(char*)"SetLandscape", PyvtkGL2PSExporter_SetLandscape, METH_VARARGS,
   (char*)"V.SetLandscape(int)\nC++: void SetLandscape(int a)\n\nTurn on/off landscape orientation.  If off (default) the\norientation is set to portrait.\n"},
  {(char*)"GetLandscape", PyvtkGL2PSExporter_GetLandscape, METH_VARARGS,
   (char*)"V.GetLandscape() -> int\nC++: int GetLandscape()\n\nTurn on/off landscape orientation.  If off (default) the\norientation is set to portrait.\n"},
  {(char*)"LandscapeOn", PyvtkGL2PSExporter_LandscapeOn, METH_VARARGS,
   (char*)"V.LandscapeOn()\nC++: void LandscapeOn()\n\nTurn on/off landscape orientation.  If off (default) the\norientation is set to portrait.\n"},
  {(char*)"LandscapeOff", PyvtkGL2PSExporter_LandscapeOff, METH_VARARGS,
   (char*)"V.LandscapeOff()\nC++: void LandscapeOff()\n\nTurn on/off landscape orientation.  If off (default) the\norientation is set to portrait.\n"},
  {(char*)"SetPS3Shading", PyvtkGL2PSExporter_SetPS3Shading, METH_VARARGS,
   (char*)"V.SetPS3Shading(int)\nC++: void SetPS3Shading(int a)\n\nTurn on/off the GL2PS_PS3_SHADING option.  When enabled the\nshfill PostScript level 3 operator is used.  Read the GL2PS\ndocumentation for more details.  Defaults to on.\n"},
  {(char*)"GetPS3Shading", PyvtkGL2PSExporter_GetPS3Shading, METH_VARARGS,
   (char*)"V.GetPS3Shading() -> int\nC++: int GetPS3Shading()\n\nTurn on/off the GL2PS_PS3_SHADING option.  When enabled the\nshfill PostScript level 3 operator is used.  Read the GL2PS\ndocumentation for more details.  Defaults to on.\n"},
  {(char*)"PS3ShadingOn", PyvtkGL2PSExporter_PS3ShadingOn, METH_VARARGS,
   (char*)"V.PS3ShadingOn()\nC++: void PS3ShadingOn()\n\nTurn on/off the GL2PS_PS3_SHADING option.  When enabled the\nshfill PostScript level 3 operator is used.  Read the GL2PS\ndocumentation for more details.  Defaults to on.\n"},
  {(char*)"PS3ShadingOff", PyvtkGL2PSExporter_PS3ShadingOff, METH_VARARGS,
   (char*)"V.PS3ShadingOff()\nC++: void PS3ShadingOff()\n\nTurn on/off the GL2PS_PS3_SHADING option.  When enabled the\nshfill PostScript level 3 operator is used.  Read the GL2PS\ndocumentation for more details.  Defaults to on.\n"},
  {(char*)"SetOcclusionCull", PyvtkGL2PSExporter_SetOcclusionCull, METH_VARARGS,
   (char*)"V.SetOcclusionCull(int)\nC++: void SetOcclusionCull(int a)\n\nTurn on/off culling of occluded polygons (GL2PS_OCCLUSION_CULL).\nWhen enabled hidden polygons are removed.  This reduces file size\nconsiderably.  Defaults to on.\n"},
  {(char*)"GetOcclusionCull", PyvtkGL2PSExporter_GetOcclusionCull, METH_VARARGS,
   (char*)"V.GetOcclusionCull() -> int\nC++: int GetOcclusionCull()\n\nTurn on/off culling of occluded polygons (GL2PS_OCCLUSION_CULL).\nWhen enabled hidden polygons are removed.  This reduces file size\nconsiderably.  Defaults to on.\n"},
  {(char*)"OcclusionCullOn", PyvtkGL2PSExporter_OcclusionCullOn, METH_VARARGS,
   (char*)"V.OcclusionCullOn()\nC++: void OcclusionCullOn()\n\nTurn on/off culling of occluded polygons (GL2PS_OCCLUSION_CULL).\nWhen enabled hidden polygons are removed.  This reduces file size\nconsiderably.  Defaults to on.\n"},
  {(char*)"OcclusionCullOff", PyvtkGL2PSExporter_OcclusionCullOff, METH_VARARGS,
   (char*)"V.OcclusionCullOff()\nC++: void OcclusionCullOff()\n\nTurn on/off culling of occluded polygons (GL2PS_OCCLUSION_CULL).\nWhen enabled hidden polygons are removed.  This reduces file size\nconsiderably.  Defaults to on.\n"},
  {(char*)"SetWrite3DPropsAsRasterImage", PyvtkGL2PSExporter_SetWrite3DPropsAsRasterImage, METH_VARARGS,
   (char*)"V.SetWrite3DPropsAsRasterImage(int)\nC++: void SetWrite3DPropsAsRasterImage(int a)\n\nTurn on/off writing 3D props as raster images.  2D props are\nrendered using vector graphics primitives.  If you have hi-res\nactors and are using transparency you probably need to turn this\non.  Defaults to Off.\n"},
  {(char*)"GetWrite3DPropsAsRasterImage", PyvtkGL2PSExporter_GetWrite3DPropsAsRasterImage, METH_VARARGS,
   (char*)"V.GetWrite3DPropsAsRasterImage() -> int\nC++: int GetWrite3DPropsAsRasterImage()\n\nTurn on/off writing 3D props as raster images.  2D props are\nrendered using vector graphics primitives.  If you have hi-res\nactors and are using transparency you probably need to turn this\non.  Defaults to Off.\n"},
  {(char*)"Write3DPropsAsRasterImageOn", PyvtkGL2PSExporter_Write3DPropsAsRasterImageOn, METH_VARARGS,
   (char*)"V.Write3DPropsAsRasterImageOn()\nC++: void Write3DPropsAsRasterImageOn()\n\nTurn on/off writing 3D props as raster images.  2D props are\nrendered using vector graphics primitives.  If you have hi-res\nactors and are using transparency you probably need to turn this\non.  Defaults to Off.\n"},
  {(char*)"Write3DPropsAsRasterImageOff", PyvtkGL2PSExporter_Write3DPropsAsRasterImageOff, METH_VARARGS,
   (char*)"V.Write3DPropsAsRasterImageOff()\nC++: void Write3DPropsAsRasterImageOff()\n\nTurn on/off writing 3D props as raster images.  2D props are\nrendered using vector graphics primitives.  If you have hi-res\nactors and are using transparency you probably need to turn this\non.  Defaults to Off.\n"},
  {(char*)"SetTextAsPath", PyvtkGL2PSExporter_SetTextAsPath, METH_VARARGS,
   (char*)"V.SetTextAsPath(bool)\nC++: void SetTextAsPath(bool a)\n\nTurn on/off exporting text as path information, rather than\ncharacter data. This is useful for the PDF backend, which does\nnot properly support aligned text otherwise. Defaults to Off.\n"},
  {(char*)"GetTextAsPath", PyvtkGL2PSExporter_GetTextAsPath, METH_VARARGS,
   (char*)"V.GetTextAsPath() -> bool\nC++: bool GetTextAsPath()\n\nTurn on/off exporting text as path information, rather than\ncharacter data. This is useful for the PDF backend, which does\nnot properly support aligned text otherwise. Defaults to Off.\n"},
  {(char*)"TextAsPathOn", PyvtkGL2PSExporter_TextAsPathOn, METH_VARARGS,
   (char*)"V.TextAsPathOn()\nC++: void TextAsPathOn()\n\nTurn on/off exporting text as path information, rather than\ncharacter data. This is useful for the PDF backend, which does\nnot properly support aligned text otherwise. Defaults to Off.\n"},
  {(char*)"TextAsPathOff", PyvtkGL2PSExporter_TextAsPathOff, METH_VARARGS,
   (char*)"V.TextAsPathOff()\nC++: void TextAsPathOff()\n\nTurn on/off exporting text as path information, rather than\ncharacter data. This is useful for the PDF backend, which does\nnot properly support aligned text otherwise. Defaults to Off.\n"},
  {(char*)"SetRasterExclusions", PyvtkGL2PSExporter_SetRasterExclusions, METH_VARARGS,
   (char*)"V.SetRasterExclusions(vtkPropCollection)\nC++: void SetRasterExclusions(vtkPropCollection *)\n\nCollection of props to exclude from rasterization. These will be\nrendered as 2D vector primitives in the output. This setting is\nignored if Write3DPropsAsRasterImage is false. Behind the scenes,\nthese props are treated as 2D props during the vector output\ngeneration.\n"},
  {(char*)"GetRasterExclusions", PyvtkGL2PSExporter_GetRasterExclusions, METH_VARARGS,
   (char*)"V.GetRasterExclusions() -> vtkPropCollection\nC++: vtkPropCollection *GetRasterExclusions()\n\nCollection of props to exclude from rasterization. These will be\nrendered as 2D vector primitives in the output. This setting is\nignored if Write3DPropsAsRasterImage is false. Behind the scenes,\nthese props are treated as 2D props during the vector output\ngeneration.\n"},
  {(char*)"SetPointSizeFactor", PyvtkGL2PSExporter_SetPointSizeFactor, METH_VARARGS,
   (char*)"V.SetPointSizeFactor(float)\nC++: void SetPointSizeFactor(float a)\n\nSet the ratio between the OpenGL PointSize and that used by GL2PS\nto generate PostScript.  Defaults to a ratio of 5/7.\n"},
  {(char*)"GetPointSizeFactor", PyvtkGL2PSExporter_GetPointSizeFactor, METH_VARARGS,
   (char*)"V.GetPointSizeFactor() -> float\nC++: float GetPointSizeFactor()\n\nSet the ratio between the OpenGL PointSize and that used by GL2PS\nto generate PostScript.  Defaults to a ratio of 5/7.\n"},
  {(char*)"SetLineWidthFactor", PyvtkGL2PSExporter_SetLineWidthFactor, METH_VARARGS,
   (char*)"V.SetLineWidthFactor(float)\nC++: void SetLineWidthFactor(float a)\n\nSet the ratio between the OpenGL LineWidth and that used by GL2PS\nto generate PostScript.  Defaults to a ratio of 5/7.\n"},
  {(char*)"GetLineWidthFactor", PyvtkGL2PSExporter_GetLineWidthFactor, METH_VARARGS,
   (char*)"V.GetLineWidthFactor() -> float\nC++: float GetLineWidthFactor()\n\nSet the ratio between the OpenGL LineWidth and that used by GL2PS\nto generate PostScript.  Defaults to a ratio of 5/7.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGL2PSExporter_StaticNew()
{
  return vtkGL2PSExporter::New();
}

PyObject *PyVTKClass_vtkGL2PSExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGL2PSExporter_StaticNew,
    PyvtkGL2PSExporter_Methods,
    "vtkGL2PSExporter", modulename,
    NULL, NULL,
    PyvtkGL2PSExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkGL2PSExporter_OutputFormat_Type);
    PyvtkGL2PSExporter_OutputFormat_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGL2PSExporter_OutputFormat_Type;
    if (o && PyDict_SetItemString(d, (char *)"OutputFormat", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkGL2PSExporter_SortScheme_Type);
    PyvtkGL2PSExporter_SortScheme_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGL2PSExporter_SortScheme_Type;
    if (o && PyDict_SetItemString(d, (char *)"SortScheme", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkGL2PSExporter::OutputFormat cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "PS_FILE", vtkGL2PSExporter::PS_FILE },
          { "EPS_FILE", vtkGL2PSExporter::EPS_FILE },
          { "PDF_FILE", vtkGL2PSExporter::PDF_FILE },
          { "TEX_FILE", vtkGL2PSExporter::TEX_FILE },
          { "SVG_FILE", vtkGL2PSExporter::SVG_FILE },
        };

      o = PyvtkGL2PSExporter_OutputFormat_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkGL2PSExporter::SortScheme cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "NO_SORT", vtkGL2PSExporter::NO_SORT },
          { "SIMPLE_SORT", vtkGL2PSExporter::SIMPLE_SORT },
          { "BSP_SORT", vtkGL2PSExporter::BSP_SORT },
        };

      o = PyvtkGL2PSExporter_SortScheme_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGL2PSExporter_Doc()
{
  static const char *docstring[] = {
    "vtkGL2PSExporter - export a scene as a PostScript file using GL2PS.\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkGL2PSExporter is a concrete subclass of vtkExporter that writes\nhigh quality vector PostScript (PS/EPS), PDF or SVG files by using\nGL2PS.  GL2PS can be obtained at: http://www.geuz.org/gl2ps/.  This\ncan be very useful when one requires publication quality pictures.\nThis class works best with simple 3D scenes and most 2D plots. Please\nnote that GL2PS has its limitations since PostScript is not a",
    "n ideal\nlanguage to represent complex 3D scenes.  However, this class does\nallow one to write mixed vector/raster files by using the\nWrite3DPropsAsRasterImage ivar.  Please do read the caveats section\nof this documentation.\n\nBy default vtkGL2PSExporter generates Encapsulated PostScript (EPS)\noutput along with the text in portrait orientation with the\nbackground color of the window being drawn.  Th",
    "e generated output is\nalso compressed using zlib. The various other options are set to\nsensible defaults.\n\nThe output file format (FileFormat) can be either PostScript (PS),\nEncapsulated PostScript (EPS), PDF, SVG or TeX.  The file extension\nis generated automatically depending on the FileFormat.  The default\nis EPS.  When TeX output is chosen, only the text strings in the plot\nare generated and p",
    "ut into a picture environment.  One can turn on\nand off the text when generating PS/EPS/PDF/SVG files by using the\nText boolean variable.  By default the text is drawn. The background\ncolor of the renderwindow is drawn by default.  To make the\nbackground white instead use the DrawBackgroundOff function. \nLandscape figures can be generated by using the LandscapeOn function.\n Portrait orientation is",
    " used by default. Several of the GL2PS\noptions can be set.  The names of the ivars for these options are\nsimilar to the ones that GL2PS provides. Compress, SimpleLineOffset,\nSilent, BestRoot, PS3Shading and OcclusionCull are similar to the\noptions provided by GL2PS.  Please read the function documentation or\nthe GL2PS documentation for more details.  The ivar\nWrite3DPropsAsRasterImage allows one t",
    "o generate mixed vector/raster\nimages.  All the 3D props in the scene will be written as a raster\nimage and all 2D actors will be written as vector graphic primitives.\n This makes it possible to handle transparency and complex 3D scenes.\n This ivar is set to Off by default.  Specific 3D props can be\nexcluded from the rasterization process by adding them to the\nRasterExclusions ivar.  Props in this",
    " collection will be rendered as\n2D vector primitives instead.\n\nCaveats:\n\nBy default (with Write3DPropsAsRasterImage set to Off) exporting\ncomplex 3D scenes can take a long while and result in huge output\nfiles.  Generating correct vector graphics output for scenes with\ntransparency is almost impossible.  However, one can set\nWrite3DPropsAsRasterImageOn and generate mixed vector/raster files.\nThis ",
    "should work fine with complex scenes along with transparent\nactors.\n\nSee Also:\n\nvtkExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGL2PSExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGL2PSExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGL2PSExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

