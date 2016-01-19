// python wrapper for vtkFileSeriesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkFileSeriesReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFileSeriesReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFileSeriesReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMetaReaderNew
extern "C" { PyObject *PyVTKClass_vtkMetaReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkMetaReaderNew
#endif

static const char **PyvtkFileSeriesReader_Doc();


static PyObject *
PyvtkFileSeriesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFileSeriesReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileSeriesReader::NewInstance());

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
PyvtkFileSeriesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFileSeriesReader *tempr = vtkFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkFileSeriesReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFileName(temp0);
      }
    else
      {
      op->vtkFileSeriesReader::AddFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_RemoveAllFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllFileNames();
      }
    else
      {
      op->vtkFileSeriesReader::RemoveAllFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkFileSeriesReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkFileSeriesReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetCurrentFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentFileName() :
      op->vtkFileSeriesReader::GetCurrentFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetUseMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseMetaFile() :
      op->vtkFileSeriesReader::GetUseMetaFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_SetUseMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMetaFile(temp0);
      }
    else
      {
      op->vtkFileSeriesReader::SetUseMetaFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_UseMetaFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMetaFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMetaFileOn();
      }
    else
      {
      op->vtkFileSeriesReader::UseMetaFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_UseMetaFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMetaFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseMetaFileOff();
      }
    else
      {
      op->vtkFileSeriesReader::UseMetaFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_GetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreReaderTime() :
      op->vtkFileSeriesReader::GetIgnoreReaderTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_SetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnoreReaderTime(temp0);
      }
    else
      {
      op->vtkFileSeriesReader::SetIgnoreReaderTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_IgnoreReaderTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreReaderTimeOn();
      }
    else
      {
      op->vtkFileSeriesReader::IgnoreReaderTimeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFileSeriesReader_IgnoreReaderTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesReader *op = static_cast<vtkFileSeriesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreReaderTimeOff();
      }
    else
      {
      op->vtkFileSeriesReader::IgnoreReaderTimeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFileSeriesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkFileSeriesReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFileSeriesReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFileSeriesReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFileSeriesReader\nC++: vtkFileSeriesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFileSeriesReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFileSeriesReader\nC++: vtkFileSeriesReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkFileSeriesReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *filename)\n\nCanReadFile is forwarded to the internal reader if it supports\nit.\n"},
  {(char*)"AddFileName", PyvtkFileSeriesReader_AddFileName, METH_VARARGS,
   (char*)"V.AddFileName(string)\nC++: virtual void AddFileName(const char *fname)\n\nAdds names of files to be read. The files are read in the order\nthey are added.\n"},
  {(char*)"RemoveAllFileNames", PyvtkFileSeriesReader_RemoveAllFileNames, METH_VARARGS,
   (char*)"V.RemoveAllFileNames()\nC++: virtual void RemoveAllFileNames()\n\nRemove all file names.\n"},
  {(char*)"GetNumberOfFileNames", PyvtkFileSeriesReader_GetNumberOfFileNames, METH_VARARGS,
   (char*)"V.GetNumberOfFileNames() -> int\nC++: virtual unsigned int GetNumberOfFileNames()\n\nReturns the number of file names added by AddFileName.\n"},
  {(char*)"GetFileName", PyvtkFileSeriesReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName(int) -> string\nC++: virtual const char *GetFileName(unsigned int idx)\n\nReturns the name of a file with index idx.\n"},
  {(char*)"GetCurrentFileName", PyvtkFileSeriesReader_GetCurrentFileName, METH_VARARGS,
   (char*)"V.GetCurrentFileName() -> string\nC++: const char *GetCurrentFileName()\n\n"},
  {(char*)"GetUseMetaFile", PyvtkFileSeriesReader_GetUseMetaFile, METH_VARARGS,
   (char*)"V.GetUseMetaFile() -> int\nC++: int GetUseMetaFile()\n\nIf true, then use the meta file.  False by default.\n"},
  {(char*)"SetUseMetaFile", PyvtkFileSeriesReader_SetUseMetaFile, METH_VARARGS,
   (char*)"V.SetUseMetaFile(int)\nC++: void SetUseMetaFile(int a)\n\nIf true, then use the meta file.  False by default.\n"},
  {(char*)"UseMetaFileOn", PyvtkFileSeriesReader_UseMetaFileOn, METH_VARARGS,
   (char*)"V.UseMetaFileOn()\nC++: void UseMetaFileOn()\n\nIf true, then use the meta file.  False by default.\n"},
  {(char*)"UseMetaFileOff", PyvtkFileSeriesReader_UseMetaFileOff, METH_VARARGS,
   (char*)"V.UseMetaFileOff()\nC++: void UseMetaFileOff()\n\nIf true, then use the meta file.  False by default.\n"},
  {(char*)"GetIgnoreReaderTime", PyvtkFileSeriesReader_GetIgnoreReaderTime, METH_VARARGS,
   (char*)"V.GetIgnoreReaderTime() -> int\nC++: int GetIgnoreReaderTime()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {(char*)"SetIgnoreReaderTime", PyvtkFileSeriesReader_SetIgnoreReaderTime, METH_VARARGS,
   (char*)"V.SetIgnoreReaderTime(int)\nC++: void SetIgnoreReaderTime(int a)\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {(char*)"IgnoreReaderTimeOn", PyvtkFileSeriesReader_IgnoreReaderTimeOn, METH_VARARGS,
   (char*)"V.IgnoreReaderTimeOn()\nC++: void IgnoreReaderTimeOn()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {(char*)"IgnoreReaderTimeOff", PyvtkFileSeriesReader_IgnoreReaderTimeOff, METH_VARARGS,
   (char*)"V.IgnoreReaderTimeOff()\nC++: void IgnoreReaderTimeOff()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFileSeriesReader_StaticNew()
{
  return vtkFileSeriesReader::New();
}

PyObject *PyVTKClass_vtkFileSeriesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFileSeriesReader_StaticNew,
    PyvtkFileSeriesReader_Methods,
    "vtkFileSeriesReader", modulename,
    NULL, NULL,
    PyvtkFileSeriesReader_Doc(),
    PyVTKClass_vtkMetaReaderNew(modulename));
  return cls;
}

const char **PyvtkFileSeriesReader_Doc()
{
  static const char *docstring[] = {
    "vtkFileSeriesReader - meta-reader to read file series\n\n",
    "Superclass: vtkMetaReader\n\n",
    "vtkFileSeriesReader is a meta-reader that can work with various\nreaders to load file series. To the pipeline, it looks like a reader\nthat supports time. It updates the file name to the internal reader\nwhenever a different time step is requested.\n\nIf the reader already supports time, then this meta-filter will\nmultiplex the time.  It will union together all the times and forward\ntime requests to th",
    "e file with the correct time.  Overlaps are\nhandled by requesting data from the file with the upper range the\nfarthest in the future.\n\nThere are two ways to specify a series of files.  The first way is by\nadding the filenames one at a time with the AddFileName method.  The\nsecond way is by providing a single \"meta\" file.  This meta file is a\nsimple text file that lists a file per line.  The files ",
    "can be\nrelative to the meta file.  This method is useful when the actual\nreader points to a set of files itself.  The UseMetaFile toggles\nbetween these two methods of specifying files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFileSeriesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFileSeriesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFileSeriesReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

