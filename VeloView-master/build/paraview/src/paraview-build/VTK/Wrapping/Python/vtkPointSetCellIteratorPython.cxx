// python wrapper for vtkPointSetCellIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointSetCellIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointSetCellIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointSetCellIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCellIteratorNew
extern "C" { PyObject *PyVTKClass_vtkCellIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCellIteratorNew
#endif

static const char **PyvtkPointSetCellIterator_Doc();


static PyObject *
PyvtkPointSetCellIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetCellIterator *op = static_cast<vtkPointSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointSetCellIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetCellIterator *op = static_cast<vtkPointSetCellIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSetCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetCellIterator *op = static_cast<vtkPointSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointSetCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSetCellIterator::NewInstance());

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
PyvtkPointSetCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointSetCellIterator *tempr = vtkPointSetCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetCellIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetCellIterator *op = static_cast<vtkPointSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkPointSetCellIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetCellIterator_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetCellIterator *op = static_cast<vtkPointSetCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkPointSetCellIterator::GetCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetCellIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSetCellIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSetCellIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSetCellIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointSetCellIterator\nC++: vtkPointSetCellIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointSetCellIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointSetCellIterator\nC++: vtkPointSetCellIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsDoneWithTraversal", PyvtkPointSetCellIterator_IsDoneWithTraversal, METH_VARARGS,
   (char*)"V.IsDoneWithTraversal() -> bool\nC++: bool IsDoneWithTraversal()\n\n"},
  {(char*)"GetCellId", PyvtkPointSetCellIterator_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType GetCellId()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointSetCellIterator_StaticNew()
{
  return vtkPointSetCellIterator::New();
}

PyObject *PyVTKClass_vtkPointSetCellIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointSetCellIterator_StaticNew,
    PyvtkPointSetCellIterator_Methods,
    "vtkPointSetCellIterator", modulename,
    NULL, NULL,
    PyvtkPointSetCellIterator_Doc(),
    PyVTKClass_vtkCellIteratorNew(modulename));
  return cls;
}

const char **PyvtkPointSetCellIterator_Doc()
{
  static const char *docstring[] = {
    "vtkPointSetCellIterator - Implementation of vtkCellIterator using\n\n",
    "Superclass: vtkCellIterator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSetCellIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetCellIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSetCellIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

