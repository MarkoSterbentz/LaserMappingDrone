// python wrapper for vtkOggTheoraWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOggTheoraWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOggTheoraWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOggTheoraWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGenericMovieWriterNew
extern "C" { PyObject *PyVTKClass_vtkGenericMovieWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericMovieWriterNew
#endif

static const char **PyvtkOggTheoraWriter_Doc();


static PyObject *
PyvtkOggTheoraWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOggTheoraWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOggTheoraWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOggTheoraWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOggTheoraWriter::NewInstance());

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
PyvtkOggTheoraWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOggTheoraWriter *tempr = vtkOggTheoraWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkOggTheoraWriter::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkOggTheoraWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->End();
      }
    else
      {
      op->vtkOggTheoraWriter::End();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

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
      op->vtkOggTheoraWriter::SetQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkOggTheoraWriter::GetQualityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkOggTheoraWriter::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkOggTheoraWriter::GetQuality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRate(temp0);
      }
    else
      {
      op->vtkOggTheoraWriter::SetRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRateMinValue() :
      op->vtkOggTheoraWriter::GetRateMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRateMaxValue() :
      op->vtkOggTheoraWriter::GetRateMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRate() :
      op->vtkOggTheoraWriter::GetRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

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
      op->vtkOggTheoraWriter::SetSubsampling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_GetSubsampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubsampling() :
      op->vtkOggTheoraWriter::GetSubsampling());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SubsamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SubsamplingOn();
      }
    else
      {
      op->vtkOggTheoraWriter::SubsamplingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOggTheoraWriter_SubsamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOggTheoraWriter *op = static_cast<vtkOggTheoraWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SubsamplingOff();
      }
    else
      {
      op->vtkOggTheoraWriter::SubsamplingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOggTheoraWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkOggTheoraWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOggTheoraWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOggTheoraWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOggTheoraWriter\nC++: vtkOggTheoraWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOggTheoraWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOggTheoraWriter\nC++: vtkOggTheoraWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Start", PyvtkOggTheoraWriter_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: void Start()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"Write", PyvtkOggTheoraWriter_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: void Write()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"End", PyvtkOggTheoraWriter_End, METH_VARARGS,
   (char*)"V.End()\nC++: void End()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"SetQuality", PyvtkOggTheoraWriter_SetQuality, METH_VARARGS,
   (char*)"V.SetQuality(int)\nC++: void SetQuality(int)\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"GetQualityMinValue", PyvtkOggTheoraWriter_GetQualityMinValue, METH_VARARGS,
   (char*)"V.GetQualityMinValue() -> int\nC++: int GetQualityMinValue()\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"GetQualityMaxValue", PyvtkOggTheoraWriter_GetQualityMaxValue, METH_VARARGS,
   (char*)"V.GetQualityMaxValue() -> int\nC++: int GetQualityMaxValue()\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"GetQuality", PyvtkOggTheoraWriter_GetQuality, METH_VARARGS,
   (char*)"V.GetQuality() -> int\nC++: int GetQuality()\n\nSet/Get the compression quality. 0 means worst quality and\nsmallest file size 2 means best quality and largest file size\n"},
  {(char*)"SetRate", PyvtkOggTheoraWriter_SetRate, METH_VARARGS,
   (char*)"V.SetRate(int)\nC++: void SetRate(int)\n\nSet/Get the frame rate, in frame/s.\n"},
  {(char*)"GetRateMinValue", PyvtkOggTheoraWriter_GetRateMinValue, METH_VARARGS,
   (char*)"V.GetRateMinValue() -> int\nC++: int GetRateMinValue()\n\nSet/Get the frame rate, in frame/s.\n"},
  {(char*)"GetRateMaxValue", PyvtkOggTheoraWriter_GetRateMaxValue, METH_VARARGS,
   (char*)"V.GetRateMaxValue() -> int\nC++: int GetRateMaxValue()\n\nSet/Get the frame rate, in frame/s.\n"},
  {(char*)"GetRate", PyvtkOggTheoraWriter_GetRate, METH_VARARGS,
   (char*)"V.GetRate() -> int\nC++: int GetRate()\n\nSet/Get the frame rate, in frame/s.\n"},
  {(char*)"SetSubsampling", PyvtkOggTheoraWriter_SetSubsampling, METH_VARARGS,
   (char*)"V.SetSubsampling(int)\nC++: void SetSubsampling(int a)\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {(char*)"GetSubsampling", PyvtkOggTheoraWriter_GetSubsampling, METH_VARARGS,
   (char*)"V.GetSubsampling() -> int\nC++: int GetSubsampling()\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {(char*)"SubsamplingOn", PyvtkOggTheoraWriter_SubsamplingOn, METH_VARARGS,
   (char*)"V.SubsamplingOn()\nC++: void SubsamplingOn()\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {(char*)"SubsamplingOff", PyvtkOggTheoraWriter_SubsamplingOff, METH_VARARGS,
   (char*)"V.SubsamplingOff()\nC++: void SubsamplingOff()\n\nIs the video to be encoded using 4:2:0 subsampling?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOggTheoraWriter_StaticNew()
{
  return vtkOggTheoraWriter::New();
}

PyObject *PyVTKClass_vtkOggTheoraWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOggTheoraWriter_StaticNew,
    PyvtkOggTheoraWriter_Methods,
    "vtkOggTheoraWriter", modulename,
    NULL, NULL,
    PyvtkOggTheoraWriter_Doc(),
    PyVTKClass_vtkGenericMovieWriterNew(modulename));
  return cls;
}

const char **PyvtkOggTheoraWriter_Doc()
{
  static const char *docstring[] = {
    "vtkOggTheoraWriter - Uses the ogg and theora libraries to write video\n\n",
    "Superclass: vtkGenericMovieWriter\n\n",
    "vtkOggTheoraWriter is an adapter that allows VTK to use the ogg and\ntheora libraries to write movie files.  This class creates .ogv files\ncontaining theora encoded video without audio.\n\nThis implementation is based on vtkFFMPEGWriter and uses some code\nderived from the encoder example distributed with libtheora.\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOggTheoraWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOggTheoraWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOggTheoraWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

