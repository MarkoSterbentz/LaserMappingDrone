// python wrapper for vtkInterpolatingSubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInterpolatingSubdivisionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkInterpolatingSubdivisionFilter_Doc();


static PyObject *
PyvtkInterpolatingSubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInterpolatingSubdivisionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInterpolatingSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInterpolatingSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInterpolatingSubdivisionFilter::NewInstance());

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
PyvtkInterpolatingSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInterpolatingSubdivisionFilter *tempr = vtkInterpolatingSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkInterpolatingSubdivisionFilter::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkInterpolatingSubdivisionFilter::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInterpolatingSubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkInterpolatingSubdivisionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInterpolatingSubdivisionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInterpolatingSubdivisionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInterpolatingSubdivisionFilter\nC++: vtkInterpolatingSubdivisionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInterpolatingSubdivisionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInterpolatingSubdivisionFilter\nC++: vtkInterpolatingSubdivisionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkInterpolatingSubdivisionFilter_SetNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int a)\n\nSet/get the number of subdivisions.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkInterpolatingSubdivisionFilter_GetNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nSet/get the number of subdivisions.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInterpolatingSubdivisionFilter_Methods,
    "vtkInterpolatingSubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkInterpolatingSubdivisionFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkInterpolatingSubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkInterpolatingSubdivisionFilter - generate a subdivision surface\nusing an Interpolating Scheme\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkInterpolatingSubdivisionFilter is an abstract class that defines\nthe protocol for interpolating subdivision surface filters.\n\nSee Also:\n\nvtkLinearSubdivisionFilter vtkButterflySubdivisionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInterpolatingSubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInterpolatingSubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

