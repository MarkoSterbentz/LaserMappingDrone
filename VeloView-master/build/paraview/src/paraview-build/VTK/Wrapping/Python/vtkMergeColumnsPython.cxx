// python wrapper for vtkMergeColumns
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeColumns.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeColumns(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeColumnsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkMergeColumns_Doc();


static PyObject *
PyvtkMergeColumns_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeColumns::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeColumns::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeColumns *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeColumns::NewInstance());

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
PyvtkMergeColumns_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeColumns *tempr = vtkMergeColumns::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_SetMergedColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergedColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergedColumnName(temp0);
      }
    else
      {
      op->vtkMergeColumns::SetMergedColumnName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeColumns_GetMergedColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergedColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeColumns *op = static_cast<vtkMergeColumns *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMergedColumnName() :
      op->vtkMergeColumns::GetMergedColumnName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeColumns_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeColumns_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeColumns_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeColumns_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeColumns\nC++: vtkMergeColumns *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeColumns_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeColumns\nC++: vtkMergeColumns *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMergedColumnName", PyvtkMergeColumns_SetMergedColumnName, METH_VARARGS,
   (char*)"V.SetMergedColumnName(string)\nC++: void SetMergedColumnName(char *)\n\nThe name to give the merged column created by this filter.\n"},
  {(char*)"GetMergedColumnName", PyvtkMergeColumns_GetMergedColumnName, METH_VARARGS,
   (char*)"V.GetMergedColumnName() -> string\nC++: char *GetMergedColumnName()\n\nThe name to give the merged column created by this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeColumns_StaticNew()
{
  return vtkMergeColumns::New();
}

PyObject *PyVTKClass_vtkMergeColumnsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeColumns_StaticNew,
    PyvtkMergeColumns_Methods,
    "vtkMergeColumns", modulename,
    NULL, NULL,
    PyvtkMergeColumns_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeColumns_Doc()
{
  static const char *docstring[] = {
    "vtkMergeColumns - merge two columns into a single column\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkMergeColumns replaces two columns in a table with a single column\ncontaining data in both columns.  The columns are set using\n\n\n  SetInputArrayToProcess(0, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_ROWS, \"col1\")\n\nand\n\n\n  SetInputArrayToProcess(1, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_ROWS, \"col2\")\n\nwhere \"col1\" and \"col2\" are the names of the columns to merge. The\nuser may also specify the name o",
    "f the merged column. The arrays must\nbe of the same type. If the arrays are numeric, the values are summed\nin the merged column. If the arrays are strings, the values are\nconcatenated.  The strings are separated by a space if they are both\nnonempty.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeColumns(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeColumnsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeColumns", o) != 0)
    {
    Py_DECREF(o);
    }

}

