// python wrapper for vtkPVMergeTablesMultiBlock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkInformationVector.h"
#include "vtkIndent.h"
#include "vtkPVMergeTablesMultiBlock.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMergeTablesMultiBlock(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMergeTablesMultiBlockNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPVMergeTablesMultiBlock_Doc();


static PyObject *
PyvtkPVMergeTablesMultiBlock_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMergeTablesMultiBlock *op = static_cast<vtkPVMergeTablesMultiBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMergeTablesMultiBlock::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMergeTablesMultiBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMergeTablesMultiBlock *op = static_cast<vtkPVMergeTablesMultiBlock *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMergeTablesMultiBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMergeTablesMultiBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMergeTablesMultiBlock *op = static_cast<vtkPVMergeTablesMultiBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMergeTablesMultiBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMergeTablesMultiBlock::NewInstance());

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
PyvtkPVMergeTablesMultiBlock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMergeTablesMultiBlock *tempr = vtkPVMergeTablesMultiBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMergeTablesMultiBlock_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMergeTablesMultiBlock_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMergeTablesMultiBlock_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMergeTablesMultiBlock_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMergeTablesMultiBlock\nC++: vtkPVMergeTablesMultiBlock *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMergeTablesMultiBlock_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMergeTablesMultiBlock\nC++: vtkPVMergeTablesMultiBlock *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMergeTablesMultiBlock_StaticNew()
{
  return vtkPVMergeTablesMultiBlock::New();
}

PyObject *PyVTKClass_vtkPVMergeTablesMultiBlockNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMergeTablesMultiBlock_StaticNew,
    PyvtkPVMergeTablesMultiBlock_Methods,
    "vtkPVMergeTablesMultiBlock", modulename,
    NULL, NULL,
    PyvtkPVMergeTablesMultiBlock_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVMergeTablesMultiBlock_Doc()
{
  static const char *docstring[] = {
    "vtkPVMergeTablesMultiBlock - used to merge rows in tables.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "Simplified version of vtkMergeTables which simply combines tables\nmerging columns. This assumes that each of the inputs either has\nexactly identical columns or no columns at all. This filter can\nhandle composite datasets as well. The output is produced by merging\ncorresponding leaf nodes. This assumes that all inputs have the same\ncomposite structure. All inputs must either be vtkTable or\nvtkCompo",
    "siteDataSet mixing is not allowed. The output is a multiblock\ndataset of vtkTable.\n\nTODO:\n\nWe may want to consolidate with vtkPVMergeTable somehow\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMergeTablesMultiBlock(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMergeTablesMultiBlockNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMergeTablesMultiBlock", o) != 0)
    {
    Py_DECREF(o);
    }

}

