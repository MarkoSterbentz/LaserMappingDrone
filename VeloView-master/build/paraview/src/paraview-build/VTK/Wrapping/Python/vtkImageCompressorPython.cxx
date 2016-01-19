// python wrapper for vtkImageCompressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageCompressor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageCompressor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageCompressorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImageCompressor_Doc();


static PyObject *
PyvtkImageCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageCompressor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCompressor::NewInstance());

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
PyvtkImageCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageCompressor *tempr = vtkImageCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageCompressor::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageCompressor::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkImageCompressor::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkImageCompressor::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_SetLossLessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

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
      op->vtkImageCompressor::SetLossLessMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_GetLossLessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLossLessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLossLessMode() :
      op->vtkImageCompressor::GetLossLessMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->Compress();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->Decompress();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkImageCompressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCompressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkImageCompressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCompressor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCompressor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCompressor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageCompressor\nC++: vtkImageCompressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCompressor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCompressor\nC++: vtkImageCompressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkImageCompressor_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkUnsignedCharArray)\nC++: void SetInput(vtkUnsignedCharArray *input)\n\nGet/Set the input to this compressor.\n"},
  {(char*)"GetInput", PyvtkImageCompressor_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetInput()\n\nGet/Set the input to this compressor.\n"},
  {(char*)"GetOutput", PyvtkImageCompressor_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetOutput()\n\nGet/Set the output of the compressor.\n"},
  {(char*)"SetOutput", PyvtkImageCompressor_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkUnsignedCharArray)\nC++: void SetOutput(vtkUnsignedCharArray *)\n\nGet/Set the output of the compressor.\n"},
  {(char*)"SetLossLessMode", PyvtkImageCompressor_SetLossLessMode, METH_VARARGS,
   (char*)"V.SetLossLessMode(int)\nC++: void SetLossLessMode(int a)\n\nWhen set the implementation must use loss-less compression,\notherwise implemnetation should user provided settings.\n"},
  {(char*)"GetLossLessMode", PyvtkImageCompressor_GetLossLessMode, METH_VARARGS,
   (char*)"V.GetLossLessMode() -> int\nC++: int GetLossLessMode()\n\nWhen set the implementation must use loss-less compression,\notherwise implemnetation should user provided settings.\n"},
  {(char*)"Compress", PyvtkImageCompressor_Compress, METH_VARARGS,
   (char*)"V.Compress() -> int\nC++: virtual int Compress()\n\nCall this method to compress the input and generate the\ncompressed data.\n"},
  {(char*)"Decompress", PyvtkImageCompressor_Decompress, METH_VARARGS,
   (char*)"V.Decompress() -> int\nC++: virtual int Decompress()\n\nDecompresses and geenartes the decompressed data as output. Input\nmust be compressed data.\n"},
  {(char*)"SaveConfiguration", PyvtkImageCompressor_SaveConfiguration, METH_VARARGS,
   (char*)"V.SaveConfiguration() -> string\nC++: virtual const char *SaveConfiguration()\n\nSerialize compressor configuration (but not the data) into the\nstream. A pointer to the internally managed stream is returned\n(ie do not free it!).\n"},
  {(char*)"RestoreConfiguration", PyvtkImageCompressor_RestoreConfiguration, METH_VARARGS,
   (char*)"V.RestoreConfiguration(string) -> string\nC++: virtual const char *RestoreConfiguration(const char *stream)\n\nRestore state from the stream, The stream format for all image\ncompressor is: [ClassName, LossLessMode, [Derived Class Stream]].\nUpon success the stream is returned otherwise 0 is returned\nindicating an error.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageCompressor_Methods,
    "vtkImageCompressor", modulename,
    NULL, NULL,
    PyvtkImageCompressor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImageCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkImageCompressor - Superclass for image compressor/decompressor\n\n",
    "Superclass: vtkObject\n\n",
    "vtkImageCompressor is an abstract superclass for the helper object\nused to compress images by the vtkParallelManager subclasses.\nCompressors must implement Compress,Decomperss methods, which respect\nthe LossLessMode ivar, which is used by the composite manager to\nforce loss less compression during a still render. Additionally\ncompressors must be able to seriealize and restore their setting from\na ",
    "stream.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

