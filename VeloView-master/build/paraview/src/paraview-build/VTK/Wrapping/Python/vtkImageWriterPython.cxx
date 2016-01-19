// python wrapper for vtkImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageWriter_Doc();


static PyObject *
PyvtkImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageWriter::NewInstance());

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
PyvtkImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageWriter *tempr = vtkImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

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
      op->vtkImageWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkImageWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkImageWriter::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkImageWriter::GetFilePrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkImageWriter::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkImageWriter::GetFilePattern());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileDimensionality(temp0);
      }
    else
      {
      op->vtkImageWriter::SetFileDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFileDimensionality() :
      op->vtkImageWriter::GetFileDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkImageWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWriter_DeleteFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteFiles();
      }
    else
      {
      op->vtkImageWriter::DeleteFiles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageWriter\nC++: vtkImageWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageWriter\nC++: vtkImageWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkImageWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name for the image file. You should specify either a\nFileName or a FilePrefix. Use FilePrefix if the data is stored in\nmultiple files.\n"},
  {(char*)"GetFileName", PyvtkImageWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name for the image file. You should specify either a\nFileName or a FilePrefix. Use FilePrefix if the data is stored in\nmultiple files.\n"},
  {(char*)"SetFilePrefix", PyvtkImageWriter_SetFilePrefix, METH_VARARGS,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nSpecify file prefix for the image file(s).You should specify\neither a FileName or FilePrefix. Use FilePrefix if the data is\nstored in multiple files.\n"},
  {(char*)"GetFilePrefix", PyvtkImageWriter_GetFilePrefix, METH_VARARGS,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nSpecify file prefix for the image file(s).You should specify\neither a FileName or FilePrefix. Use FilePrefix if the data is\nstored in multiple files.\n"},
  {(char*)"SetFilePattern", PyvtkImageWriter_SetFilePattern, METH_VARARGS,
   (char*)"V.SetFilePattern(string)\nC++: void SetFilePattern(char *)\n\nThe sprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {(char*)"GetFilePattern", PyvtkImageWriter_GetFilePattern, METH_VARARGS,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThe sprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {(char*)"SetFileDimensionality", PyvtkImageWriter_SetFileDimensionality, METH_VARARGS,
   (char*)"V.SetFileDimensionality(int)\nC++: void SetFileDimensionality(int a)\n\nWhat dimension are the files to be written. Usually this is 2, or\n3. If it is 2 and the input is a volume then the volume will be\nwritten as a series of 2d slices.\n"},
  {(char*)"GetFileDimensionality", PyvtkImageWriter_GetFileDimensionality, METH_VARARGS,
   (char*)"V.GetFileDimensionality() -> int\nC++: int GetFileDimensionality()\n\nWhat dimension are the files to be written. Usually this is 2, or\n3. If it is 2 and the input is a volume then the volume will be\nwritten as a series of 2d slices.\n"},
  {(char*)"GetInput", PyvtkImageWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet/Get the input object from the image pipeline.\n"},
  {(char*)"Write", PyvtkImageWriter_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nThe main interface which triggers the writer to start.\n"},
  {(char*)"DeleteFiles", PyvtkImageWriter_DeleteFiles, METH_VARARGS,
   (char*)"V.DeleteFiles()\nC++: void DeleteFiles()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageWriter_StaticNew()
{
  return vtkImageWriter::New();
}

PyObject *PyVTKClass_vtkImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageWriter_StaticNew,
    PyvtkImageWriter_Methods,
    "vtkImageWriter", modulename,
    NULL, NULL,
    PyvtkImageWriter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkImageWriter - Writes images to files.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageWriter writes images to files with any data type. The data\ntype of the file is the same scalar type as the input.  The\ndimensionality determines whether the data will be written in one or\nmultiple files. This class is used as the superclass of most image\nwriting classes such as vtkBMPWriter etc. It supports streaming.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

