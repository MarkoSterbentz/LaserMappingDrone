// python wrapper for vtkSquirtCompressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSquirtCompressor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSquirtCompressor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSquirtCompressorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageCompressorNew
extern "C" { PyObject *PyVTKClass_vtkImageCompressorNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageCompressorNew
#endif

static const char **PyvtkSquirtCompressor_Doc();


static PyObject *
PyvtkSquirtCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSquirtCompressor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSquirtCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSquirtCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSquirtCompressor::NewInstance());

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
PyvtkSquirtCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSquirtCompressor *tempr = vtkSquirtCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_SetSquirtLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSquirtLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSquirtLevel(temp0);
      }
    else
      {
      op->vtkSquirtCompressor::SetSquirtLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_GetSquirtLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquirtLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSquirtLevelMinValue() :
      op->vtkSquirtCompressor::GetSquirtLevelMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_GetSquirtLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquirtLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSquirtLevelMaxValue() :
      op->vtkSquirtCompressor::GetSquirtLevelMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_GetSquirtLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquirtLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSquirtLevel() :
      op->vtkSquirtCompressor::GetSquirtLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Compress() :
      op->vtkSquirtCompressor::Compress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Decompress() :
      op->vtkSquirtCompressor::Decompress());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkSquirtCompressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkSquirtCompressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSquirtCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkSquirtCompressor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSquirtCompressor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSquirtCompressor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSquirtCompressor\nC++: vtkSquirtCompressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSquirtCompressor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSquirtCompressor\nC++: vtkSquirtCompressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSquirtLevel", PyvtkSquirtCompressor_SetSquirtLevel, METH_VARARGS,
   (char*)"V.SetSquirtLevel(int)\nC++: void SetSquirtLevel(int)\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {(char*)"GetSquirtLevelMinValue", PyvtkSquirtCompressor_GetSquirtLevelMinValue, METH_VARARGS,
   (char*)"V.GetSquirtLevelMinValue() -> int\nC++: int GetSquirtLevelMinValue()\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {(char*)"GetSquirtLevelMaxValue", PyvtkSquirtCompressor_GetSquirtLevelMaxValue, METH_VARARGS,
   (char*)"V.GetSquirtLevelMaxValue() -> int\nC++: int GetSquirtLevelMaxValue()\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {(char*)"GetSquirtLevel", PyvtkSquirtCompressor_GetSquirtLevel, METH_VARARGS,
   (char*)"V.GetSquirtLevel() -> int\nC++: int GetSquirtLevel()\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {(char*)"Compress", PyvtkSquirtCompressor_Compress, METH_VARARGS,
   (char*)"V.Compress() -> int\nC++: virtual int Compress()\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {(char*)"Decompress", PyvtkSquirtCompressor_Decompress, METH_VARARGS,
   (char*)"V.Decompress() -> int\nC++: virtual int Decompress()\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {(char*)"SaveConfiguration", PyvtkSquirtCompressor_SaveConfiguration, METH_VARARGS,
   (char*)"V.SaveConfiguration() -> string\nC++: virtual const char *SaveConfiguration()\n\nSerialize/Restore compressor configuration (but not the data)\ninto the stream.\n"},
  {(char*)"RestoreConfiguration", PyvtkSquirtCompressor_RestoreConfiguration, METH_VARARGS,
   (char*)"V.RestoreConfiguration(string) -> string\nC++: virtual const char *RestoreConfiguration(const char *stream)\n\nSerialize/Restore compressor configuration (but not the data)\ninto the stream.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSquirtCompressor_StaticNew()
{
  return vtkSquirtCompressor::New();
}

PyObject *PyVTKClass_vtkSquirtCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSquirtCompressor_StaticNew,
    PyvtkSquirtCompressor_Methods,
    "vtkSquirtCompressor", modulename,
    NULL, NULL,
    PyvtkSquirtCompressor_Doc(),
    PyVTKClass_vtkImageCompressorNew(modulename));
  return cls;
}

const char **PyvtkSquirtCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkSquirtCompressor - Image compressor/decompressor using SQUIRT.\n\n",
    "Superclass: vtkImageCompressor\n\n",
    "This class compresses Image data using SQUIRT a Run-Length-Encoded\ncompression scheme. The Squirt Level controls the compression. 0 is\nlossless compression, 1 through 5 are lossy compression levels with 5\nbeing maximum compression.\n\nSquirt produces smaller compression ratio than some other popular\ncompression algorithm. However, Squirt has a relatively high\nthroughput compared to some other compre",
    "ssion algorithm. Squirt's\nperformance is optimized for RGBa images, however the class can also\nwork with RGB images. There is no performance hit when applying the\nlossy comrpession levels.\n\nLevels 1 through 5 apply a color reducing mask to the run\ncomputation, not to the pixel directly. This is clever in that no new\ncolors are introduced to the image, and as a result one doesn't see\ndrastic change",
    "s between the reduced color image and the original.\nHowever, when using the higher levels one may get runs that produce\nvisual artifiacts. For example when a run starts in one actor whose\nreduced color matches the background the background is colored with\nthe actor color.\n\nThanks:\n\nThanks to Sandia National Laboratories for this compression technique\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSquirtCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSquirtCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSquirtCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

