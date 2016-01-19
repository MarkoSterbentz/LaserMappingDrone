// python wrapper for vtkMutableGraphHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkMutableGraphHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMutableGraphHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMutableGraphHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMutableGraphHelper_Doc();


static PyObject *
PyvtkMutableGraphHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMutableGraphHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutableGraphHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMutableGraphHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutableGraphHelper::NewInstance());

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
PyvtkMutableGraphHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMutableGraphHelper *tempr = vtkMutableGraphHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetGraph(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkMutableGraphHelper::GetGraph());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->AddGraphEdge(temp0, temp1) :
      op->vtkMutableGraphHelper::AddGraphEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex() :
      op->vtkMutableGraphHelper::AddVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveVertex(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->RemoveVertices(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveEdge(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->RemoveEdges(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMutableGraphHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkMutableGraphHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMutableGraphHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMutableGraphHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMutableGraphHelper\nC++: vtkMutableGraphHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMutableGraphHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMutableGraphHelper\nC++: vtkMutableGraphHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraph", PyvtkMutableGraphHelper_SetGraph, METH_VARARGS,
   (char*)"V.SetGraph(vtkGraph)\nC++: void SetGraph(vtkGraph *g)\n\nSet the underlying graph that you want to modify with this\nhelper. The graph must be an instance of vtkMutableDirectedGraph\nor vtkMutableUndirectedGraph.\n"},
  {(char*)"GetGraph", PyvtkMutableGraphHelper_GetGraph, METH_VARARGS,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nSet the underlying graph that you want to modify with this\nhelper. The graph must be an instance of vtkMutableDirectedGraph\nor vtkMutableUndirectedGraph.\n"},
  {(char*)"AddGraphEdge", PyvtkMutableGraphHelper_AddGraphEdge, METH_VARARGS,
   (char*)"V.AddGraphEdge(int, int) -> vtkGraphEdge\nC++: vtkGraphEdge *AddGraphEdge(vtkIdType u, vtkIdType v)\n\nAdd an edge to the underlying mutable graph.\n"},
  {(char*)"AddVertex", PyvtkMutableGraphHelper_AddVertex, METH_VARARGS,
   (char*)"V.AddVertex() -> int\nC++: vtkIdType AddVertex()\n\nAdd a vertex to the underlying mutable graph.\n"},
  {(char*)"RemoveVertex", PyvtkMutableGraphHelper_RemoveVertex, METH_VARARGS,
   (char*)"V.RemoveVertex(int)\nC++: void RemoveVertex(vtkIdType v)\n\nRemove a vertex from the underlying mutable graph.\n"},
  {(char*)"RemoveVertices", PyvtkMutableGraphHelper_RemoveVertices, METH_VARARGS,
   (char*)"V.RemoveVertices(vtkIdTypeArray)\nC++: void RemoveVertices(vtkIdTypeArray *verts)\n\nRemove a collection of vertices from the underlying mutable\ngraph.\n"},
  {(char*)"RemoveEdge", PyvtkMutableGraphHelper_RemoveEdge, METH_VARARGS,
   (char*)"V.RemoveEdge(int)\nC++: void RemoveEdge(vtkIdType e)\n\nRemove an edge from the underlying mutable graph.\n"},
  {(char*)"RemoveEdges", PyvtkMutableGraphHelper_RemoveEdges, METH_VARARGS,
   (char*)"V.RemoveEdges(vtkIdTypeArray)\nC++: void RemoveEdges(vtkIdTypeArray *edges)\n\nRemove a collection of edges from the underlying mutable graph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMutableGraphHelper_StaticNew()
{
  return vtkMutableGraphHelper::New();
}

PyObject *PyVTKClass_vtkMutableGraphHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMutableGraphHelper_StaticNew,
    PyvtkMutableGraphHelper_Methods,
    "vtkMutableGraphHelper", modulename,
    NULL, NULL,
    PyvtkMutableGraphHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMutableGraphHelper_Doc()
{
  static const char *docstring[] = {
    "vtkMutableGraphHelper - Helper class for building a directed or\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMutableGraphHelper has helper methods AddVertex and AddEdge which\nadd vertices/edges to the underlying mutable graph. This is helpful\nin filters which need to (re)construct graphs which may be either\ndirected or undirected.\n\nSee Also:\n\nvtkGraph vtkMutableDirectedGraph vtkMutableUndirectedGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMutableGraphHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMutableGraphHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMutableGraphHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

