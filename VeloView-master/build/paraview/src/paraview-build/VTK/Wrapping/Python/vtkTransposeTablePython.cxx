// python wrapper for vtkTransposeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTransposeTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTransposeTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTransposeTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkTransposeTable_Doc();


static PyObject *
PyvtkTransposeTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTransposeTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransposeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransposeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransposeTable::NewInstance());

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
PyvtkTransposeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTransposeTable *tempr = vtkTransposeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetAddIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAddIdColumn() :
      op->vtkTransposeTable::GetAddIdColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetAddIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddIdColumn(temp0);
      }
    else
      {
      op->vtkTransposeTable::SetAddIdColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_AddIdColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIdColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddIdColumnOn();
      }
    else
      {
      op->vtkTransposeTable::AddIdColumnOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_AddIdColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIdColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddIdColumnOff();
      }
    else
      {
      op->vtkTransposeTable::AddIdColumnOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetUseIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseIdColumn() :
      op->vtkTransposeTable::GetUseIdColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetUseIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIdColumn(temp0);
      }
    else
      {
      op->vtkTransposeTable::SetUseIdColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_UseIdColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIdColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseIdColumnOn();
      }
    else
      {
      op->vtkTransposeTable::UseIdColumnOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_UseIdColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIdColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseIdColumnOff();
      }
    else
      {
      op->vtkTransposeTable::UseIdColumnOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetIdColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetIdColumnName() :
      op->vtkTransposeTable::GetIdColumnName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetIdColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdColumnName(temp0);
      }
    else
      {
      op->vtkTransposeTable::SetIdColumnName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransposeTable_Methods[] = {
  {(char*)"GetClassName", PyvtkTransposeTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransposeTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransposeTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTransposeTable\nC++: vtkTransposeTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransposeTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransposeTable\nC++: vtkTransposeTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAddIdColumn", PyvtkTransposeTable_GetAddIdColumn, METH_VARARGS,
   (char*)"V.GetAddIdColumn() -> bool\nC++: bool GetAddIdColumn()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {(char*)"SetAddIdColumn", PyvtkTransposeTable_SetAddIdColumn, METH_VARARGS,
   (char*)"V.SetAddIdColumn(bool)\nC++: void SetAddIdColumn(bool a)\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {(char*)"AddIdColumnOn", PyvtkTransposeTable_AddIdColumnOn, METH_VARARGS,
   (char*)"V.AddIdColumnOn()\nC++: void AddIdColumnOn()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {(char*)"AddIdColumnOff", PyvtkTransposeTable_AddIdColumnOff, METH_VARARGS,
   (char*)"V.AddIdColumnOff()\nC++: void AddIdColumnOff()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {(char*)"GetUseIdColumn", PyvtkTransposeTable_GetUseIdColumn, METH_VARARGS,
   (char*)"V.GetUseIdColumn() -> bool\nC++: bool GetUseIdColumn()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {(char*)"SetUseIdColumn", PyvtkTransposeTable_SetUseIdColumn, METH_VARARGS,
   (char*)"V.SetUseIdColumn(bool)\nC++: void SetUseIdColumn(bool a)\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {(char*)"UseIdColumnOn", PyvtkTransposeTable_UseIdColumnOn, METH_VARARGS,
   (char*)"V.UseIdColumnOn()\nC++: void UseIdColumnOn()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {(char*)"UseIdColumnOff", PyvtkTransposeTable_UseIdColumnOff, METH_VARARGS,
   (char*)"V.UseIdColumnOff()\nC++: void UseIdColumnOff()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {(char*)"GetIdColumnName", PyvtkTransposeTable_GetIdColumnName, METH_VARARGS,
   (char*)"V.GetIdColumnName() -> string\nC++: char *GetIdColumnName()\n\nGet/Set the name of the id column added by option AddIdColumn.\nDefault: ColName\n"},
  {(char*)"SetIdColumnName", PyvtkTransposeTable_SetIdColumnName, METH_VARARGS,
   (char*)"V.SetIdColumnName(string)\nC++: void SetIdColumnName(char *)\n\nGet/Set the name of the id column added by option AddIdColumn.\nDefault: ColName\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransposeTable_StaticNew()
{
  return vtkTransposeTable::New();
}

PyObject *PyVTKClass_vtkTransposeTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransposeTable_StaticNew,
    PyvtkTransposeTable_Methods,
    "vtkTransposeTable", modulename,
    NULL, NULL,
    PyvtkTransposeTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransposeTable_Doc()
{
  static const char *docstring[] = {
    "vtkTransposeTable - Transpose an input table.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This algorithm allows to transpose a vtkTable as a matrix. Columns\nbecome rows and vice versa. A new column can be added to the result\ntable at index 0 to collect the name of the initial columns (when\nAddIdColumn is true). Such a column can be used to name the columns\nof the result. Note that columns of the output table will have a\nvariant type is the columns of the initial table are not consistan",
    "t.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransposeTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransposeTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransposeTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

