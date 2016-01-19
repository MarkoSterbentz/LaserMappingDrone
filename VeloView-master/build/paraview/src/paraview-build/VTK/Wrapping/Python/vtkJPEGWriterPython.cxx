// python wrapper for vtkJPEGWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkJPEGWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkJPEGWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkJPEGWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkJPEGWriter_Doc();


static PyObject *
PyvtkJPEGWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkJPEGWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJPEGWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkJPEGWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJPEGWriter::NewInstance());

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
PyvtkJPEGWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkJPEGWriter *tempr = vtkJPEGWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkJPEGWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      op->vtkJPEGWriter::SetQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkJPEGWriter::GetQualityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkJPEGWriter::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkJPEGWriter::GetQuality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetProgressive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgressive(temp0);
      }
    else
      {
      op->vtkJPEGWriter::SetProgressive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetProgressive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetProgressive() :
      op->vtkJPEGWriter::GetProgressive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_ProgressiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProgressiveOn();
      }
    else
      {
      op->vtkJPEGWriter::ProgressiveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_ProgressiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProgressiveOff();
      }
    else
      {
      op->vtkJPEGWriter::ProgressiveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToMemory(temp0);
      }
    else
      {
      op->vtkJPEGWriter::SetWriteToMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWriteToMemory() :
      op->vtkJPEGWriter::GetWriteToMemory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_WriteToMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToMemoryOn();
      }
    else
      {
      op->vtkJPEGWriter::WriteToMemoryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_WriteToMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToMemoryOff();
      }
    else
      {
      op->vtkJPEGWriter::WriteToMemoryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetResult(temp0);
      }
    else
      {
      op->vtkJPEGWriter::SetResult(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetResult() :
      op->vtkJPEGWriter::GetResult());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkJPEGWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkJPEGWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkJPEGWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkJPEGWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkJPEGWriter\nC++: vtkJPEGWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkJPEGWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkJPEGWriter\nC++: vtkJPEGWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkJPEGWriter_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nThe main interface which triggers the writer to start.\n"},
  {(char*)"SetQuality", PyvtkJPEGWriter_SetQuality, METH_VARARGS,
   (char*)"V.SetQuality(int)\nC++: void SetQuality(int)\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"GetQualityMinValue", PyvtkJPEGWriter_GetQualityMinValue, METH_VARARGS,
   (char*)"V.GetQualityMinValue() -> int\nC++: int GetQualityMinValue()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"GetQualityMaxValue", PyvtkJPEGWriter_GetQualityMaxValue, METH_VARARGS,
   (char*)"V.GetQualityMaxValue() -> int\nC++: int GetQualityMaxValue()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"GetQuality", PyvtkJPEGWriter_GetQuality, METH_VARARGS,
   (char*)"V.GetQuality() -> int\nC++: int GetQuality()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {(char*)"SetProgressive", PyvtkJPEGWriter_SetProgressive, METH_VARARGS,
   (char*)"V.SetProgressive(int)\nC++: void SetProgressive(unsigned int a)\n\nProgressive JPEG generation.\n"},
  {(char*)"GetProgressive", PyvtkJPEGWriter_GetProgressive, METH_VARARGS,
   (char*)"V.GetProgressive() -> int\nC++: unsigned int GetProgressive()\n\nProgressive JPEG generation.\n"},
  {(char*)"ProgressiveOn", PyvtkJPEGWriter_ProgressiveOn, METH_VARARGS,
   (char*)"V.ProgressiveOn()\nC++: void ProgressiveOn()\n\nProgressive JPEG generation.\n"},
  {(char*)"ProgressiveOff", PyvtkJPEGWriter_ProgressiveOff, METH_VARARGS,
   (char*)"V.ProgressiveOff()\nC++: void ProgressiveOff()\n\nProgressive JPEG generation.\n"},
  {(char*)"SetWriteToMemory", PyvtkJPEGWriter_SetWriteToMemory, METH_VARARGS,
   (char*)"V.SetWriteToMemory(int)\nC++: void SetWriteToMemory(unsigned int a)\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"GetWriteToMemory", PyvtkJPEGWriter_GetWriteToMemory, METH_VARARGS,
   (char*)"V.GetWriteToMemory() -> int\nC++: unsigned int GetWriteToMemory()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"WriteToMemoryOn", PyvtkJPEGWriter_WriteToMemoryOn, METH_VARARGS,
   (char*)"V.WriteToMemoryOn()\nC++: void WriteToMemoryOn()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"WriteToMemoryOff", PyvtkJPEGWriter_WriteToMemoryOff, METH_VARARGS,
   (char*)"V.WriteToMemoryOff()\nC++: void WriteToMemoryOff()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {(char*)"SetResult", PyvtkJPEGWriter_SetResult, METH_VARARGS,
   (char*)"V.SetResult(vtkUnsignedCharArray)\nC++: virtual void SetResult(vtkUnsignedCharArray *)\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {(char*)"GetResult", PyvtkJPEGWriter_GetResult, METH_VARARGS,
   (char*)"V.GetResult() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetResult()\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkJPEGWriter_StaticNew()
{
  return vtkJPEGWriter::New();
}

PyObject *PyVTKClass_vtkJPEGWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkJPEGWriter_StaticNew,
    PyvtkJPEGWriter_Methods,
    "vtkJPEGWriter", modulename,
    NULL, NULL,
    PyvtkJPEGWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkJPEGWriter_Doc()
{
  static const char *docstring[] = {
    "vtkJPEGWriter - Writes JPEG files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkJPEGWriter writes JPEG files. It supports 1 and 3 component data\nof unsigned char. It relies on the IJG's libjpeg.  Thanks to IJG for\nsupplying a public jpeg IO library.\n\nSee Also:\n\nvtkJPEGReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkJPEGWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkJPEGWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkJPEGWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

