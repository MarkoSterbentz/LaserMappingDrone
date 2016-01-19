// python wrapper for vtkStructuredGridPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredGridPartitioner.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredGridPartitioner(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredGridPartitionerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkStructuredGridPartitioner_Doc();


static PyObject *
PyvtkStructuredGridPartitioner_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredGridPartitioner::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGridPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridPartitioner::NewInstance());

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
PyvtkStructuredGridPartitioner_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredGridPartitioner *tempr = vtkStructuredGridPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkStructuredGridPartitioner::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPartitions(temp0);
      }
    else
      {
      op->vtkStructuredGridPartitioner::SetNumberOfPartitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkStructuredGridPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfGhostLayers(temp0);
      }
    else
      {
      op->vtkStructuredGridPartitioner::SetNumberOfGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkStructuredGridPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDuplicateNodes(temp0);
      }
    else
      {
      op->vtkStructuredGridPartitioner::SetDuplicateNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOn();
      }
    else
      {
      op->vtkStructuredGridPartitioner::DuplicateNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridPartitioner *op = static_cast<vtkStructuredGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOff();
      }
    else
      {
      op->vtkStructuredGridPartitioner::DuplicateNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridPartitioner_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridPartitioner_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridPartitioner_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridPartitioner_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredGridPartitioner\nC++: vtkStructuredGridPartitioner *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridPartitioner_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridPartitioner\nC++: vtkStructuredGridPartitioner *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPartitions", PyvtkStructuredGridPartitioner_GetNumberOfPartitions, METH_VARARGS,
   (char*)"V.GetNumberOfPartitions() -> int\nC++: int GetNumberOfPartitions()\n\nSet/Get macro for the number of subdivisions.\n"},
  {(char*)"SetNumberOfPartitions", PyvtkStructuredGridPartitioner_SetNumberOfPartitions, METH_VARARGS,
   (char*)"V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(int a)\n\nSet/Get macro for the number of subdivisions.\n"},
  {(char*)"GetNumberOfGhostLayers", PyvtkStructuredGridPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.GetNumberOfGhostLayers() -> int\nC++: int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"SetNumberOfGhostLayers", PyvtkStructuredGridPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.SetNumberOfGhostLayers(int)\nC++: void SetNumberOfGhostLayers(int a)\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"GetDuplicateNodes", PyvtkStructuredGridPartitioner_GetDuplicateNodes, METH_VARARGS,
   (char*)"V.GetDuplicateNodes() -> int\nC++: int GetDuplicateNodes()\n\nSet/Get & boolean macro for the DuplicateNodes property.\n"},
  {(char*)"SetDuplicateNodes", PyvtkStructuredGridPartitioner_SetDuplicateNodes, METH_VARARGS,
   (char*)"V.SetDuplicateNodes(int)\nC++: void SetDuplicateNodes(int a)\n\nSet/Get & boolean macro for the DuplicateNodes property.\n"},
  {(char*)"DuplicateNodesOn", PyvtkStructuredGridPartitioner_DuplicateNodesOn, METH_VARARGS,
   (char*)"V.DuplicateNodesOn()\nC++: void DuplicateNodesOn()\n\nSet/Get & boolean macro for the DuplicateNodes property.\n"},
  {(char*)"DuplicateNodesOff", PyvtkStructuredGridPartitioner_DuplicateNodesOff, METH_VARARGS,
   (char*)"V.DuplicateNodesOff()\nC++: void DuplicateNodesOff()\n\nSet/Get & boolean macro for the DuplicateNodes property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridPartitioner_StaticNew()
{
  return vtkStructuredGridPartitioner::New();
}

PyObject *PyVTKClass_vtkStructuredGridPartitionerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridPartitioner_StaticNew,
    PyvtkStructuredGridPartitioner_Methods,
    "vtkStructuredGridPartitioner", modulename,
    NULL, NULL,
    PyvtkStructuredGridPartitioner_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridPartitioner_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridPartitioner.h -- Partitions a structured grid by RCB\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A concrete implementation of vtkMultiBlockDataSetAlgorithm that\nprovides\n functionality for partitioning a VTK structured grid dataset. The\npartition-\n ing method used is Recursive Coordinate Bisection (RCB) where each\ntime the\n longest dimension is split.\n\nSee Also:\n\n\n vtkUniformGridPartitioner vtkRectilinearGridPartitioner\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridPartitioner(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridPartitionerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridPartitioner", o) != 0)
    {
    Py_DECREF(o);
    }

}

