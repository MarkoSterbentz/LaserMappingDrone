// python wrapper for vtkMergeGraphs
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeGraphs.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeGraphs(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeGraphsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkMergeGraphs_Doc();


static PyObject *
PyvtkMergeGraphs_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeGraphs::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeGraphs::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeGraphs *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeGraphs::NewInstance());

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
PyvtkMergeGraphs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeGraphs *tempr = vtkMergeGraphs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_ExtendGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  vtkMutableGraphHelper *temp0 = NULL;
  vtkGraph *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMutableGraphHelper") &&
      ap.GetVTKObject(temp1, "vtkGraph"))
    {
    int tempr = (ap.IsBound() ?
      op->ExtendGraph(temp0, temp1) :
      op->vtkMergeGraphs::ExtendGraph(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseEdgeWindow(temp0);
      }
    else
      {
      op->vtkMergeGraphs::SetUseEdgeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_GetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeWindow() :
      op->vtkMergeGraphs::GetUseEdgeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_UseEdgeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeWindowOn();
      }
    else
      {
      op->vtkMergeGraphs::UseEdgeWindowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_UseEdgeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeWindowOff();
      }
    else
      {
      op->vtkMergeGraphs::UseEdgeWindowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWindowArrayName(temp0);
      }
    else
      {
      op->vtkMergeGraphs::SetEdgeWindowArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_GetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWindowArrayName() :
      op->vtkMergeGraphs::GetEdgeWindowArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWindow(temp0);
      }
    else
      {
      op->vtkMergeGraphs::SetEdgeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeGraphs_GetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeWindow() :
      op->vtkMergeGraphs::GetEdgeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeGraphs_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeGraphs_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeGraphs_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeGraphs_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeGraphs\nC++: vtkMergeGraphs *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeGraphs_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeGraphs\nC++: vtkMergeGraphs *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ExtendGraph", PyvtkMergeGraphs_ExtendGraph, METH_VARARGS,
   (char*)"V.ExtendGraph(vtkMutableGraphHelper, vtkGraph) -> int\nC++: int ExtendGraph(vtkMutableGraphHelper *g1, vtkGraph *g2)\n\nThis is the core functionality of the algorithm. Adds edges and\nvertices from g2 into g1.\n"},
  {(char*)"SetUseEdgeWindow", PyvtkMergeGraphs_SetUseEdgeWindow, METH_VARARGS,
   (char*)"V.SetUseEdgeWindow(bool)\nC++: void SetUseEdgeWindow(bool a)\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"GetUseEdgeWindow", PyvtkMergeGraphs_GetUseEdgeWindow, METH_VARARGS,
   (char*)"V.GetUseEdgeWindow() -> bool\nC++: bool GetUseEdgeWindow()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"UseEdgeWindowOn", PyvtkMergeGraphs_UseEdgeWindowOn, METH_VARARGS,
   (char*)"V.UseEdgeWindowOn()\nC++: void UseEdgeWindowOn()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"UseEdgeWindowOff", PyvtkMergeGraphs_UseEdgeWindowOff, METH_VARARGS,
   (char*)"V.UseEdgeWindowOff()\nC++: void UseEdgeWindowOff()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"SetEdgeWindowArrayName", PyvtkMergeGraphs_SetEdgeWindowArrayName, METH_VARARGS,
   (char*)"V.SetEdgeWindowArrayName(string)\nC++: void SetEdgeWindowArrayName(char *)\n\nThe edge window array. The default array name is \"time\".\n"},
  {(char*)"GetEdgeWindowArrayName", PyvtkMergeGraphs_GetEdgeWindowArrayName, METH_VARARGS,
   (char*)"V.GetEdgeWindowArrayName() -> string\nC++: char *GetEdgeWindowArrayName()\n\nThe edge window array. The default array name is \"time\".\n"},
  {(char*)"SetEdgeWindow", PyvtkMergeGraphs_SetEdgeWindow, METH_VARARGS,
   (char*)"V.SetEdgeWindow(float)\nC++: void SetEdgeWindow(double a)\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {(char*)"GetEdgeWindow", PyvtkMergeGraphs_GetEdgeWindow, METH_VARARGS,
   (char*)"V.GetEdgeWindow() -> float\nC++: double GetEdgeWindow()\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeGraphs_StaticNew()
{
  return vtkMergeGraphs::New();
}

PyObject *PyVTKClass_vtkMergeGraphsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeGraphs_StaticNew,
    PyvtkMergeGraphs_Methods,
    "vtkMergeGraphs", modulename,
    NULL, NULL,
    PyvtkMergeGraphs_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeGraphs_Doc()
{
  static const char *docstring[] = {
    "vtkMergeGraphs - combines two graphs\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkMergeGraphs combines information from two graphs into one. Both\ngraphs must have pedigree ids assigned to the vertices. The output\nwill contain the vertices/edges in the first graph, in addition to:\n\n- vertices in the second graph whose pedigree id does not match a\n  vertex in the first input\n\n- edges in the second graph\n\nThe output will contain the same attribute structure as the input;\nfields",
    " associated only with the second input graph will not be passed\nto the output. When possible, the vertex/edge data for new vertices\nand edges will be populated with matching attributes on the second\ngraph. To be considered a matching attribute, the array must have the\nsame name, type, and number of components.\n\nCaveats:\n\nThis filter is not \"domain-aware\". Pedigree ids are assumed to be\nglobally un",
    "ique, regardless of their domain.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeGraphs(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeGraphsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeGraphs", o) != 0)
    {
    Py_DECREF(o);
    }

}

