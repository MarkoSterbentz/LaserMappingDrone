// python wrapper for vtkMergeTables
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeTables.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeTables(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeTablesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkMergeTables_Doc();


static PyObject *
PyvtkMergeTables_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeTables::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeTables::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeTables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeTables::NewInstance());

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
PyvtkMergeTables_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeTables *tempr = vtkMergeTables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_SetFirstTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFirstTablePrefix(temp0);
      }
    else
      {
      op->vtkMergeTables::SetFirstTablePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_GetFirstTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFirstTablePrefix() :
      op->vtkMergeTables::GetFirstTablePrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_SetSecondTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSecondTablePrefix(temp0);
      }
    else
      {
      op->vtkMergeTables::SetSecondTablePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_GetSecondTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSecondTablePrefix() :
      op->vtkMergeTables::GetSecondTablePrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_SetMergeColumnsByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeColumnsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeColumnsByName(temp0);
      }
    else
      {
      op->vtkMergeTables::SetMergeColumnsByName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_GetMergeColumnsByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeColumnsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMergeColumnsByName() :
      op->vtkMergeTables::GetMergeColumnsByName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_MergeColumnsByNameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeColumnsByNameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeColumnsByNameOn();
      }
    else
      {
      op->vtkMergeTables::MergeColumnsByNameOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_MergeColumnsByNameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeColumnsByNameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeColumnsByNameOff();
      }
    else
      {
      op->vtkMergeTables::MergeColumnsByNameOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_SetPrefixAllButMerged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefixAllButMerged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrefixAllButMerged(temp0);
      }
    else
      {
      op->vtkMergeTables::SetPrefixAllButMerged(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_GetPrefixAllButMerged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefixAllButMerged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPrefixAllButMerged() :
      op->vtkMergeTables::GetPrefixAllButMerged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_PrefixAllButMergedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefixAllButMergedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrefixAllButMergedOn();
      }
    else
      {
      op->vtkMergeTables::PrefixAllButMergedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeTables_PrefixAllButMergedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefixAllButMergedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrefixAllButMergedOff();
      }
    else
      {
      op->vtkMergeTables::PrefixAllButMergedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeTables_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeTables_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeTables_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeTables_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeTables\nC++: vtkMergeTables *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeTables_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeTables\nC++: vtkMergeTables *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFirstTablePrefix", PyvtkMergeTables_SetFirstTablePrefix, METH_VARARGS,
   (char*)"V.SetFirstTablePrefix(string)\nC++: void SetFirstTablePrefix(char *)\n\nThe prefix to give to same-named fields from the first table.\nDefault is \"Table1.\".\n"},
  {(char*)"GetFirstTablePrefix", PyvtkMergeTables_GetFirstTablePrefix, METH_VARARGS,
   (char*)"V.GetFirstTablePrefix() -> string\nC++: char *GetFirstTablePrefix()\n\nThe prefix to give to same-named fields from the first table.\nDefault is \"Table1.\".\n"},
  {(char*)"SetSecondTablePrefix", PyvtkMergeTables_SetSecondTablePrefix, METH_VARARGS,
   (char*)"V.SetSecondTablePrefix(string)\nC++: void SetSecondTablePrefix(char *)\n\nThe prefix to give to same-named fields from the second table.\nDefault is \"Table2.\".\n"},
  {(char*)"GetSecondTablePrefix", PyvtkMergeTables_GetSecondTablePrefix, METH_VARARGS,
   (char*)"V.GetSecondTablePrefix() -> string\nC++: char *GetSecondTablePrefix()\n\nThe prefix to give to same-named fields from the second table.\nDefault is \"Table2.\".\n"},
  {(char*)"SetMergeColumnsByName", PyvtkMergeTables_SetMergeColumnsByName, METH_VARARGS,
   (char*)"V.SetMergeColumnsByName(bool)\nC++: void SetMergeColumnsByName(bool a)\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {(char*)"GetMergeColumnsByName", PyvtkMergeTables_GetMergeColumnsByName, METH_VARARGS,
   (char*)"V.GetMergeColumnsByName() -> bool\nC++: bool GetMergeColumnsByName()\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {(char*)"MergeColumnsByNameOn", PyvtkMergeTables_MergeColumnsByNameOn, METH_VARARGS,
   (char*)"V.MergeColumnsByNameOn()\nC++: void MergeColumnsByNameOn()\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {(char*)"MergeColumnsByNameOff", PyvtkMergeTables_MergeColumnsByNameOff, METH_VARARGS,
   (char*)"V.MergeColumnsByNameOff()\nC++: void MergeColumnsByNameOff()\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {(char*)"SetPrefixAllButMerged", PyvtkMergeTables_SetPrefixAllButMerged, METH_VARARGS,
   (char*)"V.SetPrefixAllButMerged(bool)\nC++: void SetPrefixAllButMerged(bool a)\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {(char*)"GetPrefixAllButMerged", PyvtkMergeTables_GetPrefixAllButMerged, METH_VARARGS,
   (char*)"V.GetPrefixAllButMerged() -> bool\nC++: bool GetPrefixAllButMerged()\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {(char*)"PrefixAllButMergedOn", PyvtkMergeTables_PrefixAllButMergedOn, METH_VARARGS,
   (char*)"V.PrefixAllButMergedOn()\nC++: void PrefixAllButMergedOn()\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {(char*)"PrefixAllButMergedOff", PyvtkMergeTables_PrefixAllButMergedOff, METH_VARARGS,
   (char*)"V.PrefixAllButMergedOff()\nC++: void PrefixAllButMergedOff()\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeTables_StaticNew()
{
  return vtkMergeTables::New();
}

PyObject *PyVTKClass_vtkMergeTablesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeTables_StaticNew,
    PyvtkMergeTables_Methods,
    "vtkMergeTables", modulename,
    NULL, NULL,
    PyvtkMergeTables_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeTables_Doc()
{
  static const char *docstring[] = {
    "vtkMergeTables - combine two tables\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Combines the columns of two tables into one larger table. The number\nof rows in the resulting table is the sum of the number of rows in\neach of the input tables. The number of columns in the output is\ngenerally the sum of the number of columns in each input table,\nexcept in the case where column names are duplicated in both tables.\nIn this case, if MergeColumnsByName is on (the default), the two\nc",
    "olumns will be merged into a single column of the same name. If\nMergeColumnsByName is off, both columns will exist in the output. You\nmay set the FirstTablePrefix and SecondTablePrefix to define how the\ncolumns named are modified.  One of these prefixes may be the empty\nstring, but they must be different.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeTables(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeTablesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeTables", o) != 0)
    {
    Py_DECREF(o);
    }

}

