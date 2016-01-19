// python wrapper for vtkHyperTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkHyperTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHyperTree_Doc();


static PyObject *
PyvtkHyperTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTree::NewInstance());

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
PyvtkHyperTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperTree *tempr = vtkHyperTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Initialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_NewCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkHyperTreeCursor *tempr = op->NewCursor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfLeaves();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfNodes();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfIndex();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetBranchFactor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

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
PyvtkHyperTree_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetScale(temp0);

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
PyvtkHyperTree_GetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetScale(temp0);

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
PyvtkHyperTree_GetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = op->GetScale(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTree_GetScale_Methods[] = {
  {NULL, PyvtkHyperTree_GetScale_s1, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkHyperTree_GetScale_s2, METH_VARARGS,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkHyperTree_GetScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTree_GetScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScale");
  return NULL;
}



static PyObject *
PyvtkHyperTree_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfLevels();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkHyperTreeCursor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
    {
    op->SubdivideLeaf(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    unsigned int tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkHyperTree *tempr = vtkHyperTree::CreateInstance(temp0, temp1);

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
PyvtkHyperTree_FindChildParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindChildParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  int temp0;
  vtkIdType temp1;
  bool temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->FindChildParameters(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperTree::FindChildParameters(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGlobalIndexStart(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetGlobalIndexFromLocal(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperTree_GetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = op->GetGlobalIndexFromLocal(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperTree_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperTree\nC++: vtkHyperTree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperTree\nC++: vtkHyperTree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkHyperTree_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\n"},
  {(char*)"NewCursor", PyvtkHyperTree_NewCursor, METH_VARARGS,
   (char*)"V.NewCursor() -> vtkHyperTreeCursor\nC++: virtual vtkHyperTreeCursor *NewCursor()\n\n"},
  {(char*)"GetNumberOfLeaves", PyvtkHyperTree_GetNumberOfLeaves, METH_VARARGS,
   (char*)"V.GetNumberOfLeaves() -> int\nC++: virtual vtkIdType GetNumberOfLeaves()\n\n"},
  {(char*)"GetNumberOfNodes", PyvtkHyperTree_GetNumberOfNodes, METH_VARARGS,
   (char*)"V.GetNumberOfNodes() -> int\nC++: virtual vtkIdType GetNumberOfNodes()\n\n"},
  {(char*)"GetNumberOfIndex", PyvtkHyperTree_GetNumberOfIndex, METH_VARARGS,
   (char*)"V.GetNumberOfIndex() -> int\nC++: virtual vtkIdType GetNumberOfIndex()\n\n"},
  {(char*)"GetBranchFactor", PyvtkHyperTree_GetBranchFactor, METH_VARARGS,
   (char*)"V.GetBranchFactor() -> int\nC++: virtual int GetBranchFactor()\n\n"},
  {(char*)"GetDimension", PyvtkHyperTree_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetScale", PyvtkHyperTree_SetScale, METH_VARARGS,
   (char*)"V.SetScale([float, float, float])\nC++: virtual void SetScale(double[3])\n\n"},
  {(char*)"GetScale", PyvtkHyperTree_GetScale, METH_VARARGS,
   (char*)"V.GetScale([float, float, float])\nC++: virtual void GetScale(double[3])\nV.GetScale(int) -> float\nC++: virtual double GetScale(unsigned int)\n\n"},
  {(char*)"GetNumberOfLevels", PyvtkHyperTree_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: virtual vtkIdType GetNumberOfLevels()\n\nReturn the number of levels.\n\\post result_greater_or_equal_to_one: result>=1\n"},
  {(char*)"SubdivideLeaf", PyvtkHyperTree_SubdivideLeaf, METH_VARARGS,
   (char*)"V.SubdivideLeaf(vtkHyperTreeCursor)\nC++: virtual void SubdivideLeaf(vtkHyperTreeCursor *leaf)\n\nSubdivide node pointed by cursor, only if its a leaf. At the end,\ncursor points on the node that used to be leaf.\n\\pre leaf_exists: leaf!=0\n\\pre is_a_leaf: leaf->CurrentIsLeaf()\n"},
  {(char*)"GetActualMemorySize", PyvtkHyperTree_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned int GetActualMemorySize()\n\nReturn the actual memory size in kilobytes. NB: Ignores the\nattribute array.\n"},
  {(char*)"CreateInstance", PyvtkHyperTree_CreateInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateInstance(int, int) -> vtkHyperTree\nC++: static vtkHyperTree *CreateInstance(\n    unsigned int branchFactor, unsigned int dimension)\n\nReturn an instance of a templated hypertree for given branch\nfactor and dimension This is done to hide templates.\n"},
  {(char*)"FindChildParameters", PyvtkHyperTree_FindChildParameters, METH_VARARGS,
   (char*)"V.FindChildParameters(int, int, bool)\nC++: virtual void FindChildParameters(int, vtkIdType &, bool &)\n\nFind the Index, Parent Index and IsLeaf() parameters of a child\nfor hypertree. This is done to hide templates.\n"},
  {(char*)"SetGlobalIndexStart", PyvtkHyperTree_SetGlobalIndexStart, METH_VARARGS,
   (char*)"V.SetGlobalIndexStart(int)\nC++: virtual void SetGlobalIndexStart(vtkIdType)\n\nSet the start global index for the current tree. The global index\nof a node will be this index + the node index.\n"},
  {(char*)"SetGlobalIndexFromLocal", PyvtkHyperTree_SetGlobalIndexFromLocal, METH_VARARGS,
   (char*)"V.SetGlobalIndexFromLocal(int, int)\nC++: virtual void SetGlobalIndexFromLocal(vtkIdType local,\n    vtkIdType global)\n\nSet the mapping between local & global ids used by\nHyperTreeGrids.\n"},
  {(char*)"GetGlobalIndexFromLocal", PyvtkHyperTree_GetGlobalIndexFromLocal, METH_VARARGS,
   (char*)"V.GetGlobalIndexFromLocal(int) -> int\nC++: virtual vtkIdType GetGlobalIndexFromLocal(vtkIdType local)\n\nGet the global id of a local node. Use the mapping function if\navailable or the start global index.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHyperTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHyperTree_Methods,
    "vtkHyperTree", modulename,
    NULL, NULL,
    PyvtkHyperTree_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHyperTree_Doc()
{
  static const char *docstring[] = {
    "vtkHyperTree - An object structured as a tree where each node has\n\n",
    "Superclass: vtkObject\n\n",
    "An hypertree is a dataset where each node has either exactly 2^n or\n3^n children or no child at all if the node is a leaf. `n' is the\ndimension of the dataset (1 (binary tree), 2 (quadtree) or 3 (octree)\n). The class name comes from the following paper:\n\n\n @ARTICLE{yau-srihari-1983,\n  author={Mann-May Yau and Sargur N. Srihari},\n  title={A Hierarchical Data Structure for Multidimensional Digital I",
    "mages},\n  journal={Communications of the ACM},\n  month={July},\n  year={1983},\n  volume={26},\n  number={7},\n  pages={504--515}\n  }\n \n\nEach node is a cell. Attributes are associated with cells, not with\npoints. The geometry is implicitly given by the size of the root node\non each axis and position of the center and the orientation. (TODO:\nreview center position and orientation). The geometry is then",
    " not\nlimited to an hybercube but can have a rectangular shape. Attributes\nare associated with leaves. For LOD (Level-Of-Detail) purpose,\nattributes can be computed on none-leaf nodes by computing the\naverage values from its children (which can be leaves or not).\n\nBy construction, an hypertree is efficient in memory usage when the\ngeometry is sparse. The LOD feature allows to cull quickly part of\nt",
    "he dataset.\n\nThis is an abstract class used as a superclass by a templated compact\nclass. All methods are pure virtual. This is done to hide templates.\n\nCase with 2^n children:\n\n* 3D case (octree) for each node, each child index (from 0 to 7) is\n  encoded in the following orientation. It is easy to access each\n  child as a cell of a grid. Note also that the binary representation\nis relevant, each ",
    "bit code a side: bit 0 encodes -x side (0) or +x\n  side (1) bit 1 encodes -y side (0) or +y side (1) bit 2 encodes -z\n  side (0) or +z side (2)\n- the -z side first\n- 0: -y -x sides\n- 1: -y +x sides\n- 2: +y -x sides\n- 3: +y +x sides\n              +y\n +-+-+        ^\n |2|3|        |\n +-+-+  O +z  +-> +x\n |0|1|\n +-+-+\n \n\n- then the +z side, in counter-clockwise\n- 4: -y -x sides\n- 5: -y +x sides\n- 6: +",
    "y -x sides\n- 7: +y +x sides\n              +y\n +-+-+        ^\n |6|7|        |\n +-+-+  O +z  +-> +x\n |4|5|\n +-+-+\n \n\nThe cases with fewer dimensions are consistent with the octree case:\n\n* Quadtree: in counter-clockwise\n- 0: -y -x edges\n- 1: -y +x edges\n- 2: +y -x edges\n- 3: +y +x edges\n         +y\n +-+-+   ^\n |2|3|   |\n +-+-+  O+-> +x\n |0|1|\n +-+-+\n \n\n* Binary tree:\n +0+1+  O+-> +x\n \n\nCaveats:\n\nIt ",
    "is not a spatial search object. If you are looking for this kind\nof octree see vtkCellLocator instead.\n\nThanks:\n\nThis class was written by Philippe Pebay, Joachim Pouderoux and\nCharles Law, Kitware 2013 This work was supported in part by\nCommissariat a l'Energie Atomique (CEA/DIF)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

