// python wrapper for vtkMoleculeToPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMoleculeToPolyDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMoleculeToPolyDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMoleculeToPolyDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMoleculeToPolyDataFilter_Doc();


static PyObject *
PyvtkMoleculeToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToPolyDataFilter *op = static_cast<vtkMoleculeToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMoleculeToPolyDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToPolyDataFilter *op = static_cast<vtkMoleculeToPolyDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeToPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToPolyDataFilter *op = static_cast<vtkMoleculeToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMoleculeToPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeToPolyDataFilter::NewInstance());

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
PyvtkMoleculeToPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMoleculeToPolyDataFilter *tempr = vtkMoleculeToPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToPolyDataFilter *op = static_cast<vtkMoleculeToPolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMoleculeToPolyDataFilter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMoleculeToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMoleculeToPolyDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMoleculeToPolyDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMoleculeToPolyDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMoleculeToPolyDataFilter\nC++: vtkMoleculeToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMoleculeToPolyDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMoleculeToPolyDataFilter\nC++: vtkMoleculeToPolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkMoleculeToPolyDataFilter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkMolecule\nC++: vtkMolecule *GetInput()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMoleculeToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMoleculeToPolyDataFilter_Methods,
    "vtkMoleculeToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkMoleculeToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMoleculeToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMoleculeToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMoleculeToPolyDataFilter is an abstract filter class whose\nsubclasses take as input datasets of type vtkMolecule and generate\npolygonal data on output.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMoleculeToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMoleculeToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

