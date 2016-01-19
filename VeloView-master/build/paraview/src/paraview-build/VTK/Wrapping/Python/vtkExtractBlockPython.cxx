// python wrapper for vtkExtractBlock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractBlock.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractBlock(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractBlockNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExtractBlock_Doc();


static PyObject *
PyvtkExtractBlock_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractBlock::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractBlock::NewInstance());

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
PyvtkExtractBlock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractBlock *tempr = vtkExtractBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_AddIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddIndex(temp0);
      }
    else
      {
      op->vtkExtractBlock::AddIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_RemoveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveIndex(temp0);
      }
    else
      {
      op->vtkExtractBlock::RemoveIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_RemoveAllIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllIndices();
      }
    else
      {
      op->vtkExtractBlock::RemoveAllIndices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_SetPruneOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPruneOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPruneOutput(temp0);
      }
    else
      {
      op->vtkExtractBlock::SetPruneOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetPruneOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPruneOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPruneOutput() :
      op->vtkExtractBlock::GetPruneOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_PruneOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PruneOutputOn();
      }
    else
      {
      op->vtkExtractBlock::PruneOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_PruneOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PruneOutputOff();
      }
    else
      {
      op->vtkExtractBlock::PruneOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_SetMaintainStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaintainStructure(temp0);
      }
    else
      {
      op->vtkExtractBlock::SetMaintainStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetMaintainStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaintainStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaintainStructure() :
      op->vtkExtractBlock::GetMaintainStructure());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_MaintainStructureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainStructureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaintainStructureOn();
      }
    else
      {
      op->vtkExtractBlock::MaintainStructureOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractBlock_MaintainStructureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainStructureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaintainStructureOff();
      }
    else
      {
      op->vtkExtractBlock::MaintainStructureOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractBlock_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractBlock_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractBlock_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractBlock_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractBlock\nC++: vtkExtractBlock *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractBlock_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractBlock\nC++: vtkExtractBlock *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddIndex", PyvtkExtractBlock_AddIndex, METH_VARARGS,
   (char*)"V.AddIndex(int)\nC++: void AddIndex(unsigned int index)\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {(char*)"RemoveIndex", PyvtkExtractBlock_RemoveIndex, METH_VARARGS,
   (char*)"V.RemoveIndex(int)\nC++: void RemoveIndex(unsigned int index)\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {(char*)"RemoveAllIndices", PyvtkExtractBlock_RemoveAllIndices, METH_VARARGS,
   (char*)"V.RemoveAllIndices()\nC++: void RemoveAllIndices()\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {(char*)"SetPruneOutput", PyvtkExtractBlock_SetPruneOutput, METH_VARARGS,
   (char*)"V.SetPruneOutput(int)\nC++: void SetPruneOutput(int a)\n\nWhen set, the output mutliblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {(char*)"GetPruneOutput", PyvtkExtractBlock_GetPruneOutput, METH_VARARGS,
   (char*)"V.GetPruneOutput() -> int\nC++: int GetPruneOutput()\n\nWhen set, the output mutliblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {(char*)"PruneOutputOn", PyvtkExtractBlock_PruneOutputOn, METH_VARARGS,
   (char*)"V.PruneOutputOn()\nC++: void PruneOutputOn()\n\nWhen set, the output mutliblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {(char*)"PruneOutputOff", PyvtkExtractBlock_PruneOutputOff, METH_VARARGS,
   (char*)"V.PruneOutputOff()\nC++: void PruneOutputOff()\n\nWhen set, the output mutliblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {(char*)"SetMaintainStructure", PyvtkExtractBlock_SetMaintainStructure, METH_VARARGS,
   (char*)"V.SetMaintainStructure(int)\nC++: void SetMaintainStructure(int a)\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {(char*)"GetMaintainStructure", PyvtkExtractBlock_GetMaintainStructure, METH_VARARGS,
   (char*)"V.GetMaintainStructure() -> int\nC++: int GetMaintainStructure()\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {(char*)"MaintainStructureOn", PyvtkExtractBlock_MaintainStructureOn, METH_VARARGS,
   (char*)"V.MaintainStructureOn()\nC++: void MaintainStructureOn()\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {(char*)"MaintainStructureOff", PyvtkExtractBlock_MaintainStructureOff, METH_VARARGS,
   (char*)"V.MaintainStructureOff()\nC++: void MaintainStructureOff()\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractBlock_StaticNew()
{
  return vtkExtractBlock::New();
}

PyObject *PyVTKClass_vtkExtractBlockNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractBlock_StaticNew,
    PyvtkExtractBlock_Methods,
    "vtkExtractBlock", modulename,
    NULL, NULL,
    PyvtkExtractBlock_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractBlock_Doc()
{
  static const char *docstring[] = {
    "vtkExtractBlock - extracts blocks from a multiblock dataset.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExtractBlock is a filter that extracts blocks from a multiblock\ndataset. Each node in the multi-block tree is identified by an index.\nThe index can be obtained by performing a preorder traversal of the\ntree (including empty nodes). eg. A(B (D, E), C(F, G)). Inorder\ntraversal yields: A, B, D, E, C, F, G Index of A is 0, while index of\nC is 4.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractBlock(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractBlockNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractBlock", o) != 0)
    {
    Py_DECREF(o);
    }

}

