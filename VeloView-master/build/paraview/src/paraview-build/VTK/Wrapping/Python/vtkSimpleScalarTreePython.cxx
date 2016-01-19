// python wrapper for vtkSimpleScalarTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkSimpleScalarTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSimpleScalarTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSimpleScalarTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarTreeNew
extern "C" { PyObject *PyVTKClass_vtkScalarTreeNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarTreeNew
#endif

static const char **PyvtkSimpleScalarTree_Doc();


static PyObject *
PyvtkSimpleScalarTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSimpleScalarTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleScalarTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSimpleScalarTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleScalarTree::NewInstance());

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
PyvtkSimpleScalarTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSimpleScalarTree *tempr = vtkSimpleScalarTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBranchingFactor(temp0);
      }
    else
      {
      op->vtkSimpleScalarTree::SetBranchingFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactorMinValue() :
      op->vtkSimpleScalarTree::GetBranchingFactorMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactorMaxValue() :
      op->vtkSimpleScalarTree::GetBranchingFactorMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactor() :
      op->vtkSimpleScalarTree::GetBranchingFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkSimpleScalarTree::GetLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxLevel(temp0);
      }
    else
      {
      op->vtkSimpleScalarTree::SetMaxLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMinValue() :
      op->vtkSimpleScalarTree::GetMaxLevelMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMaxValue() :
      op->vtkSimpleScalarTree::GetMaxLevelMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkSimpleScalarTree::GetMaxLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildTree();
      }
    else
      {
      op->vtkSimpleScalarTree::BuildTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSimpleScalarTree::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal(temp0);
      }
    else
      {
      op->vtkSimpleScalarTree::InitTraversal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleScalarTree_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleScalarTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"IsA", PyvtkSimpleScalarTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"NewInstance", PyvtkSimpleScalarTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSimpleScalarTree\nC++: vtkSimpleScalarTree *NewInstance()\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"SafeDownCast", PyvtkSimpleScalarTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleScalarTree\nC++: vtkSimpleScalarTree *SafeDownCast(vtkObject* o)\n\nStandard type related macros and PrintSelf() method.\n"},
  {(char*)"SetBranchingFactor", PyvtkSimpleScalarTree_SetBranchingFactor, METH_VARARGS,
   (char*)"V.SetBranchingFactor(int)\nC++: void SetBranchingFactor(int)\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetBranchingFactorMinValue", PyvtkSimpleScalarTree_GetBranchingFactorMinValue, METH_VARARGS,
   (char*)"V.GetBranchingFactorMinValue() -> int\nC++: int GetBranchingFactorMinValue()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetBranchingFactorMaxValue", PyvtkSimpleScalarTree_GetBranchingFactorMaxValue, METH_VARARGS,
   (char*)"V.GetBranchingFactorMaxValue() -> int\nC++: int GetBranchingFactorMaxValue()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetBranchingFactor", PyvtkSimpleScalarTree_GetBranchingFactor, METH_VARARGS,
   (char*)"V.GetBranchingFactor() -> int\nC++: int GetBranchingFactor()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {(char*)"GetLevel", PyvtkSimpleScalarTree_GetLevel, METH_VARARGS,
   (char*)"V.GetLevel() -> int\nC++: int GetLevel()\n\nGet the level of the scalar tree. This value may change each time\nthe scalar tree is built and the branching factor changes.\n"},
  {(char*)"SetMaxLevel", PyvtkSimpleScalarTree_SetMaxLevel, METH_VARARGS,
   (char*)"V.SetMaxLevel(int)\nC++: void SetMaxLevel(int)\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"GetMaxLevelMinValue", PyvtkSimpleScalarTree_GetMaxLevelMinValue, METH_VARARGS,
   (char*)"V.GetMaxLevelMinValue() -> int\nC++: int GetMaxLevelMinValue()\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"GetMaxLevelMaxValue", PyvtkSimpleScalarTree_GetMaxLevelMaxValue, METH_VARARGS,
   (char*)"V.GetMaxLevelMaxValue() -> int\nC++: int GetMaxLevelMaxValue()\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"GetMaxLevel", PyvtkSimpleScalarTree_GetMaxLevel, METH_VARARGS,
   (char*)"V.GetMaxLevel() -> int\nC++: int GetMaxLevel()\n\nSet the maximum allowable level for the tree.\n"},
  {(char*)"BuildTree", PyvtkSimpleScalarTree_BuildTree, METH_VARARGS,
   (char*)"V.BuildTree()\nC++: virtual void BuildTree()\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {(char*)"Initialize", PyvtkSimpleScalarTree_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {(char*)"InitTraversal", PyvtkSimpleScalarTree_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal(float)\nC++: virtual void InitTraversal(double scalarValue)\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will have scalar values that span the scalar value\nspecified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleScalarTree_StaticNew()
{
  return vtkSimpleScalarTree::New();
}

PyObject *PyVTKClass_vtkSimpleScalarTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleScalarTree_StaticNew,
    PyvtkSimpleScalarTree_Methods,
    "vtkSimpleScalarTree", modulename,
    NULL, NULL,
    PyvtkSimpleScalarTree_Doc(),
    PyVTKClass_vtkScalarTreeNew(modulename));
  return cls;
}

const char **PyvtkSimpleScalarTree_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleScalarTree - organize data according to scalar values (used\nto accelerate contouring operations)\n\n",
    "Superclass: vtkScalarTree\n\n",
    "vtkSimpleScalarTree creates a pointerless binary tree that helps\nsearch for cells that lie within a particular scalar range. This\nobject is used to accelerate some contouring (and other scalar-based\ntechniques).\n\nThe tree consists of an array of (min,max) scalar range pairs per\nnode in the tree. The (min,max) range is determined from looking at\nthe range of the children of the tree node. If the no",
    "de is a leaf,\nthen the range is determined by scanning the range of scalar data in\nn cells in the dataset. The n cells are determined by arbitrary\nselecting cell ids from id(i) to id(i+n), and where n is specified\nusing the BranchingFactor ivar. Note that leaf node i=0 contains the\nscalar range computed from cell ids (0,n-1); leaf node i=1 contains\nthe range from cell ids (n,2n-1); and so on. The ",
    "implication is that\nthere are no direct lists of cell ids per leaf node, instead the cell\nids are implicitly known.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleScalarTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleScalarTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleScalarTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

