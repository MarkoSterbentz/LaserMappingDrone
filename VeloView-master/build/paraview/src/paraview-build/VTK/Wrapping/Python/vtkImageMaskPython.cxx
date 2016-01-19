// python wrapper for vtkImageMask
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageMask.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMask(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMaskNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMask_Doc();


static PyObject *
PyvtkImageMask_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMask::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMask::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMask *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMask::NewInstance());

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
PyvtkImageMask_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMask *tempr = vtkImageMask::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetMaskedOutputValue(temp0, temp1);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskedOutputValue(temp0);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaskedOutputValue(temp0, temp1);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMaskedOutputValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMask_SetMaskedOutputValue_Methods[] = {
  {NULL, PyvtkImageMask_SetMaskedOutputValue_s1, METH_VARARGS,
   (char*)"@iO *d"},
  {NULL, PyvtkImageMask_SetMaskedOutputValue_s3, METH_VARARGS,
   (char*)"@dd"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageMask_SetMaskedOutputValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageMask_SetMaskedOutputValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageMask_SetMaskedOutputValue_s2(self, args);
    case 3:
      return PyvtkImageMask_SetMaskedOutputValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskedOutputValue");
  return NULL;
}



static PyObject *
PyvtkImageMask_GetMaskedOutputValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaskedOutputValue() :
      op->vtkImageMask::GetMaskedOutputValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskedOutputValueLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskedOutputValueLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaskedOutputValueLength() :
      op->vtkImageMask::GetMaskedOutputValueLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskAlpha(temp0);
      }
    else
      {
      op->vtkImageMask::SetMaskAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaskAlphaMinValue() :
      op->vtkImageMask::GetMaskAlphaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaskAlphaMaxValue() :
      op->vtkImageMask::GetMaskAlphaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaskAlpha() :
      op->vtkImageMask::GetMaskAlpha());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetImageInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImageInputData(temp0);
      }
    else
      {
      op->vtkImageMask::SetImageInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetMaskInputData(temp0);
      }
    else
      {
      op->vtkImageMask::SetMaskInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetNotMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNotMask(temp0);
      }
    else
      {
      op->vtkImageMask::SetNotMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetNotMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNotMask() :
      op->vtkImageMask::GetNotMask());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_NotMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NotMaskOn();
      }
    else
      {
      op->vtkImageMask::NotMaskOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_NotMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NotMaskOff();
      }
    else
      {
      op->vtkImageMask::NotMaskOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1Data(temp0);
      }
    else
      {
      op->vtkImageMask::SetInput1Data(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2Data(temp0);
      }
    else
      {
      op->vtkImageMask::SetInput2Data(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMask_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMask_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMask_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMask_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMask\nC++: vtkImageMask *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMask_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMask\nC++: vtkImageMask *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaskedOutputValue", PyvtkImageMask_SetMaskedOutputValue, METH_VARARGS,
   (char*)"V.SetMaskedOutputValue(int, [float, ...])\nC++: void SetMaskedOutputValue(int num, double *v)\nV.SetMaskedOutputValue(float)\nC++: void SetMaskedOutputValue(double v)\nV.SetMaskedOutputValue(float, float)\nC++: void SetMaskedOutputValue(double v1, double v2)\nV.SetMaskedOutputValue(float, float, float)\nC++: void SetMaskedOutputValue(double v1, double v2, double v3)\n\nSetGet the value of the output pixel replaced by mask.\n"},
  {(char*)"GetMaskedOutputValue", PyvtkImageMask_GetMaskedOutputValue, METH_VARARGS,
   (char*)"V.GetMaskedOutputValue() -> (float, ...)\nC++: double *GetMaskedOutputValue()\n\nSetGet the value of the output pixel replaced by mask.\n"},
  {(char*)"GetMaskedOutputValueLength", PyvtkImageMask_GetMaskedOutputValueLength, METH_VARARGS,
   (char*)"V.GetMaskedOutputValueLength() -> int\nC++: int GetMaskedOutputValueLength()\n\nSetGet the value of the output pixel replaced by mask.\n"},
  {(char*)"SetMaskAlpha", PyvtkImageMask_SetMaskAlpha, METH_VARARGS,
   (char*)"V.SetMaskAlpha(float)\nC++: void SetMaskAlpha(double)\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"GetMaskAlphaMinValue", PyvtkImageMask_GetMaskAlphaMinValue, METH_VARARGS,
   (char*)"V.GetMaskAlphaMinValue() -> float\nC++: double GetMaskAlphaMinValue()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"GetMaskAlphaMaxValue", PyvtkImageMask_GetMaskAlphaMaxValue, METH_VARARGS,
   (char*)"V.GetMaskAlphaMaxValue() -> float\nC++: double GetMaskAlphaMaxValue()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"GetMaskAlpha", PyvtkImageMask_GetMaskAlpha, METH_VARARGS,
   (char*)"V.GetMaskAlpha() -> float\nC++: double GetMaskAlpha()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"SetImageInputData", PyvtkImageMask_SetImageInputData, METH_VARARGS,
   (char*)"V.SetImageInputData(vtkImageData)\nC++: void SetImageInputData(vtkImageData *in)\n\nSet the input to be masked.\n"},
  {(char*)"SetMaskInputData", PyvtkImageMask_SetMaskInputData, METH_VARARGS,
   (char*)"V.SetMaskInputData(vtkImageData)\nC++: void SetMaskInputData(vtkImageData *in)\n\nSet the mask to be used.\n"},
  {(char*)"SetNotMask", PyvtkImageMask_SetNotMask, METH_VARARGS,
   (char*)"V.SetNotMask(int)\nC++: void SetNotMask(int a)\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"GetNotMask", PyvtkImageMask_GetNotMask, METH_VARARGS,
   (char*)"V.GetNotMask() -> int\nC++: int GetNotMask()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"NotMaskOn", PyvtkImageMask_NotMaskOn, METH_VARARGS,
   (char*)"V.NotMaskOn()\nC++: void NotMaskOn()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"NotMaskOff", PyvtkImageMask_NotMaskOff, METH_VARARGS,
   (char*)"V.NotMaskOff()\nC++: void NotMaskOff()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"SetInput1Data", PyvtkImageMask_SetInput1Data, METH_VARARGS,
   (char*)"V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {(char*)"SetInput2Data", PyvtkImageMask_SetInput2Data, METH_VARARGS,
   (char*)"V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMask_StaticNew()
{
  return vtkImageMask::New();
}

PyObject *PyVTKClass_vtkImageMaskNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMask_StaticNew,
    PyvtkImageMask_Methods,
    "vtkImageMask", modulename,
    NULL, NULL,
    PyvtkImageMask_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMask_Doc()
{
  static const char *docstring[] = {
    "vtkImageMask - Combines a mask and an image.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageMask combines a mask with an image.  Non zero mask implies\nthe output pixel will be the same as the image. If a mask pixel is\nzero,  then the output pixel is set to \"MaskedValue\".  The filter\nalso has the option to pass the mask through a boolean not operation\nbefore processing the image. This reverses the passed and replaced\npixels. The two inputs should have the same \"WholeExtent\". The m",
    "ask\ninput should be unsigned char, and the image scalar type is the same\nas the output scalar type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMask(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMaskNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMask", o) != 0)
    {
    Py_DECREF(o);
    }

}

