// python wrapper for vtkSMReaderFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMReaderFactory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMReaderFactory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMReaderFactoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMReaderFactory_Doc();


static PyObject *
PyvtkSMReaderFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMReaderFactory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMReaderFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMReaderFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMReaderFactory::NewInstance());

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
PyvtkSMReaderFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMReaderFactory *tempr = vtkSMReaderFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSMReaderFactory::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_RegisterPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RegisterPrototype(temp0, temp1);
      }
    else
      {
      op->vtkSMReaderFactory::RegisterPrototype(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_CanReadFile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  vtkSMSession *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
    {
    bool tempr = (ap.IsBound() ?
      op->CanReadFile(temp0, temp1) :
      op->vtkSMReaderFactory::CanReadFile(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_CanReadFile_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = vtkSMReaderFactory::CanReadFile(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_CanReadFile_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  vtkSMSession *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkSMSession"))
    {
    bool tempr = vtkSMReaderFactory::CanReadFile(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMReaderFactory_CanReadFile_Methods[] = {
  {NULL, PyvtkSMReaderFactory_CanReadFile_s1, METH_VARARGS,
   (char*)"@zO *vtkSMSession"},
  {NULL, PyvtkSMReaderFactory_CanReadFile_s2, METH_VARARGS | METH_STATIC,
   (char*)"zO *vtkSMProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMReaderFactory_CanReadFile(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMReaderFactory_CanReadFile_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 4:
      return PyvtkSMReaderFactory_CanReadFile_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CanReadFile");
  return NULL;
}



static PyObject *
PyvtkSMReaderFactory_GetReaderName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetReaderName() :
      op->vtkSMReaderFactory::GetReaderName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetReaderGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetReaderGroup() :
      op->vtkSMReaderFactory::GetReaderGroup());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetPossibleReaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPossibleReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  vtkSMSession *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
    {
    vtkStringList *tempr = (ap.IsBound() ?
      op->GetPossibleReaders(temp0, temp1) :
      op->vtkSMReaderFactory::GetPossibleReaders(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetReaders_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    vtkStringList *tempr = (ap.IsBound() ?
      op->GetReaders(temp0) :
      op->vtkSMReaderFactory::GetReaders(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_GetReaders_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  vtkSMSession *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
    {
    vtkStringList *tempr = (ap.IsBound() ?
      op->GetReaders(temp0, temp1) :
      op->vtkSMReaderFactory::GetReaders(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMReaderFactory_GetReaders(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMReaderFactory_GetReaders_s1(self, args);
    case 2:
      return PyvtkSMReaderFactory_GetReaders_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetReaders");
  return NULL;
}



static PyObject *
PyvtkSMReaderFactory_TestFileReadability(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TestFileReadability");

  char *temp0 = NULL;
  vtkSMSession *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
    {
    bool tempr = vtkSMReaderFactory::TestFileReadability(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetSupportedFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0) :
      op->vtkSMReaderFactory::GetSupportedFileTypes(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetNumberOfRegisteredPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegisteredPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRegisteredPrototypes() :
      op->vtkSMReaderFactory::GetNumberOfRegisteredPrototypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_UpdateAvailableReaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAvailableReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateAvailableReaders();
      }
    else
      {
      op->vtkSMReaderFactory::UpdateAvailableReaders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_AddGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddGroup(temp0);
      }
    else
      {
      op->vtkSMReaderFactory::AddGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_RemoveGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveGroup(temp0);
      }
    else
      {
      op->vtkSMReaderFactory::RemoveGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMReaderFactory_GetGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderFactory *op = static_cast<vtkSMReaderFactory *>(vp);

  vtkStringList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
    {
    if (ap.IsBound())
      {
      op->GetGroups(temp0);
      }
    else
      {
      op->vtkSMReaderFactory::GetGroups(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMReaderFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkSMReaderFactory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMReaderFactory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMReaderFactory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMReaderFactory\nC++: vtkSMReaderFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMReaderFactory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMReaderFactory\nC++: vtkSMReaderFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSMReaderFactory_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nCleanup all registered prototypes.\n"},
  {(char*)"RegisterPrototype", PyvtkSMReaderFactory_RegisterPrototype, METH_VARARGS,
   (char*)"V.RegisterPrototype(string, string)\nC++: void RegisterPrototype(const char *xmlgroup,\n    const char *xmlname)\n\nRegister a prototype. If it is already registered this becomes a\nno-op.\n"},
  {(char*)"CanReadFile", PyvtkSMReaderFactory_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string, vtkSMSession) -> bool\nC++: bool CanReadFile(const char *filename, vtkSMSession *session)\nV.CanReadFile(string, vtkSMProxy) -> bool\nC++: static bool CanReadFile(const char *filename,\n    vtkSMProxy *reader)\nV.CanReadFile(string, string, string, vtkSMSession) -> bool\nC++: static bool CanReadFile(const char *filename,\n    const char *readerxmlgroup, const char *readerxmlname,\n    vtkSMSession *session)\n\nReturns true if a reader can be determined that can read the\nfile. When this returns true, one can use GetReaderGroup() and\nGetReaderName() to obtain the xmlgroup and xmlname for the reader\nthat can read the file. When this returns false, use\nGetPossibleReaders() to get the list of readers that can possibly\nread the file.\n"},
  {(char*)"GetReaderName", PyvtkSMReaderFactory_GetReaderName, METH_VARARGS,
   (char*)"V.GetReaderName() -> string\nC++: char *GetReaderName()\n\nReturns the xml-name for the reader that can read the file\nqueried by the most recent CanReadFile() call. This is valid only\nif CanReadFile() returned true.\n"},
  {(char*)"GetReaderGroup", PyvtkSMReaderFactory_GetReaderGroup, METH_VARARGS,
   (char*)"V.GetReaderGroup() -> string\nC++: char *GetReaderGroup()\n\nReturns the xml-group for the reader that can read the file\nqueried by the most recent CanReadFile() call. This is valid only\nif CanReadFile() returned true.\n"},
  {(char*)"GetPossibleReaders", PyvtkSMReaderFactory_GetPossibleReaders, METH_VARARGS,
   (char*)"V.GetPossibleReaders(string, vtkSMSession) -> vtkStringList\nC++: vtkStringList *GetPossibleReaders(const char *filename,\n    vtkSMSession *session)\n\nGet the list of readers that can possibly read the file. This is\nused when the factory cannot determine which reader to use for\nreading the file. The user can then choose from the provided\noptions. Returns a list of 3-tuples where the 1st string is the\ngroup, the 2nd string is the reader name and the 3rd string is\nthe reader description Note that the extension test is skipped in\nthis case.\n"},
  {(char*)"GetReaders", PyvtkSMReaderFactory_GetReaders, METH_VARARGS,
   (char*)"V.GetReaders(vtkSMSession) -> vtkStringList\nC++: vtkStringList *GetReaders(vtkSMSession *session)\nV.GetReaders(string, vtkSMSession) -> vtkStringList\nC++: vtkStringList *GetReaders(const char *filename,\n    vtkSMSession *session)\n\nReturns a list of 3-tuples where the 1st string is the group, the\n2nd string is the reader name and the 3rd string is the reader\ndescription This returns all the possible readers with a given\nconnection id.\n"},
  {(char*)"TestFileReadability", PyvtkSMReaderFactory_TestFileReadability, METH_VARARGS | METH_STATIC,
   (char*)"V.TestFileReadability(string, vtkSMSession) -> bool\nC++: static bool TestFileReadability(const char *filename,\n    vtkSMSession *session)\n\nHelper method to test is a file is readable on the server side.\nThis has nothing to do with the whether the file is readable by a\nreader, just test the file permissions etc. Internally uses the\nServerFileListing proxy.\n"},
  {(char*)"GetSupportedFileTypes", PyvtkSMReaderFactory_GetSupportedFileTypes, METH_VARARGS,
   (char*)"V.GetSupportedFileTypes(vtkSMSession) -> string\nC++: const char *GetSupportedFileTypes(vtkSMSession *session)\n\nReturns a formatted string with all supported file types.cid is\nnot used currently. An example returned string would look like:\n \"Supported Files (*.vtk *.pvd);;PVD Files (*.pvd);;VTK Files (*.vtk)\"\n \n"},
  {(char*)"GetNumberOfRegisteredPrototypes", PyvtkSMReaderFactory_GetNumberOfRegisteredPrototypes, METH_VARARGS,
   (char*)"V.GetNumberOfRegisteredPrototypes() -> int\nC++: unsigned int GetNumberOfRegisteredPrototypes()\n\nReturns the number of registered prototypes.\n"},
  {(char*)"UpdateAvailableReaders", PyvtkSMReaderFactory_UpdateAvailableReaders, METH_VARARGS,
   (char*)"V.UpdateAvailableReaders()\nC++: void UpdateAvailableReaders()\n\nEvery time a new proxy definition is added we check to see if it\nis a reader and then we add it to the list of available readers.\n"},
  {(char*)"AddGroup", PyvtkSMReaderFactory_AddGroup, METH_VARARGS,
   (char*)"V.AddGroup(string)\nC++: void AddGroup(const char *groupName)\n\nAdd/remove a group name to look for readers in. By default\n\"source\" is included.\n"},
  {(char*)"RemoveGroup", PyvtkSMReaderFactory_RemoveGroup, METH_VARARGS,
   (char*)"V.RemoveGroup(string)\nC++: void RemoveGroup(const char *groupName)\n\nAdd/remove a group name to look for readers in. By default\n\"source\" is included.\n"},
  {(char*)"GetGroups", PyvtkSMReaderFactory_GetGroups, METH_VARARGS,
   (char*)"V.GetGroups(vtkStringList)\nC++: void GetGroups(vtkStringList *groups)\n\nAdd/remove a group name to look for readers in. By default\n\"source\" is included.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMReaderFactory_StaticNew()
{
  return vtkSMReaderFactory::New();
}

PyObject *PyVTKClass_vtkSMReaderFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMReaderFactory_StaticNew,
    PyvtkSMReaderFactory_Methods,
    "vtkSMReaderFactory", modulename,
    NULL, NULL,
    PyvtkSMReaderFactory_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMReaderFactory_Doc()
{
  static const char *docstring[] = {
    "vtkSMReaderFactory - is a factory for creating a reader\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMReaderFactory is a factory for creating a reader that reads a\nparticular file. The reader factory needs to be configured to\nregister the reader prototypes supported by the application. This is\ndone automatically when the reader's proxy definition is registered\nAND if it has the extensions specified in the Hints section of the\nXML proxy definition. It is done with the following format:\n <Reade",
    "rFactory extensions=\"[list of expected extensions]\"\n     file_description=\"[description of the file]\" />\n \n\nOnce the factory has been configured, the API to create readers, get\navailable readers etc. can be used.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMReaderFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMReaderFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMReaderFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

