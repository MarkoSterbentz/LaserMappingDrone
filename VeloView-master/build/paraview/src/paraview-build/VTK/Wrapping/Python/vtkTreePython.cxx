// python wrapper for vtkTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDirectedAcyclicGraphNew
extern "C" { PyObject *PyVTKClass_vtkDirectedAcyclicGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedAcyclicGraphNew
#endif

static const char **PyvtkTree_Doc();


static PyObject *
PyvtkTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTree::NewInstance());

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
PyvtkTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTree *tempr = vtkTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkTree::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetRoot() :
      op->vtkTree::GetRoot());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfChildren(temp0) :
      op->vtkTree::GetNumberOfChildren(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChild(temp0, temp1) :
      op->vtkTree::GetChild(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  vtkAdjacentVertexIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAdjacentVertexIterator"))
    {
    if (ap.IsBound())
      {
      op->GetChildren(temp0, temp1);
      }
    else
      {
      op->vtkTree::GetChildren(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetParent(temp0) :
      op->vtkTree::GetParent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLevel(temp0) :
      op->vtkTree::GetLevel(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf(temp0) :
      op->vtkTree::IsLeaf(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTree_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkTree *tempr = vtkTree::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTree_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkTree *tempr = vtkTree::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTree_GetData_Methods[] = {
  {NULL, PyvtkTree_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkTree_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTree_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTree_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkTree_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkTree_ReorderChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorderChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->ReorderChildren(temp0, temp1);
      }
    else
      {
      op->vtkTree::ReorderChildren(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTree_Methods[] = {
  {(char*)"GetClassName", PyvtkTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTree\nC++: vtkTree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTree\nC++: vtkTree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkTree_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetRoot", PyvtkTree_GetRoot, METH_VARARGS,
   (char*)"V.GetRoot() -> int\nC++: vtkIdType GetRoot()\n\nGet the root vertex of the tree.\n"},
  {(char*)"GetNumberOfChildren", PyvtkTree_GetNumberOfChildren, METH_VARARGS,
   (char*)"V.GetNumberOfChildren(int) -> int\nC++: vtkIdType GetNumberOfChildren(vtkIdType v)\n\nGet the number of children of a vertex.\n"},
  {(char*)"GetChild", PyvtkTree_GetChild, METH_VARARGS,
   (char*)"V.GetChild(int, int) -> int\nC++: vtkIdType GetChild(vtkIdType v, vtkIdType i)\n\nGet the i-th child of a parent vertex.\n"},
  {(char*)"GetChildren", PyvtkTree_GetChildren, METH_VARARGS,
   (char*)"V.GetChildren(int, vtkAdjacentVertexIterator)\nC++: void GetChildren(vtkIdType v, vtkAdjacentVertexIterator *it)\n\nGet the child vertices of a vertex. This is a convenience method\nthat functions exactly like GetAdjacentVertices.\n"},
  {(char*)"GetParent", PyvtkTree_GetParent, METH_VARARGS,
   (char*)"V.GetParent(int) -> int\nC++: vtkIdType GetParent(vtkIdType v)\n\nGet the parent of a vertex.\n"},
  {(char*)"GetLevel", PyvtkTree_GetLevel, METH_VARARGS,
   (char*)"V.GetLevel(int) -> int\nC++: vtkIdType GetLevel(vtkIdType v)\n\nGet the level of the vertex in the tree.  The root vertex has\nlevel 0. Returns -1 if the vertex id is < 0 or greater than the\nnumber of vertices in the tree.\n"},
  {(char*)"IsLeaf", PyvtkTree_IsLeaf, METH_VARARGS,
   (char*)"V.IsLeaf(int) -> bool\nC++: bool IsLeaf(vtkIdType vertex)\n\nReturn whether the vertex is a leaf (i.e. it has no children).\n"},
  {(char*)"GetData", PyvtkTree_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkTree\nC++: static vtkTree *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkTree\nC++: static vtkTree *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {(char*)"ReorderChildren", PyvtkTree_ReorderChildren, METH_VARARGS,
   (char*)"V.ReorderChildren(int, vtkIdTypeArray)\nC++: virtual void ReorderChildren(vtkIdType parent,\n    vtkIdTypeArray *children)\n\nReorder the children of a parent vertex. The children array must\ncontain all the children of parent, just in a different order.\nThis does not change the topology of the tree.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTree_StaticNew()
{
  return vtkTree::New();
}

PyObject *PyVTKClass_vtkTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTree_StaticNew,
    PyvtkTree_Methods,
    "vtkTree", modulename,
    NULL, NULL,
    PyvtkTree_Doc(),
    PyVTKClass_vtkDirectedAcyclicGraphNew(modulename));
  return cls;
}

const char **PyvtkTree_Doc()
{
  static const char *docstring[] = {
    "vtkTree - A rooted tree data structure.\n\n",
    "Superclass: vtkDirectedAcyclicGraph\n\n",
    "vtkTree is a connected directed graph with no cycles. A tree is a\ntype of directed graph, so works with all graph algorithms.\n\nvtkTree is a read-only data structure. To construct a tree, create an\ninstance of vtkMutableDirectedGraph. Add vertices and edges with\nAddVertex() and AddEdge(). You may alternately start by adding a\nsingle vertex as the root then call graph->AddChild(parent) which\nadds a ",
    "new vertex and connects the parent to the child. The tree MUST\nhave all edges in the proper direction, from parent to child. After\nbuilding the tree, call tree->CheckedShallowCopy(graph) to copy the\nstructure into a vtkTree. This method will return false if the graph\nis an invalid tree.\n\nvtkTree provides some convenience methods for obtaining the parent\nand children of a vertex, for finding the ro",
    "ot, and determining if a\nvertex is a leaf (a vertex with no children).\n\nSee Also:\n\nvtkDirectedGraph vtkMutableDirectedGraph vtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

