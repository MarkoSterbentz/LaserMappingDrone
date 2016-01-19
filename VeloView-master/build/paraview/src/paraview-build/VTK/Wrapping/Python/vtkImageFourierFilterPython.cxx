// python wrapper for vtkImageFourierFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageFourierFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageFourierFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageFourierFilter_Doc();


static PyObject *
PyvtkImageFourierFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageFourierFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFourierFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageFourierFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFourierFilter::NewInstance());

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
PyvtkImageFourierFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageFourierFilter *tempr = vtkImageFourierFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_ExecuteFft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteFft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageComplex *temp0 = NULL;
  vtkImageComplex *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageComplex") &&
      ap.GetVTKObject(temp1, "vtkImageComplex") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteFft(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageFourierFilter::ExecuteFft(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_ExecuteRfft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteRfft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageComplex *temp0 = NULL;
  vtkImageComplex *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageComplex") &&
      ap.GetVTKObject(temp1, "vtkImageComplex") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteRfft(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageFourierFilter::ExecuteRfft(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageFourierFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageFourierFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageFourierFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageFourierFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageFourierFilter\nC++: vtkImageFourierFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageFourierFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageFourierFilter\nC++: vtkImageFourierFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ExecuteFft", PyvtkImageFourierFilter_ExecuteFft, METH_VARARGS,
   (char*)"V.ExecuteFft(vtkImageComplex, vtkImageComplex, int)\nC++: void ExecuteFft(vtkImageComplex *in, vtkImageComplex *out,\n    int N)\n\nThis function calculates the whole fft of an array. The contents\nof the input array are changed. (It is engineered for no\ndecimation)\n"},
  {(char*)"ExecuteRfft", PyvtkImageFourierFilter_ExecuteRfft, METH_VARARGS,
   (char*)"V.ExecuteRfft(vtkImageComplex, vtkImageComplex, int)\nC++: void ExecuteRfft(vtkImageComplex *in, vtkImageComplex *out,\n    int N)\n\nThis function calculates the whole fft of an array. The contents\nof the input array are changed. (It is engineered for no\ndecimation)\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageFourierFilter_Methods,
    "vtkImageFourierFilter", modulename,
    NULL, NULL,
    PyvtkImageFourierFilter_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageFourierFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageFourierFilter - Superclass that implements complex numbers.\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "vtkImageFourierFilter is a class of filters that use complex numbers\nthis superclass is a container for methods that manipulate these\nstructure including fast Fourier transforms.  Complex numbers may\nbecome a class. This should really be a helper class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageFourierFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageFourierFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageFourierFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

