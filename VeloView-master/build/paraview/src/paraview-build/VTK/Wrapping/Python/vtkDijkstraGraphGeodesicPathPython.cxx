// python wrapper for vtkDijkstraGraphGeodesicPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDijkstraGraphGeodesicPath.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDijkstraGraphGeodesicPath(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDijkstraGraphGeodesicPathNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphGeodesicPathNew
extern "C" { PyObject *PyVTKClass_vtkGraphGeodesicPathNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphGeodesicPathNew
#endif

static const char **PyvtkDijkstraGraphGeodesicPath_Doc();


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDijkstraGraphGeodesicPath::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDijkstraGraphGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDijkstraGraphGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDijkstraGraphGeodesicPath::NewInstance());

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
PyvtkDijkstraGraphGeodesicPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDijkstraGraphGeodesicPath *tempr = vtkDijkstraGraphGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetIdList() :
      op->vtkDijkstraGraphGeodesicPath::GetIdList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetStopWhenEndReached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStopWhenEndReached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStopWhenEndReached(temp0);
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::SetStopWhenEndReached(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetStopWhenEndReached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStopWhenEndReached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStopWhenEndReached() :
      op->vtkDijkstraGraphGeodesicPath::GetStopWhenEndReached());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopWhenEndReachedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopWhenEndReachedOn();
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::StopWhenEndReachedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopWhenEndReachedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StopWhenEndReachedOff();
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::StopWhenEndReachedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetUseScalarWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseScalarWeights(temp0);
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::SetUseScalarWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetUseScalarWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseScalarWeights() :
      op->vtkDijkstraGraphGeodesicPath::GetUseScalarWeights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScalarWeightsOn();
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::UseScalarWeightsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseScalarWeightsOff();
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::UseScalarWeightsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetRepelPathFromVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepelPathFromVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepelPathFromVertices(temp0);
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::SetRepelPathFromVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetRepelPathFromVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepelPathFromVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRepelPathFromVertices() :
      op->vtkDijkstraGraphGeodesicPath::GetRepelPathFromVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepelPathFromVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepelPathFromVerticesOn();
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::RepelPathFromVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepelPathFromVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepelPathFromVerticesOff();
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::RepelPathFromVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetRepelVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepelVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetRepelVertices(temp0);
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::SetRepelVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetRepelVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepelVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetRepelVertices() :
      op->vtkDijkstraGraphGeodesicPath::GetRepelVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetCumulativeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCumulativeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->GetCumulativeWeights(temp0);
      }
    else
      {
      op->vtkDijkstraGraphGeodesicPath::GetCumulativeWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDijkstraGraphGeodesicPath_Methods[] = {
  {(char*)"GetClassName", PyvtkDijkstraGraphGeodesicPath_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"IsA", PyvtkDijkstraGraphGeodesicPath_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"NewInstance", PyvtkDijkstraGraphGeodesicPath_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDijkstraGraphGeodesicPath\nC++: vtkDijkstraGraphGeodesicPath *NewInstance()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SafeDownCast", PyvtkDijkstraGraphGeodesicPath_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDijkstraGraphGeodesicPath\nC++: vtkDijkstraGraphGeodesicPath *SafeDownCast(vtkObject* o)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"GetIdList", PyvtkDijkstraGraphGeodesicPath_GetIdList, METH_VARARGS,
   (char*)"V.GetIdList() -> vtkIdList\nC++: vtkIdList *GetIdList()\n\nThe vertex ids (of the input polydata) on the shortest path\n"},
  {(char*)"SetStopWhenEndReached", PyvtkDijkstraGraphGeodesicPath_SetStopWhenEndReached, METH_VARARGS,
   (char*)"V.SetStopWhenEndReached(int)\nC++: void SetStopWhenEndReached(int a)\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {(char*)"GetStopWhenEndReached", PyvtkDijkstraGraphGeodesicPath_GetStopWhenEndReached, METH_VARARGS,
   (char*)"V.GetStopWhenEndReached() -> int\nC++: int GetStopWhenEndReached()\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {(char*)"StopWhenEndReachedOn", PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOn, METH_VARARGS,
   (char*)"V.StopWhenEndReachedOn()\nC++: void StopWhenEndReachedOn()\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {(char*)"StopWhenEndReachedOff", PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOff, METH_VARARGS,
   (char*)"V.StopWhenEndReachedOff()\nC++: void StopWhenEndReachedOff()\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {(char*)"SetUseScalarWeights", PyvtkDijkstraGraphGeodesicPath_SetUseScalarWeights, METH_VARARGS,
   (char*)"V.SetUseScalarWeights(int)\nC++: void SetUseScalarWeights(int a)\n\nUse scalar values in the edge weight (experimental)\n"},
  {(char*)"GetUseScalarWeights", PyvtkDijkstraGraphGeodesicPath_GetUseScalarWeights, METH_VARARGS,
   (char*)"V.GetUseScalarWeights() -> int\nC++: int GetUseScalarWeights()\n\nUse scalar values in the edge weight (experimental)\n"},
  {(char*)"UseScalarWeightsOn", PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOn, METH_VARARGS,
   (char*)"V.UseScalarWeightsOn()\nC++: void UseScalarWeightsOn()\n\nUse scalar values in the edge weight (experimental)\n"},
  {(char*)"UseScalarWeightsOff", PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOff, METH_VARARGS,
   (char*)"V.UseScalarWeightsOff()\nC++: void UseScalarWeightsOff()\n\nUse scalar values in the edge weight (experimental)\n"},
  {(char*)"SetRepelPathFromVertices", PyvtkDijkstraGraphGeodesicPath_SetRepelPathFromVertices, METH_VARARGS,
   (char*)"V.SetRepelPathFromVertices(int)\nC++: void SetRepelPathFromVertices(int a)\n\nUse the input point to repel the path by assigning high costs.\n"},
  {(char*)"GetRepelPathFromVertices", PyvtkDijkstraGraphGeodesicPath_GetRepelPathFromVertices, METH_VARARGS,
   (char*)"V.GetRepelPathFromVertices() -> int\nC++: int GetRepelPathFromVertices()\n\nUse the input point to repel the path by assigning high costs.\n"},
  {(char*)"RepelPathFromVerticesOn", PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOn, METH_VARARGS,
   (char*)"V.RepelPathFromVerticesOn()\nC++: void RepelPathFromVerticesOn()\n\nUse the input point to repel the path by assigning high costs.\n"},
  {(char*)"RepelPathFromVerticesOff", PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOff, METH_VARARGS,
   (char*)"V.RepelPathFromVerticesOff()\nC++: void RepelPathFromVerticesOff()\n\nUse the input point to repel the path by assigning high costs.\n"},
  {(char*)"SetRepelVertices", PyvtkDijkstraGraphGeodesicPath_SetRepelVertices, METH_VARARGS,
   (char*)"V.SetRepelVertices(vtkPoints)\nC++: virtual void SetRepelVertices(vtkPoints *)\n\nSpecify vtkPoints to use to repel the path from.\n"},
  {(char*)"GetRepelVertices", PyvtkDijkstraGraphGeodesicPath_GetRepelVertices, METH_VARARGS,
   (char*)"V.GetRepelVertices() -> vtkPoints\nC++: vtkPoints *GetRepelVertices()\n\nSpecify vtkPoints to use to repel the path from.\n"},
  {(char*)"GetCumulativeWeights", PyvtkDijkstraGraphGeodesicPath_GetCumulativeWeights, METH_VARARGS,
   (char*)"V.GetCumulativeWeights(vtkDoubleArray)\nC++: virtual void GetCumulativeWeights(vtkDoubleArray *weights)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDijkstraGraphGeodesicPath_StaticNew()
{
  return vtkDijkstraGraphGeodesicPath::New();
}

PyObject *PyVTKClass_vtkDijkstraGraphGeodesicPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDijkstraGraphGeodesicPath_StaticNew,
    PyvtkDijkstraGraphGeodesicPath_Methods,
    "vtkDijkstraGraphGeodesicPath", modulename,
    NULL, NULL,
    PyvtkDijkstraGraphGeodesicPath_Doc(),
    PyVTKClass_vtkGraphGeodesicPathNew(modulename));
  return cls;
}

const char **PyvtkDijkstraGraphGeodesicPath_Doc()
{
  static const char *docstring[] = {
    "vtkDijkstraGraphGeodesicPath - Dijkstra algorithm to compute the\ngraph geodesic.\n\n",
    "Superclass: vtkGraphGeodesicPath\n\n",
    "Takes as input a polygonal mesh and performs a single source shortest\npath calculation. Dijkstra's algorithm is used. The implementation is\nsimilar to the one described in Introduction to Algorithms (Second\nEdition) by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest,\nand Cliff Stein, published by MIT Press and McGraw-Hill. Some minor\nenhancement are added though. All vertices are not push",
    "ed on the heap\nat start, instead a front set is maintained. The heap is implemented\nas a binary heap. The output of the filter is a set of lines\ndescribing the shortest path from StartVertex to EndVertex.\n\nCaveats:\n\nThe input polydata must have only triangle cells.\n\nThanks:\n\nThe class was contributed by Rasmus Paulsen. www.imm.dtu.dk/~rrp/VTK\n. Also thanks to Alexandre Gouaillard and Shoaib Ghias ",
    "for bug fixes\nand enhancements.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDijkstraGraphGeodesicPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDijkstraGraphGeodesicPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDijkstraGraphGeodesicPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

