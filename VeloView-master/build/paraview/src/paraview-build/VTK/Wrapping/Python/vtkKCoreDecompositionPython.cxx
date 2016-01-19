// python wrapper for vtkKCoreDecomposition
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkKCoreDecomposition.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkKCoreDecomposition(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkKCoreDecompositionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkKCoreDecomposition_Doc();


static PyObject *
PyvtkKCoreDecomposition_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkKCoreDecomposition::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKCoreDecomposition::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKCoreDecomposition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKCoreDecomposition::NewInstance());

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
PyvtkKCoreDecomposition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkKCoreDecomposition *tempr = vtkKCoreDecomposition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkKCoreDecomposition::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetUseInDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseInDegreeNeighbors(temp0);
      }
    else
      {
      op->vtkKCoreDecomposition::SetUseInDegreeNeighbors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_GetUseInDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseInDegreeNeighbors() :
      op->vtkKCoreDecomposition::GetUseInDegreeNeighbors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseInDegreeNeighborsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInDegreeNeighborsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInDegreeNeighborsOn();
      }
    else
      {
      op->vtkKCoreDecomposition::UseInDegreeNeighborsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseInDegreeNeighborsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInDegreeNeighborsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseInDegreeNeighborsOff();
      }
    else
      {
      op->vtkKCoreDecomposition::UseInDegreeNeighborsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetUseOutDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOutDegreeNeighbors(temp0);
      }
    else
      {
      op->vtkKCoreDecomposition::SetUseOutDegreeNeighbors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_GetUseOutDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOutDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOutDegreeNeighbors() :
      op->vtkKCoreDecomposition::GetUseOutDegreeNeighbors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseOutDegreeNeighborsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOutDegreeNeighborsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOutDegreeNeighborsOn();
      }
    else
      {
      op->vtkKCoreDecomposition::UseOutDegreeNeighborsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseOutDegreeNeighborsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOutDegreeNeighborsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOutDegreeNeighborsOff();
      }
    else
      {
      op->vtkKCoreDecomposition::UseOutDegreeNeighborsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetCheckInputGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckInputGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCheckInputGraph(temp0);
      }
    else
      {
      op->vtkKCoreDecomposition::SetCheckInputGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_GetCheckInputGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckInputGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCheckInputGraph() :
      op->vtkKCoreDecomposition::GetCheckInputGraph());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_CheckInputGraphOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInputGraphOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckInputGraphOn();
      }
    else
      {
      op->vtkKCoreDecomposition::CheckInputGraphOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_CheckInputGraphOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInputGraphOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckInputGraphOff();
      }
    else
      {
      op->vtkKCoreDecomposition::CheckInputGraphOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKCoreDecomposition_Methods[] = {
  {(char*)"GetClassName", PyvtkKCoreDecomposition_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKCoreDecomposition_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKCoreDecomposition_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkKCoreDecomposition\nC++: vtkKCoreDecomposition *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKCoreDecomposition_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKCoreDecomposition\nC++: vtkKCoreDecomposition *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputArrayName", PyvtkKCoreDecomposition_SetOutputArrayName, METH_VARARGS,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nSet the output array name. If no output array name is set then\nthe name 'KCoreDecompositionNumbers' is used.\n"},
  {(char*)"SetUseInDegreeNeighbors", PyvtkKCoreDecomposition_SetUseInDegreeNeighbors, METH_VARARGS,
   (char*)"V.SetUseInDegreeNeighbors(bool)\nC++: void SetUseInDegreeNeighbors(bool a)\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"GetUseInDegreeNeighbors", PyvtkKCoreDecomposition_GetUseInDegreeNeighbors, METH_VARARGS,
   (char*)"V.GetUseInDegreeNeighbors() -> bool\nC++: bool GetUseInDegreeNeighbors()\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"UseInDegreeNeighborsOn", PyvtkKCoreDecomposition_UseInDegreeNeighborsOn, METH_VARARGS,
   (char*)"V.UseInDegreeNeighborsOn()\nC++: void UseInDegreeNeighborsOn()\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"UseInDegreeNeighborsOff", PyvtkKCoreDecomposition_UseInDegreeNeighborsOff, METH_VARARGS,
   (char*)"V.UseInDegreeNeighborsOff()\nC++: void UseInDegreeNeighborsOff()\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"SetUseOutDegreeNeighbors", PyvtkKCoreDecomposition_SetUseOutDegreeNeighbors, METH_VARARGS,
   (char*)"V.SetUseOutDegreeNeighbors(bool)\nC++: void SetUseOutDegreeNeighbors(bool a)\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"GetUseOutDegreeNeighbors", PyvtkKCoreDecomposition_GetUseOutDegreeNeighbors, METH_VARARGS,
   (char*)"V.GetUseOutDegreeNeighbors() -> bool\nC++: bool GetUseOutDegreeNeighbors()\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"UseOutDegreeNeighborsOn", PyvtkKCoreDecomposition_UseOutDegreeNeighborsOn, METH_VARARGS,
   (char*)"V.UseOutDegreeNeighborsOn()\nC++: void UseOutDegreeNeighborsOn()\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"UseOutDegreeNeighborsOff", PyvtkKCoreDecomposition_UseOutDegreeNeighborsOff, METH_VARARGS,
   (char*)"V.UseOutDegreeNeighborsOff()\nC++: void UseOutDegreeNeighborsOff()\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {(char*)"SetCheckInputGraph", PyvtkKCoreDecomposition_SetCheckInputGraph, METH_VARARGS,
   (char*)"V.SetCheckInputGraph(bool)\nC++: void SetCheckInputGraph(bool a)\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {(char*)"GetCheckInputGraph", PyvtkKCoreDecomposition_GetCheckInputGraph, METH_VARARGS,
   (char*)"V.GetCheckInputGraph() -> bool\nC++: bool GetCheckInputGraph()\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {(char*)"CheckInputGraphOn", PyvtkKCoreDecomposition_CheckInputGraphOn, METH_VARARGS,
   (char*)"V.CheckInputGraphOn()\nC++: void CheckInputGraphOn()\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {(char*)"CheckInputGraphOff", PyvtkKCoreDecomposition_CheckInputGraphOff, METH_VARARGS,
   (char*)"V.CheckInputGraphOff()\nC++: void CheckInputGraphOff()\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKCoreDecomposition_StaticNew()
{
  return vtkKCoreDecomposition::New();
}

PyObject *PyVTKClass_vtkKCoreDecompositionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKCoreDecomposition_StaticNew,
    PyvtkKCoreDecomposition_Methods,
    "vtkKCoreDecomposition", modulename,
    NULL, NULL,
    PyvtkKCoreDecomposition_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkKCoreDecomposition_Doc()
{
  static const char *docstring[] = {
    "vtkKCoreDecomposition - Compute the k-core decomposition of the input\ngraph.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "The k-core decomposition is a graph partitioning strategy that is\nuseful for analyzing the structure of large networks. A k-core of a\ngraph G is a maximal connected subgraph of G in which all vertices\nhave degree at least k.  The k-core membership for each vertex of the\ninput graph is found on the vertex data of the output graph as an\narray named 'KCoreDecompositionNumbers' by default.  The algori",
    "thm\nused to find the k-cores has O(number of graph edges) running time,\nand is described in the following reference paper.\n\nAn O(m) Algorithm for Cores Decomposition of Networks\n  V. Batagelj, M. Zaversnik, 2001\n\nThanks:\n\nThanks to Thomas Otahal from Sandia National Laboratories for\nproviding this implementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKCoreDecomposition(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKCoreDecompositionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKCoreDecomposition", o) != 0)
    {
    Py_DECREF(o);
    }

}

