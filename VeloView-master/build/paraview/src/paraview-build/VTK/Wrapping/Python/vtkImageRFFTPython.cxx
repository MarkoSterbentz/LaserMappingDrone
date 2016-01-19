// python wrapper for vtkImageRFFT
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageRFFT.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageRFFT(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageRFFTNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageFourierFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageFourierFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageFourierFilterNew
#endif

static const char **PyvtkImageRFFT_Doc();


static PyObject *
PyvtkImageRFFT_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRFFT *op = static_cast<vtkImageRFFT *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageRFFT::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRFFT_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRFFT *op = static_cast<vtkImageRFFT *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageRFFT::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRFFT_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRFFT *op = static_cast<vtkImageRFFT *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageRFFT *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageRFFT::NewInstance());

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
PyvtkImageRFFT_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageRFFT *tempr = vtkImageRFFT::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRFFT_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRFFT *op = static_cast<vtkImageRFFT *>(vp);

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
      op->vtkImageRFFT::SplitExtent(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkImageRFFT_Methods[] = {
  {(char*)"GetClassName", PyvtkImageRFFT_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageRFFT_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageRFFT_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageRFFT\nC++: vtkImageRFFT *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageRFFT_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageRFFT\nC++: vtkImageRFFT *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SplitExtent", PyvtkImageRFFT_SplitExtent, METH_VARARGS,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: int SplitExtent(int splitExt[6], int startExt[6], int num,\n    int total)\n\nFor streaming and threads.  Splits output update extent into num\npieces. This method needs to be called num times.  Results must\nnot overlap for consistent starting extent.  Subclass can\noverride this method.  This method returns the number of pieces\nresulting from a successful split. This can be from 1 to \"total\".\n If 1 is returned, the extent cannot be split.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageRFFT_StaticNew()
{
  return vtkImageRFFT::New();
}

PyObject *PyVTKClass_vtkImageRFFTNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageRFFT_StaticNew,
    PyvtkImageRFFT_Methods,
    "vtkImageRFFT", modulename,
    NULL, NULL,
    PyvtkImageRFFT_Doc(),
    PyVTKClass_vtkImageFourierFilterNew(modulename));
  return cls;
}

const char **PyvtkImageRFFT_Doc()
{
  static const char *docstring[] = {
    "vtkImageRFFT -  Reverse Fast Fourier Transform.\n\n",
    "Superclass: vtkImageFourierFilter\n\n",
    "vtkImageRFFT implements the reverse fast Fourier transform.  The\ninput can have real or complex data in any components and data types,\nbut the output is always complex doubles with real values in\ncomponent0, and imaginary values in component1.  The filter is\nfastest for images that have power of two sizes.  The filter uses a\nbutterfly fitlers for each prime factor of the dimension.  This makes\nima",
    "ges with prime number dimensions (i.e. 17x17) much slower to\ncompute.  Multi dimensional (i.e volumes) FFT's are decomposed so\nthat each axis executes in series. In most cases the RFFT will\nproduce an image whose imaginary values are all zero's. In this case\nvtkImageExtractComponents can be used to remove this imaginary\ncomponents leaving only the real image.\n\nSee Also:\n\nvtkImageExtractComponenent",
    "s\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageRFFT(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageRFFTNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageRFFT", o) != 0)
    {
    Py_DECREF(o);
    }

}

