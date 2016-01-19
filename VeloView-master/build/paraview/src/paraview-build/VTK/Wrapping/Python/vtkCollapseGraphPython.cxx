// python wrapper for vtkCollapseGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCollapseGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCollapseGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCollapseGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkCollapseGraph_Doc();


static PyObject *
PyvtkCollapseGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCollapseGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollapseGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollapseGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollapseGraph::NewInstance());

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
PyvtkCollapseGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCollapseGraph *tempr = vtkCollapseGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGraphConnection(temp0);
      }
    else
      {
      op->vtkCollapseGraph::SetGraphConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkCollapseGraph::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCollapseGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkCollapseGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollapseGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollapseGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCollapseGraph\nC++: vtkCollapseGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollapseGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollapseGraph\nC++: vtkCollapseGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraphConnection", PyvtkCollapseGraph_SetGraphConnection, METH_VARARGS,
   (char*)"V.SetGraphConnection(vtkAlgorithmOutput)\nC++: void SetGraphConnection(vtkAlgorithmOutput *)\n\n"},
  {(char*)"SetSelectionConnection", PyvtkCollapseGraph_SetSelectionConnection, METH_VARARGS,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollapseGraph_StaticNew()
{
  return vtkCollapseGraph::New();
}

PyObject *PyVTKClass_vtkCollapseGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollapseGraph_StaticNew,
    PyvtkCollapseGraph_Methods,
    "vtkCollapseGraph", modulename,
    NULL, NULL,
    PyvtkCollapseGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCollapseGraph_Doc()
{
  static const char *docstring[] = {
    "vtkCollapseGraph - \"Collapses\" vertices onto their neighbors.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkCollapseGraph \"collapses\" vertices onto their neighbors, while\nmaintaining connectivity.  Two inputs are required - a graph\n(directed or undirected), and a vertex selection that can be\nconverted to indices.\n\nConceptually, each of the vertices specified in the input selection\nexpands, \"swallowing\" adacent vertices.  Edges to-or-from the\n\"swallowed\" vertices become edges to-or-from the expanding ",
    "vertices,\nmaintaining the overall graph connectivity.\n\nIn the case of directed graphs, expanding vertices only swallow\nvertices that are connected via out edges.  This rule provides\nintuitive behavior when working with trees, so that \"child\" vertices\ncollapse into their parents when the parents are part of the input\nselection.\n\nInput port 0: graph Input port 1: selection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollapseGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollapseGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollapseGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

