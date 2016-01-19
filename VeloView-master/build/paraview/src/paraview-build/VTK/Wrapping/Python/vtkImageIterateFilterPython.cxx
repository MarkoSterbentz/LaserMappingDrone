// python wrapper for vtkImageIterateFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageIterateFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageIterateFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageIterateFilter_Doc();


static PyObject *
PyvtkImageIterateFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageIterateFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageIterateFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageIterateFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageIterateFilter::NewInstance());

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
PyvtkImageIterateFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageIterateFilter *tempr = vtkImageIterateFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_GetIteration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIteration() :
      op->vtkImageIterateFilter::GetIteration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkImageIterateFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIterateFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageIterateFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageIterateFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageIterateFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageIterateFilter\nC++: vtkImageIterateFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageIterateFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageIterateFilter\nC++: vtkImageIterateFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetIteration", PyvtkImageIterateFilter_GetIteration, METH_VARARGS,
   (char*)"V.GetIteration() -> int\nC++: int GetIteration()\n\nGet which iteration is current being performed. Normally the user\nwill not access this method.\n"},
  {(char*)"GetNumberOfIterations", PyvtkImageIterateFilter_GetNumberOfIterations, METH_VARARGS,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nGet which iteration is current being performed. Normally the user\nwill not access this method.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageIterateFilter_Methods,
    "vtkImageIterateFilter", modulename,
    NULL, NULL,
    PyvtkImageIterateFilter_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageIterateFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageIterateFilter - Multiple executes per update.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageIterateFilter is a filter superclass that supports calling\nexecute multiple times per update.  The largest hack/open issue is\nthat the input and output caches are temporarily changed to \"fool\"\nthe subclasses.  I believe the correct solution is to pass the in and\nout cache to the subclasses methods as arguments.  Now the data is\npasses.  Can the caches be passed, and data retrieved from the",
    " cache?\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageIterateFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageIterateFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageIterateFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

