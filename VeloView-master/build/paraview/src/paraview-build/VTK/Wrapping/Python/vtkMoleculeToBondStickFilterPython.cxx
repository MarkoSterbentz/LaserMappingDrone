// python wrapper for vtkMoleculeToBondStickFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMoleculeToBondStickFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMoleculeToBondStickFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMoleculeToBondStickFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMoleculeToPolyDataFilterNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeToPolyDataFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeToPolyDataFilterNew
#endif

static const char **PyvtkMoleculeToBondStickFilter_Doc();


static PyObject *
PyvtkMoleculeToBondStickFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToBondStickFilter *op = static_cast<vtkMoleculeToBondStickFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMoleculeToBondStickFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToBondStickFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToBondStickFilter *op = static_cast<vtkMoleculeToBondStickFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeToBondStickFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToBondStickFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToBondStickFilter *op = static_cast<vtkMoleculeToBondStickFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMoleculeToBondStickFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeToBondStickFilter::NewInstance());

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
PyvtkMoleculeToBondStickFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMoleculeToBondStickFilter *tempr = vtkMoleculeToBondStickFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMoleculeToBondStickFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMoleculeToBondStickFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMoleculeToBondStickFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMoleculeToBondStickFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMoleculeToBondStickFilter\nC++: vtkMoleculeToBondStickFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMoleculeToBondStickFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMoleculeToBondStickFilter\nC++: vtkMoleculeToBondStickFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMoleculeToBondStickFilter_StaticNew()
{
  return vtkMoleculeToBondStickFilter::New();
}

PyObject *PyVTKClass_vtkMoleculeToBondStickFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMoleculeToBondStickFilter_StaticNew,
    PyvtkMoleculeToBondStickFilter_Methods,
    "vtkMoleculeToBondStickFilter", modulename,
    NULL, NULL,
    PyvtkMoleculeToBondStickFilter_Doc(),
    PyVTKClass_vtkMoleculeToPolyDataFilterNew(modulename));
  return cls;
}

const char **PyvtkMoleculeToBondStickFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMoleculeToBondStickFilter - Generate polydata with cylinders\n\n",
    "Superclass: vtkMoleculeToPolyDataFilter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMoleculeToBondStickFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeToBondStickFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMoleculeToBondStickFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

