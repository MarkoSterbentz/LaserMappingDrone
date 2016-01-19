// python wrapper for vtkImageDataToPointSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageDataToPointSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDataToPointSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDataToPointSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkImageDataToPointSet_Doc();


static PyObject *
PyvtkImageDataToPointSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToPointSet *op = static_cast<vtkImageDataToPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDataToPointSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToPointSet *op = static_cast<vtkImageDataToPointSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataToPointSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToPointSet *op = static_cast<vtkImageDataToPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDataToPointSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataToPointSet::NewInstance());

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
PyvtkImageDataToPointSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDataToPointSet *tempr = vtkImageDataToPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataToPointSet_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataToPointSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataToPointSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataToPointSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDataToPointSet\nC++: vtkImageDataToPointSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataToPointSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataToPointSet\nC++: vtkImageDataToPointSet *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataToPointSet_StaticNew()
{
  return vtkImageDataToPointSet::New();
}

PyObject *PyVTKClass_vtkImageDataToPointSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataToPointSet_StaticNew,
    PyvtkImageDataToPointSet_Methods,
    "vtkImageDataToPointSet", modulename,
    NULL, NULL,
    PyvtkImageDataToPointSet_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataToPointSet_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataToPointSet - Converts a vtkImageData to a vtkPointSet\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkImageDataToPointSet takes a vtkImageData as an image and outputs\nan equivalent vtkStructuredGrid (which is a subclass of vtkPointSet).\n\nThanks:\n\nThis class was developed by Kenneth Moreland (kmorel@sandia.gov) from\nSandia National Laboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataToPointSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataToPointSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataToPointSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

