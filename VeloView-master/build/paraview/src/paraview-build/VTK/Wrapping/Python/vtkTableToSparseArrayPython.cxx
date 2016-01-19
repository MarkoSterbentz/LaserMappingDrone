// python wrapper for vtkTableToSparseArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkArrayExtents.h"
#include "vtkTableToSparseArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableToSparseArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableToSparseArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkTableToSparseArray_Doc();


static PyObject *
PyvtkTableToSparseArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableToSparseArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToSparseArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableToSparseArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToSparseArray::NewInstance());

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
PyvtkTableToSparseArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableToSparseArray *tempr = vtkTableToSparseArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_ClearCoordinateColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCoordinateColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearCoordinateColumns();
      }
    else
      {
      op->vtkTableToSparseArray::ClearCoordinateColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_AddCoordinateColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddCoordinateColumn(temp0);
      }
    else
      {
      op->vtkTableToSparseArray::AddCoordinateColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_SetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

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
      op->vtkTableToSparseArray::SetValueColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_GetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetValueColumn() :
      op->vtkTableToSparseArray::GetValueColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_ClearOutputExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearOutputExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearOutputExtents();
      }
    else
      {
      op->vtkTableToSparseArray::ClearOutputExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_SetOutputExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->SetOutputExtents(*temp0);
      }
    else
      {
      op->vtkTableToSparseArray::SetOutputExtents(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTableToSparseArray_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToSparseArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToSparseArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToSparseArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableToSparseArray\nC++: vtkTableToSparseArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToSparseArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToSparseArray\nC++: vtkTableToSparseArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ClearCoordinateColumns", PyvtkTableToSparseArray_ClearCoordinateColumns, METH_VARARGS,
   (char*)"V.ClearCoordinateColumns()\nC++: void ClearCoordinateColumns()\n\nSpecify the set of input table columns that will be mapped to\ncoordinates in the output sparse array.\n"},
  {(char*)"AddCoordinateColumn", PyvtkTableToSparseArray_AddCoordinateColumn, METH_VARARGS,
   (char*)"V.AddCoordinateColumn(string)\nC++: void AddCoordinateColumn(const char *name)\n\nSpecify the set of input table columns that will be mapped to\ncoordinates in the output sparse array.\n"},
  {(char*)"SetValueColumn", PyvtkTableToSparseArray_SetValueColumn, METH_VARARGS,
   (char*)"V.SetValueColumn(string)\nC++: void SetValueColumn(const char *name)\n\nSpecify the input table column that will be mapped to values in\nthe output array.\n"},
  {(char*)"GetValueColumn", PyvtkTableToSparseArray_GetValueColumn, METH_VARARGS,
   (char*)"V.GetValueColumn() -> string\nC++: const char *GetValueColumn()\n\nSpecify the input table column that will be mapped to values in\nthe output array.\n"},
  {(char*)"ClearOutputExtents", PyvtkTableToSparseArray_ClearOutputExtents, METH_VARARGS,
   (char*)"V.ClearOutputExtents()\nC++: void ClearOutputExtents()\n\nExplicitly specify the extents of the output array.\n"},
  {(char*)"SetOutputExtents", PyvtkTableToSparseArray_SetOutputExtents, METH_VARARGS,
   (char*)"V.SetOutputExtents(vtkArrayExtents)\nC++: void SetOutputExtents(const vtkArrayExtents &extents)\n\nExplicitly specify the extents of the output array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToSparseArray_StaticNew()
{
  return vtkTableToSparseArray::New();
}

PyObject *PyVTKClass_vtkTableToSparseArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToSparseArray_StaticNew,
    PyvtkTableToSparseArray_Methods,
    "vtkTableToSparseArray", modulename,
    NULL, NULL,
    PyvtkTableToSparseArray_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToSparseArray_Doc()
{
  static const char *docstring[] = {
    "vtkTableToSparseArray - converts a vtkTable into a sparse array.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "Converts a vtkTable into a sparse array.  Use AddCoordinateColumn()\nto designate one-to-many table columns that contain coordinates for\neach array value, and SetValueColumn() to designate the table column\nthat contains array values.\n\nThus, the number of dimensions in the output array will equal the\nnumber of calls to AddCoordinateColumn().\n\nThe coordinate columns will also be used to populate dime",
    "nsion labels\nin the output array.\n\nBy default, the extent of the output array will be set to the range\n[0, largest coordinate + 1) along each dimension.  In some situations\nyou may prefer to set the extents explicitly, using the\nSetOutputExtents() method.  This is useful when the output array\nshould be larger than its largest coordinates, or when working with\npartitioned data.\n\nThanks:\n\nDeveloped ",
    "by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToSparseArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToSparseArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToSparseArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

