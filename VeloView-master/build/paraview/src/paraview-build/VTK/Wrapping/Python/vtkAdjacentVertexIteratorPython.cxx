// python wrapper for vtkAdjacentVertexIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAdjacentVertexIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAdjacentVertexIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAdjacentVertexIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAdjacentVertexIterator_Doc();


static PyObject *
PyvtkAdjacentVertexIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAdjacentVertexIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAdjacentVertexIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAdjacentVertexIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAdjacentVertexIterator::NewInstance());

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
PyvtkAdjacentVertexIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAdjacentVertexIterator *tempr = vtkAdjacentVertexIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      op->vtkAdjacentVertexIterator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkAdjacentVertexIterator::GetGraph());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertex() :
      op->vtkAdjacentVertexIterator::GetVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->Next() :
      op->vtkAdjacentVertexIterator::Next());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasNext() :
      op->vtkAdjacentVertexIterator::HasNext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAdjacentVertexIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkAdjacentVertexIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAdjacentVertexIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAdjacentVertexIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAdjacentVertexIterator\nC++: vtkAdjacentVertexIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAdjacentVertexIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAdjacentVertexIterator\nC++: vtkAdjacentVertexIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkAdjacentVertexIterator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkGraph, int)\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {(char*)"GetGraph", PyvtkAdjacentVertexIterator_GetGraph, METH_VARARGS,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"GetVertex", PyvtkAdjacentVertexIterator_GetVertex, METH_VARARGS,
   (char*)"V.GetVertex() -> int\nC++: vtkIdType GetVertex()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"Next", PyvtkAdjacentVertexIterator_Next, METH_VARARGS,
   (char*)"V.Next() -> int\nC++: vtkIdType Next()\n\nReturns the next edge in the graph.\n"},
  {(char*)"HasNext", PyvtkAdjacentVertexIterator_HasNext, METH_VARARGS,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAdjacentVertexIterator_StaticNew()
{
  return vtkAdjacentVertexIterator::New();
}

PyObject *PyVTKClass_vtkAdjacentVertexIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAdjacentVertexIterator_StaticNew,
    PyvtkAdjacentVertexIterator_Methods,
    "vtkAdjacentVertexIterator", modulename,
    NULL, NULL,
    PyvtkAdjacentVertexIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAdjacentVertexIterator_Doc()
{
  static const char *docstring[] = {
    "vtkAdjacentVertexIterator - Iterates through adjacent vertices in a\ngraph.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAdjacentVertexIterator iterates through all vertices adjacent to a\nvertex, i.e. the vertices which may be reached by traversing an out\nedge of the source vertex. Use graph->GetAdjacentVertices(v, it) to\ninitialize the iterator.\n\nSee Also:\n\nThanks:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAdjacentVertexIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAdjacentVertexIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAdjacentVertexIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

