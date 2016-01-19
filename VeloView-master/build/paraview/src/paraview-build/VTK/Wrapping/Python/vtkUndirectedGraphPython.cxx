// python wrapper for vtkUndirectedGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkUndirectedGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUndirectedGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUndirectedGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphNew
extern "C" { PyObject *PyVTKClass_vtkGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphNew
#endif

static const char **PyvtkUndirectedGraph_Doc();


static PyObject *
PyvtkUndirectedGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUndirectedGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndirectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUndirectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndirectedGraph::NewInstance());

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
PyvtkUndirectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUndirectedGraph *tempr = vtkUndirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUndirectedGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetInDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetInDegree(temp0) :
      op->vtkUndirectedGraph::GetInDegree(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetInEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkGraphEdge *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGraphEdge"))
    {
    if (ap.IsBound())
      {
      op->GetInEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUndirectedGraph::GetInEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkUndirectedGraph *tempr = vtkUndirectedGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUndirectedGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUndirectedGraph *tempr = vtkUndirectedGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUndirectedGraph_GetData_Methods[] = {
  {NULL, PyvtkUndirectedGraph_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUndirectedGraph_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUndirectedGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUndirectedGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUndirectedGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkUndirectedGraph_GetInEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkInEdgeIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInEdgeIterator"))
    {
    if (ap.IsBound())
      {
      op->GetInEdges(temp0, temp1);
      }
    else
      {
      op->vtkUndirectedGraph::GetInEdges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_IsStructureValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStructureValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsStructureValid(temp0) :
      op->vtkUndirectedGraph::IsStructureValid(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUndirectedGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkUndirectedGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUndirectedGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUndirectedGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUndirectedGraph\nC++: vtkUndirectedGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUndirectedGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUndirectedGraph\nC++: vtkUndirectedGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkUndirectedGraph_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetInDegree", PyvtkUndirectedGraph_GetInDegree, METH_VARARGS,
   (char*)"V.GetInDegree(int) -> int\nC++: virtual vtkIdType GetInDegree(vtkIdType v)\n\nReturns the full degree of the vertex.\n"},
  {(char*)"GetInEdge", PyvtkUndirectedGraph_GetInEdge, METH_VARARGS,
   (char*)"V.GetInEdge(int, int, vtkGraphEdge)\nC++: virtual void GetInEdge(vtkIdType v, vtkIdType i,\n    vtkGraphEdge *e)\n\nRandom-access method for retrieving incoming edges to vertex v.\nThe method fills the vtkGraphEdge instance with the id, source,\nand target of the edge. This method is provided for wrappers,\nGetInEdge(vtkIdType, vtkIdType) is preferred.\n"},
  {(char*)"GetData", PyvtkUndirectedGraph_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkUndirectedGraph\nC++: static vtkUndirectedGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUndirectedGraph\nC++: static vtkUndirectedGraph *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {(char*)"GetInEdges", PyvtkUndirectedGraph_GetInEdges, METH_VARARGS,
   (char*)"V.GetInEdges(int, vtkInEdgeIterator)\nC++: virtual void GetInEdges(vtkIdType v, vtkInEdgeIterator *it)\n\nInitialize the iterator to get the incoming edges to a vertex.\nFor an undirected graph, this is all incident edges.\n"},
  {(char*)"IsStructureValid", PyvtkUndirectedGraph_IsStructureValid, METH_VARARGS,
   (char*)"V.IsStructureValid(vtkGraph) -> bool\nC++: virtual bool IsStructureValid(vtkGraph *g)\n\nCheck the structure, and accept it if it is a valid undirected\ngraph. This is public to allow the ToDirected/UndirectedGraph to\nwork.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUndirectedGraph_StaticNew()
{
  return vtkUndirectedGraph::New();
}

PyObject *PyVTKClass_vtkUndirectedGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUndirectedGraph_StaticNew,
    PyvtkUndirectedGraph_Methods,
    "vtkUndirectedGraph", modulename,
    NULL, NULL,
    PyvtkUndirectedGraph_Doc(),
    PyVTKClass_vtkGraphNew(modulename));
  return cls;
}

const char **PyvtkUndirectedGraph_Doc()
{
  static const char *docstring[] = {
    "vtkUndirectedGraph - An undirected graph.\n\n",
    "Superclass: vtkGraph\n\n",
    "vtkUndirectedGraph is a collection of vertices along with a\ncollection of undirected edges (they connect two vertices in no\nparticular order). ShallowCopy(), DeepCopy(), CheckedShallowCopy(),\nCheckedDeepCopy() accept instances of vtkUndirectedGraph and\nvtkMutableUndirectedGraph. GetOutEdges(v, it) and GetInEdges(v, it)\nreturn the same list of edges, which is the list of all edges which\nhave a v as",
    " an endpoint. GetInDegree(v), GetOutDegree(v) and\nGetDegree(v) all return the full degree of vertex v.\n\nvtkUndirectedGraph is read-only. To create an undirected graph, use\nan instance of vtkMutableUndirectedGraph, then you may set the\nstructure to a vtkUndirectedGraph using ShallowCopy().\n\nSee Also:\n\nvtkGraph vtkMutableUndirectedGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUndirectedGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUndirectedGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUndirectedGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

