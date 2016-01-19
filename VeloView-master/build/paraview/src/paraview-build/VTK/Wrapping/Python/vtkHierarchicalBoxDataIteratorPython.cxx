// python wrapper for vtkHierarchicalBoxDataIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalBoxDataIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalBoxDataIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalBoxDataIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUniformGridAMRDataIteratorNew
extern "C" { PyObject *PyVTKClass_vtkUniformGridAMRDataIteratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkUniformGridAMRDataIteratorNew
#endif

static const char **PyvtkHierarchicalBoxDataIterator_Doc();


static PyObject *
PyvtkHierarchicalBoxDataIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalBoxDataIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalBoxDataIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataIterator *op = static_cast<vtkHierarchicalBoxDataIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalBoxDataIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalBoxDataIterator::NewInstance());

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
PyvtkHierarchicalBoxDataIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalBoxDataIterator *tempr = vtkHierarchicalBoxDataIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalBoxDataIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalBoxDataIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalBoxDataIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalBoxDataIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalBoxDataIterator\nC++: vtkHierarchicalBoxDataIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalBoxDataIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalBoxDataIterator\nC++: vtkHierarchicalBoxDataIterator *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalBoxDataIterator_StaticNew()
{
  return vtkHierarchicalBoxDataIterator::New();
}

PyObject *PyVTKClass_vtkHierarchicalBoxDataIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalBoxDataIterator_StaticNew,
    PyvtkHierarchicalBoxDataIterator_Methods,
    "vtkHierarchicalBoxDataIterator", modulename,
    NULL, NULL,
    PyvtkHierarchicalBoxDataIterator_Doc(),
    PyVTKClass_vtkUniformGridAMRDataIteratorNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalBoxDataIterator_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalBoxDataIterator.h--Empty class for backwards\ncompatibility\n\n",
    "Superclass: vtkUniformGridAMRDataIterator\n\n",
    "Empty class for backwards compatibility.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalBoxDataIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalBoxDataIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalBoxDataIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

