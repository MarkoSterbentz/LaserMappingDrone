// python wrapper for vtkSparseArrayToTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSparseArrayToTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSparseArrayToTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSparseArrayToTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSparseArrayToTable_Doc();


static PyObject *
PyvtkSparseArrayToTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSparseArrayToTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArrayToTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSparseArrayToTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArrayToTable::NewInstance());

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
PyvtkSparseArrayToTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSparseArrayToTable *tempr = vtkSparseArrayToTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_GetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetValueColumn() :
      op->vtkSparseArrayToTable::GetValueColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_SetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValueColumn(temp0);
      }
    else
      {
      op->vtkSparseArrayToTable::SetValueColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSparseArrayToTable_Methods[] = {
  {(char*)"GetClassName", PyvtkSparseArrayToTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSparseArrayToTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSparseArrayToTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSparseArrayToTable\nC++: vtkSparseArrayToTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSparseArrayToTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSparseArrayToTable\nC++: vtkSparseArrayToTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetValueColumn", PyvtkSparseArrayToTable_GetValueColumn, METH_VARARGS,
   (char*)"V.GetValueColumn() -> string\nC++: char *GetValueColumn()\n\nSpecify the name of the output table column that contains array\nvalues. Default: \"value\"\n"},
  {(char*)"SetValueColumn", PyvtkSparseArrayToTable_SetValueColumn, METH_VARARGS,
   (char*)"V.SetValueColumn(string)\nC++: void SetValueColumn(char *)\n\nSpecify the name of the output table column that contains array\nvalues. Default: \"value\"\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSparseArrayToTable_StaticNew()
{
  return vtkSparseArrayToTable::New();
}

PyObject *PyVTKClass_vtkSparseArrayToTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSparseArrayToTable_StaticNew,
    PyvtkSparseArrayToTable_Methods,
    "vtkSparseArrayToTable", modulename,
    NULL, NULL,
    PyvtkSparseArrayToTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSparseArrayToTable_Doc()
{
  static const char *docstring[] = {
    "vtkSparseArrayToTable - Converts a sparse array to a vtkTable.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Converts any sparse array to a vtkTable containing one row for each\nvalue stored in the array.  The table will contain one column of\ncoordinates for each dimension in the source array, plus one column\nof array values.  A common use-case for vtkSparseArrayToTable would\nbe converting a sparse array into a table suitable for use as an\ninput to vtkTableToGraph.\n\nThe coordinate columns in the output ta",
    "ble will be named using the\ndimension labels from the source array,  The value column name can be\nexplicitly set using SetValueColumn().\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSparseArrayToTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSparseArrayToTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSparseArrayToTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

