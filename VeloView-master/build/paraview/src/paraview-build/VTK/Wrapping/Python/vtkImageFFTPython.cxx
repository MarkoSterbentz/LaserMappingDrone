// python wrapper for vtkImageFFT
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageFFT.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageFFT(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageFFTNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageFourierFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageFourierFilterNew
#endif

static const char **PyvtkImageFFT_Doc();


static PyObject *
PyvtkImageFFT_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFFT *op = static_cast<vtkImageFFT *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageFFT::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFFT_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFFT *op = static_cast<vtkImageFFT *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFFT::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFFT_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFFT *op = static_cast<vtkImageFFT *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageFFT *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFFT::NewInstance());

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
PyvtkImageFFT_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageFFT *tempr = vtkImageFFT::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFFT_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFFT *op = static_cast<vtkImageFFT *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SplitExtent(temp0, temp1, temp2, temp3) :
      op->vtkImageFFT::SplitExtent(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageFFT_Methods[] = {
  {(char*)"GetClassName", PyvtkImageFFT_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageFFT_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageFFT_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageFFT\nC++: vtkImageFFT *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageFFT_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageFFT\nC++: vtkImageFFT *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SplitExtent", PyvtkImageFFT_SplitExtent, METH_VARARGS,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: int SplitExtent(int splitExt[6], int startExt[6], int num,\n    int total)\n\nUsed internally for streaming and threads. Splits output update\nextent into num pieces. This method needs to be called num times.\n Results must not overlap for consistent starting extent. \nSubclass can override this method. This method returns the number\nof pieces resulting from a successful split.  This can be from 1\nto \"total\". If 1 is returned, the extent cannot be split.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageFFT_StaticNew()
{
  return vtkImageFFT::New();
}

PyObject *PyVTKClass_vtkImageFFTNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageFFT_StaticNew,
    PyvtkImageFFT_Methods,
    "vtkImageFFT", modulename,
    NULL, NULL,
    PyvtkImageFFT_Doc(),
    PyVTKClass_vtkImageFourierFilterNew(modulename));
  return cls;
}

const char **PyvtkImageFFT_Doc()
{
  static const char *docstring[] = {
    "vtkImageFFT -  Fast Fourier Transform.\n\n",
    "Superclass: vtkImageFourierFilter\n\n",
    "vtkImageFFT implements a  fast Fourier transform.  The input can have\nreal or complex data in any components and data types, but the output\nis always complex doubles with real values in component0, and\nimaginary values in component1.  The filter is fastest for images\nthat have power of two sizes.  The filter uses a butterfly diagram\nfor each prime factor of the dimension.  This makes images with p",
    "rime\nnumber dimensions (i.e. 17x17) much slower to compute.  Multi\ndimensional (i.e volumes) FFT's are decomposed so that each axis\nexecutes serially.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageFFT(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageFFTNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageFFT", o) != 0)
    {
    Py_DECREF(o);
    }

}

