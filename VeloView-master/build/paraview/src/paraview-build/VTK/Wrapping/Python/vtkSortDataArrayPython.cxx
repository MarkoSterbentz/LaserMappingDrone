// python wrapper for vtkSortDataArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSortDataArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSortDataArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSortDataArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSortDataArray_Doc();


static PyObject *
PyvtkSortDataArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSortDataArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortDataArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortDataArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortDataArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSortDataArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortDataArray::NewInstance());

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
PyvtkSortDataArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSortDataArray *tempr = vtkSortDataArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortDataArray_Sort_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    vtkSortDataArray::Sort(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    vtkSortDataArray::Sort(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSortDataArray_Sort_Methods[] = {
  {NULL, PyvtkSortDataArray_Sort_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkIdList"},
  {NULL, PyvtkSortDataArray_Sort_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkAbstractArray"},
  {NULL, PyvtkSortDataArray_Sort_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkIdList *vtkIdList"},
  {NULL, PyvtkSortDataArray_Sort_s4, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkIdList *vtkAbstractArray"},
  {NULL, PyvtkSortDataArray_Sort_s5, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkAbstractArray *vtkIdList"},
  {NULL, PyvtkSortDataArray_Sort_s6, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkAbstractArray *vtkAbstractArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSortDataArray_Sort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSortDataArray_Sort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Sort");
  return NULL;
}



static PyObject *
PyvtkSortDataArray_SortArrayByComponent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SortArrayByComponent");

  vtkAbstractArray *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
    {
    vtkSortDataArray::SortArrayByComponent(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSortDataArray_Methods[] = {
  {(char*)"GetClassName", PyvtkSortDataArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSortDataArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSortDataArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSortDataArray\nC++: vtkSortDataArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSortDataArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSortDataArray\nC++: vtkSortDataArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Sort", PyvtkSortDataArray_Sort, METH_VARARGS | METH_STATIC,
   (char*)"V.Sort(vtkIdList)\nC++: static void Sort(vtkIdList *keys)\nV.Sort(vtkAbstractArray)\nC++: static void Sort(vtkAbstractArray *keys)\nV.Sort(vtkIdList, vtkIdList)\nC++: static void Sort(vtkIdList *keys, vtkIdList *values)\nV.Sort(vtkIdList, vtkAbstractArray)\nC++: static void Sort(vtkIdList *keys, vtkAbstractArray *values)\nV.Sort(vtkAbstractArray, vtkIdList)\nC++: static void Sort(vtkAbstractArray *keys, vtkIdList *values)\nV.Sort(vtkAbstractArray, vtkAbstractArray)\nC++: static void Sort(vtkAbstractArray *keys,\n    vtkAbstractArray *values)\n\nSorts the given array.\n"},
  {(char*)"SortArrayByComponent", PyvtkSortDataArray_SortArrayByComponent, METH_VARARGS | METH_STATIC,
   (char*)"V.SortArrayByComponent(vtkAbstractArray, int)\nC++: static void SortArrayByComponent(vtkAbstractArray *arr,\n    int k)\n\nSorts the given data array using the specified component as a\nkey. Think of the array as a 2-D grid with each tuple\nrepresenting a row. Tuples are swapped until the k-th column of\nthe grid is monotonically increasing. Where two tuples have the\nsame value for the k-th component, their order in the final\nresult is unspecified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSortDataArray_StaticNew()
{
  return vtkSortDataArray::New();
}

PyObject *PyVTKClass_vtkSortDataArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSortDataArray_StaticNew,
    PyvtkSortDataArray_Methods,
    "vtkSortDataArray", modulename,
    NULL, NULL,
    PyvtkSortDataArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSortDataArray_Doc()
{
  static const char *docstring[] = {
    "vtkSortDataArray - Provides several methods for sorting vtk arrays.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSortDataArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSortDataArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSortDataArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

