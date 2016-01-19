// python wrapper for vtkImageDifference
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageDifference.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDifference(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDifferenceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageDifference_Doc();


static PyObject *
PyvtkImageDifference_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDifference::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDifference::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDifference *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDifference::NewInstance());

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
PyvtkImageDifference_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDifference *tempr = vtkImageDifference::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetImageConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetImageConnection(temp0);
      }
    else
      {
      op->vtkImageDifference::SetImageConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetImageData(temp0);
      }
    else
      {
      op->vtkImageDifference::SetImageData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkImageDifference::GetImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetError_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkImageDifference::GetError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageDifference_GetError_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetError(temp0);
      }
    else
      {
      op->vtkImageDifference::GetError(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkImageDifference_GetError(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageDifference_GetError_s1(self, args);
    case 1:
      return PyvtkImageDifference_GetError_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetError");
  return NULL;
}



static PyObject *
PyvtkImageDifference_GetThresholdedError_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdedError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetThresholdedError() :
      op->vtkImageDifference::GetThresholdedError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageDifference_GetThresholdedError_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdedError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetThresholdedError(temp0);
      }
    else
      {
      op->vtkImageDifference::GetThresholdedError(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkImageDifference_GetThresholdedError(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageDifference_GetThresholdedError_s1(self, args);
    case 1:
      return PyvtkImageDifference_GetThresholdedError_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetThresholdedError");
  return NULL;
}



static PyObject *
PyvtkImageDifference_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreshold(temp0);
      }
    else
      {
      op->vtkImageDifference::SetThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkImageDifference::GetThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAllowShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowShift(temp0);
      }
    else
      {
      op->vtkImageDifference::SetAllowShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAllowShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowShift() :
      op->vtkImageDifference::GetAllowShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AllowShiftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowShiftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowShiftOn();
      }
    else
      {
      op->vtkImageDifference::AllowShiftOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AllowShiftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowShiftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowShiftOff();
      }
    else
      {
      op->vtkImageDifference::AllowShiftOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAveraging(temp0);
      }
    else
      {
      op->vtkImageDifference::SetAveraging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAveraging() :
      op->vtkImageDifference::GetAveraging());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AveragingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AveragingOn();
      }
    else
      {
      op->vtkImageDifference::AveragingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AveragingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AveragingOff();
      }
    else
      {
      op->vtkImageDifference::AveragingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDifference_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDifference_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDifference_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDifference_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDifference\nC++: vtkImageDifference *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDifference_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDifference\nC++: vtkImageDifference *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImageConnection", PyvtkImageDifference_SetImageConnection, METH_VARARGS,
   (char*)"V.SetImageConnection(vtkAlgorithmOutput)\nC++: void SetImageConnection(vtkAlgorithmOutput *output)\n\nSpecify the Image to compare the input to.\n"},
  {(char*)"SetImageData", PyvtkImageDifference_SetImageData, METH_VARARGS,
   (char*)"V.SetImageData(vtkDataObject)\nC++: void SetImageData(vtkDataObject *image)\n\nSpecify the Image to compare the input to.\n"},
  {(char*)"GetImage", PyvtkImageDifference_GetImage, METH_VARARGS,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nSpecify the Image to compare the input to.\n"},
  {(char*)"GetError", PyvtkImageDifference_GetError, METH_VARARGS,
   (char*)"V.GetError() -> float\nC++: double GetError(void)\nV.GetError([float, ...])\nC++: void GetError(double *e)\n\nReturn the total error in comparing the two images.\n"},
  {(char*)"GetThresholdedError", PyvtkImageDifference_GetThresholdedError, METH_VARARGS,
   (char*)"V.GetThresholdedError() -> float\nC++: double GetThresholdedError(void)\nV.GetThresholdedError([float, ...])\nC++: void GetThresholdedError(double *e)\n\nReturn the total thresholded error in comparing the two images.\nThe thresholded error is the error for a given pixel minus the\nthreshold and clamped at a minimum of zero.\n"},
  {(char*)"SetThreshold", PyvtkImageDifference_SetThreshold, METH_VARARGS,
   (char*)"V.SetThreshold(int)\nC++: void SetThreshold(int a)\n\nSpecify a threshold tolerance for pixel differences.\n"},
  {(char*)"GetThreshold", PyvtkImageDifference_GetThreshold, METH_VARARGS,
   (char*)"V.GetThreshold() -> int\nC++: int GetThreshold()\n\nSpecify a threshold tolerance for pixel differences.\n"},
  {(char*)"SetAllowShift", PyvtkImageDifference_SetAllowShift, METH_VARARGS,
   (char*)"V.SetAllowShift(int)\nC++: void SetAllowShift(int a)\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"GetAllowShift", PyvtkImageDifference_GetAllowShift, METH_VARARGS,
   (char*)"V.GetAllowShift() -> int\nC++: int GetAllowShift()\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"AllowShiftOn", PyvtkImageDifference_AllowShiftOn, METH_VARARGS,
   (char*)"V.AllowShiftOn()\nC++: void AllowShiftOn()\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"AllowShiftOff", PyvtkImageDifference_AllowShiftOff, METH_VARARGS,
   (char*)"V.AllowShiftOff()\nC++: void AllowShiftOff()\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"SetAveraging", PyvtkImageDifference_SetAveraging, METH_VARARGS,
   (char*)"V.SetAveraging(int)\nC++: void SetAveraging(int a)\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {(char*)"GetAveraging", PyvtkImageDifference_GetAveraging, METH_VARARGS,
   (char*)"V.GetAveraging() -> int\nC++: int GetAveraging()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {(char*)"AveragingOn", PyvtkImageDifference_AveragingOn, METH_VARARGS,
   (char*)"V.AveragingOn()\nC++: void AveragingOn()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {(char*)"AveragingOff", PyvtkImageDifference_AveragingOff, METH_VARARGS,
   (char*)"V.AveragingOff()\nC++: void AveragingOff()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDifference_StaticNew()
{
  return vtkImageDifference::New();
}

PyObject *PyVTKClass_vtkImageDifferenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDifference_StaticNew,
    PyvtkImageDifference_Methods,
    "vtkImageDifference", modulename,
    NULL, NULL,
    PyvtkImageDifference_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDifference_Doc()
{
  static const char *docstring[] = {
    "vtkImageDifference - Compares images for regression tests.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageDifference takes two rgb unsigned char images and compares\nthem. It allows the images to be slightly different.  If AllowShift\nis on, then each pixel can be shifted by one pixel. Threshold is the\nallowable error for each pixel.\n\nThis is not a symetric filter and the difference computed is not\nsymetric when AllowShift is on. Specifically in that case a pixel in\nSetImage input will be compar",
    "ed to the matching pixel in the input as\nwell as to the input's eight connected neighbors. BUT... the opposite\nis not true. So for example if a valid image (SetImage) has a single\nwhite pixel in it, it will not find a match in the input image if the\ninput image is black (because none of the nine suspect pixels are\nwhite). In contrast, if there is a single white pixel in the input\nimage and the val",
    "id image (SetImage) is all black it will match with\nno error because all it has to do is find black pixels and even\nthough the input image has a white pixel, its neighbors are not\nwhite.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDifference(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDifferenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDifference", o) != 0)
    {
    Py_DECREF(o);
    }

}

