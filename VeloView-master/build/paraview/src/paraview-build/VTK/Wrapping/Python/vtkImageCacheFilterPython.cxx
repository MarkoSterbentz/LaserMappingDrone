// python wrapper for vtkImageCacheFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageCacheFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageCacheFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageCacheFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageCacheFilter_Doc();


static PyObject *
PyvtkImageCacheFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCacheFilter *op = static_cast<vtkImageCacheFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageCacheFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCacheFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCacheFilter *op = static_cast<vtkImageCacheFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCacheFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCacheFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCacheFilter *op = static_cast<vtkImageCacheFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageCacheFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCacheFilter::NewInstance());

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
PyvtkImageCacheFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageCacheFilter *tempr = vtkImageCacheFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCacheFilter_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCacheFilter *op = static_cast<vtkImageCacheFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheSize(temp0);
      }
    else
      {
      op->vtkImageCacheFilter::SetCacheSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCacheFilter_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCacheFilter *op = static_cast<vtkImageCacheFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkImageCacheFilter::GetCacheSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCacheFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCacheFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCacheFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCacheFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageCacheFilter\nC++: vtkImageCacheFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCacheFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCacheFilter\nC++: vtkImageCacheFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCacheSize", PyvtkImageCacheFilter_SetCacheSize, METH_VARARGS,
   (char*)"V.SetCacheSize(int)\nC++: void SetCacheSize(int size)\n\nThis is the maximum number of images that can be retained in\nmemory. it defaults to 10.\n"},
  {(char*)"GetCacheSize", PyvtkImageCacheFilter_GetCacheSize, METH_VARARGS,
   (char*)"V.GetCacheSize() -> int\nC++: int GetCacheSize()\n\nThis is the maximum number of images that can be retained in\nmemory. it defaults to 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCacheFilter_StaticNew()
{
  return vtkImageCacheFilter::New();
}

PyObject *PyVTKClass_vtkImageCacheFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCacheFilter_StaticNew,
    PyvtkImageCacheFilter_Methods,
    "vtkImageCacheFilter", modulename,
    NULL, NULL,
    PyvtkImageCacheFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageCacheFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageCacheFilter - Caches multiple vtkImageData objects.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageCacheFilter keep a number of vtkImageDataObjects from\nprevious updates to satisfy future updates without needing to update\nthe input.  It does not change the data at all.  It just makes the\npipeline more efficient at the expense of using extra memory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCacheFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCacheFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCacheFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

