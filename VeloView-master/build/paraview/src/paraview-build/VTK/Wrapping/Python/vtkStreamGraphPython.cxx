// python wrapper for vtkStreamGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreamGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkStreamGraph_Doc();


static PyObject *
PyvtkStreamGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamGraph::NewInstance());

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
PyvtkStreamGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamGraph *tempr = vtkStreamGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

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
      op->vtkStreamGraph::SetUseEdgeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeWindow() :
      op->vtkStreamGraph::GetUseEdgeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_UseEdgeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeWindowOn();
      }
    else
      {
      op->vtkStreamGraph::UseEdgeWindowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_UseEdgeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeWindowOff();
      }
    else
      {
      op->vtkStreamGraph::UseEdgeWindowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

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
      op->vtkStreamGraph::SetEdgeWindowArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWindowArrayName() :
      op->vtkStreamGraph::GetEdgeWindowArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

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
      op->vtkStreamGraph::SetEdgeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetEdgeWindow() :
      op->vtkStreamGraph::GetEdgeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamGraph\nC++: vtkStreamGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamGraph\nC++: vtkStreamGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUseEdgeWindow", PyvtkStreamGraph_SetUseEdgeWindow, METH_VARARGS,
   (char*)"V.SetUseEdgeWindow(bool)\nC++: void SetUseEdgeWindow(bool a)\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"GetUseEdgeWindow", PyvtkStreamGraph_GetUseEdgeWindow, METH_VARARGS,
   (char*)"V.GetUseEdgeWindow() -> bool\nC++: bool GetUseEdgeWindow()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"UseEdgeWindowOn", PyvtkStreamGraph_UseEdgeWindowOn, METH_VARARGS,
   (char*)"V.UseEdgeWindowOn()\nC++: void UseEdgeWindowOn()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"UseEdgeWindowOff", PyvtkStreamGraph_UseEdgeWindowOff, METH_VARARGS,
   (char*)"V.UseEdgeWindowOff()\nC++: void UseEdgeWindowOff()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"SetEdgeWindowArrayName", PyvtkStreamGraph_SetEdgeWindowArrayName, METH_VARARGS,
   (char*)"V.SetEdgeWindowArrayName(string)\nC++: void SetEdgeWindowArrayName(char *)\n\nThe edge window array. The default array name is \"time\".\n"},
  {(char*)"GetEdgeWindowArrayName", PyvtkStreamGraph_GetEdgeWindowArrayName, METH_VARARGS,
   (char*)"V.GetEdgeWindowArrayName() -> string\nC++: char *GetEdgeWindowArrayName()\n\nThe edge window array. The default array name is \"time\".\n"},
  {(char*)"SetEdgeWindow", PyvtkStreamGraph_SetEdgeWindow, METH_VARARGS,
   (char*)"V.SetEdgeWindow(float)\nC++: void SetEdgeWindow(double a)\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {(char*)"GetEdgeWindow", PyvtkStreamGraph_GetEdgeWindow, METH_VARARGS,
   (char*)"V.GetEdgeWindow() -> float\nC++: double GetEdgeWindow()\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamGraph_StaticNew()
{
  return vtkStreamGraph::New();
}

PyObject *PyVTKClass_vtkStreamGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamGraph_StaticNew,
    PyvtkStreamGraph_Methods,
    "vtkStreamGraph", modulename,
    NULL, NULL,
    PyvtkStreamGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStreamGraph_Doc()
{
  static const char *docstring[] = {
    "vtkStreamGraph - combines two graphs\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkStreamGraph iteratively collects information from the input graph\nand combines it in the output graph. It internally maintains a graph\ninstance that is incrementally updated every time the filter is\ncalled.\n\nEach update, vtkMergeGraphs is used to combine this filter's input\nwith the internal graph.\n\nIf you can use an edge window array to filter out old edges based on\na moving threshold.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

