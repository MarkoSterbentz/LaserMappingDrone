// python wrapper for vtkThreadedImageAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkImageData.h"
#include "vtkThreadedImageAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkThreadedImageAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkThreadedImageAlgorithm_Doc();


static PyObject *
PyvtkThreadedImageAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkThreadedImageAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreadedImageAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkThreadedImageAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreadedImageAlgorithm::NewInstance());

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
PyvtkThreadedImageAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkThreadedImageAlgorithm *tempr = vtkThreadedImageAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_ThreadedExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreadedExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  vtkImageData *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  int temp2[6];
  int save2[6];
  const int size2 = 6;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->ThreadedExecute(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkThreadedImageAlgorithm::ThreadedExecute(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkThreadedImageAlgorithm::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkThreadedImageAlgorithm::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkThreadedImageAlgorithm::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkThreadedImageAlgorithm::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

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
      op->vtkThreadedImageAlgorithm::SplitExtent(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkThreadedImageAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkThreadedImageAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThreadedImageAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThreadedImageAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkThreadedImageAlgorithm\nC++: vtkThreadedImageAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThreadedImageAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThreadedImageAlgorithm\nC++: vtkThreadedImageAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThreadedExecute", PyvtkThreadedImageAlgorithm_ThreadedExecute, METH_VARARGS,
   (char*)"V.ThreadedExecute(vtkImageData, vtkImageData, [int, int, int, int,\n     int, int], int)\nC++: virtual void ThreadedExecute(vtkImageData *inData,\n    vtkImageData *outData, int extent[6], int threadId)\n\n"},
  {(char*)"SetNumberOfThreads", PyvtkThreadedImageAlgorithm_SetNumberOfThreads, METH_VARARGS,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"GetNumberOfThreads", PyvtkThreadedImageAlgorithm_GetNumberOfThreads, METH_VARARGS,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nGet/Set the number of threads to create when rendering\n"},
  {(char*)"SplitExtent", PyvtkThreadedImageAlgorithm_SplitExtent, METH_VARARGS,
   (char*)"V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: virtual int SplitExtent(int splitExt[6], int startExt[6],\n    int num, int total)\n\nPutting this here until I merge graphics and imaging streaming.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkThreadedImageAlgorithm_Methods,
    "vtkThreadedImageAlgorithm", modulename,
    NULL, NULL,
    PyvtkThreadedImageAlgorithm_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThreadedImageAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkThreadedImageAlgorithm - Generic filter that has one input..\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkThreadedImageAlgorithm is a filter superclass that hides much of\nthe pipeline  complexity. It handles breaking the pipeline execution\ninto smaller extents so that the vtkImageData limits are observed. It\nalso provides support for multithreading. If you don't need any of\nthis functionality, consider using vtkSimpleImageToImageAlgorithm\ninstead.\n\nSee also:\n\nvtkSimpleImageToImageAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThreadedImageAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThreadedImageAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThreadedImageAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

