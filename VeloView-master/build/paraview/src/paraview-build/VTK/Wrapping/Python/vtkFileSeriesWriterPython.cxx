// python wrapper for vtkFileSeriesWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkFileSeriesWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFileSeriesWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFileSeriesWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkFileSeriesWriter_Doc();


static PyObject *
PyvtkFileSeriesWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFileSeriesWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileSeriesWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFileSeriesWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileSeriesWriter::NewInstance());

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
PyvtkFileSeriesWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFileSeriesWriter *tempr = vtkFileSeriesWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetWriter(temp0);
      }
    else
      {
      op->vtkFileSeriesWriter::SetWriter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetWriter() :
      op->vtkFileSeriesWriter::GetWriter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFileSeriesWriter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileNameMethod(temp0);
      }
    else
      {
      op->vtkFileSeriesWriter::SetFileNameMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameMethod() :
      op->vtkFileSeriesWriter::GetFileNameMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkFileSeriesWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFileSeriesWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkFileSeriesWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkFileSeriesWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteAllTimeSteps(temp0);
      }
    else
      {
      op->vtkFileSeriesWriter::SetWriteAllTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOn();
      }
    else
      {
      op->vtkFileSeriesWriter::WriteAllTimeStepsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOff();
      }
    else
      {
      op->vtkFileSeriesWriter::WriteAllTimeStepsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  vtkClientServerInterpreter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerInterpreter"))
    {
    if (ap.IsBound())
      {
      op->SetInterpreter(temp0);
      }
    else
      {
      op->vtkFileSeriesWriter::SetInterpreter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFileSeriesWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkFileSeriesWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFileSeriesWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFileSeriesWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFileSeriesWriter\nC++: vtkFileSeriesWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFileSeriesWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFileSeriesWriter\nC++: vtkFileSeriesWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWriter", PyvtkFileSeriesWriter_SetWriter, METH_VARARGS,
   (char*)"V.SetWriter(vtkAlgorithm)\nC++: virtual void SetWriter(vtkAlgorithm *)\n\nSet/get the internal writer.\n"},
  {(char*)"GetWriter", PyvtkFileSeriesWriter_GetWriter, METH_VARARGS,
   (char*)"V.GetWriter() -> vtkAlgorithm\nC++: vtkAlgorithm *GetWriter()\n\nSet/get the internal writer.\n"},
  {(char*)"GetMTime", PyvtkFileSeriesWriter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn the MTime also considering the internal writer.\n"},
  {(char*)"SetFileNameMethod", PyvtkFileSeriesWriter_SetFileNameMethod, METH_VARARGS,
   (char*)"V.SetFileNameMethod(string)\nC++: void SetFileNameMethod(char *)\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {(char*)"GetFileNameMethod", PyvtkFileSeriesWriter_GetFileNameMethod, METH_VARARGS,
   (char*)"V.GetFileNameMethod() -> string\nC++: char *GetFileNameMethod()\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {(char*)"SetFileName", PyvtkFileSeriesWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the output file.\n"},
  {(char*)"GetFileName", PyvtkFileSeriesWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {(char*)"Write", PyvtkFileSeriesWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {(char*)"GetWriteAllTimeSteps", PyvtkFileSeriesWriter_GetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.GetWriteAllTimeSteps() -> int\nC++: int GetWriteAllTimeSteps()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"SetWriteAllTimeSteps", PyvtkFileSeriesWriter_SetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.SetWriteAllTimeSteps(int)\nC++: void SetWriteAllTimeSteps(int a)\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"WriteAllTimeStepsOn", PyvtkFileSeriesWriter_WriteAllTimeStepsOn, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOn()\nC++: void WriteAllTimeStepsOn()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"WriteAllTimeStepsOff", PyvtkFileSeriesWriter_WriteAllTimeStepsOff, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOff()\nC++: void WriteAllTimeStepsOff()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {(char*)"SetInterpreter", PyvtkFileSeriesWriter_SetInterpreter, METH_VARARGS,
   (char*)"V.SetInterpreter(vtkClientServerInterpreter)\nC++: void SetInterpreter(vtkClientServerInterpreter *interp)\n\nGet/Set the interpreter to use to call methods on the writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFileSeriesWriter_StaticNew()
{
  return vtkFileSeriesWriter::New();
}

PyObject *PyVTKClass_vtkFileSeriesWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFileSeriesWriter_StaticNew,
    PyvtkFileSeriesWriter_Methods,
    "vtkFileSeriesWriter", modulename,
    NULL, NULL,
    PyvtkFileSeriesWriter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFileSeriesWriter_Doc()
{
  static const char *docstring[] = {
    "vtkFileSeriesWriter - meta-writer for writing a file series using\nwriters\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkFileSeriesWriter is a meta-writer that enables writing a file\nseries using writers that are not time-aware.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFileSeriesWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFileSeriesWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFileSeriesWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

