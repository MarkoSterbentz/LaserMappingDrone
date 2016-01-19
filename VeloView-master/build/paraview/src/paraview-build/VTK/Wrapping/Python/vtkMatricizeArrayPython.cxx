// python wrapper for vtkMatricizeArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMatricizeArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMatricizeArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMatricizeArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkMatricizeArray_Doc();


static PyObject *
PyvtkMatricizeArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMatricizeArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatricizeArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatricizeArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatricizeArray::NewInstance());

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
PyvtkMatricizeArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMatricizeArray *tempr = vtkMatricizeArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_GetSliceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSliceDimension() :
      op->vtkMatricizeArray::GetSliceDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatricizeArray_SetSliceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceDimension(temp0);
      }
    else
      {
      op->vtkMatricizeArray::SetSliceDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatricizeArray_Methods[] = {
  {(char*)"GetClassName", PyvtkMatricizeArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatricizeArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatricizeArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMatricizeArray\nC++: vtkMatricizeArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatricizeArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatricizeArray\nC++: vtkMatricizeArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSliceDimension", PyvtkMatricizeArray_GetSliceDimension, METH_VARARGS,
   (char*)"V.GetSliceDimension() -> int\nC++: vtkIdType GetSliceDimension()\n\nReturns the 0-numbered dimension that will be mapped to columns\nin the output\n"},
  {(char*)"SetSliceDimension", PyvtkMatricizeArray_SetSliceDimension, METH_VARARGS,
   (char*)"V.SetSliceDimension(int)\nC++: void SetSliceDimension(vtkIdType a)\n\nSets the 0-numbered dimension that will be mapped to columns in\nthe output\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatricizeArray_StaticNew()
{
  return vtkMatricizeArray::New();
}

PyObject *PyVTKClass_vtkMatricizeArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatricizeArray_StaticNew,
    PyvtkMatricizeArray_Methods,
    "vtkMatricizeArray", modulename,
    NULL, NULL,
    PyvtkMatricizeArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMatricizeArray_Doc()
{
  static const char *docstring[] = {
    "vtkMatricizeArray - Convert an array of arbitrary dimensions to a\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Given a sparse input array of arbitrary dimension, creates a sparse\noutput matrix (vtkSparseArray) where each column is a slice along an\narbitrary dimension from the source.\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatricizeArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatricizeArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatricizeArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

