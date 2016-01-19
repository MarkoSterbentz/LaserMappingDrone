// python wrapper for vtkKMeansDistanceFunctor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkKMeansDistanceFunctor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkKMeansDistanceFunctor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkKMeansDistanceFunctorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkKMeansDistanceFunctor_Doc();


static PyObject *
PyvtkKMeansDistanceFunctor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkKMeansDistanceFunctor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKMeansDistanceFunctor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKMeansDistanceFunctor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKMeansDistanceFunctor::NewInstance());

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
PyvtkKMeansDistanceFunctor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkKMeansDistanceFunctor *tempr = vtkKMeansDistanceFunctor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_GetEmptyTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmptyTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetEmptyTuple(temp0) :
      op->vtkKMeansDistanceFunctor::GetEmptyTuple(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PairwiseUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PairwiseUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = NULL;
  vtkIdType temp1;
  vtkVariantArray *temp2 = NULL;
  vtkIdType temp3;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVariantArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->PairwiseUpdate(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkKMeansDistanceFunctor::PairwiseUpdate(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PerturbElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerturbElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = NULL;
  vtkTable *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->PerturbElement(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkKMeansDistanceFunctor::PerturbElement(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_AllocateElementArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateElementArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    void  *tempr = (ap.IsBound() ?
      op->AllocateElementArray(temp0) :
      op->vtkKMeansDistanceFunctor::AllocateElementArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_DeallocateElementArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeallocateElementArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeallocateElementArray(temp0);
      }
    else
      {
      op->vtkKMeansDistanceFunctor::DeallocateElementArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_CreateCoordinateArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCoordinateArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->CreateCoordinateArray() :
      op->vtkKMeansDistanceFunctor::CreateCoordinateArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PackElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = NULL;
  void  *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->PackElements(temp0, temp1);
      }
    else
      {
      op->vtkKMeansDistanceFunctor::PackElements(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = NULL;
  vtkTable *temp1 = NULL;
  void  *temp2 = NULL;
  void  *temp3 = NULL;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->UnPackElements(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkKMeansDistanceFunctor::UnPackElements(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->UnPackElements(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkKMeansDistanceFunctor::UnPackElements(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkKMeansDistanceFunctor_UnPackElements_s1(self, args);
    case 4:
      return PyvtkKMeansDistanceFunctor_UnPackElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UnPackElements");
  return NULL;
}



static PyObject *
PyvtkKMeansDistanceFunctor_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkKMeansDistanceFunctor::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkKMeansDistanceFunctor_Methods[] = {
  {(char*)"GetClassName", PyvtkKMeansDistanceFunctor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKMeansDistanceFunctor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKMeansDistanceFunctor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkKMeansDistanceFunctor\nC++: vtkKMeansDistanceFunctor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKMeansDistanceFunctor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKMeansDistanceFunctor\nC++: vtkKMeansDistanceFunctor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEmptyTuple", PyvtkKMeansDistanceFunctor_GetEmptyTuple, METH_VARARGS,
   (char*)"V.GetEmptyTuple(int) -> vtkVariantArray\nC++: virtual vtkVariantArray *GetEmptyTuple(vtkIdType dimension)\n\nReturn an empty tuple. These values are used as cluster center\ncoordinates when no initial cluster centers are specified.\n"},
  {(char*)"PairwiseUpdate", PyvtkKMeansDistanceFunctor_PairwiseUpdate, METH_VARARGS,
   (char*)"V.PairwiseUpdate(vtkTable, int, vtkVariantArray, int, int)\nC++: virtual void PairwiseUpdate(vtkTable *clusterCenters,\n    vtkIdType row, vtkVariantArray *data,\n    vtkIdType dataCardinality, vtkIdType totalCardinality)\n\nThis is called once per observation per run per iteration in\norder to assign the observation to its nearest cluster center\nafter the distance functor has been evaluated for all the cluster\ncenters.\n\nThe distance functor is responsible for incrementally updating\nthe cluster centers to account for the assignment.\n"},
  {(char*)"PerturbElement", PyvtkKMeansDistanceFunctor_PerturbElement, METH_VARARGS,
   (char*)"V.PerturbElement(vtkTable, vtkTable, int, int, int, float)\nC++: virtual void PerturbElement(vtkTable *, vtkTable *,\n    vtkIdType, vtkIdType, vtkIdType, double)\n\nWhen a cluster center (1) has no observations that are closer to\nit than other cluster centers or (2) has exactly the same\ncoordinates as another cluster center, its coordinates should be\nperturbed. This function should perform that perturbation.\n\nSince perturbation relies on a distance metric, this function is\nthe responsibility of the distance functor.\n"},
  {(char*)"AllocateElementArray", PyvtkKMeansDistanceFunctor_AllocateElementArray, METH_VARARGS,
   (char*)"V.AllocateElementArray(int) ->\nC++: virtual void *AllocateElementArray(vtkIdType size)\n\nAllocate an array large enough to hold size coordinates and\nreturn a void pointer to this array. This is used by\nvtkPKMeansStatistics to send (receive) cluster center coordinates\nto (from) other processes.\n"},
  {(char*)"DeallocateElementArray", PyvtkKMeansDistanceFunctor_DeallocateElementArray, METH_VARARGS,
   (char*)"V.DeallocateElementArray()\nC++: virtual void DeallocateElementArray(void *)\n\nFree an array allocated with AllocateElementArray.\n"},
  {(char*)"CreateCoordinateArray", PyvtkKMeansDistanceFunctor_CreateCoordinateArray, METH_VARARGS,
   (char*)"V.CreateCoordinateArray() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *CreateCoordinateArray()\n\nReturn a vtkAbstractArray capable of holding cluster center\ncoordinates. This is used by vtkPKMeansStatistics to hold cluster\ncenter coordinates sent to (received from) other processes.\n"},
  {(char*)"PackElements", PyvtkKMeansDistanceFunctor_PackElements, METH_VARARGS,
   (char*)"V.PackElements(vtkTable, )\nC++: virtual void PackElements(vtkTable *curTable,\n    void *vElements)\n\nPack the cluster center coordinates in vElements into columns of\ncurTable. This code may assume that the columns in curTable are\nall of the type returned by GetNewVTKArray().\n"},
  {(char*)"UnPackElements", PyvtkKMeansDistanceFunctor_UnPackElements, METH_VARARGS,
   (char*)"V.UnPackElements(vtkTable, vtkTable, , , int)\nC++: virtual void UnPackElements(vtkTable *curTable,\n    vtkTable *newTable, void *vLocalElements,\n    void *vGlobalElements, int np)\nV.UnPackElements(vtkTable, , int, int)\nC++: virtual void UnPackElements(vtkTable *curTable,\n    void *vLocalElements, vtkIdType numRows, vtkIdType numCols)\n\nUnpack the cluster center coordinates in vElements into columns\nof curTable. This code may assume that the columns in curTable\nare all of the type returned by GetNewVTKArray().\n"},
  {(char*)"GetDataType", PyvtkKMeansDistanceFunctor_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the data type used to store cluster center coordinates.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKMeansDistanceFunctor_StaticNew()
{
  return vtkKMeansDistanceFunctor::New();
}

PyObject *PyVTKClass_vtkKMeansDistanceFunctorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKMeansDistanceFunctor_StaticNew,
    PyvtkKMeansDistanceFunctor_Methods,
    "vtkKMeansDistanceFunctor", modulename,
    NULL, NULL,
    PyvtkKMeansDistanceFunctor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkKMeansDistanceFunctor_Doc()
{
  static const char *docstring[] = {
    "vtkKMeansDistanceFunctor - measure distance from k-means cluster\ncenters\n\n",
    "Superclass: vtkObject\n\n",
    "This is an abstract class (with a default concrete subclass) that\nimplements algorithms used by the vtkKMeansStatistics filter that\nrely on a distance metric. If you wish to use a non-Euclidean\ndistance metric (this could include working with strings that do not\nhave a Euclidean distance metric, implementing k-mediods, or trying\ndistance metrics in norms other than L2), you should subclass\nvtkKMea",
    "nsDistanceFunctor.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKMeansDistanceFunctor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKMeansDistanceFunctorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKMeansDistanceFunctor", o) != 0)
    {
    Py_DECREF(o);
    }

}

