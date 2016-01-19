// python wrapper for vtkDataSetCellIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataSetCellIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetCellIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetCellIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCellIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCellIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellIteratorNew
#endif

static const char **PyvtkDataSetCellIterator_Doc();


static PyObject *
PyvtkDataSetCellIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetCellIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetCellIterator::NewInstance());

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
PyvtkDataSetCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetCellIterator *tempr = vtkDataSetCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkDataSetCellIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkDataSetCellIterator::GetCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetCellIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetCellIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetCellIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetCellIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetCellIterator\nC++: vtkDataSetCellIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetCellIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetCellIterator\nC++: vtkDataSetCellIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsDoneWithTraversal", PyvtkDataSetCellIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: bool IsDoneWithTraversal()\n\n"},
  {(char*)"GetCellId", PyvtkDataSetCellIterator_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType GetCellId()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetCellIterator_StaticNew()
{
  return vtkDataSetCellIterator::New();
}

PyObject *PyVTKClass_vtkDataSetCellIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetCellIterator_StaticNew,
    PyvtkDataSetCellIterator_Methods,
    "vtkDataSetCellIterator", modulename,
    NULL, NULL,
    PyvtkDataSetCellIterator_Doc(),
    PyVTKClass_vtkCellIteratorNew(modulename));
  return cls;
}

const char **PyvtkDataSetCellIterator_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetCellIterator - Implementation of vtkCellIterator using\n\n",
    "Superclass: vtkCellIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetCellIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetCellIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetCellIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

