// python wrapper for vtkEdgeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEdgeTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEdgeTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEdgeTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEdgeTable_Doc();


static PyObject *
PyvtkEdgeTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEdgeTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEdgeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEdgeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEdgeTable::NewInstance());

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
PyvtkEdgeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEdgeTable *tempr = vtkEdgeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkEdgeTable::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_InitEdgeInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitEdgeInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->InitEdgeInsertion(temp0, temp1) :
      op->vtkEdgeTable::InitEdgeInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_InsertEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertEdge(temp0, temp1) :
      op->vtkEdgeTable::InsertEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEdgeTable_InsertEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkEdgeTable::InsertEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkEdgeTable_InsertEdge_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertEdge(temp0, temp1, temp2);
      }
    else
      {
      op->vtkEdgeTable::InsertEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeTable_InsertEdge_Methods[] = {
  {NULL, PyvtkEdgeTable_InsertEdge_s2, METH_VARARGS,
   (char*)"@LLL"},
  {NULL, PyvtkEdgeTable_InsertEdge_s3, METH_VARARGS,
   (char*)"@LLs#"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkEdgeTable_InsertEdge(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkEdgeTable_InsertEdge_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkEdgeTable_InsertEdge_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertEdge");
  return NULL;
}



static PyObject *
PyvtkEdgeTable_IsEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsEdge(temp0, temp1) :
      op->vtkEdgeTable::IsEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_InitPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkPoints *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->InitPointInsertion(temp0, temp1) :
      op->vtkEdgeTable::InitPointInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1, temp2, temp3) :
      op->vtkEdgeTable::InsertUniquePoint(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkEdgeTable::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkEdgeTable::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_GetNextEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNextEdge(temp0, temp1) :
      op->vtkEdgeTable::GetNextEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeTable_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeTable *op = static_cast<vtkEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkEdgeTable::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeTable_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEdgeTable\nC++: vtkEdgeTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEdgeTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEdgeTable\nC++: vtkEdgeTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkEdgeTable_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nFree memory and return to the initially instantiated state.\n"},
  {(char*)"InitEdgeInsertion", PyvtkEdgeTable_InitEdgeInsertion, METH_VARARGS,
   (char*)"V.InitEdgeInsertion(int, int) -> int\nC++: int InitEdgeInsertion(vtkIdType numPoints,\n    int storeAttributes=0)\n\nInitialize the edge insertion process. Provide an estimate of the\nnumber of points in a dataset (the maximum range value of p1 or\np2).  The storeAttributes variable controls whether attributes\nare to be stored with the edge, and what type of attributes. If\nstoreAttributes==1, then attributes of vtkIdType can be stored.\nIf storeAttributes==2, then attributes of type void* can be\nstored. In either case, additional memory will be required by the\ndata structure to store attribute data per each edge.  This\nmethod is used in conjunction with one of the three InsertEdge()\nmethods described below (don't mix the InsertEdge()\nmethods---make sure that the one used is consistent with the\nstoreAttributes flag set in InitEdgeInsertion()).\n"},
  {(char*)"InsertEdge", PyvtkEdgeTable_InsertEdge, METH_VARARGS,
   (char*)"V.InsertEdge(int, int) -> int\nC++: vtkIdType InsertEdge(vtkIdType p1, vtkIdType p2)\nV.InsertEdge(int, int, int)\nC++: void InsertEdge(vtkIdType p1, vtkIdType p2,\n    vtkIdType attributeId)\nV.InsertEdge(int, int, )\nC++: void InsertEdge(vtkIdType p1, vtkIdType p2, void *ptr)\n\nInsert the edge (p1,p2) into the table. It is the user's\nresponsibility to check if the edge has already been inserted\n(use IsEdge()). If the storeAttributes flag in\nInitEdgeInsertion() has been set, then the method returns a\nunique integer id (i.e., the edge id) that can be used to set and\nget edge attributes. Otherwise, the method will return 1. Do not\nmix this method with the InsertEdge() method that follows.\n"},
  {(char*)"IsEdge", PyvtkEdgeTable_IsEdge, METH_VARARGS,
   (char*)"V.IsEdge(int, int) -> int\nC++: vtkIdType IsEdge(vtkIdType p1, vtkIdType p2)\n\nReturn an integer id for the edge, or an attribute id of the edge\n(p1,p2) if the edge has been previously defined (it depends upon\nwhich version of InsertEdge() is being used); otherwise -1. The\nunique integer id can be used to set and retrieve attributes to\nthe edge.\n"},
  {(char*)"InitPointInsertion", PyvtkEdgeTable_InitPointInsertion, METH_VARARGS,
   (char*)"V.InitPointInsertion(vtkPoints, int) -> int\nC++: int InitPointInsertion(vtkPoints *newPts, vtkIdType estSize)\n\nInitialize the point insertion process. The newPts is an object\nrepresenting point coordinates into which incremental insertion\nmethods place their data. The points are associated with the\nedge.\n"},
  {(char*)"InsertUniquePoint", PyvtkEdgeTable_InsertUniquePoint, METH_VARARGS,
   (char*)"V.InsertUniquePoint(int, int, [float, float, float], int) -> int\nC++: int InsertUniquePoint(vtkIdType p1, vtkIdType p2,\n    double x[3], vtkIdType &ptId)\n\nInsert a unique point on the specified edge. Invoke this method\nonly after InitPointInsertion() has been called. Return 0 if\npoint was already in the list, otherwise return 1.\n"},
  {(char*)"GetNumberOfEdges", PyvtkEdgeTable_GetNumberOfEdges, METH_VARARGS,
   (char*)"V.GetNumberOfEdges() -> int\nC++: vtkIdType GetNumberOfEdges()\n\nReturn the number of edges that have been inserted thus far.\n"},
  {(char*)"InitTraversal", PyvtkEdgeTable_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nIntialize traversal of edges in table.\n"},
  {(char*)"GetNextEdge", PyvtkEdgeTable_GetNextEdge, METH_VARARGS,
   (char*)"V.GetNextEdge(int, int) -> int\nC++: vtkIdType GetNextEdge(vtkIdType &p1, vtkIdType &p2)\n\nTraverse list of edges in table. Return the edge as (p1,p2),\nwhere p1 and p2 are point id's. Method return value is <0 if list\nis exhausted; non-zero otherwise. The value of p1 is guaranteed\nto be <= p2.\n"},
  {(char*)"Reset", PyvtkEdgeTable_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the object and prepare for reinsertion of edges. Does not\ndelete memory like the Initialize() method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEdgeTable_StaticNew()
{
  return vtkEdgeTable::New();
}

PyObject *PyVTKClass_vtkEdgeTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEdgeTable_StaticNew,
    PyvtkEdgeTable_Methods,
    "vtkEdgeTable", modulename,
    NULL, NULL,
    PyvtkEdgeTable_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEdgeTable_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeTable - keep track of edges (edge is pair of integer id's)\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEdgeTable is a general object for keeping track of lists of edges.\nAn edge is defined by the pair of point id's (p1,p2). Methods are\navailable to insert edges, check if edges exist, and traverse the\nlist of edges. Also, it's possible to associate attribute information\nwith each edge. The attribute information may take the form of\nvtkIdType id's, void* pointers, or points. To store attributes, m",
    "ake\nsure that InitEdgeInsertion() is invoked with the storeAttributes\nflag set properly. If points are inserted, use the methods\nInitPointInsertion() and InsertUniquePoint().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

