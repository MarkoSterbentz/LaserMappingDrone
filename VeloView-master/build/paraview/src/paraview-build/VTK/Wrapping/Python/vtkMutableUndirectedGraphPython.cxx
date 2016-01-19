// python wrapper for vtkMutableUndirectedGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkGraph.h"
#include "vtkMutableUndirectedGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMutableUndirectedGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMutableUndirectedGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphNew
#endif

static const char **PyvtkMutableUndirectedGraph_Doc();


static PyObject *
PyvtkMutableUndirectedGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMutableUndirectedGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutableUndirectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMutableUndirectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutableUndirectedGraph::NewInstance());

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
PyvtkMutableUndirectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMutableUndirectedGraph *tempr = vtkMutableUndirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetNumberOfVertices(temp0) :
      op->vtkMutableUndirectedGraph::SetNumberOfVertices(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_AddVertex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex() :
      op->vtkMutableUndirectedGraph::AddVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariantArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(temp0) :
      op->vtkMutableUndirectedGraph::AddVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_AddVertex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(*temp0) :
      op->vtkMutableUndirectedGraph::AddVertex(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_AddVertex_Methods[] = {
  {NULL, PyvtkMutableUndirectedGraph_AddVertex_s2, METH_VARARGS,
   (char*)"@O *vtkVariantArray"},
  {NULL, PyvtkMutableUndirectedGraph_AddVertex_s3, METH_VARARGS,
   (char*)"@O &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMutableUndirectedGraph_AddVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_AddVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMutableUndirectedGraph_AddVertex_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddVertex");
  return NULL;
}



static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LazyAddVertex();
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariantArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      op->LazyAddVertex(temp0);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->LazyAddVertex(*temp0);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddVertex(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_LazyAddVertex_Methods[] = {
  {NULL, PyvtkMutableUndirectedGraph_LazyAddVertex_s2, METH_VARARGS,
   (char*)"@O *vtkVariantArray"},
  {NULL, PyvtkMutableUndirectedGraph_LazyAddVertex_s3, METH_VARARGS,
   (char*)"@O &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_LazyAddVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMutableUndirectedGraph_LazyAddVertex_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LazyAddVertex");
  return NULL;
}



static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->LazyAddEdge(temp0, temp1);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddEdge(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariantArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      op->LazyAddEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdType temp1;
  vtkVariantArray *temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
    {
    if (ap.IsBound())
      {
      op->LazyAddEdge(*temp0, temp1, temp2);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddEdge(*temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkVariantArray *temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
    {
    if (ap.IsBound())
      {
      op->LazyAddEdge(temp0, *temp1, temp2);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddEdge(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkVariantArray *temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
    {
    if (ap.IsBound())
      {
      op->LazyAddEdge(*temp0, *temp1, temp2);
      }
    else
      {
      op->vtkMutableUndirectedGraph::LazyAddEdge(*temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_LazyAddEdge_Methods[] = {
  {NULL, PyvtkMutableUndirectedGraph_LazyAddEdge_s1, METH_VARARGS,
   (char*)"@LL"},
  {NULL, PyvtkMutableUndirectedGraph_LazyAddEdge_s2, METH_VARARGS,
   (char*)"@LLO *vtkVariantArray"},
  {NULL, PyvtkMutableUndirectedGraph_LazyAddEdge_s3, METH_VARARGS,
   (char*)"@OL|O &vtkVariant *vtkVariantArray"},
  {NULL, PyvtkMutableUndirectedGraph_LazyAddEdge_s4, METH_VARARGS,
   (char*)"@LO|O &vtkVariant *vtkVariantArray"},
  {NULL, PyvtkMutableUndirectedGraph_LazyAddEdge_s5, METH_VARARGS,
   (char*)"@OO|O &vtkVariant &vtkVariant *vtkVariantArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMutableUndirectedGraph_LazyAddEdge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableUndirectedGraph_LazyAddEdge_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LazyAddEdge");
  return NULL;
}



static PyObject *
PyvtkMutableUndirectedGraph_AddGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->AddGraphEdge(temp0, temp1) :
      op->vtkMutableUndirectedGraph::AddGraphEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

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
      op->vtkMutableUndirectedGraph::RemoveVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

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
      op->vtkMutableUndirectedGraph::RemoveEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

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
      op->vtkMutableUndirectedGraph::RemoveVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableUndirectedGraph_RemoveEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableUndirectedGraph *op = static_cast<vtkMutableUndirectedGraph *>(vp);

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
      op->vtkMutableUndirectedGraph::RemoveEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMutableUndirectedGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkMutableUndirectedGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMutableUndirectedGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMutableUndirectedGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMutableUndirectedGraph\nC++: vtkMutableUndirectedGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMutableUndirectedGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMutableUndirectedGraph\nC++: vtkMutableUndirectedGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfVertices", PyvtkMutableUndirectedGraph_SetNumberOfVertices, METH_VARARGS,
   (char*)"V.SetNumberOfVertices(int) -> int\nC++: virtual vtkIdType SetNumberOfVertices(vtkIdType numVerts)\n\nAllocates space for the specified number of vertices in the\ngraph's internal data structures. The previous number of vertices\nis returned on success and -1 is returned on failure.\n\nThis has no effect on the number of vertex coordinate tuples or\nvertex attribute tuples allocated; you are responsible for\nguaranteeing these match. Also, this call is not implemented for\ndistributed-memory graphs since the semantics are unclear;\ncalling this function on a graph with a non-NULL\nDistributedGraphHelper will generate an error message, no\nallocation will be performed, and a value of -1 will be returned.\n"},
  {(char*)"AddVertex", PyvtkMutableUndirectedGraph_AddVertex, METH_VARARGS,
   (char*)"V.AddVertex() -> int\nC++: vtkIdType AddVertex()\nV.AddVertex(vtkVariantArray) -> int\nC++: vtkIdType AddVertex(vtkVariantArray *propertyArr)\nV.AddVertex(vtkVariant) -> int\nC++: vtkIdType AddVertex(const vtkVariant &pedigreeId)\n\nAdds a vertex to the graph and returns the index of the new\nvertex.\n\note In a distributed graph (i.e. a graph whose DistributedHelper\nis non-null), this routine cannot be used to add a vertex if the\nvertices in the graph have pedigree IDs, because this routine\nwill always add the vertex locally, which may conflict with the\nproper location of the vertex based on the distribution of the\npedigree IDs.\n"},
  {(char*)"LazyAddVertex", PyvtkMutableUndirectedGraph_LazyAddVertex, METH_VARARGS,
   (char*)"V.LazyAddVertex()\nC++: void LazyAddVertex()\nV.LazyAddVertex(vtkVariantArray)\nC++: void LazyAddVertex(vtkVariantArray *propertyArr)\nV.LazyAddVertex(vtkVariant)\nC++: void LazyAddVertex(const vtkVariant &pedigreeId)\n\nAdds a vertex to the graph.\n\nThis method is lazily evaluated for distributed graphs (i.e.\ngraphs whose DistributedHelper is non-null) the next time\nSynchronize is called on the helper.\n"},
  {(char*)"LazyAddEdge", PyvtkMutableUndirectedGraph_LazyAddEdge, METH_VARARGS,
   (char*)"V.LazyAddEdge(int, int)\nC++: void LazyAddEdge(vtkIdType u, vtkIdType v)\nV.LazyAddEdge(int, int, vtkVariantArray)\nC++: void LazyAddEdge(vtkIdType u, vtkIdType v,\n    vtkVariantArray *propertyArr)\nV.LazyAddEdge(vtkVariant, int, vtkVariantArray)\nC++: void LazyAddEdge(const vtkVariant &u, vtkIdType v,\n    vtkVariantArray *propertyArr=0)\nV.LazyAddEdge(int, vtkVariant, vtkVariantArray)\nC++: void LazyAddEdge(vtkIdType u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=0)\nV.LazyAddEdge(vtkVariant, vtkVariant, vtkVariantArray)\nC++: void LazyAddEdge(const vtkVariant &u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=0)\n\nAdds an undirected edge from u to v, where u and v are vertex\nindices.\n\nThis method is lazily evaluated for distributed graphs (i.e.\ngraphs whose DistributedHelper is non-null) the next time\nSynchronize is called on the helper.\n"},
  {(char*)"AddGraphEdge", PyvtkMutableUndirectedGraph_AddGraphEdge, METH_VARARGS,
   (char*)"V.AddGraphEdge(int, int) -> vtkGraphEdge\nC++: vtkGraphEdge *AddGraphEdge(vtkIdType u, vtkIdType v)\n\nVariant of AddEdge() that returns a heavyweight vtkGraphEdge\nobject. The graph owns the reference of the edge and will replace\nits contents on the next call to AddGraphEdge().\n\note This is a less efficient method for use with wrappers. In C++\nyou should use the faster AddEdge().\n"},
  {(char*)"RemoveVertex", PyvtkMutableUndirectedGraph_RemoveVertex, METH_VARARGS,
   (char*)"V.RemoveVertex(int)\nC++: void RemoveVertex(vtkIdType v)\n\nRemoves the vertex from the graph along with any connected edges.\nNote: This invalidates the last vertex index, which is reassigned\nto v.\n"},
  {(char*)"RemoveEdge", PyvtkMutableUndirectedGraph_RemoveEdge, METH_VARARGS,
   (char*)"V.RemoveEdge(int)\nC++: void RemoveEdge(vtkIdType e)\n\nRemoves the edge from the graph. Note: This invalidates the last\nedge index, which is reassigned to e.\n"},
  {(char*)"RemoveVertices", PyvtkMutableUndirectedGraph_RemoveVertices, METH_VARARGS,
   (char*)"V.RemoveVertices(vtkIdTypeArray)\nC++: void RemoveVertices(vtkIdTypeArray *arr)\n\nRemoves a collection of vertices from the graph along with any\nconnected edges.\n"},
  {(char*)"RemoveEdges", PyvtkMutableUndirectedGraph_RemoveEdges, METH_VARARGS,
   (char*)"V.RemoveEdges(vtkIdTypeArray)\nC++: void RemoveEdges(vtkIdTypeArray *arr)\n\nRemoves a collection of edges from the graph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMutableUndirectedGraph_StaticNew()
{
  return vtkMutableUndirectedGraph::New();
}

PyObject *PyVTKClass_vtkMutableUndirectedGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMutableUndirectedGraph_StaticNew,
    PyvtkMutableUndirectedGraph_Methods,
    "vtkMutableUndirectedGraph", modulename,
    NULL, NULL,
    PyvtkMutableUndirectedGraph_Doc(),
    PyVTKClass_vtkUndirectedGraphNew(modulename));
  return cls;
}

const char **PyvtkMutableUndirectedGraph_Doc()
{
  static const char *docstring[] = {
    "vtkMutableUndirectedGraph - An editable undirected graph.\n\n",
    "Superclass: vtkUndirectedGraph\n\n",
    "vtkMutableUndirectedGraph is an undirected graph with additional\nfunctions for adding vertices and edges. ShallowCopy(), DeepCopy(),\nCheckedShallowCopy(), and CheckedDeepCopy() will succeed when the\nargument is a vtkUndirectedGraph or vtkMutableUndirectedGraph.\n\nSee Also:\n\nvtkUndirectedGraph vtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMutableUndirectedGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMutableUndirectedGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMutableUndirectedGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

