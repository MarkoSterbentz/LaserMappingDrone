// python wrapper for vtkSMWriterFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMWriterFactory.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMWriterFactory(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMWriterFactoryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMWriterFactory_Doc();


static PyObject *
PyvtkSMWriterFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMWriterFactory::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMWriterFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMWriterFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMWriterFactory::NewInstance());

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
PyvtkSMWriterFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMWriterFactory *tempr = vtkSMWriterFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSMWriterFactory::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_RegisterPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

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
      op->vtkSMWriterFactory::RegisterPrototype(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_CanWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->CanWrite(temp0, temp1) :
      op->vtkSMWriterFactory::CanWrite(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_CreateWriter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  char *temp0 = NULL;
  vtkSMSourceProxy *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetValue(temp2))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateWriter(temp0, temp1, temp2) :
      op->vtkSMWriterFactory::CreateWriter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_CreateWriter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  char *temp0 = NULL;
  vtkSMSourceProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateWriter(temp0, temp1) :
      op->vtkSMWriterFactory::CreateWriter(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_CreateWriter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSMWriterFactory_CreateWriter_s1(self, args);
    case 2:
      return PyvtkSMWriterFactory_CreateWriter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CreateWriter");
  return NULL;
}



static PyObject *
PyvtkSMWriterFactory_GetSupportedFileTypes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0, temp1) :
      op->vtkSMWriterFactory::GetSupportedFileTypes(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_GetSupportedFileTypes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0) :
      op->vtkSMWriterFactory::GetSupportedFileTypes(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_GetSupportedFileTypes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMWriterFactory_GetSupportedFileTypes_s1(self, args);
    case 1:
      return PyvtkSMWriterFactory_GetSupportedFileTypes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSupportedFileTypes");
  return NULL;
}



static PyObject *
PyvtkSMWriterFactory_GetNumberOfRegisteredPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegisteredPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRegisteredPrototypes() :
      op->vtkSMWriterFactory::GetNumberOfRegisteredPrototypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_UpdateAvailableWriters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAvailableWriters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateAvailableWriters();
      }
    else
      {
      op->vtkSMWriterFactory::UpdateAvailableWriters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_AddGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

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
      op->vtkSMWriterFactory::AddGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_RemoveGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

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
      op->vtkSMWriterFactory::RemoveGroup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_GetGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

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
      op->vtkSMWriterFactory::GetGroups(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMWriterFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkSMWriterFactory_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMWriterFactory_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMWriterFactory_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMWriterFactory\nC++: vtkSMWriterFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMWriterFactory_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMWriterFactory\nC++: vtkSMWriterFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSMWriterFactory_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nCleanup all registered prototypes.\n"},
  {(char*)"RegisterPrototype", PyvtkSMWriterFactory_RegisterPrototype, METH_VARARGS,
   (char*)"V.RegisterPrototype(string, string)\nC++: void RegisterPrototype(const char *xmlgroup,\n    const char *xmlname)\n\nRegister a prototype.\n"},
  {(char*)"CanWrite", PyvtkSMWriterFactory_CanWrite, METH_VARARGS,
   (char*)"V.CanWrite(vtkSMSourceProxy, int) -> bool\nC++: bool CanWrite(vtkSMSourceProxy *, unsigned int outputport)\n\nRetruns true if the data from the output port can be written at\nall.\n"},
  {(char*)"CreateWriter", PyvtkSMWriterFactory_CreateWriter, METH_VARARGS,
   (char*)"V.CreateWriter(string, vtkSMSourceProxy, int) -> vtkSMProxy\nC++: vtkSMProxy *CreateWriter(const char *filename,\n    vtkSMSourceProxy *, unsigned int outputport)\nV.CreateWriter(string, vtkSMSourceProxy) -> vtkSMProxy\nC++: vtkSMProxy *CreateWriter(const char *filename,\n    vtkSMSourceProxy *pxy)\n\nCreate a new writer proxy to write the data from the specified\noutput port to the file specified, if possible. As internally\nUpdatePipeline() will be called on the source proxy, in order to\nprevent a double pipeline execution when you want to write a\ngiven timestep, you should call updatePipeline( time ) before the\nCreateWriter call.\n"},
  {(char*)"GetSupportedFileTypes", PyvtkSMWriterFactory_GetSupportedFileTypes, METH_VARARGS,
   (char*)"V.GetSupportedFileTypes(vtkSMSourceProxy, int) -> string\nC++: const char *GetSupportedFileTypes(vtkSMSourceProxy *source,\n    unsigned int outputport)\nV.GetSupportedFileTypes(vtkSMSourceProxy) -> string\nC++: const char *GetSupportedFileTypes(vtkSMSourceProxy *source)\n\nReturns a formatted string with all supported file types. An\nexample returned string would look like:\n \"PVD Files (*.pvd);;VTK Files (*.vtk)\"\n \n"},
  {(char*)"GetNumberOfRegisteredPrototypes", PyvtkSMWriterFactory_GetNumberOfRegisteredPrototypes, METH_VARARGS,
   (char*)"V.GetNumberOfRegisteredPrototypes() -> int\nC++: unsigned int GetNumberOfRegisteredPrototypes()\n\n"},
  {(char*)"UpdateAvailableWriters", PyvtkSMWriterFactory_UpdateAvailableWriters, METH_VARARGS,
   (char*)"V.UpdateAvailableWriters()\nC++: void UpdateAvailableWriters()\n\nEvery time a new proxy definition is added we check to see if it\nis a writer and then we add it to the list of available writers.\n"},
  {(char*)"AddGroup", PyvtkSMWriterFactory_AddGroup, METH_VARARGS,
   (char*)"V.AddGroup(string)\nC++: void AddGroup(const char *groupName)\n\nAdd/remove a group name to look for writers in. By default\n\"writers\" is included.\n"},
  {(char*)"RemoveGroup", PyvtkSMWriterFactory_RemoveGroup, METH_VARARGS,
   (char*)"V.RemoveGroup(string)\nC++: void RemoveGroup(const char *groupName)\n\nAdd/remove a group name to look for writers in. By default\n\"writers\" is included.\n"},
  {(char*)"GetGroups", PyvtkSMWriterFactory_GetGroups, METH_VARARGS,
   (char*)"V.GetGroups(vtkStringList)\nC++: void GetGroups(vtkStringList *groups)\n\nAdd/remove a group name to look for writers in. By default\n\"writers\" is included.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMWriterFactory_StaticNew()
{
  return vtkSMWriterFactory::New();
}

PyObject *PyVTKClass_vtkSMWriterFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMWriterFactory_StaticNew,
    PyvtkSMWriterFactory_Methods,
    "vtkSMWriterFactory", modulename,
    NULL, NULL,
    PyvtkSMWriterFactory_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMWriterFactory_Doc()
{
  static const char *docstring[] = {
    "vtkSMWriterFactory - is a factory or creating a writer based on the\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMWriterFactory is a factory for creating a writer to write the\ndata provided at an output port. This is done whenever a new proxy\ndefinition is added in the writers group.\n\nAlternatively, one can register prototypes using RegisterPrototype\nAPI. The proxy definitions for the writer proxies must provide hints\nthat indicate the file extension and description for the writer.\n\nOnce the factory has ",
    "been configured, the API to create writers, get\navailable writers etc. can be used.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMWriterFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMWriterFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMWriterFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

