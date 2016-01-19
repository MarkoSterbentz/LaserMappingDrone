// python wrapper for vtkInEdgeIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkInEdgeIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInEdgeIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInEdgeIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInEdgeIterator_Doc();


static PyObject *
PyvtkInEdgeIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInEdgeIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInEdgeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInEdgeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInEdgeIterator::NewInstance());

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
PyvtkInEdgeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInEdgeIterator *tempr = vtkInEdgeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  vtkGraph *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkInEdgeIterator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkInEdgeIterator::GetGraph());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertex() :
      op->vtkInEdgeIterator::GetVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_NextGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->NextGraphEdge() :
      op->vtkInEdgeIterator::NextGraphEdge());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasNext() :
      op->vtkInEdgeIterator::HasNext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInEdgeIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkInEdgeIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInEdgeIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInEdgeIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInEdgeIterator\nC++: vtkInEdgeIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInEdgeIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInEdgeIterator\nC++: vtkInEdgeIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkInEdgeIterator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkGraph, int)\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {(char*)"GetGraph", PyvtkInEdgeIterator_GetGraph, METH_VARARGS,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"GetVertex", PyvtkInEdgeIterator_GetVertex, METH_VARARGS,
   (char*)"V.GetVertex() -> int\nC++: vtkIdType GetVertex()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"NextGraphEdge", PyvtkInEdgeIterator_NextGraphEdge, METH_VARARGS,
   (char*)"V.NextGraphEdge() -> vtkGraphEdge\nC++: vtkGraphEdge *NextGraphEdge()\n\nJust like Next(), but returns heavy-weight vtkGraphEdge object\ninstead of the vtkEdgeType struct, for use with wrappers. The\ngraph edge is owned by this iterator, and changes after each call\nto NextGraphEdge().\n"},
  {(char*)"HasNext", PyvtkInEdgeIterator_HasNext, METH_VARARGS,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInEdgeIterator_StaticNew()
{
  return vtkInEdgeIterator::New();
}

PyObject *PyVTKClass_vtkInEdgeIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInEdgeIterator_StaticNew,
    PyvtkInEdgeIterator_Methods,
    "vtkInEdgeIterator", modulename,
    NULL, NULL,
    PyvtkInEdgeIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInEdgeIterator_Doc()
{
  static const char *docstring[] = {
    "vtkInEdgeIterator - Iterates through all incoming edges to a vertex.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInEdgeIterator iterates through all edges whose target is a\nparticular vertex. Instantiate this class directly and call\nInitialize() to traverse the vertex of a graph. Alternately, use\nGetInEdges() on the graph to initialize the iterator. it->Next()\nreturns a vtkInEdgeType structure, which contains Id, the edge's id, and Source, the\nedge's source vertex.\n\nSee Also:\n\nvtkGraph vtkOutEdgeIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInEdgeIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInEdgeIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInEdgeIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

