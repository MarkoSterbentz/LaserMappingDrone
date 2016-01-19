// python wrapper for vtkGraphWeightEuclideanDistanceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGraphWeightEuclideanDistanceFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGraphWeightEuclideanDistanceFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGraphWeightEuclideanDistanceFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGraphWeightFilterNew
extern "C" { PyObject *PyVTKClass_vtkGraphWeightFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphWeightFilterNew
#endif

static const char **PyvtkGraphWeightEuclideanDistanceFilter_Doc();


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphWeightEuclideanDistanceFilter *op = static_cast<vtkGraphWeightEuclideanDistanceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGraphWeightEuclideanDistanceFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphWeightEuclideanDistanceFilter *op = static_cast<vtkGraphWeightEuclideanDistanceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphWeightEuclideanDistanceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphWeightEuclideanDistanceFilter *op = static_cast<vtkGraphWeightEuclideanDistanceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraphWeightEuclideanDistanceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphWeightEuclideanDistanceFilter::NewInstance());

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
PyvtkGraphWeightEuclideanDistanceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGraphWeightEuclideanDistanceFilter *tempr = vtkGraphWeightEuclideanDistanceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphWeightEuclideanDistanceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphWeightEuclideanDistanceFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphWeightEuclideanDistanceFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphWeightEuclideanDistanceFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGraphWeightEuclideanDistanceFilter\nC++: vtkGraphWeightEuclideanDistanceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphWeightEuclideanDistanceFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphWeightEuclideanDistanceFilter\nC++: vtkGraphWeightEuclideanDistanceFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphWeightEuclideanDistanceFilter_StaticNew()
{
  return vtkGraphWeightEuclideanDistanceFilter::New();
}

PyObject *PyVTKClass_vtkGraphWeightEuclideanDistanceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphWeightEuclideanDistanceFilter_StaticNew,
    PyvtkGraphWeightEuclideanDistanceFilter_Methods,
    "vtkGraphWeightEuclideanDistanceFilter", modulename,
    NULL, NULL,
    PyvtkGraphWeightEuclideanDistanceFilter_Doc(),
    PyVTKClass_vtkGraphWeightFilterNew(modulename));
  return cls;
}

const char **PyvtkGraphWeightEuclideanDistanceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkGraphWeightEuclideanDistanceFilter - Weights the edges of a\n\n",
    "Superclass: vtkGraphWeightFilter\n\n",
    "Weights the edges of a graph based on the Euclidean distance between\nthe points.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphWeightEuclideanDistanceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphWeightEuclideanDistanceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphWeightEuclideanDistanceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

