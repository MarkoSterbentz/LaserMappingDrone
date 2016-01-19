// python wrapper for vtkPVMergeTables
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVMergeTables.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMergeTables(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMergeTablesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkPVMergeTables_Doc();


static PyObject *
PyvtkPVMergeTables_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMergeTables *op = static_cast<vtkPVMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMergeTables::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMergeTables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMergeTables *op = static_cast<vtkPVMergeTables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMergeTables::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMergeTables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMergeTables *op = static_cast<vtkPVMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMergeTables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMergeTables::NewInstance());

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
PyvtkPVMergeTables_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMergeTables *tempr = vtkPVMergeTables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMergeTables_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMergeTables_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMergeTables_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMergeTables_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMergeTables\nC++: vtkPVMergeTables *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMergeTables_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMergeTables\nC++: vtkPVMergeTables *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMergeTables_StaticNew()
{
  return vtkPVMergeTables::New();
}

PyObject *PyVTKClass_vtkPVMergeTablesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMergeTables_StaticNew,
    PyvtkPVMergeTables_Methods,
    "vtkPVMergeTables", modulename,
    NULL, NULL,
    PyvtkPVMergeTables_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVMergeTables_Doc()
{
  static const char *docstring[] = {
    "vtkPVMergeTables - used to merge rows in tables.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Simplified version of vtkMergeTables which simply combines tables\nmerging columns. This assumes that each of the inputs either has\nexactly identical columns or no columns at all. This filter can\nhandle composite datasets as well. The output is produced by merging\ncorresponding leaf nodes. This assumes that all inputs have the same\ncomposite structure. All inputs must either be vtkTable or\nvtkCompo",
    "siteDataSet mixing is not allowed. The output is a flattened\nvtkTable.\n\nTODO:\n\nWe may want to merge this functionality into vtkMergeTables filter\nitself.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMergeTables(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMergeTablesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMergeTables", o) != 0)
    {
    Py_DECREF(o);
    }

}

