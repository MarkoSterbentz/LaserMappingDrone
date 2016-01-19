// python wrapper for vtkZlibImageCompressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkZlibImageCompressor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkZlibImageCompressor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkZlibImageCompressorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageCompressorNew
extern "C" { PyObject *PyVTKClass_vtkImageCompressorNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageCompressorNew
#endif

static const char **PyvtkZlibImageCompressor_Doc();


static PyObject *
PyvtkZlibImageCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkZlibImageCompressor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkZlibImageCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkZlibImageCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkZlibImageCompressor::NewInstance());

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
PyvtkZlibImageCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkZlibImageCompressor *tempr = vtkZlibImageCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Compress() :
      op->vtkZlibImageCompressor::Compress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Decompress() :
      op->vtkZlibImageCompressor::Decompress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkZlibImageCompressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkZlibImageCompressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionLevel(temp0);
      }
    else
      {
      op->vtkZlibImageCompressor::SetCompressionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMinValue() :
      op->vtkZlibImageCompressor::GetCompressionLevelMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMaxValue() :
      op->vtkZlibImageCompressor::GetCompressionLevelMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkZlibImageCompressor::GetCompressionLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorSpace(temp0);
      }
    else
      {
      op->vtkZlibImageCompressor::SetColorSpace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorSpace() :
      op->vtkZlibImageCompressor::GetColorSpace());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetStripAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStripAlpha(temp0);
      }
    else
      {
      op->vtkZlibImageCompressor::SetStripAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetStripAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStripAlpha() :
      op->vtkZlibImageCompressor::GetStripAlpha());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetLossLessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLossLessMode(temp0);
      }
    else
      {
      op->vtkZlibImageCompressor::SetLossLessMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkZlibImageCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkZlibImageCompressor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkZlibImageCompressor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkZlibImageCompressor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkZlibImageCompressor\nC++: vtkZlibImageCompressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkZlibImageCompressor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkZlibImageCompressor\nC++: vtkZlibImageCompressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Compress", PyvtkZlibImageCompressor_Compress, METH_VARARGS,
   (char*)"V.Compress() -> int\nC++: virtual int Compress()\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {(char*)"Decompress", PyvtkZlibImageCompressor_Decompress, METH_VARARGS,
   (char*)"V.Decompress() -> int\nC++: virtual int Decompress()\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {(char*)"SaveConfiguration", PyvtkZlibImageCompressor_SaveConfiguration, METH_VARARGS,
   (char*)"V.SaveConfiguration() -> string\nC++: virtual const char *SaveConfiguration()\n\nSerialize/Restore compressor configuration (but not the data)\ninto the stream.\n"},
  {(char*)"RestoreConfiguration", PyvtkZlibImageCompressor_RestoreConfiguration, METH_VARARGS,
   (char*)"V.RestoreConfiguration(string) -> string\nC++: virtual const char *RestoreConfiguration(const char *stream)\n\nSerialize/Restore compressor configuration (but not the data)\ninto the stream.\n"},
  {(char*)"SetCompressionLevel", PyvtkZlibImageCompressor_SetCompressionLevel, METH_VARARGS,
   (char*)"V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int)\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {(char*)"GetCompressionLevelMinValue", PyvtkZlibImageCompressor_GetCompressionLevelMinValue, METH_VARARGS,
   (char*)"V.GetCompressionLevelMinValue() -> int\nC++: int GetCompressionLevelMinValue()\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {(char*)"GetCompressionLevelMaxValue", PyvtkZlibImageCompressor_GetCompressionLevelMaxValue, METH_VARARGS,
   (char*)"V.GetCompressionLevelMaxValue() -> int\nC++: int GetCompressionLevelMaxValue()\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {(char*)"GetCompressionLevel", PyvtkZlibImageCompressor_GetCompressionLevel, METH_VARARGS,
   (char*)"V.GetCompressionLevel() -> int\nC++: int GetCompressionLevel()\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {(char*)"SetColorSpace", PyvtkZlibImageCompressor_SetColorSpace, METH_VARARGS,
   (char*)"V.SetColorSpace(int)\nC++: void SetColorSpace(int csId)\n\nSet to an integer between 0 and 5. This uses the same color space\nreduction as the squirt compressor. If set to 0 no colorspace\nreduction is performed.\n"},
  {(char*)"GetColorSpace", PyvtkZlibImageCompressor_GetColorSpace, METH_VARARGS,
   (char*)"V.GetColorSpace() -> int\nC++: int GetColorSpace()\n\nSet to an integer between 0 and 5. This uses the same color space\nreduction as the squirt compressor. If set to 0 no colorspace\nreduction is performed.\n"},
  {(char*)"SetStripAlpha", PyvtkZlibImageCompressor_SetStripAlpha, METH_VARARGS,
   (char*)"V.SetStripAlpha(int)\nC++: void SetStripAlpha(int status)\n\nSet to boolean value indicating whether alpha values should be\nstripped prior to compression. Stripping alpha values will reduce\ninput to compressor by 1/4 and results in speed up in compressor\nrun time and of course reduced image size. Stripped alpha value\nare reinstated to 0xff during decompress.\n"},
  {(char*)"GetStripAlpha", PyvtkZlibImageCompressor_GetStripAlpha, METH_VARARGS,
   (char*)"V.GetStripAlpha() -> int\nC++: int GetStripAlpha()\n\nSet to boolean value indicating whether alpha values should be\nstripped prior to compression. Stripping alpha values will reduce\ninput to compressor by 1/4 and results in speed up in compressor\nrun time and of course reduced image size. Stripped alpha value\nare reinstated to 0xff during decompress.\n"},
  {(char*)"SetLossLessMode", PyvtkZlibImageCompressor_SetLossLessMode, METH_VARARGS,
   (char*)"V.SetLossLessMode(int)\nC++: virtual void SetLossLessMode(int mode)\n\nWhen set the implementation must use loss-less compression,\notherwise implemnetation should user provided settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkZlibImageCompressor_StaticNew()
{
  return vtkZlibImageCompressor::New();
}

PyObject *PyVTKClass_vtkZlibImageCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkZlibImageCompressor_StaticNew,
    PyvtkZlibImageCompressor_Methods,
    "vtkZlibImageCompressor", modulename,
    NULL, NULL,
    PyvtkZlibImageCompressor_Doc(),
    PyVTKClass_vtkImageCompressorNew(modulename));
  return cls;
}

const char **PyvtkZlibImageCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkZlibImageCompressor - Image compressor/decompressor using Zlib.\n\n",
    "Superclass: vtkImageCompressor\n\n",
    "This class compresses Image data using Zlib. The compression level\nvaries between 1 and 9, 1 being the fastest at the cost of the\ncompression ratio, 9 producing the highest compression ratio at the\ncost of speed. Optionally color depth may be reduced and alpha\nstripped/restored.\n\nThanks:\n\nSciberQuest Inc. contributed this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkZlibImageCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkZlibImageCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkZlibImageCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

