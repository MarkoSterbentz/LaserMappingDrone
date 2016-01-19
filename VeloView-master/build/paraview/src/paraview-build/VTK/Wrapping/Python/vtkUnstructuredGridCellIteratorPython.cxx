// python wrapper for vtkUnstructuredGridCellIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridCellIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridCellIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridCellIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCellIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCellIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellIteratorNew
#endif

static const char **PyvtkUnstructuredGridCellIterator_Doc();


static PyObject *
PyvtkUnstructuredGridCellIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridCellIterator *op = static_cast<vtkUnstructuredGridCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGridCellIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridCellIterator *op = static_cast<vtkUnstructuredGridCellIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridCellIterator *op = static_cast<vtkUnstructuredGridCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridCellIterator::NewInstance());

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
PyvtkUnstructuredGridCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGridCellIterator *tempr = vtkUnstructuredGridCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridCellIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridCellIterator *op = static_cast<vtkUnstructuredGridCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkUnstructuredGridCellIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridCellIterator_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridCellIterator *op = static_cast<vtkUnstructuredGridCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkUnstructuredGridCellIterator::GetCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridCellIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridCellIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridCellIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridCellIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridCellIterator\nC++: vtkUnstructuredGridCellIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridCellIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridCellIterator\nC++: vtkUnstructuredGridCellIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsDoneWithTraversal", PyvtkUnstructuredGridCellIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: bool IsDoneWithTraversal()\n\n"},
  {(char*)"GetCellId", PyvtkUnstructuredGridCellIterator_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType GetCellId()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridCellIterator_StaticNew()
{
  return vtkUnstructuredGridCellIterator::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridCellIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridCellIterator_StaticNew,
    PyvtkUnstructuredGridCellIterator_Methods,
    "vtkUnstructuredGridCellIterator", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridCellIterator_Doc(),
    PyVTKClass_vtkCellIteratorNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridCellIterator_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridCellIterator - Implementation of vtkCellIterator\n\n",
    "Superclass: vtkCellIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridCellIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridCellIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridCellIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

