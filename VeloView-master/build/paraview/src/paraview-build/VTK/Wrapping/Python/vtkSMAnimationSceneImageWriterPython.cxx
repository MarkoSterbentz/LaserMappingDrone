// python wrapper for vtkSMAnimationSceneImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMAnimationSceneImageWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMAnimationSceneImageWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMAnimationSceneImageWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMAnimationSceneWriterNew
extern "C" { PyObject *PyVTKClass_vtkSMAnimationSceneWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMAnimationSceneWriterNew
#endif

static const char **PyvtkSMAnimationSceneImageWriter_Doc();


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMAnimationSceneImageWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationSceneImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationSceneImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationSceneImageWriter::NewInstance());

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
PyvtkSMAnimationSceneImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMAnimationSceneImageWriter *tempr = vtkSMAnimationSceneImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetMagnificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMinValue() :
      op->vtkSMAnimationSceneImageWriter::GetMagnificationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetMagnificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMaxValue() :
      op->vtkSMAnimationSceneImageWriter::GetMagnificationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkSMAnimationSceneImageWriter::GetMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuality(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkSMAnimationSceneImageWriter::GetQualityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkSMAnimationSceneImageWriter::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkSMAnimationSceneImageWriter::GetQuality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompression(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCompression() :
      op->vtkSMAnimationSceneImageWriter::GetCompression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_CompressionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompressionOn();
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::CompressionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_CompressionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompressionOff();
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::CompressionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubsampling(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetSubsampling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubsampling() :
      op->vtkSMAnimationSceneImageWriter::GetSubsampling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SubsamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SubsamplingOn();
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SubsamplingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SubsamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SubsamplingOff();
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SubsamplingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetErrorCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetErrorCode() :
      op->vtkSMAnimationSceneImageWriter::GetErrorCode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneImageWriter_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneImageWriter_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMAnimationSceneImageWriter_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkSMAnimationSceneImageWriter_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkSMAnimationSceneImageWriter_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkSMAnimationSceneImageWriter::GetBackgroundColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrameRate(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneImageWriter::SetFrameRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneImageWriter *op = static_cast<vtkSMAnimationSceneImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFrameRate() :
      op->vtkSMAnimationSceneImageWriter::GetFrameRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneImageWriter_Merge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Merge");

  vtkImageData *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    vtkSMAnimationSceneImageWriter::Merge(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMAnimationSceneImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSMAnimationSceneImageWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMAnimationSceneImageWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMAnimationSceneImageWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMAnimationSceneImageWriter\nC++: vtkSMAnimationSceneImageWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMAnimationSceneImageWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMAnimationSceneImageWriter\nC++: vtkSMAnimationSceneImageWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMagnification", PyvtkSMAnimationSceneImageWriter_SetMagnification, METH_VARARGS,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int)\n\nSet the magnification factor to use for the saved animation.\n"},
  {(char*)"GetMagnificationMinValue", PyvtkSMAnimationSceneImageWriter_GetMagnificationMinValue, METH_VARARGS,
   (char*)"V.GetMagnificationMinValue() -> int\nC++: int GetMagnificationMinValue()\n\nSet the magnification factor to use for the saved animation.\n"},
  {(char*)"GetMagnificationMaxValue", PyvtkSMAnimationSceneImageWriter_GetMagnificationMaxValue, METH_VARARGS,
   (char*)"V.GetMagnificationMaxValue() -> int\nC++: int GetMagnificationMaxValue()\n\nSet the magnification factor to use for the saved animation.\n"},
  {(char*)"GetMagnification", PyvtkSMAnimationSceneImageWriter_GetMagnification, METH_VARARGS,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nSet the magnification factor to use for the saved animation.\n"},
  {(char*)"SetQuality", PyvtkSMAnimationSceneImageWriter_SetQuality, METH_VARARGS,
   (char*)"V.SetQuality(int)\nC++: void SetQuality(int)\n\nGet/Set the quality for the generated movie. Applicable only if\nthe choose file format supports it. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"GetQualityMinValue", PyvtkSMAnimationSceneImageWriter_GetQualityMinValue, METH_VARARGS,
   (char*)"V.GetQualityMinValue() -> int\nC++: int GetQualityMinValue()\n\nGet/Set the quality for the generated movie. Applicable only if\nthe choose file format supports it. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"GetQualityMaxValue", PyvtkSMAnimationSceneImageWriter_GetQualityMaxValue, METH_VARARGS,
   (char*)"V.GetQualityMaxValue() -> int\nC++: int GetQualityMaxValue()\n\nGet/Set the quality for the generated movie. Applicable only if\nthe choose file format supports it. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"GetQuality", PyvtkSMAnimationSceneImageWriter_GetQuality, METH_VARARGS,
   (char*)"V.GetQuality() -> int\nC++: int GetQuality()\n\nGet/Set the quality for the generated movie. Applicable only if\nthe choose file format supports it. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"SetCompression", PyvtkSMAnimationSceneImageWriter_SetCompression, METH_VARARGS,
   (char*)"V.SetCompression(bool)\nC++: void SetCompression(bool a)\n\nTurns on(the default) or off compression. Turning off compression\noverrides quality setting. NOTE: This only affects the FFMPEG\nbackend.\n"},
  {(char*)"GetCompression", PyvtkSMAnimationSceneImageWriter_GetCompression, METH_VARARGS,
   (char*)"V.GetCompression() -> bool\nC++: bool GetCompression()\n\nTurns on(the default) or off compression. Turning off compression\noverrides quality setting. NOTE: This only affects the FFMPEG\nbackend.\n"},
  {(char*)"CompressionOn", PyvtkSMAnimationSceneImageWriter_CompressionOn, METH_VARARGS,
   (char*)"V.CompressionOn()\nC++: void CompressionOn()\n\nTurns on(the default) or off compression. Turning off compression\noverrides quality setting. NOTE: This only affects the FFMPEG\nbackend.\n"},
  {(char*)"CompressionOff", PyvtkSMAnimationSceneImageWriter_CompressionOff, METH_VARARGS,
   (char*)"V.CompressionOff()\nC++: void CompressionOff()\n\nTurns on(the default) or off compression. Turning off compression\noverrides quality setting. NOTE: This only affects the FFMPEG\nbackend.\n"},
  {(char*)"SetSubsampling", PyvtkSMAnimationSceneImageWriter_SetSubsampling, METH_VARARGS,
   (char*)"V.SetSubsampling(int)\nC++: void SetSubsampling(int a)\n\nGet/Set the setting whether the movie encoder should use\nsubsampling of the chrome planes or not, if applicable. Since the\nhuman eye is more sensitive to brightness than color variations,\nsubsampling can be useful to reduce the bitrate. Default value is\n0.\n"},
  {(char*)"GetSubsampling", PyvtkSMAnimationSceneImageWriter_GetSubsampling, METH_VARARGS,
   (char*)"V.GetSubsampling() -> int\nC++: int GetSubsampling()\n\nGet/Set the setting whether the movie encoder should use\nsubsampling of the chrome planes or not, if applicable. Since the\nhuman eye is more sensitive to brightness than color variations,\nsubsampling can be useful to reduce the bitrate. Default value is\n0.\n"},
  {(char*)"SubsamplingOn", PyvtkSMAnimationSceneImageWriter_SubsamplingOn, METH_VARARGS,
   (char*)"V.SubsamplingOn()\nC++: void SubsamplingOn()\n\nGet/Set the setting whether the movie encoder should use\nsubsampling of the chrome planes or not, if applicable. Since the\nhuman eye is more sensitive to brightness than color variations,\nsubsampling can be useful to reduce the bitrate. Default value is\n0.\n"},
  {(char*)"SubsamplingOff", PyvtkSMAnimationSceneImageWriter_SubsamplingOff, METH_VARARGS,
   (char*)"V.SubsamplingOff()\nC++: void SubsamplingOff()\n\nGet/Set the setting whether the movie encoder should use\nsubsampling of the chrome planes or not, if applicable. Since the\nhuman eye is more sensitive to brightness than color variations,\nsubsampling can be useful to reduce the bitrate. Default value is\n0.\n"},
  {(char*)"GetErrorCode", PyvtkSMAnimationSceneImageWriter_GetErrorCode, METH_VARARGS,
   (char*)"V.GetErrorCode() -> int\nC++: int GetErrorCode()\n\nGet the error code which is set if there's an error while writing\nthe images.\n"},
  {(char*)"SetBackgroundColor", PyvtkSMAnimationSceneImageWriter_SetBackgroundColor, METH_VARARGS,
   (char*)"V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkSMAnimationSceneImageWriter_GetBackgroundColor, METH_VARARGS,
   (char*)"V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {(char*)"SetFrameRate", PyvtkSMAnimationSceneImageWriter_SetFrameRate, METH_VARARGS,
   (char*)"V.SetFrameRate(float)\nC++: void SetFrameRate(double a)\n\n"},
  {(char*)"GetFrameRate", PyvtkSMAnimationSceneImageWriter_GetFrameRate, METH_VARARGS,
   (char*)"V.GetFrameRate() -> float\nC++: double GetFrameRate()\n\n"},
  {(char*)"Merge", PyvtkSMAnimationSceneImageWriter_Merge, METH_VARARGS | METH_STATIC,
   (char*)"V.Merge(vtkImageData, vtkImageData)\nC++: static void Merge(vtkImageData *dest, vtkImageData *src)\n\nConvenience method used to merge a smaller image ( src) into a\nlarger one ( dest). The location of the smaller image in the\nlarger image are determined by their extents.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMAnimationSceneImageWriter_StaticNew()
{
  return vtkSMAnimationSceneImageWriter::New();
}

PyObject *PyVTKClass_vtkSMAnimationSceneImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMAnimationSceneImageWriter_StaticNew,
    PyvtkSMAnimationSceneImageWriter_Methods,
    "vtkSMAnimationSceneImageWriter", modulename,
    NULL, NULL,
    PyvtkSMAnimationSceneImageWriter_Doc(),
    PyVTKClass_vtkSMAnimationSceneWriterNew(modulename));
  return cls;
}

const char **PyvtkSMAnimationSceneImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSMAnimationSceneImageWriter - helper class to write animation \n\n",
    "Superclass: vtkSMAnimationSceneWriter\n\n",
    "vtkSMAnimationSceneImageWriter is a concrete implementation of\nvtkSMAnimationSceneWriter that can write movies or images. The\ngenerated output's size and alignment is exactly as specified on the\nGUISize, WindowPosition properties of the view modules. One can\noptionally specify Magnification to scale the output.\n\nNotes:\n\nThis class does not support changing the dimensions of the view, one\nhas to do",
    " that before calling Save(). It only provides Magnification\nwhich can scale the size using integral scale factor.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMAnimationSceneImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMAnimationSceneImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMAnimationSceneImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

