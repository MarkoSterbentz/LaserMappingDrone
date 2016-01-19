// python wrapper for vtkAMRDataSetCache
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRDataSetCache.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRDataSetCache(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRDataSetCacheNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAMRDataSetCache_Doc();


static PyObject *
PyvtkAMRDataSetCache_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRDataSetCache::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDataSetCache::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRDataSetCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDataSetCache::NewInstance());

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
PyvtkAMRDataSetCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRDataSetCache *tempr = vtkAMRDataSetCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_InsertAMRBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAMRBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  vtkUniformGrid *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUniformGrid"))
    {
    if (ap.IsBound())
      {
      op->InsertAMRBlock(temp0, temp1);
      }
    else
      {
      op->vtkAMRDataSetCache::InsertAMRBlock(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_InsertAMRBlockPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAMRBlockPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->InsertAMRBlockPointData(temp0, temp1);
      }
    else
      {
      op->vtkAMRDataSetCache::InsertAMRBlockPointData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_InsertAMRBlockCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAMRBlockCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->InsertAMRBlockCellData(temp0, temp1);
      }
    else
      {
      op->vtkAMRDataSetCache::InsertAMRBlockCellData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_GetAMRBlockCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAMRBlockCellData(temp0, temp1) :
      op->vtkAMRDataSetCache::GetAMRBlockCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_GetAMRBlockPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAMRBlockPointData(temp0, temp1) :
      op->vtkAMRDataSetCache::GetAMRBlockPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_GetAMRBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->GetAMRBlock(temp0) :
      op->vtkAMRDataSetCache::GetAMRBlock(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_HasAMRBlockCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAMRBlockCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->HasAMRBlockCellData(temp0, temp1) :
      op->vtkAMRDataSetCache::HasAMRBlockCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_HasAMRBlockPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAMRBlockPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->HasAMRBlockPointData(temp0, temp1) :
      op->vtkAMRDataSetCache::HasAMRBlockPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_HasAMRBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAMRBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasAMRBlock(temp0) :
      op->vtkAMRDataSetCache::HasAMRBlock(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRDataSetCache_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRDataSetCache_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRDataSetCache_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRDataSetCache_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRDataSetCache\nC++: vtkAMRDataSetCache *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRDataSetCache_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRDataSetCache\nC++: vtkAMRDataSetCache *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InsertAMRBlock", PyvtkAMRDataSetCache_InsertAMRBlock, METH_VARARGS,
   (char*)"V.InsertAMRBlock(int, vtkUniformGrid)\nC++: void InsertAMRBlock(int compositeIdx,\n    vtkUniformGrid *amrGrid)\n\nInserts an AMR block to the cache\n"},
  {(char*)"InsertAMRBlockPointData", PyvtkAMRDataSetCache_InsertAMRBlockPointData, METH_VARARGS,
   (char*)"V.InsertAMRBlockPointData(int, vtkDataArray)\nC++: void InsertAMRBlockPointData(int compositeIdx,\n    vtkDataArray *dataArray)\n\nInserts a point data array to an already cached block NOTE:\nthis->HasAMRBlock( compositeIdx ) == true\n"},
  {(char*)"InsertAMRBlockCellData", PyvtkAMRDataSetCache_InsertAMRBlockCellData, METH_VARARGS,
   (char*)"V.InsertAMRBlockCellData(int, vtkDataArray)\nC++: void InsertAMRBlockCellData(int compositeIdx,\n    vtkDataArray *dataArray)\n\nInserts a cell data array to an already cached block NOTE:\nthis->HasAMRBlock( compositeIdx ) == true\n"},
  {(char*)"GetAMRBlockCellData", PyvtkAMRDataSetCache_GetAMRBlockCellData, METH_VARARGS,
   (char*)"V.GetAMRBlockCellData(int, string) -> vtkDataArray\nC++: vtkDataArray *GetAMRBlockCellData(int compositeIdx,\n    const char *dataName)\n\nGiven the name of the cell array and AMR block composite index,\nthis method returns a pointer to the cell data array. NOTE: Null\nis returned if the cell array and/or block is not cached.\n"},
  {(char*)"GetAMRBlockPointData", PyvtkAMRDataSetCache_GetAMRBlockPointData, METH_VARARGS,
   (char*)"V.GetAMRBlockPointData(int, string) -> vtkDataArray\nC++: vtkDataArray *GetAMRBlockPointData(int compositeIdx,\n    const char *dataName)\n\nGiven the name of the point array and AMR block composite index,\nthis method returns a pointer to the point data array. NOTE: Null\nis returend if the point array and /or block is not cached.\n"},
  {(char*)"GetAMRBlock", PyvtkAMRDataSetCache_GetAMRBlock, METH_VARARGS,
   (char*)"V.GetAMRBlock(int) -> vtkUniformGrid\nC++: vtkUniformGrid *GetAMRBlock(int compositeIdx)\n\nGiven the composite index, this method returns the AMR block.\nNOTE: Null is returned if the AMR block does not exist in the\ncache.\n"},
  {(char*)"HasAMRBlockCellData", PyvtkAMRDataSetCache_HasAMRBlockCellData, METH_VARARGS,
   (char*)"V.HasAMRBlockCellData(int, string) -> bool\nC++: bool HasAMRBlockCellData(int compositeIdx, const char *name)\n\nChecks if the cell data array, associated with the provided name,\nhas been cached for the AMR block with the given composite index.\n"},
  {(char*)"HasAMRBlockPointData", PyvtkAMRDataSetCache_HasAMRBlockPointData, METH_VARARGS,
   (char*)"V.HasAMRBlockPointData(int, string) -> bool\nC++: bool HasAMRBlockPointData(int compositeIdx, const char *name)\n\nChecks if the point data array, associated with the provided\nname, has been cached for the AMR block with the given composite\nindex.\n"},
  {(char*)"HasAMRBlock", PyvtkAMRDataSetCache_HasAMRBlock, METH_VARARGS,
   (char*)"V.HasAMRBlock(int) -> bool\nC++: bool HasAMRBlock(const int compositeIdx)\n\nChecks if the AMR block associated with the given composite is\ncached.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRDataSetCache_StaticNew()
{
  return vtkAMRDataSetCache::New();
}

PyObject *PyVTKClass_vtkAMRDataSetCacheNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRDataSetCache_StaticNew,
    PyvtkAMRDataSetCache_Methods,
    "vtkAMRDataSetCache", modulename,
    NULL, NULL,
    PyvtkAMRDataSetCache_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAMRDataSetCache_Doc()
{
  static const char *docstring[] = {
    "vtkAMRDataSetCache.h -- A cache for AMR blocks and block data\n\n",
    "Superclass: vtkObject\n\n",
    "A concrete implementation of vtkObject that provides functionality\nfor\n caching AMR blocks. The primary intent of this class is to be used\nby the\n AMR reader infrastructure for caching blocks/data in memory to\nminimize\n out-of-core operations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRDataSetCache(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRDataSetCacheNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRDataSetCache", o) != 0)
    {
    Py_DECREF(o);
    }

}

