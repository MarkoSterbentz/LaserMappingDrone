// python wrapper for vtkDistributedGraphHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkDistributedGraphHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDistributedGraphHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDistributedGraphHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDistributedGraphHelper_Doc();


static PyObject *
PyvtkDistributedGraphHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDistributedGraphHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistributedGraphHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDistributedGraphHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistributedGraphHelper::NewInstance());

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
PyvtkDistributedGraphHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDistributedGraphHelper *tempr = vtkDistributedGraphHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetVertexOwner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexOwner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertexOwner(temp0) :
      op->vtkDistributedGraphHelper::GetVertexOwner(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetVertexIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertexIndex(temp0) :
      op->vtkDistributedGraphHelper::GetVertexIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetEdgeOwner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeOwner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEdgeOwner(temp0) :
      op->vtkDistributedGraphHelper::GetEdgeOwner(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetEdgeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEdgeIndex(temp0) :
      op->vtkDistributedGraphHelper::GetEdgeIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_MakeDistributedId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeDistributedId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->MakeDistributedId(temp0, temp1) :
      op->vtkDistributedGraphHelper::MakeDistributedId(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetVertexOwnerByPedigreeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexOwnerByPedigreeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertexOwnerByPedigreeId(*temp0) :
      op->vtkDistributedGraphHelper::GetVertexOwnerByPedigreeId(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_Synchronize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Synchronize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Synchronize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkDistributedGraphHelper *tempr = op->Clone();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_DISTRIBUTEDVERTEXIDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISTRIBUTEDVERTEXIDS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDistributedGraphHelper::DISTRIBUTEDVERTEXIDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_DISTRIBUTEDEDGEIDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISTRIBUTEDEDGEIDS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDistributedGraphHelper::DISTRIBUTEDEDGEIDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistributedGraphHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkDistributedGraphHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDistributedGraphHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDistributedGraphHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDistributedGraphHelper\nC++: vtkDistributedGraphHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDistributedGraphHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistributedGraphHelper\nC++: vtkDistributedGraphHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVertexOwner", PyvtkDistributedGraphHelper_GetVertexOwner, METH_VARARGS,
   (char*)"V.GetVertexOwner(int) -> int\nC++: vtkIdType GetVertexOwner(vtkIdType v)\n\nReturns owner of vertex v, by extracting top ceil(log2 P) bits of\nv.\n"},
  {(char*)"GetVertexIndex", PyvtkDistributedGraphHelper_GetVertexIndex, METH_VARARGS,
   (char*)"V.GetVertexIndex(int) -> int\nC++: vtkIdType GetVertexIndex(vtkIdType v)\n\nReturns local index of vertex v, by masking off top ceil(log2 P)\nbits of v.\n"},
  {(char*)"GetEdgeOwner", PyvtkDistributedGraphHelper_GetEdgeOwner, METH_VARARGS,
   (char*)"V.GetEdgeOwner(int) -> int\nC++: vtkIdType GetEdgeOwner(vtkIdType e_id)\n\nReturns owner of edge with ID e_id, by extracting top ceil(log2\nP) bits of e_id.\n"},
  {(char*)"GetEdgeIndex", PyvtkDistributedGraphHelper_GetEdgeIndex, METH_VARARGS,
   (char*)"V.GetEdgeIndex(int) -> int\nC++: vtkIdType GetEdgeIndex(vtkIdType e_id)\n\nReturns local index of edge with ID e_id, by masking off top\nceil(log2 P) bits of e_id.\n"},
  {(char*)"MakeDistributedId", PyvtkDistributedGraphHelper_MakeDistributedId, METH_VARARGS,
   (char*)"V.MakeDistributedId(int, int) -> int\nC++: vtkIdType MakeDistributedId(int owner, vtkIdType local)\n\nBuilds a distributed ID consisting of the given owner and the\nlocal ID.\n"},
  {(char*)"GetVertexOwnerByPedigreeId", PyvtkDistributedGraphHelper_GetVertexOwnerByPedigreeId, METH_VARARGS,
   (char*)"V.GetVertexOwnerByPedigreeId(vtkVariant) -> int\nC++: vtkIdType GetVertexOwnerByPedigreeId(\n    const vtkVariant &pedigreeId)\n\nDetermine which processor owns the vertex with the given pedigree\nID.\n"},
  {(char*)"Synchronize", PyvtkDistributedGraphHelper_Synchronize, METH_VARARGS,
   (char*)"V.Synchronize()\nC++: virtual void Synchronize()\n\nSynchronizes all of the processors involved in this distributed\ngraph, so that all processors have a consistent view of the\ndistributed graph for the computation that follows. This routine\nshould be invoked after adding new edges into the distributed\ngraph, so that other processors will see those edges (or their\ncorresponding back-edges).\n"},
  {(char*)"Clone", PyvtkDistributedGraphHelper_Clone, METH_VARARGS,
   (char*)"V.Clone() -> vtkDistributedGraphHelper\nC++: virtual vtkDistributedGraphHelper *Clone()\n\nClones the distributed graph helper, returning another\ndistributed graph helper of the same kind that can be used in\nanother vtkGraph.\n"},
  {(char*)"DISTRIBUTEDVERTEXIDS", PyvtkDistributedGraphHelper_DISTRIBUTEDVERTEXIDS, METH_VARARGS | METH_STATIC,
   (char*)"V.DISTRIBUTEDVERTEXIDS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DISTRIBUTEDVERTEXIDS()\n\nInformation Keys that distributed graphs can append to attribute\narrays to flag them as containing distributed IDs.  These can be\nused to let routines that migrate vertices (either repartitioning\nor collecting graphs to single nodes) to also modify the ids\ncontained in the attribute arrays to maintain consistency.\n"},
  {(char*)"DISTRIBUTEDEDGEIDS", PyvtkDistributedGraphHelper_DISTRIBUTEDEDGEIDS, METH_VARARGS | METH_STATIC,
   (char*)"V.DISTRIBUTEDEDGEIDS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DISTRIBUTEDEDGEIDS()\n\nInformation Keys that distributed graphs can append to attribute\narrays to flag them as containing distributed IDs.  These can be\nused to let routines that migrate vertices (either repartitioning\nor collecting graphs to single nodes) to also modify the ids\ncontained in the attribute arrays to maintain consistency.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDistributedGraphHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDistributedGraphHelper_Methods,
    "vtkDistributedGraphHelper", modulename,
    NULL, NULL,
    PyvtkDistributedGraphHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDistributedGraphHelper_Doc()
{
  static const char *docstring[] = {
    "vtkVertexPedigreeIdDistributionFunction - The type of a\n\n",
    "Superclass: vtkObject\n\n",
    "A distributed graph helper can be attached to an empty vtkGraph\nobject to turn the vtkGraph into a distributed graph, whose vertices\nand edges are distributed across several different processors.\nvtkDistributedGraphHelper is an abstract class. Use a subclass of\nvtkDistributedGraphHelper, such as vtkPBGLDistributedGraphHelper, to\nbuild distributed graphs.\n\nThe distributed graph helper provides faci",
    "lities used by vtkGraph to\ncommunicate with other processors that store other parts of the same\ndistributed graph. The only user-level functionality provided by\nvtkDistributedGraphHelper involves this communication among\nprocessors and the ability to map between \"distributed\" vertex and\nedge IDs and their component parts (processor and local index). For\nexample, the Synchronize() method provides a",
    " barrier that allows all\nprocessors to catch up to the same point in the code before any\nprocessor can leave that Synchronize() call. For example, one would\ncall Synchronize() after adding many edges to a distributed graph, so\nthat all processors can handle the addition of inter-processor edges\nand continue, after the Synchronize() call, with a consistent view of\nthe distributed graph. For more in",
    "formation about manipulating\n(distributed) graphs, see the vtkGraph documentation.\n\nSee Also:\n\nvtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistributedGraphHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistributedGraphHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistributedGraphHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

