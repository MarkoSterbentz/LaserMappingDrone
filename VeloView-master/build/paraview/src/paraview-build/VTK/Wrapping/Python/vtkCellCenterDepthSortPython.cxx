// python wrapper for vtkCellCenterDepthSort
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCellCenterDepthSort.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCellCenterDepthSort(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCellCenterDepthSortNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVisibilitySortNew
extern "C" { PyObject *PyVTKClass_vtkVisibilitySortNew(const char *); }
#define DECLARED_PyVTKClass_vtkVisibilitySortNew
#endif

static const char **PyvtkCellCenterDepthSort_Doc();


static PyObject *
PyvtkCellCenterDepthSort_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCellCenterDepthSort::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellCenterDepthSort::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCellCenterDepthSort *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellCenterDepthSort::NewInstance());

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
PyvtkCellCenterDepthSort_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCellCenterDepthSort *tempr = vtkCellCenterDepthSort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCellCenterDepthSort::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_GetNextCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetNextCells() :
      op->vtkCellCenterDepthSort::GetNextCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellCenterDepthSort_Methods[] = {
  {(char*)"GetClassName", PyvtkCellCenterDepthSort_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellCenterDepthSort_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellCenterDepthSort_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCellCenterDepthSort\nC++: vtkCellCenterDepthSort *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellCenterDepthSort_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellCenterDepthSort\nC++: vtkCellCenterDepthSort *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitTraversal", PyvtkCellCenterDepthSort_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\n"},
  {(char*)"GetNextCells", PyvtkCellCenterDepthSort_GetNextCells, METH_VARARGS,
   (char*)"V.GetNextCells() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetNextCells()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellCenterDepthSort_StaticNew()
{
  return vtkCellCenterDepthSort::New();
}

PyObject *PyVTKClass_vtkCellCenterDepthSortNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellCenterDepthSort_StaticNew,
    PyvtkCellCenterDepthSort_Methods,
    "vtkCellCenterDepthSort", modulename,
    NULL, NULL,
    PyvtkCellCenterDepthSort_Doc(),
    PyVTKClass_vtkVisibilitySortNew(modulename));
  return cls;
}

const char **PyvtkCellCenterDepthSort_Doc()
{
  static const char *docstring[] = {
    "vtkCellCenterDepthSort - A simple implementation of vtkCellDepthSort.\n\n",
    "Superclass: vtkVisibilitySort\n\n",
    "vtkCellCenterDepthSort is a simple and fast implementation of depth\nsort, but it only provides approximate results.  The sorting\nalgorithm finds the centroids of all the cells.  It then performs the\ndot product of the centroids against a vector pointing in the\ndirection of the camera transformed into object space.  It then\nperforms an ordinary sort on the result.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellCenterDepthSort(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellCenterDepthSortNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellCenterDepthSort", o) != 0)
    {
    Py_DECREF(o);
    }

}

