// python wrapper for vtkTableToGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableToGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableToGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableToGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkTableToGraph_Doc();


static PyObject *
PyvtkTableToGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableToGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableToGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToGraph::NewInstance());

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
PyvtkTableToGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableToGraph *tempr = vtkTableToGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_AddLinkVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  char *temp0 = NULL;
  char *temp1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->AddLinkVertex(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTableToGraph::AddLinkVertex(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_ClearLinkVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLinkVertices();
      }
    else
      {
      op->vtkTableToGraph::ClearLinkVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_AddLinkEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddLinkEdge(temp0, temp1);
      }
    else
      {
      op->vtkTableToGraph::AddLinkEdge(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_ClearLinkEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLinkEdges();
      }
    else
      {
      op->vtkTableToGraph::ClearLinkEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetLinkGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMutableDirectedGraph *tempr = (ap.IsBound() ?
      op->GetLinkGraph() :
      op->vtkTableToGraph::GetLinkGraph());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetLinkGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkMutableDirectedGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
    {
    if (ap.IsBound())
      {
      op->SetLinkGraph(temp0);
      }
    else
      {
      op->vtkTableToGraph::SetLinkGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_LinkColumnPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkColumnPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkStringArray *temp0 = NULL;
  vtkStringArray *temp1 = 0;
  vtkBitArray *temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkStringArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkBitArray")))
    {
    if (ap.IsBound())
      {
      op->LinkColumnPath(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTableToGraph::LinkColumnPath(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirected(temp0);
      }
    else
      {
      op->vtkTableToGraph::SetDirected(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDirected() :
      op->vtkTableToGraph::GetDirected());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOn();
      }
    else
      {
      op->vtkTableToGraph::DirectedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectedOff();
      }
    else
      {
      op->vtkTableToGraph::DirectedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTableToGraph::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetVertexTableConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexTableConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetVertexTableConnection(temp0);
      }
    else
      {
      op->vtkTableToGraph::SetVertexTableConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableToGraph\nC++: vtkTableToGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToGraph\nC++: vtkTableToGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddLinkVertex", PyvtkTableToGraph_AddLinkVertex, METH_VARARGS,
   (char*)"V.AddLinkVertex(string, string, int)\nC++: void AddLinkVertex(const char *column, const char *domain=0,\n    int hidden=0)\n\nAdd a vertex to the link graph.  Specify the column name, the\ndomain name for the column, and whether the column is hidden.\n"},
  {(char*)"ClearLinkVertices", PyvtkTableToGraph_ClearLinkVertices, METH_VARARGS,
   (char*)"V.ClearLinkVertices()\nC++: void ClearLinkVertices()\n\nClear the link graph vertices.  This also clears all edges.\n"},
  {(char*)"AddLinkEdge", PyvtkTableToGraph_AddLinkEdge, METH_VARARGS,
   (char*)"V.AddLinkEdge(string, string)\nC++: void AddLinkEdge(const char *column1, const char *column2)\n\nAdd an edge to the link graph.  Specify the names of the columns\nto link.\n"},
  {(char*)"ClearLinkEdges", PyvtkTableToGraph_ClearLinkEdges, METH_VARARGS,
   (char*)"V.ClearLinkEdges()\nC++: void ClearLinkEdges()\n\nClear the link graph edges.  The graph vertices will remain.\n"},
  {(char*)"GetLinkGraph", PyvtkTableToGraph_GetLinkGraph, METH_VARARGS,
   (char*)"V.GetLinkGraph() -> vtkMutableDirectedGraph\nC++: vtkMutableDirectedGraph *GetLinkGraph()\n\nThe graph describing how to link the columns in the table.\n"},
  {(char*)"SetLinkGraph", PyvtkTableToGraph_SetLinkGraph, METH_VARARGS,
   (char*)"V.SetLinkGraph(vtkMutableDirectedGraph)\nC++: void SetLinkGraph(vtkMutableDirectedGraph *g)\n\nThe graph describing how to link the columns in the table.\n"},
  {(char*)"LinkColumnPath", PyvtkTableToGraph_LinkColumnPath, METH_VARARGS,
   (char*)"V.LinkColumnPath(vtkStringArray, vtkStringArray, vtkBitArray)\nC++: void LinkColumnPath(vtkStringArray *column,\n    vtkStringArray *domain=0, vtkBitArray *hidden=0)\n\nLinks the columns in a specific order. This creates a simple path\nas the link graph.\n"},
  {(char*)"SetDirected", PyvtkTableToGraph_SetDirected, METH_VARARGS,
   (char*)"V.SetDirected(bool)\nC++: void SetDirected(bool a)\n\nSpecify the directedness of the output graph.\n"},
  {(char*)"GetDirected", PyvtkTableToGraph_GetDirected, METH_VARARGS,
   (char*)"V.GetDirected() -> bool\nC++: bool GetDirected()\n\nSpecify the directedness of the output graph.\n"},
  {(char*)"DirectedOn", PyvtkTableToGraph_DirectedOn, METH_VARARGS,
   (char*)"V.DirectedOn()\nC++: void DirectedOn()\n\nSpecify the directedness of the output graph.\n"},
  {(char*)"DirectedOff", PyvtkTableToGraph_DirectedOff, METH_VARARGS,
   (char*)"V.DirectedOff()\nC++: void DirectedOff()\n\nSpecify the directedness of the output graph.\n"},
  {(char*)"GetMTime", PyvtkTableToGraph_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the current modified time.\n"},
  {(char*)"SetVertexTableConnection", PyvtkTableToGraph_SetVertexTableConnection, METH_VARARGS,
   (char*)"V.SetVertexTableConnection(vtkAlgorithmOutput)\nC++: void SetVertexTableConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the vertex table input.  This is\nmainly for the benefit of the VTK client/server layer, vanilla\nVTK code should use e.g:\n\ntable_to_graph->SetInputConnection(1, vertex_table->output());\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToGraph_StaticNew()
{
  return vtkTableToGraph::New();
}

PyObject *PyVTKClass_vtkTableToGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToGraph_StaticNew,
    PyvtkTableToGraph_Methods,
    "vtkTableToGraph", modulename,
    NULL, NULL,
    PyvtkTableToGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToGraph_Doc()
{
  static const char *docstring[] = {
    "vtkTableToGraph - convert a vtkTable into a vtkGraph\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkTableToGraph converts a table to a graph using an auxiliary link\ngraph.  The link graph specifies how each row in the table should be\nconverted to an edge, or a collection of edges.  It also specifies\nwhich columns of the table should be considered part of the same\ndomain, and which columns should be hidden.\n\nA second, optional, table may be provided as the vertex table. This\nvertex table must ",
    "have one or more domain columns whose values match\nvalues in the edge table.  The linked column name is specified in the\ndomain array in the link graph.  The output graph will only contain\nvertices corresponding to a row in the vertex table.  For\nheterogeneous graphs, you may want to use vtkMergeTables to create a\nsingle vertex table.\n\nThe link graph contains the following arrays:\n\n(1) The \"column",
    "\" array has the names of the columns to connect in\neach table row. This array is required.\n\n(2) The optional \"domain\" array provides user-defined domain names\nfor each column. Matching domains in multiple columns will merge\nvertices with the same value from those columns.  By default, all\ncolumns are in the same domain. If a vertex table is supplied, the\ndomain indicates the column in the vertex t",
    "able that the edge table\ncolumn associates with.  If the user provides a vertex table but no\ndomain names, the output will be an empty graph. Hidden columns do\nnot need valid domain names.\n\n(3) The optional \"hidden\" array is a bit array specifying whether the\ncolumn should be hidden.  The resulting graph will contain edges\nrepresenting connections \"through\" the hidden column, but the\nvertices for ",
    "that column will not be present.  By default, no columns\nare hidden.  Hiding a column in a particular domain hides all columns\nin that domain.\n\nThe output graph will contain three additional arrays in the vertex\ndata. The \"domain\" column is a string array containing the domain of\neach vertex. The \"label\" column is a string version of the distinct\nvalue that, along with the domain, defines that ver",
    "tex. The \"ids\"\ncolumn also contains the distinguishing value, but as a vtkVariant\nholding the raw value instead of being converted to a string. The\n\"ids\" column is set as the vertex pedigree ID attribute.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

