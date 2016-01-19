// python wrapper for vtkTableToArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableToArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableToArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableToArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkTableToArray_Doc();


static PyObject *
PyvtkTableToArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableToArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableToArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToArray::NewInstance());

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
PyvtkTableToArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableToArray *tempr = vtkTableToArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToArray_ClearColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearColumns();
      }
    else
      {
      op->vtkTableToArray::ClearColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToArray_AddColumn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddColumn(temp0);
      }
    else
      {
      op->vtkTableToArray::AddColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTableToArray_AddColumn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddColumn(temp0);
      }
    else
      {
      op->vtkTableToArray::AddColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToArray_AddColumn_Methods[] = {
  {NULL, PyvtkTableToArray_AddColumn_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkTableToArray_AddColumn_s2, METH_VARARGS,
   (char*)"@L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTableToArray_AddColumn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTableToArray_AddColumn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddColumn");
  return NULL;
}



static PyObject *
PyvtkTableToArray_AddAllColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddAllColumns();
      }
    else
      {
      op->vtkTableToArray::AddAllColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToArray_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableToArray\nC++: vtkTableToArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToArray\nC++: vtkTableToArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ClearColumns", PyvtkTableToArray_ClearColumns, METH_VARARGS,
   (char*)"V.ClearColumns()\nC++: void ClearColumns()\n\nReset the list of input table columns that will be mapped to\ncolumns in the output matrix.\n"},
  {(char*)"AddColumn", PyvtkTableToArray_AddColumn, METH_VARARGS,
   (char*)"V.AddColumn(string)\nC++: void AddColumn(const char *name)\nV.AddColumn(int)\nC++: void AddColumn(vtkIdType index)\n\nAdd a column by name to the list of input table columns that will\nbe mapped to columns in the output matrix.\n"},
  {(char*)"AddAllColumns", PyvtkTableToArray_AddAllColumns, METH_VARARGS,
   (char*)"V.AddAllColumns()\nC++: void AddAllColumns()\n\nAdd every input table column to the output matrix.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToArray_StaticNew()
{
  return vtkTableToArray::New();
}

PyObject *PyVTKClass_vtkTableToArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToArray_StaticNew,
    PyvtkTableToArray_Methods,
    "vtkTableToArray", modulename,
    NULL, NULL,
    PyvtkTableToArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToArray_Doc()
{
  static const char *docstring[] = {
    "vtkTableToArray - converts a vtkTable to a matrix.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Converts a vtkTable into a dense matrix.  Use AddColumn() to\ndesignate one-to-many table columns that will become columns in the\noutput matrix.a\n\nUsing AddColumn() it is possible to duplicate / reorder columns in\narbitrary ways.\n\nCaveats:\n\nOnly produces vtkDenseArray, regardless of the input table column\ntypes.\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaborato",
    "ries.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

