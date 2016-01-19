// python wrapper for vtkDataObjectToTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataObjectToTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObjectToTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectToTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkDataObjectToTable_Doc();


static PyObject *
PyvtkDataObjectToTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObjectToTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectToTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectToTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectToTable::NewInstance());

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
PyvtkDataObjectToTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObjectToTable *tempr = vtkDataObjectToTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToTable_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkDataObjectToTable::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToTable_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkDataObjectToTable::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToTable_GetFieldTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMinValue() :
      op->vtkDataObjectToTable::GetFieldTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToTable_GetFieldTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToTable *op = static_cast<vtkDataObjectToTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMaxValue() :
      op->vtkDataObjectToTable::GetFieldTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectToTable_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectToTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectToTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectToTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObjectToTable\nC++: vtkDataObjectToTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectToTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectToTable\nC++: vtkDataObjectToTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFieldType", PyvtkDataObjectToTable_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nThe field type to copy into the output table. Should be one of\nFIELD_DATA, POINT_DATA, CELL_DATA, VERTEX_DATA, EDGE_DATA.\n"},
  {(char*)"SetFieldType", PyvtkDataObjectToTable_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int)\n\nThe field type to copy into the output table. Should be one of\nFIELD_DATA, POINT_DATA, CELL_DATA, VERTEX_DATA, EDGE_DATA.\n"},
  {(char*)"GetFieldTypeMinValue", PyvtkDataObjectToTable_GetFieldTypeMinValue, METH_VARARGS,
   (char*)"V.GetFieldTypeMinValue() -> int\nC++: int GetFieldTypeMinValue()\n\nThe field type to copy into the output table. Should be one of\nFIELD_DATA, POINT_DATA, CELL_DATA, VERTEX_DATA, EDGE_DATA.\n"},
  {(char*)"GetFieldTypeMaxValue", PyvtkDataObjectToTable_GetFieldTypeMaxValue, METH_VARARGS,
   (char*)"V.GetFieldTypeMaxValue() -> int\nC++: int GetFieldTypeMaxValue()\n\nThe field type to copy into the output table. Should be one of\nFIELD_DATA, POINT_DATA, CELL_DATA, VERTEX_DATA, EDGE_DATA.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectToTable_StaticNew()
{
  return vtkDataObjectToTable::New();
}

PyObject *PyVTKClass_vtkDataObjectToTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectToTable_StaticNew,
    PyvtkDataObjectToTable_Methods,
    "vtkDataObjectToTable", modulename,
    NULL, NULL,
    PyvtkDataObjectToTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "FIELD_DATA", vtkDataObjectToTable::FIELD_DATA },
          { "POINT_DATA", vtkDataObjectToTable::POINT_DATA },
          { "CELL_DATA", vtkDataObjectToTable::CELL_DATA },
          { "VERTEX_DATA", vtkDataObjectToTable::VERTEX_DATA },
          { "EDGE_DATA", vtkDataObjectToTable::EDGE_DATA },
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

const char **PyvtkDataObjectToTable_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectToTable - extract field data as a table\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This filter is used to extract either the field, cell or point data\nof any data object as a table.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectToTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectToTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectToTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

