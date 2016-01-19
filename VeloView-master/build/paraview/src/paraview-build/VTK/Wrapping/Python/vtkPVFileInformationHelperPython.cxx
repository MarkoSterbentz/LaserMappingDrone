// python wrapper for vtkPVFileInformationHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVFileInformationHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVFileInformationHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVFileInformationHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVFileInformationHelper_Doc();


static PyObject *
PyvtkPVFileInformationHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVFileInformationHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVFileInformationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVFileInformationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVFileInformationHelper::NewInstance());

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
PyvtkPVFileInformationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVFileInformationHelper *tempr = vtkPVFileInformationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPath(temp0);
      }
    else
      {
      op->vtkPVFileInformationHelper::SetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkPVFileInformationHelper::GetPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetWorkingDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorkingDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWorkingDirectory(temp0);
      }
    else
      {
      op->vtkPVFileInformationHelper::SetWorkingDirectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetWorkingDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorkingDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetWorkingDirectory() :
      op->vtkPVFileInformationHelper::GetWorkingDirectory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetDirectoryListing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectoryListing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDirectoryListing() :
      op->vtkPVFileInformationHelper::GetDirectoryListing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetDirectoryListing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectoryListing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirectoryListing(temp0);
      }
    else
      {
      op->vtkPVFileInformationHelper::SetDirectoryListing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_DirectoryListingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectoryListingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectoryListingOn();
      }
    else
      {
      op->vtkPVFileInformationHelper::DirectoryListingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_DirectoryListingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectoryListingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectoryListingOff();
      }
    else
      {
      op->vtkPVFileInformationHelper::DirectoryListingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetSpecialDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecialDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSpecialDirectories() :
      op->vtkPVFileInformationHelper::GetSpecialDirectories());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetSpecialDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecialDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpecialDirectories(temp0);
      }
    else
      {
      op->vtkPVFileInformationHelper::SetSpecialDirectories(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SpecialDirectoriesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpecialDirectoriesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpecialDirectoriesOn();
      }
    else
      {
      op->vtkPVFileInformationHelper::SpecialDirectoriesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SpecialDirectoriesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpecialDirectoriesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpecialDirectoriesOff();
      }
    else
      {
      op->vtkPVFileInformationHelper::SpecialDirectoriesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetFastFileTypeDetection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastFileTypeDetection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFastFileTypeDetection() :
      op->vtkPVFileInformationHelper::GetFastFileTypeDetection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_SetFastFileTypeDetection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastFileTypeDetection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFastFileTypeDetection(temp0);
      }
    else
      {
      op->vtkPVFileInformationHelper::SetFastFileTypeDetection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetPathSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPathSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPathSeparator() :
      op->vtkPVFileInformationHelper::GetPathSeparator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetActiveFileIsReadable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFileIsReadable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetActiveFileIsReadable() :
      op->vtkPVFileInformationHelper::GetActiveFileIsReadable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformationHelper_GetActiveFileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformationHelper *op = static_cast<vtkPVFileInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetActiveFileIsDirectory() :
      op->vtkPVFileInformationHelper::GetActiveFileIsDirectory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVFileInformationHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVFileInformationHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVFileInformationHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVFileInformationHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVFileInformationHelper\nC++: vtkPVFileInformationHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVFileInformationHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVFileInformationHelper\nC++: vtkPVFileInformationHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPath", PyvtkPVFileInformationHelper_SetPath, METH_VARARGS,
   (char*)"V.SetPath(string)\nC++: void SetPath(char *)\n\nGet/Set the path to the directory/file whose information we are\ninterested in. This is ignored when SpecialDirectories is set to\nTrue.\n"},
  {(char*)"GetPath", PyvtkPVFileInformationHelper_GetPath, METH_VARARGS,
   (char*)"V.GetPath() -> string\nC++: char *GetPath()\n\nGet/Set the path to the directory/file whose information we are\ninterested in. This is ignored when SpecialDirectories is set to\nTrue.\n"},
  {(char*)"SetWorkingDirectory", PyvtkPVFileInformationHelper_SetWorkingDirectory, METH_VARARGS,
   (char*)"V.SetWorkingDirectory(string)\nC++: void SetWorkingDirectory(char *)\n\nGet/Set the current working directory. This is needed if Path is\nrelative. The relative path will be converted to absolute path\nusing the working directory specified before obtaining\ninformation about it. If 0 (default), then the application's\ncurrent working directory will be used to flatten relative paths.\n"},
  {(char*)"GetWorkingDirectory", PyvtkPVFileInformationHelper_GetWorkingDirectory, METH_VARARGS,
   (char*)"V.GetWorkingDirectory() -> string\nC++: char *GetWorkingDirectory()\n\nGet/Set the current working directory. This is needed if Path is\nrelative. The relative path will be converted to absolute path\nusing the working directory specified before obtaining\ninformation about it. If 0 (default), then the application's\ncurrent working directory will be used to flatten relative paths.\n"},
  {(char*)"GetDirectoryListing", PyvtkPVFileInformationHelper_GetDirectoryListing, METH_VARARGS,
   (char*)"V.GetDirectoryListing() -> int\nC++: int GetDirectoryListing()\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {(char*)"SetDirectoryListing", PyvtkPVFileInformationHelper_SetDirectoryListing, METH_VARARGS,
   (char*)"V.SetDirectoryListing(int)\nC++: void SetDirectoryListing(int a)\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {(char*)"DirectoryListingOn", PyvtkPVFileInformationHelper_DirectoryListingOn, METH_VARARGS,
   (char*)"V.DirectoryListingOn()\nC++: void DirectoryListingOn()\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {(char*)"DirectoryListingOff", PyvtkPVFileInformationHelper_DirectoryListingOff, METH_VARARGS,
   (char*)"V.DirectoryListingOff()\nC++: void DirectoryListingOff()\n\nGet/Set if the we should attempt to get the information of\ncontents if Path is a directory. Default value is 0. This is\nignored when SpecialDirectories is set to True.\n"},
  {(char*)"GetSpecialDirectories", PyvtkPVFileInformationHelper_GetSpecialDirectories, METH_VARARGS,
   (char*)"V.GetSpecialDirectories() -> int\nC++: int GetSpecialDirectories()\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {(char*)"SetSpecialDirectories", PyvtkPVFileInformationHelper_SetSpecialDirectories, METH_VARARGS,
   (char*)"V.SetSpecialDirectories(int)\nC++: void SetSpecialDirectories(int a)\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {(char*)"SpecialDirectoriesOn", PyvtkPVFileInformationHelper_SpecialDirectoriesOn, METH_VARARGS,
   (char*)"V.SpecialDirectoriesOn()\nC++: void SpecialDirectoriesOn()\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {(char*)"SpecialDirectoriesOff", PyvtkPVFileInformationHelper_SpecialDirectoriesOff, METH_VARARGS,
   (char*)"V.SpecialDirectoriesOff()\nC++: void SpecialDirectoriesOff()\n\nGet/Set if the query is for special directories. Off by default.\nIf set to true, Path and DirectoryListing are ignored and the\nvtkPVFileInformation object is populated with information about\nspecial directories such as \"My Documents\", \"Desktop\" etc on\nWindows systems and \"Home\" on Unix based systems.\n"},
  {(char*)"GetFastFileTypeDetection", PyvtkPVFileInformationHelper_GetFastFileTypeDetection, METH_VARARGS,
   (char*)"V.GetFastFileTypeDetection() -> int\nC++: int GetFastFileTypeDetection()\n\nWhen on, while listing a directory, whenever a group of files is\nencountered, we verify the type/accessibility of only the first\nfile in the group and assume that all other have similar\npermissions. On by default.\n"},
  {(char*)"SetFastFileTypeDetection", PyvtkPVFileInformationHelper_SetFastFileTypeDetection, METH_VARARGS,
   (char*)"V.SetFastFileTypeDetection(int)\nC++: void SetFastFileTypeDetection(int a)\n\nWhen on, while listing a directory, whenever a group of files is\nencountered, we verify the type/accessibility of only the first\nfile in the group and assume that all other have similar\npermissions. On by default.\n"},
  {(char*)"GetPathSeparator", PyvtkPVFileInformationHelper_GetPathSeparator, METH_VARARGS,
   (char*)"V.GetPathSeparator() -> string\nC++: char *GetPathSeparator()\n\nReturns the platform specific path separator.\n"},
  {(char*)"GetActiveFileIsReadable", PyvtkPVFileInformationHelper_GetActiveFileIsReadable, METH_VARARGS,
   (char*)"V.GetActiveFileIsReadable() -> bool\nC++: bool GetActiveFileIsReadable()\n\nReturns if this->Path is a readable file.\n"},
  {(char*)"GetActiveFileIsDirectory", PyvtkPVFileInformationHelper_GetActiveFileIsDirectory, METH_VARARGS,
   (char*)"V.GetActiveFileIsDirectory() -> bool\nC++: bool GetActiveFileIsDirectory()\n\nReturns if this->Path is a directory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVFileInformationHelper_StaticNew()
{
  return vtkPVFileInformationHelper::New();
}

PyObject *PyVTKClass_vtkPVFileInformationHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVFileInformationHelper_StaticNew,
    PyvtkPVFileInformationHelper_Methods,
    "vtkPVFileInformationHelper", modulename,
    NULL, NULL,
    PyvtkPVFileInformationHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVFileInformationHelper_Doc()
{
  static const char *docstring[] = {
    "vtkPVFileInformationHelper - server side object used to gather\ninformation\n\n",
    "Superclass: vtkObject\n\n",
    "When collection information, ProcessModule cannot pass parameters to\nthe information object. In case of vtkPVFileInformation, we need data\non the server side such as which directory/file are we concerned\nwith. To make such information available, we use\nvtkPVFileInformationHelper. One creates a server side representation\nof vtkPVFileInformationHelper and sets attributes on it, then\nrequests a gathe",
    "r information on the helper object.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVFileInformationHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVFileInformationHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVFileInformationHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

