// python wrapper for vtkExtentRCBPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtentRCBPartitioner.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtentRCBPartitioner(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtentRCBPartitionerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExtentRCBPartitioner_Doc();


static PyObject *
PyvtkExtentRCBPartitioner_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtentRCBPartitioner::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentRCBPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtentRCBPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentRCBPartitioner::NewInstance());

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
PyvtkExtentRCBPartitioner_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtentRCBPartitioner *tempr = vtkExtentRCBPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

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
      op->vtkExtentRCBPartitioner::SetNumberOfPartitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetGlobalExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtentRCBPartitioner::SetGlobalExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetGlobalExtent(temp0);
      }
    else
      {
      op->vtkExtentRCBPartitioner::SetGlobalExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtentRCBPartitioner_SetGlobalExtent_s1(self, args);
    case 1:
      return PyvtkExtentRCBPartitioner_SetGlobalExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGlobalExtent");
  return NULL;
}



static PyObject *
PyvtkExtentRCBPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

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
      op->vtkExtentRCBPartitioner::SetDuplicateNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkExtentRCBPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOn();
      }
    else
      {
      op->vtkExtentRCBPartitioner::DuplicateNodesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DuplicateNodesOff();
      }
    else
      {
      op->vtkExtentRCBPartitioner::DuplicateNodesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

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
      op->vtkExtentRCBPartitioner::SetNumberOfGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkExtentRCBPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumExtents() :
      op->vtkExtentRCBPartitioner::GetNumExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_Partition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Partition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Partition();
      }
    else
      {
      op->vtkExtentRCBPartitioner::Partition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetPartitionExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPartitionExtent(temp0, temp1);
      }
    else
      {
      op->vtkExtentRCBPartitioner::GetPartitionExtent(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtentRCBPartitioner_Methods[] = {
  {(char*)"GetClassName", PyvtkExtentRCBPartitioner_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtentRCBPartitioner_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtentRCBPartitioner_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtentRCBPartitioner\nC++: vtkExtentRCBPartitioner *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtentRCBPartitioner_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtentRCBPartitioner\nC++: vtkExtentRCBPartitioner *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPartitions", PyvtkExtentRCBPartitioner_SetNumberOfPartitions, METH_VARARGS,
   (char*)"V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(const int N)\n\nSet/Get the number of requested partitions\n"},
  {(char*)"SetGlobalExtent", PyvtkExtentRCBPartitioner_SetGlobalExtent, METH_VARARGS,
   (char*)"V.SetGlobalExtent(int, int, int, int, int, int)\nC++: void SetGlobalExtent(int imin, int imax, int jmin, int jmax,\n    int kmin, int kmax)\nV.SetGlobalExtent([int, int, int, int, int, int])\nC++: void SetGlobalExtent(int ext[6])\n\nSet/Get the global extent array to be partitioned. The global\nextent is packed as follows: [imin,imax,jmin,jmax,kmin,kmax]\n"},
  {(char*)"SetDuplicateNodes", PyvtkExtentRCBPartitioner_SetDuplicateNodes, METH_VARARGS,
   (char*)"V.SetDuplicateNodes(int)\nC++: void SetDuplicateNodes(int a)\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {(char*)"GetDuplicateNodes", PyvtkExtentRCBPartitioner_GetDuplicateNodes, METH_VARARGS,
   (char*)"V.GetDuplicateNodes() -> int\nC++: int GetDuplicateNodes()\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {(char*)"DuplicateNodesOn", PyvtkExtentRCBPartitioner_DuplicateNodesOn, METH_VARARGS,
   (char*)"V.DuplicateNodesOn()\nC++: void DuplicateNodesOn()\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {(char*)"DuplicateNodesOff", PyvtkExtentRCBPartitioner_DuplicateNodesOff, METH_VARARGS,
   (char*)"V.DuplicateNodesOff()\nC++: void DuplicateNodesOff()\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {(char*)"SetNumberOfGhostLayers", PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.SetNumberOfGhostLayers(int)\nC++: void SetNumberOfGhostLayers(int a)\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"GetNumberOfGhostLayers", PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.GetNumberOfGhostLayers() -> int\nC++: int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {(char*)"GetNumExtents", PyvtkExtentRCBPartitioner_GetNumExtents, METH_VARARGS,
   (char*)"V.GetNumExtents() -> int\nC++: int GetNumExtents()\n\nReturns the number of extents.\n"},
  {(char*)"Partition", PyvtkExtentRCBPartitioner_Partition, METH_VARARGS,
   (char*)"V.Partition()\nC++: void Partition()\n\nPartitions the extent\n"},
  {(char*)"GetPartitionExtent", PyvtkExtentRCBPartitioner_GetPartitionExtent, METH_VARARGS,
   (char*)"V.GetPartitionExtent(int, [int, int, int, int, int, int])\nC++: void GetPartitionExtent(const int idx, int ext[6])\n\nReturns the extent of the partition corresponding to the given\nID.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtentRCBPartitioner_StaticNew()
{
  return vtkExtentRCBPartitioner::New();
}

PyObject *PyVTKClass_vtkExtentRCBPartitionerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtentRCBPartitioner_StaticNew,
    PyvtkExtentRCBPartitioner_Methods,
    "vtkExtentRCBPartitioner", modulename,
    NULL, NULL,
    PyvtkExtentRCBPartitioner_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExtentRCBPartitioner_Doc()
{
  static const char *docstring[] = {
    "vtkExtentRCBPartitioner.h -- Partitions a global structured extent.\n\n",
    "Superclass: vtkObject\n\n",
    "This method partitions a global extent to N partitions where N is a\nuser\n supplied parameter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtentRCBPartitioner(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtentRCBPartitionerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtentRCBPartitioner", o) != 0)
    {
    Py_DECREF(o);
    }

}

