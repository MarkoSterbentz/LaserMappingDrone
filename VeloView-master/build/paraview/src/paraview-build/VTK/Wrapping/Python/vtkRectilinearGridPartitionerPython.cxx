// python wrapper for vtkRectilinearGridPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRectilinearGridPartitioner.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRectilinearGridPartitioner(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRectilinearGridPartitionerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkRectilinearGridPartitioner_Doc();


static PyObject *
PyvtkRectilinearGridPartitioner_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRectilinearGridPartitioner::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGridPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridPartitioner::NewInstance());

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
PyvtkRectilinearGridPartitioner_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRectilinearGridPartitioner *tempr = vtkRectilinearGridPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkRectilinearGridPartitioner::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

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
      op->vtkRectilinearGridPartitioner::SetNumberOfPartitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkRectilinearGridPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

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
      op->vtkRectilinearGridPartitioner::SetNumberOfGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkRectilinearGridPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

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
      op->vtkRectilinearGridPartitioner::SetDuplicateNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOn();
      }
    else
      {
      op->vtkRectilinearGridPartitioner::DuplicateNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOff();
      }
    else
      {
      op->vtkRectilinearGridPartitioner::DuplicateNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridPartitioner_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridPartitioner_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridPartitioner_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridPartitioner_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRectilinearGridPartitioner\nC++: vtkRectilinearGridPartitioner *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridPartitioner_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridPartitioner\nC++: vtkRectilinearGridPartitioner *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfPartitions", PyvtkRectilinearGridPartitioner_GetNumberOfPartitions, METH_VARARGS,
   (char*)"V.GetNumberOfPartitions() -> int\nC++: int GetNumberOfPartitions()\n\nSet/Get macro for the number of subdivisions.\n"},
  {(char*)"SetNumberOfPartitions", PyvtkRectilinearGridPartitioner_SetNumberOfPartitions, METH_VARARGS,
   (char*)"V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(int a)\n\nSet/Get macro for the number of subdivisions.\n"},
  {(char*)"GetNumberOfGhostLayers", PyvtkRectilinearGridPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.GetNumberOfGhostLayers() -> int\nC++: int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"SetNumberOfGhostLayers", PyvtkRectilinearGridPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.SetNumberOfGhostLayers(int)\nC++: void SetNumberOfGhostLayers(int a)\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"GetDuplicateNodes", PyvtkRectilinearGridPartitioner_GetDuplicateNodes, METH_VARARGS,
   (char*)"V.GetDuplicateNodes() -> int\nC++: int GetDuplicateNodes()\n\n\n"},
  {(char*)"SetDuplicateNodes", PyvtkRectilinearGridPartitioner_SetDuplicateNodes, METH_VARARGS,
   (char*)"V.SetDuplicateNodes(int)\nC++: void SetDuplicateNodes(int a)\n\n\n"},
  {(char*)"DuplicateNodesOn", PyvtkRectilinearGridPartitioner_DuplicateNodesOn, METH_VARARGS,
   (char*)"V.DuplicateNodesOn()\nC++: void DuplicateNodesOn()\n\n\n"},
  {(char*)"DuplicateNodesOff", PyvtkRectilinearGridPartitioner_DuplicateNodesOff, METH_VARARGS,
   (char*)"V.DuplicateNodesOff()\nC++: void DuplicateNodesOff()\n\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridPartitioner_StaticNew()
{
  return vtkRectilinearGridPartitioner::New();
}

PyObject *PyVTKClass_vtkRectilinearGridPartitionerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridPartitioner_StaticNew,
    PyvtkRectilinearGridPartitioner_Methods,
    "vtkRectilinearGridPartitioner", modulename,
    NULL, NULL,
    PyvtkRectilinearGridPartitioner_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridPartitioner_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridPartitioner.h -- Partitions a rectilinear grid by\nRCB\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A concrete implementation of vtkMultiBlockDataSetAlgorithm that\nprovides\n functionality for partitioning a VTK rectilinear dataset. The\npartitioning\n methd used is Recursive Coordinate Bisection (RCB) where each time\nthe\n longest dimension is split.\n\nSee Also:\n\n\n vtkUniformGridPartitioner vtkStructuredGridPartitioner\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridPartitioner(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridPartitionerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridPartitioner", o) != 0)
    {
    Py_DECREF(o);
    }

}

