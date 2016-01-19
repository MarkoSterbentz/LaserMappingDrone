// python wrapper for vtkMutableDirectedGraph
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
#include "vtkMutableDirectedGraph.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMutableDirectedGraph(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMutableDirectedGraphNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDirectedGraphNew
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedGraphNew
#endif

static const char **PyvtkMutableDirectedGraph_Doc();


static PyObject *
PyvtkMutableDirectedGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMutableDirectedGraph::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutableDirectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMutableDirectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutableDirectedGraph::NewInstance());

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
PyvtkMutableDirectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMutableDirectedGraph *tempr = vtkMutableDirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetNumberOfVertices(temp0) :
      op->vtkMutableDirectedGraph::SetNumberOfVertices(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_AddVertex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex() :
      op->vtkMutableDirectedGraph::AddVertex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_AddVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkVariantArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(temp0) :
      op->vtkMutableDirectedGraph::AddVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_AddVertex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(*temp0) :
      op->vtkMutableDirectedGraph::AddVertex(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMutableDirectedGraph_AddVertex_Methods[] = {
  {NULL, PyvtkMutableDirectedGraph_AddVertex_s2, METH_VARARGS,
   (char*)"@O *vtkVariantArray"},
  {NULL, PyvtkMutableDirectedGraph_AddVertex_s3, METH_VARARGS,
   (char*)"@O &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMutableDirectedGraph_AddVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableDirectedGraph_AddVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMutableDirectedGraph_AddVertex_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddVertex");
  return NULL;
}



static PyObject *
PyvtkMutableDirectedGraph_LazyAddVertex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LazyAddVertex();
      }
    else
      {
      op->vtkMutableDirectedGraph::LazyAddVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_LazyAddVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::LazyAddVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_LazyAddVertex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::LazyAddVertex(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMutableDirectedGraph_LazyAddVertex_Methods[] = {
  {NULL, PyvtkMutableDirectedGraph_LazyAddVertex_s2, METH_VARARGS,
   (char*)"@O *vtkVariantArray"},
  {NULL, PyvtkMutableDirectedGraph_LazyAddVertex_s3, METH_VARARGS,
   (char*)"@O &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMutableDirectedGraph_LazyAddVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableDirectedGraph_LazyAddVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMutableDirectedGraph_LazyAddVertex_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LazyAddVertex");
  return NULL;
}



static PyObject *
PyvtkMutableDirectedGraph_LazyAddEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariantArray *temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkVariantArray")))
    {
    if (ap.IsBound())
      {
      op->LazyAddEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMutableDirectedGraph::LazyAddEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_LazyAddEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::LazyAddEdge(*temp0, temp1, temp2);
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
PyvtkMutableDirectedGraph_LazyAddEdge_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::LazyAddEdge(temp0, *temp1, temp2);
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
PyvtkMutableDirectedGraph_LazyAddEdge_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyAddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::LazyAddEdge(*temp0, *temp1, temp2);
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

static PyMethodDef PyvtkMutableDirectedGraph_LazyAddEdge_Methods[] = {
  {NULL, PyvtkMutableDirectedGraph_LazyAddEdge_s1, METH_VARARGS,
   (char*)"@LL|O *vtkVariantArray"},
  {NULL, PyvtkMutableDirectedGraph_LazyAddEdge_s2, METH_VARARGS,
   (char*)"@OL|O &vtkVariant *vtkVariantArray"},
  {NULL, PyvtkMutableDirectedGraph_LazyAddEdge_s3, METH_VARARGS,
   (char*)"@LO|O &vtkVariant *vtkVariantArray"},
  {NULL, PyvtkMutableDirectedGraph_LazyAddEdge_s4, METH_VARARGS,
   (char*)"@OO|O &vtkVariant &vtkVariant *vtkVariantArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMutableDirectedGraph_LazyAddEdge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMutableDirectedGraph_LazyAddEdge_Methods;
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
PyvtkMutableDirectedGraph_AddGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->AddGraphEdge(temp0, temp1) :
      op->vtkMutableDirectedGraph::AddGraphEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_AddChild_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkIdType temp0;
  vtkVariantArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddChild(temp0, temp1) :
      op->vtkMutableDirectedGraph::AddChild(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_AddChild_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddChild(temp0) :
      op->vtkMutableDirectedGraph::AddChild(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMutableDirectedGraph_AddChild(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMutableDirectedGraph_AddChild_s1(self, args);
    case 1:
      return PyvtkMutableDirectedGraph_AddChild_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddChild");
  return NULL;
}



static PyObject *
PyvtkMutableDirectedGraph_RemoveVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::RemoveVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::RemoveEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_RemoveVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::RemoveVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableDirectedGraph_RemoveEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableDirectedGraph *op = static_cast<vtkMutableDirectedGraph *>(vp);

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
      op->vtkMutableDirectedGraph::RemoveEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMutableDirectedGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkMutableDirectedGraph_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMutableDirectedGraph_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMutableDirectedGraph_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMutableDirectedGraph\nC++: vtkMutableDirectedGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMutableDirectedGraph_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMutableDirectedGraph\nC++: vtkMutableDirectedGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfVertices", PyvtkMutableDirectedGraph_SetNumberOfVertices, METH_VARARGS,
   (char*)"V.SetNumberOfVertices(int) -> int\nC++: virtual vtkIdType SetNumberOfVertices(vtkIdType numVerts)\n\nAllocates space for the specified number of vertices in the\ngraph's internal data structures.\n\nThis has no effect on the number of vertex coordinate tuples or\nvertex attribute tuples allocated; you are responsible for\nguaranteeing these match. Also, this call is not implemented for\ndistributed-memory graphs since the semantics are unclear;\ncalling this function on a graph with a non-NULL\nDistributedGraphHelper will generate an error message and no\nallocation will be performed.\n"},
  {(char*)"AddVertex", PyvtkMutableDirectedGraph_AddVertex, METH_VARARGS,
   (char*)"V.AddVertex() -> int\nC++: vtkIdType AddVertex()\nV.AddVertex(vtkVariantArray) -> int\nC++: vtkIdType AddVertex(vtkVariantArray *propertyArr)\nV.AddVertex(vtkVariant) -> int\nC++: vtkIdType AddVertex(const vtkVariant &pedigreeId)\n\nAdds a vertex to the graph and returns the index of the new\nvertex.\n\note In a distributed graph (i.e. a graph whose DistributedHelper\nis non-null), this routine cannot be used to add a vertex if the\nvertices in the graph have pedigree IDs, because this routine\nwill always add the vertex locally, which may conflict with the\nproper location of the vertex based on the distribution of the\npedigree IDs.\n"},
  {(char*)"LazyAddVertex", PyvtkMutableDirectedGraph_LazyAddVertex, METH_VARARGS,
   (char*)"V.LazyAddVertex()\nC++: void LazyAddVertex()\nV.LazyAddVertex(vtkVariantArray)\nC++: void LazyAddVertex(vtkVariantArray *propertyArr)\nV.LazyAddVertex(vtkVariant)\nC++: void LazyAddVertex(const vtkVariant &pedigreeId)\n\nAdds a vertex to the graph.\n\nThis method is lazily evaluated for distributed graphs (i.e.\ngraphs whose DistributedHelper is non-null) the next time\nSynchronize is called on the helper.\n"},
  {(char*)"LazyAddEdge", PyvtkMutableDirectedGraph_LazyAddEdge, METH_VARARGS,
   (char*)"V.LazyAddEdge(int, int, vtkVariantArray)\nC++: void LazyAddEdge(vtkIdType u, vtkIdType v,\n    vtkVariantArray *propertyArr=0)\nV.LazyAddEdge(vtkVariant, int, vtkVariantArray)\nC++: void LazyAddEdge(const vtkVariant &u, vtkIdType v,\n    vtkVariantArray *propertyArr=0)\nV.LazyAddEdge(int, vtkVariant, vtkVariantArray)\nC++: void LazyAddEdge(vtkIdType u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=0)\nV.LazyAddEdge(vtkVariant, vtkVariant, vtkVariantArray)\nC++: void LazyAddEdge(const vtkVariant &u, const vtkVariant &v,\n    vtkVariantArray *propertyArr=0)\n\nAdds a directed edge from u to v, where u and v are vertex\nindices.\n\nThe number and order of values in the optional\nparameterpropertyArr must match up with the arrays in the edge\ndata retrieved by GetEdgeData().\n\nThis method is lazily evaluated for distributed graphs (i.e.\ngraphs whose DistributedHelper is non-null) the next time\nSynchronize is called on the helper.\n"},
  {(char*)"AddGraphEdge", PyvtkMutableDirectedGraph_AddGraphEdge, METH_VARARGS,
   (char*)"V.AddGraphEdge(int, int) -> vtkGraphEdge\nC++: vtkGraphEdge *AddGraphEdge(vtkIdType u, vtkIdType v)\n\nVariant of AddEdge() that returns a heavyweight vtkGraphEdge\nobject. The graph owns the reference of the edge and will replace\nits contents on the next call to AddGraphEdge().\n\note This is a less efficient method for use with wrappers. In C++\nyou should use the faster AddEdge().\n"},
  {(char*)"AddChild", PyvtkMutableDirectedGraph_AddChild, METH_VARARGS,
   (char*)"V.AddChild(int, vtkVariantArray) -> int\nC++: vtkIdType AddChild(vtkIdType parent,\n    vtkVariantArray *propertyArr)\nV.AddChild(int) -> int\nC++: vtkIdType AddChild(vtkIdType parent)\n\nConvenience method for creating trees. Returns the newly created\nvertex id. Shortcut forvtkIdType v = g->AddVertex();\ng->AddEdge(parent, v);\nIf non-null, propertyArr provides edge properties for the\nnewly-created edge. The values in propertyArr must match up with\nthe arrays in the edge data returned by GetEdgeData().\n"},
  {(char*)"RemoveVertex", PyvtkMutableDirectedGraph_RemoveVertex, METH_VARARGS,
   (char*)"V.RemoveVertex(int)\nC++: void RemoveVertex(vtkIdType v)\n\nRemoves the vertex from the graph along with any connected edges.\nNote: This invalidates the last vertex index, which is reassigned\nto v.\n"},
  {(char*)"RemoveEdge", PyvtkMutableDirectedGraph_RemoveEdge, METH_VARARGS,
   (char*)"V.RemoveEdge(int)\nC++: void RemoveEdge(vtkIdType e)\n\nRemoves the edge from the graph. Note: This invalidates the last\nedge index, which is reassigned to e.\n"},
  {(char*)"RemoveVertices", PyvtkMutableDirectedGraph_RemoveVertices, METH_VARARGS,
   (char*)"V.RemoveVertices(vtkIdTypeArray)\nC++: void RemoveVertices(vtkIdTypeArray *arr)\n\nRemoves a collection of vertices from the graph along with any\nconnected edges.\n"},
  {(char*)"RemoveEdges", PyvtkMutableDirectedGraph_RemoveEdges, METH_VARARGS,
   (char*)"V.RemoveEdges(vtkIdTypeArray)\nC++: void RemoveEdges(vtkIdTypeArray *arr)\n\nRemoves a collection of edges from the graph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMutableDirectedGraph_StaticNew()
{
  return vtkMutableDirectedGraph::New();
}

PyObject *PyVTKClass_vtkMutableDirectedGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMutableDirectedGraph_StaticNew,
    PyvtkMutableDirectedGraph_Methods,
    "vtkMutableDirectedGraph", modulename,
    NULL, NULL,
    PyvtkMutableDirectedGraph_Doc(),
    PyVTKClass_vtkDirectedGraphNew(modulename));
  return cls;
}

const char **PyvtkMutableDirectedGraph_Doc()
{
  static const char *docstring[] = {
    "vtkMutableDirectedGraph - An editable directed graph.\n\n",
    "Superclass: vtkDirectedGraph\n\n",
    "vtkMutableDirectedGraph is a directed graph which has additional\nmethods for adding edges and vertices. AddChild() is a convenience\nmethod for constructing trees. ShallowCopy(), DeepCopy(),\nCheckedShallowCopy() and CheckedDeepCopy() will succeed for instances\nof vtkDirectedGraph, vtkMutableDirectedGraph and vtkTree.\n\nSee Also:\n\nvtkDirectedGraph vtkGraph vtkTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMutableDirectedGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMutableDirectedGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMutableDirectedGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

