// python wrapper for vtkSortedTableStreamer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSortedTableStreamer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSortedTableStreamer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSortedTableStreamerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSortedTableStreamer_Doc();


static PyObject *
PyvtkSortedTableStreamer_PrintInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintInfo");

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    vtkSortedTableStreamer::PrintInfo(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_TestInternalClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TestInternalClasses");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkSortedTableStreamer::TestInternalClasses();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSortedTableStreamer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortedTableStreamer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSortedTableStreamer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortedTableStreamer::NewInstance());

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
PyvtkSortedTableStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSortedTableStreamer *tempr = vtkSortedTableStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkSortedTableStreamer::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetBlock() :
      op->vtkSortedTableStreamer::GetBlock());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlock(temp0);
      }
    else
      {
      op->vtkSortedTableStreamer::SetBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkSortedTableStreamer::GetBlockSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  vtkIdType temp0;
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
      op->vtkSortedTableStreamer::SetBlockSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponent() :
      op->vtkSortedTableStreamer::GetSelectedComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedComponent(temp0);
      }
    else
      {
      op->vtkSortedTableStreamer::SetSelectedComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

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
      op->vtkSortedTableStreamer::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkSortedTableStreamer::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetColumnNameToSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnNameToSort() :
      op->vtkSortedTableStreamer::GetColumnNameToSort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetColumnNameToSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColumnNameToSort(temp0);
      }
    else
      {
      op->vtkSortedTableStreamer::SetColumnNameToSort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetInvertOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInvertOrder(temp0);
      }
    else
      {
      op->vtkSortedTableStreamer::SetInvertOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetInvertOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInvertOrder() :
      op->vtkSortedTableStreamer::GetInvertOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSortedTableStreamer_Methods[] = {
  {(char*)"PrintInfo", PyvtkSortedTableStreamer_PrintInfo, METH_VARARGS | METH_STATIC,
   (char*)"V.PrintInfo(vtkTable)\nC++: static void PrintInfo(vtkTable *input)\n\n"},
  {(char*)"TestInternalClasses", PyvtkSortedTableStreamer_TestInternalClasses, METH_VARARGS | METH_STATIC,
   (char*)"V.TestInternalClasses() -> bool\nC++: static bool TestInternalClasses()\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {(char*)"GetClassName", PyvtkSortedTableStreamer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {(char*)"IsA", PyvtkSortedTableStreamer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {(char*)"NewInstance", PyvtkSortedTableStreamer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSortedTableStreamer\nC++: vtkSortedTableStreamer *NewInstance()\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {(char*)"SafeDownCast", PyvtkSortedTableStreamer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSortedTableStreamer\nC++: vtkSortedTableStreamer *SafeDownCast(vtkObject* o)\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {(char*)"FillInputPortInformation", PyvtkSortedTableStreamer_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nOnly one input which is the table to sort\n"},
  {(char*)"GetBlock", PyvtkSortedTableStreamer_GetBlock, METH_VARARGS,
   (char*)"V.GetBlock() -> int\nC++: vtkIdType GetBlock()\n\nBlock index used to select a data range\n"},
  {(char*)"SetBlock", PyvtkSortedTableStreamer_SetBlock, METH_VARARGS,
   (char*)"V.SetBlock(int)\nC++: void SetBlock(vtkIdType a)\n\nBlock index used to select a data range\n"},
  {(char*)"GetBlockSize", PyvtkSortedTableStreamer_GetBlockSize, METH_VARARGS,
   (char*)"V.GetBlockSize() -> int\nC++: vtkIdType GetBlockSize()\n\nSet the block size. Default value is 1024\n"},
  {(char*)"SetBlockSize", PyvtkSortedTableStreamer_SetBlockSize, METH_VARARGS,
   (char*)"V.SetBlockSize(int)\nC++: void SetBlockSize(vtkIdType a)\n\nSet the block size. Default value is 1024\n"},
  {(char*)"GetSelectedComponent", PyvtkSortedTableStreamer_GetSelectedComponent, METH_VARARGS,
   (char*)"V.GetSelectedComponent() -> int\nC++: int GetSelectedComponent()\n\nChoose on which colum the sort operation should occurs\n"},
  {(char*)"SetSelectedComponent", PyvtkSortedTableStreamer_SetSelectedComponent, METH_VARARGS,
   (char*)"V.SetSelectedComponent(int)\nC++: void SetSelectedComponent(int a)\n\nChoose on which colum the sort operation should occurs\n"},
  {(char*)"SetController", PyvtkSortedTableStreamer_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the MPI controller used for gathering.\n"},
  {(char*)"GetController", PyvtkSortedTableStreamer_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the MPI controller used for gathering.\n"},
  {(char*)"GetColumnNameToSort", PyvtkSortedTableStreamer_GetColumnNameToSort, METH_VARARGS,
   (char*)"V.GetColumnNameToSort() -> string\nC++: const char *GetColumnNameToSort()\n\nChoose on which colum the sort operation should occurs\n"},
  {(char*)"SetColumnNameToSort", PyvtkSortedTableStreamer_SetColumnNameToSort, METH_VARARGS,
   (char*)"V.SetColumnNameToSort(string)\nC++: void SetColumnNameToSort(const char *columnName)\n\n"},
  {(char*)"SetInvertOrder", PyvtkSortedTableStreamer_SetInvertOrder, METH_VARARGS,
   (char*)"V.SetInvertOrder(int)\nC++: void SetInvertOrder(int newValue)\n\n"},
  {(char*)"GetInvertOrder", PyvtkSortedTableStreamer_GetInvertOrder, METH_VARARGS,
   (char*)"V.GetInvertOrder() -> int\nC++: int GetInvertOrder()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSortedTableStreamer_StaticNew()
{
  return vtkSortedTableStreamer::New();
}

PyObject *PyVTKClass_vtkSortedTableStreamerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSortedTableStreamer_StaticNew,
    PyvtkSortedTableStreamer_Methods,
    "vtkSortedTableStreamer", modulename,
    NULL, NULL,
    PyvtkSortedTableStreamer_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSortedTableStreamer_Doc()
{
  static const char *docstring[] = {
    "vtkSortedTableStreamer - return a sorted subset of the original table\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This filter is used quickly get a sorted subset of a given vtkTable.\nBy sorted we mean a subset build from a global sort even if some\noptimisation allow us to skip a global table sorting.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSortedTableStreamer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSortedTableStreamerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSortedTableStreamer", o) != 0)
    {
    Py_DECREF(o);
    }

}

