// python wrapper for vtkUniformGridPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUniformGridPartitioner.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUniformGridPartitioner(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUniformGridPartitionerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkUniformGridPartitioner_Doc();


static PyObject *
PyvtkUniformGridPartitioner_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUniformGridPartitioner::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUniformGridPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridPartitioner::NewInstance());

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
PyvtkUniformGridPartitioner_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUniformGridPartitioner *tempr = vtkUniformGridPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkUniformGridPartitioner::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

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
      op->vtkUniformGridPartitioner::SetNumberOfPartitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkUniformGridPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

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
      op->vtkUniformGridPartitioner::SetNumberOfGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkUniformGridPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

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
      op->vtkUniformGridPartitioner::SetDuplicateNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOn();
      }
    else
      {
      op->vtkUniformGridPartitioner::DuplicateNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOff();
      }
    else
      {
      op->vtkUniformGridPartitioner::DuplicateNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformGridPartitioner_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformGridPartitioner_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUniformGridPartitioner_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUniformGridPartitioner_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUniformGridPartitioner\nC++: vtkUniformGridPartitioner *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUniformGridPartitioner_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformGridPartitioner\nC++: vtkUniformGridPartitioner *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPartitions", PyvtkUniformGridPartitioner_GetNumberOfPartitions, METH_VARARGS,
   (char*)"V.GetNumberOfPartitions() -> int\nC++: int GetNumberOfPartitions()\n\nSet/Get macro for the number of subdivisions.\n"},
  {(char*)"SetNumberOfPartitions", PyvtkUniformGridPartitioner_SetNumberOfPartitions, METH_VARARGS,
   (char*)"V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(int a)\n\nSet/Get macro for the number of subdivisions.\n"},
  {(char*)"GetNumberOfGhostLayers", PyvtkUniformGridPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.GetNumberOfGhostLayers() -> int\nC++: int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"SetNumberOfGhostLayers", PyvtkUniformGridPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.SetNumberOfGhostLayers(int)\nC++: void SetNumberOfGhostLayers(int a)\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"GetDuplicateNodes", PyvtkUniformGridPartitioner_GetDuplicateNodes, METH_VARARGS,
   (char*)"V.GetDuplicateNodes() -> int\nC++: int GetDuplicateNodes()\n\n\n"},
  {(char*)"SetDuplicateNodes", PyvtkUniformGridPartitioner_SetDuplicateNodes, METH_VARARGS,
   (char*)"V.SetDuplicateNodes(int)\nC++: void SetDuplicateNodes(int a)\n\n\n"},
  {(char*)"DuplicateNodesOn", PyvtkUniformGridPartitioner_DuplicateNodesOn, METH_VARARGS,
   (char*)"V.DuplicateNodesOn()\nC++: void DuplicateNodesOn()\n\n\n"},
  {(char*)"DuplicateNodesOff", PyvtkUniformGridPartitioner_DuplicateNodesOff, METH_VARARGS,
   (char*)"V.DuplicateNodesOff()\nC++: void DuplicateNodesOff()\n\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformGridPartitioner_StaticNew()
{
  return vtkUniformGridPartitioner::New();
}

PyObject *PyVTKClass_vtkUniformGridPartitionerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformGridPartitioner_StaticNew,
    PyvtkUniformGridPartitioner_Methods,
    "vtkUniformGridPartitioner", modulename,
    NULL, NULL,
    PyvtkUniformGridPartitioner_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUniformGridPartitioner_Doc()
{
  static const char *docstring[] = {
    "vtkUniformGridPartitioner.h -- Partitions a uniform grid by RCB\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A concrete implementation of vtkMultiBlockDataSetAlgorithm that\nprovides\n functionality for partitioning a uniform grid. The partitioning\nmethod\n that is used is Recursive Coordinate Bisection (RCB) where each time\n the longest dimension is split.\n\nSee Also:\n\nvtkStructuredGridPartitioner vtkRectilinearGridPartitioner\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformGridPartitioner(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformGridPartitionerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformGridPartitioner", o) != 0)
    {
    Py_DECREF(o);
    }

}

