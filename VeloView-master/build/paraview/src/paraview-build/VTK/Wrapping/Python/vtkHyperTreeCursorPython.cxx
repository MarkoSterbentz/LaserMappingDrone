// python wrapper for vtkHyperTreeCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperTreeCursor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTreeCursor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeCursorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHyperTreeCursor_Doc();


static PyObject *
PyvtkHyperTreeCursor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTreeCursor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTreeCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeCursor::NewInstance());

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
PyvtkHyperTreeCursor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTreeCursor *tempr = vtkHyperTreeCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkHyperTree *tempr = op->GetTree();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetLeafId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetLeafId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetNodeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNodeId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsLeaf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsTerminalNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTerminalNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsTerminalNode();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsRoot();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetCurrentLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetCurrentLevel();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetChildIndex();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ToRoot();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->ToParent();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->ToChild(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToSameNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSameNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
    {
    op->ToSameNode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
    {
    bool tempr = op->IsEqual(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkHyperTreeCursor *tempr = op->Clone();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_SameTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SameTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
    {
    int tempr = op->SameTree(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = op->GetIndex(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetNumberOfChildren();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_MoveToNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveToNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    op->MoveToNode(temp0, temp1);

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_Found(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Found");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->Found();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTreeCursor_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperTreeCursor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTreeCursor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTreeCursor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTreeCursor\nC++: vtkHyperTreeCursor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTreeCursor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTreeCursor\nC++: vtkHyperTreeCursor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTree", PyvtkHyperTreeCursor_GetTree, METH_VARARGS,
   (char*)"V.GetTree() -> vtkHyperTree\nC++: virtual vtkHyperTree *GetTree()\n\nReturn the HyperTree on which the cursor points to.\n"},
  {(char*)"GetLeafId", PyvtkHyperTreeCursor_GetLeafId, METH_VARARGS,
   (char*)"V.GetLeafId() -> int\nC++: virtual vtkIdType GetLeafId()\n\nReturn the index of the current leaf in the data arrays.\n\\pre is_leaf: IsLeaf()\n"},
  {(char*)"GetNodeId", PyvtkHyperTreeCursor_GetNodeId, METH_VARARGS,
   (char*)"V.GetNodeId() -> int\nC++: virtual vtkIdType GetNodeId()\n\nReturn the index of the current node in the data arrays.\n"},
  {(char*)"IsLeaf", PyvtkHyperTreeCursor_IsLeaf, METH_VARARGS,
   (char*)"V.IsLeaf() -> bool\nC++: virtual bool IsLeaf()\n\nIs the node pointed by the cursor a leaf?\n"},
  {(char*)"IsTerminalNode", PyvtkHyperTreeCursor_IsTerminalNode, METH_VARARGS,
   (char*)"V.IsTerminalNode() -> bool\nC++: virtual bool IsTerminalNode()\n\n"},
  {(char*)"IsRoot", PyvtkHyperTreeCursor_IsRoot, METH_VARARGS,
   (char*)"V.IsRoot() -> bool\nC++: virtual bool IsRoot()\n\nIs the node pointed by the cursor the root?\n"},
  {(char*)"GetCurrentLevel", PyvtkHyperTreeCursor_GetCurrentLevel, METH_VARARGS,
   (char*)"V.GetCurrentLevel() -> int\nC++: virtual int GetCurrentLevel()\n\nReturn the level of the node pointed by the cursor.\n\\post positive_result: result>=0\n"},
  {(char*)"GetChildIndex", PyvtkHyperTreeCursor_GetChildIndex, METH_VARARGS,
   (char*)"V.GetChildIndex() -> int\nC++: virtual int GetChildIndex()\n\nReturn the child number of the current node relative to its\nparent.\n\\pre not_root: !IsRoot().\n\\post valid_range: result>=0 && result<GetNumberOfChildren()\n"},
  {(char*)"ToRoot", PyvtkHyperTreeCursor_ToRoot, METH_VARARGS,
   (char*)"V.ToRoot()\nC++: virtual void ToRoot()\n\nMove the cursor to the root node.\n\\pre can be root\n\\post is_root: IsRoot()\n"},
  {(char*)"ToParent", PyvtkHyperTreeCursor_ToParent, METH_VARARGS,
   (char*)"V.ToParent()\nC++: virtual void ToParent()\n\nMove the cursor to the parent of the current node.\n\\pre not_root: !IsRoot()\n"},
  {(char*)"ToChild", PyvtkHyperTreeCursor_ToChild, METH_VARARGS,
   (char*)"V.ToChild(int)\nC++: virtual void ToChild(int child)\n\nMove the cursor to child `child' of the current node.\n\\pre not_leaf: !IsLeaf()\n\\pre valid_child: child>=0 && child<this->GetNumberOfChildren()\n"},
  {(char*)"ToSameNode", PyvtkHyperTreeCursor_ToSameNode, METH_VARARGS,
   (char*)"V.ToSameNode(vtkHyperTreeCursor)\nC++: virtual void ToSameNode(vtkHyperTreeCursor *other)\n\nMove the cursor to the same node pointed by `other'.\n\\pre other_exists: other!=0\n\\pre same_hyper3TREE: this->SameTree(other);\n\\post equal: this->IsEqual(other)\n"},
  {(char*)"IsEqual", PyvtkHyperTreeCursor_IsEqual, METH_VARARGS,
   (char*)"V.IsEqual(vtkHyperTreeCursor) -> bool\nC++: virtual bool IsEqual(vtkHyperTreeCursor *other)\n\nIs `this' equal to `other'?\n\\pre other_exists: other!=0\n\\pre same_hyper3TREE: this->SameTree(other);\n"},
  {(char*)"Clone", PyvtkHyperTreeCursor_Clone, METH_VARARGS,
   (char*)"V.Clone() -> vtkHyperTreeCursor\nC++: virtual vtkHyperTreeCursor *Clone()\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n\\post same_tree: result->SameTree(this)\n"},
  {(char*)"SameTree", PyvtkHyperTreeCursor_SameTree, METH_VARARGS,
   (char*)"V.SameTree(vtkHyperTreeCursor) -> int\nC++: virtual int SameTree(vtkHyperTreeCursor *other)\n\nAre `this' and `other' pointing on the same hyper3TREE?\n\\pre other_exists: other!=0\n"},
  {(char*)"GetIndex", PyvtkHyperTreeCursor_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex(int) -> int\nC++: virtual int GetIndex(int d)\n\nReturn the index in dimension `d', as if the node was a cell of a\nuniform grid of 1<<GetCurrentLevel() cells in each dimension.\n\\pre valid_range: d>=0 && d<GetDimension()\n\\post valid_result: result>=0 && result<(1<<GetCurrentLevel())\n"},
  {(char*)"GetNumberOfChildren", PyvtkHyperTreeCursor_GetNumberOfChildren, METH_VARARGS,
   (char*)"V.GetNumberOfChildren() -> int\nC++: virtual int GetNumberOfChildren()\n\nReturn the number of children for each node of the tree.\n\\post positive_number: result>0\n"},
  {(char*)"GetDimension", PyvtkHyperTreeCursor_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {(char*)"MoveToNode", PyvtkHyperTreeCursor_MoveToNode, METH_VARARGS,
   (char*)"V.MoveToNode([int, ...], int)\nC++: virtual void MoveToNode(int *indices, int level)\n\nMove to the node described by its indices in each dimension and\nat a given level. If there is actually a node or a leaf at this\nlocation, Found() returns true. Otherwise, Found() returns false\nand the cursor moves to the closest parent of the query. It can\nbe the root in the worst case.\n\\pre indices_exists: indices!=0\n\\pre valid_size: sizeof(indices)==GetDimension()\n\\pre valid_level: level>=0\n"},
  {(char*)"Found", PyvtkHyperTreeCursor_Found, METH_VARARGS,
   (char*)"V.Found() -> bool\nC++: virtual bool Found()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHyperTreeCursorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHyperTreeCursor_Methods,
    "vtkHyperTreeCursor", modulename,
    NULL, NULL,
    PyvtkHyperTreeCursor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHyperTreeCursor_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTreeCursor - Objects that can traverse hypertree nodes.\n\n",
    "Superclass: vtkObject\n\n",
    "Objects that can traverse hyper3TREE nodes. It is an abstract class.\nCursors are created by the hyper3TREE.\n\nSee Also:\n\nvtkDataObject vtkFieldData vtkHyper3TREEAlgorithm\n\nThanks:\n\nThis class was written by Philippe Pebay, Joachim Pouderoux and\nCharles Law, Kitware 2013 This work was supported in part by\nCommissariat a l'Energie Atomique (CEA/DIF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTreeCursor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeCursorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTreeCursor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 8; c++)
    {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_3TREE_CHILD_ZMIN_YMIN_XMIN", VTK_3TREE_CHILD_ZMIN_YMIN_XMIN },
        { "VTK_3TREE_CHILD_ZMIN_YMIN_XMAX", VTK_3TREE_CHILD_ZMIN_YMIN_XMAX },
        { "VTK_3TREE_CHILD_ZMIN_YMAX_XMIN", VTK_3TREE_CHILD_ZMIN_YMAX_XMIN },
        { "VTK_3TREE_CHILD_ZMIN_YMAX_XMAX", VTK_3TREE_CHILD_ZMIN_YMAX_XMAX },
        { "VTK_3TREE_CHILD_ZMAX_YMIN_XMIN", VTK_3TREE_CHILD_ZMAX_YMIN_XMIN },
        { "VTK_3TREE_CHILD_ZMAX_YMIN_XMAX", VTK_3TREE_CHILD_ZMAX_YMIN_XMAX },
        { "VTK_3TREE_CHILD_ZMAX_YMAX_XMIN", VTK_3TREE_CHILD_ZMAX_YMAX_XMIN },
        { "VTK_3TREE_CHILD_ZMAX_YMAX_XMAX", VTK_3TREE_CHILD_ZMAX_YMAX_XMAX },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  for (int c = 0; c < 6; c++)
    {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_2TREE_CHILD_SW", VTK_3TREE_CHILD_ZMIN_YMIN_XMIN },
        { "VTK_2TREE_CHILD_SE", VTK_3TREE_CHILD_ZMIN_YMIN_XMAX },
        { "VTK_2TREE_CHILD_NW", VTK_3TREE_CHILD_ZMIN_YMAX_XMIN },
        { "VTK_2TREE_CHILD_NE", VTK_3TREE_CHILD_ZMIN_YMAX_XMAX },
        { "VTK_1TREE_TREE_CHILD_LEFT", VTK_2TREE_CHILD_SW },
        { "VTK_1TREE_TREE_CHILD_RIGHT", VTK_2TREE_CHILD_SE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

