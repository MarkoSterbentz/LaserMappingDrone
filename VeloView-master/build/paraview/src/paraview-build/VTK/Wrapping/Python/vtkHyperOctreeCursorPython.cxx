// python wrapper for vtkHyperOctreeCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctreeCursor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctreeCursor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeCursorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHyperOctreeCursor_Doc();


static PyObject *
PyvtkHyperOctreeCursor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctreeCursor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctreeCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctreeCursor::NewInstance());

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
PyvtkHyperOctreeCursor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctreeCursor *tempr = vtkHyperOctreeCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetLeafId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetLeafId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_CurrentIsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurrentIsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->CurrentIsLeaf();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_CurrentIsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurrentIsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->CurrentIsRoot();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_GetCurrentLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_CurrentIsTerminalNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurrentIsTerminalNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->CurrentIsTerminalNode();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_ToSameNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSameNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
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
PyvtkHyperOctreeCursor_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
    {
    int tempr = op->IsEqual(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkHyperOctreeCursor *tempr = op->Clone();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeCursor_SameTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SameTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  vtkHyperOctreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperOctreeCursor"))
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
PyvtkHyperOctreeCursor_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_MoveToNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveToNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

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
PyvtkHyperOctreeCursor_Found(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Found");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeCursor *op = static_cast<vtkHyperOctreeCursor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->Found();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeCursor_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeCursor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeCursor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeCursor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctreeCursor\nC++: vtkHyperOctreeCursor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeCursor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeCursor\nC++: vtkHyperOctreeCursor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLeafId", PyvtkHyperOctreeCursor_GetLeafId, METH_VARARGS,
   (char*)"V.GetLeafId() -> int\nC++: virtual int GetLeafId()\n\nReturn the index of the current leaf in the data arrays.\n\\pre is_leaf: CurrentIsLeaf()\n"},
  {(char*)"CurrentIsLeaf", PyvtkHyperOctreeCursor_CurrentIsLeaf, METH_VARARGS,
   (char*)"V.CurrentIsLeaf() -> int\nC++: virtual int CurrentIsLeaf()\n\nIs the node pointed by the cursor a leaf?\n"},
  {(char*)"CurrentIsRoot", PyvtkHyperOctreeCursor_CurrentIsRoot, METH_VARARGS,
   (char*)"V.CurrentIsRoot() -> int\nC++: virtual int CurrentIsRoot()\n\nIs the node pointed by the cursor the root?\n"},
  {(char*)"GetCurrentLevel", PyvtkHyperOctreeCursor_GetCurrentLevel, METH_VARARGS,
   (char*)"V.GetCurrentLevel() -> int\nC++: virtual int GetCurrentLevel()\n\nReturn the level of the node pointed by the cursor.\n\\post positive_result: result>=0\n"},
  {(char*)"GetChildIndex", PyvtkHyperOctreeCursor_GetChildIndex, METH_VARARGS,
   (char*)"V.GetChildIndex() -> int\nC++: virtual int GetChildIndex()\n\nReturn the child number of the current node relative to its\nparent.\n\\pre not_root: !CurrentIsRoot().\n\\post valid_range: result>=0 && result<GetNumberOfChildren()\n"},
  {(char*)"CurrentIsTerminalNode", PyvtkHyperOctreeCursor_CurrentIsTerminalNode, METH_VARARGS,
   (char*)"V.CurrentIsTerminalNode() -> int\nC++: virtual int CurrentIsTerminalNode()\n\n"},
  {(char*)"ToRoot", PyvtkHyperOctreeCursor_ToRoot, METH_VARARGS,
   (char*)"V.ToRoot()\nC++: virtual void ToRoot()\n\nMove the cursor the root node.\n\\pre can be root\n\\post is_root: CurrentIsRoot()\n"},
  {(char*)"ToParent", PyvtkHyperOctreeCursor_ToParent, METH_VARARGS,
   (char*)"V.ToParent()\nC++: virtual void ToParent()\n\nMove the cursor to the parent of the current node.\n\\pre not_root: !CurrentIsRoot()\n"},
  {(char*)"ToChild", PyvtkHyperOctreeCursor_ToChild, METH_VARARGS,
   (char*)"V.ToChild(int)\nC++: virtual void ToChild(int child)\n\nMove the cursor to child `child' of the current node.\n\\pre not_leaf: !CurrentIsLeaf()\n\\pre valid_child: child>=0 && child<this->GetNumberOfChildren()\n"},
  {(char*)"ToSameNode", PyvtkHyperOctreeCursor_ToSameNode, METH_VARARGS,
   (char*)"V.ToSameNode(vtkHyperOctreeCursor)\nC++: virtual void ToSameNode(vtkHyperOctreeCursor *other)\n\nMove the cursor to the same node pointed by `other'.\n\\pre other_exists: other!=0\n\\pre same_hyperoctree: this->SameTree(other);\n\\post equal: this->IsEqual(other)\n"},
  {(char*)"IsEqual", PyvtkHyperOctreeCursor_IsEqual, METH_VARARGS,
   (char*)"V.IsEqual(vtkHyperOctreeCursor) -> int\nC++: virtual int IsEqual(vtkHyperOctreeCursor *other)\n\nIs `this' equal to `other'?\n\\pre other_exists: other!=0\n\\pre same_hyperoctree: this->SameTree(other);\n"},
  {(char*)"Clone", PyvtkHyperOctreeCursor_Clone, METH_VARARGS,
   (char*)"V.Clone() -> vtkHyperOctreeCursor\nC++: virtual vtkHyperOctreeCursor *Clone()\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n\\post same_tree: result->SameTree(this)\n"},
  {(char*)"SameTree", PyvtkHyperOctreeCursor_SameTree, METH_VARARGS,
   (char*)"V.SameTree(vtkHyperOctreeCursor) -> int\nC++: virtual int SameTree(vtkHyperOctreeCursor *other)\n\nAre `this' and `other' pointing on the same hyperoctree?\n\\pre other_exists: other!=0\n"},
  {(char*)"GetIndex", PyvtkHyperOctreeCursor_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex(int) -> int\nC++: virtual int GetIndex(int d)\n\nReturn the index in dimension `d', as if the node was a cell of a\nuniform grid of 1<<GetCurrentLevel() cells in each dimension.\n\\pre valid_range: d>=0 && d<GetDimension()\n\\post valid_result: result>=0 && result<(1<<GetCurrentLevel())\n"},
  {(char*)"GetNumberOfChildren", PyvtkHyperOctreeCursor_GetNumberOfChildren, METH_VARARGS,
   (char*)"V.GetNumberOfChildren() -> int\nC++: virtual int GetNumberOfChildren()\n\nReturn the number of children for each node of the tree.\n\\post positive_number: result>0\n"},
  {(char*)"GetDimension", PyvtkHyperOctreeCursor_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {(char*)"MoveToNode", PyvtkHyperOctreeCursor_MoveToNode, METH_VARARGS,
   (char*)"V.MoveToNode([int, ...], int)\nC++: virtual void MoveToNode(int *indices, int level)\n\nMove to the node described by its indices in each dimension and\nat a given level. If there is actually a node or a leaf at this\nlocation, Found() returns true. Otherwise, Found() returns false\nand the cursor moves to the closest parent of the query. It can\nbe the root in the worst case.\n\\pre indices_exists: indices!=0\n\\pre valid_size: sizeof(indices)==GetDimension()\n\\pre valid_level: level>=0\n"},
  {(char*)"Found", PyvtkHyperOctreeCursor_Found, METH_VARARGS,
   (char*)"V.Found() -> int\nC++: virtual int Found()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHyperOctreeCursorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHyperOctreeCursor_Methods,
    "vtkHyperOctreeCursor", modulename,
    NULL, NULL,
    PyvtkHyperOctreeCursor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeCursor_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeCursor - Objects that can traverse hyperoctree nodes.\n\n",
    "Superclass: vtkObject\n\n",
    "Objects that can traverse hyperoctree nodes. It is an abstract class.\nCursors are created by the hyperoctree.\n\nSee Also:\n\nvtkDataObject vtkFieldData vtkHyperOctreeAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeCursor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeCursorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeCursor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 8; c++)
    {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_OCTREE_CHILD_ZMIN_YMIN_XMIN", VTK_OCTREE_CHILD_ZMIN_YMIN_XMIN },
        { "VTK_OCTREE_CHILD_ZMIN_YMIN_XMAX", VTK_OCTREE_CHILD_ZMIN_YMIN_XMAX },
        { "VTK_OCTREE_CHILD_ZMIN_YMAX_XMIN", VTK_OCTREE_CHILD_ZMIN_YMAX_XMIN },
        { "VTK_OCTREE_CHILD_ZMIN_YMAX_XMAX", VTK_OCTREE_CHILD_ZMIN_YMAX_XMAX },
        { "VTK_OCTREE_CHILD_ZMAX_YMIN_XMIN", VTK_OCTREE_CHILD_ZMAX_YMIN_XMIN },
        { "VTK_OCTREE_CHILD_ZMAX_YMIN_XMAX", VTK_OCTREE_CHILD_ZMAX_YMIN_XMAX },
        { "VTK_OCTREE_CHILD_ZMAX_YMAX_XMIN", VTK_OCTREE_CHILD_ZMAX_YMAX_XMIN },
        { "VTK_OCTREE_CHILD_ZMAX_YMAX_XMAX", VTK_OCTREE_CHILD_ZMAX_YMAX_XMAX },
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
        { "VTK_QUADTREE_CHILD_SW", VTK_OCTREE_CHILD_ZMIN_YMIN_XMIN },
        { "VTK_QUADTREE_CHILD_SE", VTK_OCTREE_CHILD_ZMIN_YMIN_XMAX },
        { "VTK_QUADTREE_CHILD_NW", VTK_OCTREE_CHILD_ZMIN_YMAX_XMIN },
        { "VTK_QUADTREE_CHILD_NE", VTK_OCTREE_CHILD_ZMIN_YMAX_XMAX },
        { "VTK_BINARY_TREE_CHILD_LEFT", VTK_QUADTREE_CHILD_SW },
        { "VTK_BINARY_TREE_CHILD_RIGHT", VTK_QUADTREE_CHILD_SE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

