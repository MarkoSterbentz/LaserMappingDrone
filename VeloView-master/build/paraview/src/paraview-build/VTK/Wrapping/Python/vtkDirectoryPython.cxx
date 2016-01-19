// python wrapper for vtkDirectory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDirectory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDirectory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDirectoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDirectory_Doc();


static PyObject *
PyvtkDirectory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDirectory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDirectory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDirectory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDirectory::NewInstance());

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
PyvtkDirectory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDirectory *tempr = vtkDirectory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkDirectory::Open(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkDirectory::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFile(temp0) :
      op->vtkDirectory::GetFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_FileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->FileIsDirectory(temp0) :
      op->vtkDirectory::FileIsDirectory(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFiles() :
      op->vtkDirectory::GetFiles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_GetCurrentWorkingDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentWorkingDirectory");

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = vtkDirectory::GetCurrentWorkingDirectory(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_MakeDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeDirectory");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkDirectory::MakeDirectory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_DeleteDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteDirectory");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkDirectory::DeleteDirectory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectory_Rename(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Rename");

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = vtkDirectory::Rename(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDirectory_Methods[] = {
  {(char*)"GetClassName", PyvtkDirectory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nReturn the class name as a string.\n"},
  {(char*)"IsA", PyvtkDirectory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nReturn the class name as a string.\n"},
  {(char*)"NewInstance", PyvtkDirectory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDirectory\nC++: vtkDirectory *NewInstance()\n\nReturn the class name as a string.\n"},
  {(char*)"SafeDownCast", PyvtkDirectory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDirectory\nC++: vtkDirectory *SafeDownCast(vtkObject* o)\n\nReturn the class name as a string.\n"},
  {(char*)"Open", PyvtkDirectory_Open, METH_VARARGS,
   (char*)"V.Open(string) -> int\nC++: int Open(const char *dir)\n\nOpen the specified directory and load the names of the files in\nthat directory. 0 is returned if the directory can not be opened,\n1 if it is opened.\n"},
  {(char*)"GetNumberOfFiles", PyvtkDirectory_GetNumberOfFiles, METH_VARARGS,
   (char*)"V.GetNumberOfFiles() -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturn the number of files in the current directory.\n"},
  {(char*)"GetFile", PyvtkDirectory_GetFile, METH_VARARGS,
   (char*)"V.GetFile(int) -> string\nC++: const char *GetFile(vtkIdType index)\n\nReturn the file at the given index, the indexing is 0 based\n"},
  {(char*)"FileIsDirectory", PyvtkDirectory_FileIsDirectory, METH_VARARGS,
   (char*)"V.FileIsDirectory(string) -> int\nC++: int FileIsDirectory(const char *name)\n\nReturn true if the file is a directory.  If the file is not an\nabsolute path, it is assumed to be relative to the opened\ndirectory. If no directory has been opened, it is assumed to be\nrelative to the current working directory.\n"},
  {(char*)"GetFiles", PyvtkDirectory_GetFiles, METH_VARARGS,
   (char*)"V.GetFiles() -> vtkStringArray\nC++: vtkStringArray *GetFiles()\n\nGet an array that contains all the file names.\n"},
  {(char*)"GetCurrentWorkingDirectory", PyvtkDirectory_GetCurrentWorkingDirectory, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCurrentWorkingDirectory(string, int) -> string\nC++: static const char *GetCurrentWorkingDirectory(char *buf,\n    unsigned int len)\n\nGet the current working directory.\n"},
  {(char*)"MakeDirectory", PyvtkDirectory_MakeDirectory, METH_VARARGS | METH_STATIC,
   (char*)"V.MakeDirectory(string) -> int\nC++: static int MakeDirectory(const char *dir)\n\nCreate directory.\n"},
  {(char*)"DeleteDirectory", PyvtkDirectory_DeleteDirectory, METH_VARARGS | METH_STATIC,
   (char*)"V.DeleteDirectory(string) -> int\nC++: static int DeleteDirectory(const char *dir)\n\nRemove a directory.\n"},
  {(char*)"Rename", PyvtkDirectory_Rename, METH_VARARGS | METH_STATIC,
   (char*)"V.Rename(string, string) -> int\nC++: static int Rename(const char *oldname, const char *newname)\n\nRename a file or directory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDirectory_StaticNew()
{
  return vtkDirectory::New();
}

PyObject *PyVTKClass_vtkDirectoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDirectory_StaticNew,
    PyvtkDirectory_Methods,
    "vtkDirectory", modulename,
    NULL, NULL,
    PyvtkDirectory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDirectory_Doc()
{
  static const char *docstring[] = {
    "vtkDirectory - OS independent class for access and manipulation of\nsystem directories\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDirectory provides a portable way of finding the names of the\nfiles in a system directory.  It also provides methods of\nmanipulating directories.\n\nCaveats:\n\nvtkDirectory works with windows and unix only.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDirectory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDirectoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDirectory", o) != 0)
    {
    Py_DECREF(o);
    }

}

