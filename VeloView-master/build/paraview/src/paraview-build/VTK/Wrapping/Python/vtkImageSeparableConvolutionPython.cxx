// python wrapper for vtkImageSeparableConvolution
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageSeparableConvolution.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSeparableConvolution(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSeparableConvolutionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageSeparableConvolution_Doc();


static PyObject *
PyvtkImageSeparableConvolution_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSeparableConvolution::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSeparableConvolution::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSeparableConvolution *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSeparableConvolution::NewInstance());

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
PyvtkImageSeparableConvolution_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSeparableConvolution *tempr = vtkImageSeparableConvolution::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->SetXKernel(temp0);
      }
    else
      {
      op->vtkImageSeparableConvolution::SetXKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetXKernel() :
      op->vtkImageSeparableConvolution::GetXKernel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->SetYKernel(temp0);
      }
    else
      {
      op->vtkImageSeparableConvolution::SetYKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetYKernel() :
      op->vtkImageSeparableConvolution::GetYKernel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      op->SetZKernel(temp0);
      }
    else
      {
      op->vtkImageSeparableConvolution::SetZKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetZKernel() :
      op->vtkImageSeparableConvolution::GetZKernel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSeparableConvolution::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSeparableConvolution_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSeparableConvolution_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSeparableConvolution_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSeparableConvolution_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSeparableConvolution\nC++: vtkImageSeparableConvolution *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSeparableConvolution_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSeparableConvolution\nC++: vtkImageSeparableConvolution *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXKernel", PyvtkImageSeparableConvolution_SetXKernel, METH_VARARGS,
   (char*)"V.SetXKernel(vtkFloatArray)\nC++: virtual void SetXKernel(vtkFloatArray *)\n\n"},
  {(char*)"GetXKernel", PyvtkImageSeparableConvolution_GetXKernel, METH_VARARGS,
   (char*)"V.GetXKernel() -> vtkFloatArray\nC++: vtkFloatArray *GetXKernel()\n\n"},
  {(char*)"SetYKernel", PyvtkImageSeparableConvolution_SetYKernel, METH_VARARGS,
   (char*)"V.SetYKernel(vtkFloatArray)\nC++: virtual void SetYKernel(vtkFloatArray *)\n\n"},
  {(char*)"GetYKernel", PyvtkImageSeparableConvolution_GetYKernel, METH_VARARGS,
   (char*)"V.GetYKernel() -> vtkFloatArray\nC++: vtkFloatArray *GetYKernel()\n\n"},
  {(char*)"SetZKernel", PyvtkImageSeparableConvolution_SetZKernel, METH_VARARGS,
   (char*)"V.SetZKernel(vtkFloatArray)\nC++: virtual void SetZKernel(vtkFloatArray *)\n\n"},
  {(char*)"GetZKernel", PyvtkImageSeparableConvolution_GetZKernel, METH_VARARGS,
   (char*)"V.GetZKernel() -> vtkFloatArray\nC++: vtkFloatArray *GetZKernel()\n\n"},
  {(char*)"GetMTime", PyvtkImageSeparableConvolution_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nOverload standard modified time function. If kernel arrays are\nmodified, then this object is modified as well.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSeparableConvolution_StaticNew()
{
  return vtkImageSeparableConvolution::New();
}

PyObject *PyVTKClass_vtkImageSeparableConvolutionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSeparableConvolution_StaticNew,
    PyvtkImageSeparableConvolution_Methods,
    "vtkImageSeparableConvolution", modulename,
    NULL, NULL,
    PyvtkImageSeparableConvolution_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageSeparableConvolution_Doc()
{
  static const char *docstring[] = {
    "vtkImageSeparableConvolution -  3 1D convolutions on an image\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "vtkImageSeparableConvolution performs a convolution along the X, Y,\nand Z axes of an image, based on the three different 1D convolution\nkernels.  The kernels must be of odd size, and are considered to be\ncentered at (int)((kernelsize - 1) / 2.0 ).  If a kernel is NULL,\nthat dimension is skipped.  This filter is designed to efficiently\nconvolve separable filters that can be decomposed into 1 or mor",
    "e 1D\nconvolutions.  It also handles arbitrarly large kernel sizes, and\nuses edge replication to handle boundaries.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSeparableConvolution(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSeparableConvolutionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSeparableConvolution", o) != 0)
    {
    Py_DECREF(o);
    }

}

