// python wrapper for vtkReduceTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkReduceTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkReduceTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkReduceTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkReduceTable_Doc();


static PyObject *
PyvtkReduceTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkReduceTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReduceTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkReduceTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReduceTable::NewInstance());

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
PyvtkReduceTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkReduceTable *tempr = vtkReduceTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_GetIndexColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetIndexColumn() :
      op->vtkReduceTable::GetIndexColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_SetIndexColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndexColumn(temp0);
      }
    else
      {
      op->vtkReduceTable::SetIndexColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_GetNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumericalReductionMethod() :
      op->vtkReduceTable::GetNumericalReductionMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_SetNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumericalReductionMethod(temp0);
      }
    else
      {
      op->vtkReduceTable::SetNumericalReductionMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_GetNonNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNonNumericalReductionMethod() :
      op->vtkReduceTable::GetNonNumericalReductionMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_SetNonNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonNumericalReductionMethod(temp0);
      }
    else
      {
      op->vtkReduceTable::SetNonNumericalReductionMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_GetReductionMethodForColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMethodForColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReductionMethodForColumn(temp0) :
      op->vtkReduceTable::GetReductionMethodForColumn(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReduceTable_SetReductionMethodForColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionMethodForColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetReductionMethodForColumn(temp0, temp1);
      }
    else
      {
      op->vtkReduceTable::SetReductionMethodForColumn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkReduceTable_Methods[] = {
  {(char*)"GetClassName", PyvtkReduceTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReduceTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReduceTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkReduceTable\nC++: vtkReduceTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReduceTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReduceTable\nC++: vtkReduceTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetIndexColumn", PyvtkReduceTable_GetIndexColumn, METH_VARARGS,
   (char*)"V.GetIndexColumn() -> int\nC++: vtkIdType GetIndexColumn()\n\nGet/Set the column that will be used to reduce the input table.\nAny rows sharing a value in this column will be collapsed into a\nsingle row in the output table.\n"},
  {(char*)"SetIndexColumn", PyvtkReduceTable_SetIndexColumn, METH_VARARGS,
   (char*)"V.SetIndexColumn(int)\nC++: void SetIndexColumn(vtkIdType a)\n\nGet/Set the column that will be used to reduce the input table.\nAny rows sharing a value in this column will be collapsed into a\nsingle row in the output table.\n"},
  {(char*)"GetNumericalReductionMethod", PyvtkReduceTable_GetNumericalReductionMethod, METH_VARARGS,
   (char*)"V.GetNumericalReductionMethod() -> int\nC++: int GetNumericalReductionMethod()\n\nGet/Set the method that should be used to combine numerical\nvalues.\n"},
  {(char*)"SetNumericalReductionMethod", PyvtkReduceTable_SetNumericalReductionMethod, METH_VARARGS,
   (char*)"V.SetNumericalReductionMethod(int)\nC++: void SetNumericalReductionMethod(int a)\n\nGet/Set the method that should be used to combine numerical\nvalues.\n"},
  {(char*)"GetNonNumericalReductionMethod", PyvtkReduceTable_GetNonNumericalReductionMethod, METH_VARARGS,
   (char*)"V.GetNonNumericalReductionMethod() -> int\nC++: int GetNonNumericalReductionMethod()\n\nGet/Set the method that should be used to combine non-numerical\nvalues.\n"},
  {(char*)"SetNonNumericalReductionMethod", PyvtkReduceTable_SetNonNumericalReductionMethod, METH_VARARGS,
   (char*)"V.SetNonNumericalReductionMethod(int)\nC++: void SetNonNumericalReductionMethod(int a)\n\nGet/Set the method that should be used to combine non-numerical\nvalues.\n"},
  {(char*)"GetReductionMethodForColumn", PyvtkReduceTable_GetReductionMethodForColumn, METH_VARARGS,
   (char*)"V.GetReductionMethodForColumn(int) -> int\nC++: int GetReductionMethodForColumn(vtkIdType col)\n\nGet the method that should be used to combine the values within\nthe specified column.  Returns -1 if no method has been set for\nthis particular column.\n"},
  {(char*)"SetReductionMethodForColumn", PyvtkReduceTable_SetReductionMethodForColumn, METH_VARARGS,
   (char*)"V.SetReductionMethodForColumn(int, int)\nC++: void SetReductionMethodForColumn(vtkIdType col, int method)\n\nSet the method that should be used to combine the values within\nthe specified column.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReduceTable_StaticNew()
{
  return vtkReduceTable::New();
}

PyObject *PyVTKClass_vtkReduceTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReduceTable_StaticNew,
    PyvtkReduceTable_Methods,
    "vtkReduceTable", modulename,
    NULL, NULL,
    PyvtkReduceTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "MEAN", vtkReduceTable::MEAN },
          { "MEDIAN", vtkReduceTable::MEDIAN },
          { "MODE", vtkReduceTable::MODE },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkReduceTable_Doc()
{
  static const char *docstring[] = {
    "vtkReduceTable - combine some of the rows of a table\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Collapses the rows of the input table so that one particular column\n(the IndexColumn) does not contain any duplicate values. Thus the\noutput table will have the same columns as the input table, but\npotentially fewer rows.  One example use of this class would be to\ngenerate a summary table from a table of observations. When two or\nmore rows of the input table share a value in the IndexColumn, the\nv",
    "alues from these rows will be combined on a column-by-column basis. \nBy default, such numerical values will be reduced to their mean, and\nnon-numerical values will be reduced to their mode.  This default\nbehavior can be changed by calling SetNumericalReductionMethod() or\nSetNonNumericalReductionMethod(). You can also specify the reduction\nmethod to use for a particular column by calling\nSetReducti",
    "onMethodForColumn().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReduceTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReduceTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReduceTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

