// python wrapper for vtkMetaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMetaReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMetaReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMetaReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkMetaReader_Doc();


static PyObject *
PyvtkMetaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMetaReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMetaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMetaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMetaReader::NewInstance());

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
PyvtkMetaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMetaReader *tempr = vtkMetaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetReader(temp0);
      }
    else
      {
      op->vtkMetaReader::SetReader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkMetaReader::GetReader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_SetMetaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMetaFileName(temp0);
      }
    else
      {
      op->vtkMetaReader::SetMetaFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_GetMetaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMetaFileName() :
      op->vtkMetaReader::GetMetaFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_GetFileIndexRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIndexRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetFileIndexRange() :
      op->vtkMetaReader::GetFileIndexRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_GetFileIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetFileIndex() :
      op->vtkMetaReader::GetFileIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_SetFileIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileIndex(temp0);
      }
    else
      {
      op->vtkMetaReader::SetFileIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMetaReader::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_SetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

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
      op->vtkMetaReader::SetFileNameMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaReader_GetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameMethod() :
      op->vtkMetaReader::GetFileNameMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMetaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMetaReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMetaReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMetaReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMetaReader\nC++: vtkMetaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMetaReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMetaReader\nC++: vtkMetaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetReader", PyvtkMetaReader_SetReader, METH_VARARGS,
   (char*)"V.SetReader(vtkAlgorithm)\nC++: void SetReader(vtkAlgorithm *)\n\nSet/get the internal reader.\n"},
  {(char*)"GetReader", PyvtkMetaReader_GetReader, METH_VARARGS,
   (char*)"V.GetReader() -> vtkAlgorithm\nC++: vtkAlgorithm *GetReader()\n\nSet/get the internal reader.\n"},
  {(char*)"SetMetaFileName", PyvtkMetaReader_SetMetaFileName, METH_VARARGS,
   (char*)"V.SetMetaFileName(string)\nC++: void SetMetaFileName(const char *name)\n\nGet/Set the meta-file name\n"},
  {(char*)"GetMetaFileName", PyvtkMetaReader_GetMetaFileName, METH_VARARGS,
   (char*)"V.GetMetaFileName() -> string\nC++: char *GetMetaFileName()\n\nGet/Set the meta-file name\n"},
  {(char*)"GetFileIndexRange", PyvtkMetaReader_GetFileIndexRange, METH_VARARGS,
   (char*)"V.GetFileIndexRange() -> (int, int)\nC++: vtkIdType *GetFileIndexRange()\n\n"},
  {(char*)"GetFileIndex", PyvtkMetaReader_GetFileIndex, METH_VARARGS,
   (char*)"V.GetFileIndex() -> int\nC++: vtkIdType GetFileIndex()\n\nGet/set the index of the file to read.\n"},
  {(char*)"SetFileIndex", PyvtkMetaReader_SetFileIndex, METH_VARARGS,
   (char*)"V.SetFileIndex(int)\nC++: void SetFileIndex(vtkIdType i)\n\nGet/set the index of the file to read.\n"},
  {(char*)"GetMTime", PyvtkMetaReader_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn the MTime when also considering the internal reader.\n"},
  {(char*)"SetFileNameMethod", PyvtkMetaReader_SetFileNameMethod, METH_VARARGS,
   (char*)"V.SetFileNameMethod(string)\nC++: void SetFileNameMethod(char *)\n\nName of the method used to set the file name of the internal\nreader. By default, this is SetFileName.\n"},
  {(char*)"GetFileNameMethod", PyvtkMetaReader_GetFileNameMethod, METH_VARARGS,
   (char*)"V.GetFileNameMethod() -> string\nC++: char *GetFileNameMethod()\n\nName of the method used to set the file name of the internal\nreader. By default, this is SetFileName.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMetaReader_StaticNew()
{
  return vtkMetaReader::New();
}

PyObject *PyVTKClass_vtkMetaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMetaReader_StaticNew,
    PyvtkMetaReader_Methods,
    "vtkMetaReader", modulename,
    NULL, NULL,
    PyvtkMetaReader_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMetaReader_Doc()
{
  static const char *docstring[] = {
    "vtkMetaReader - Common functionality for meta-readers.\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "to another Reader.  The Reader reads from a file selected from a list\nof files using a FileIndex.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMetaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMetaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMetaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

