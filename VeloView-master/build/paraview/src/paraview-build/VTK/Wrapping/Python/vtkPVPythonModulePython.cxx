// python wrapper for vtkPVPythonModule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPythonModule.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPythonModule(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPythonModuleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVPythonModule_Doc();


static PyObject *
PyvtkPVPythonModule_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPythonModule::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPythonModule::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPythonModule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPythonModule::NewInstance());

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
PyvtkPVPythonModule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPythonModule *tempr = vtkPVPythonModule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkPVPythonModule::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkPVPythonModule::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetFullName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFullName() :
      op->vtkPVPythonModule::GetFullName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SetFullName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFullName(temp0);
      }
    else
      {
      op->vtkPVPythonModule::SetFullName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetIsPackage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPackage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIsPackage() :
      op->vtkPVPythonModule::GetIsPackage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SetIsPackage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPackage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsPackage(temp0);
      }
    else
      {
      op->vtkPVPythonModule::SetIsPackage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_IsPackageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPackageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IsPackageOn();
      }
    else
      {
      op->vtkPVPythonModule::IsPackageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_IsPackageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPackageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IsPackageOff();
      }
    else
      {
      op->vtkPVPythonModule::IsPackageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_RegisterModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterModule");

  vtkPVPythonModule *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVPythonModule"))
    {
    vtkPVPythonModule::RegisterModule(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModule");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVPythonModule *tempr = vtkPVPythonModule::GetModule(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonModule_HasModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasModule");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkPVPythonModule::HasModule(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPythonModule_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPythonModule_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPythonModule_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPythonModule_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPythonModule\nC++: vtkPVPythonModule *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPythonModule_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPythonModule\nC++: vtkPVPythonModule *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSource", PyvtkPVPythonModule_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> string\nC++: char *GetSource()\n\nSet/get the full Python source for this module.\n"},
  {(char*)"SetSource", PyvtkPVPythonModule_SetSource, METH_VARARGS,
   (char*)"V.SetSource(string)\nC++: void SetSource(char *)\n\nSet/get the full Python source for this module.\n"},
  {(char*)"GetFullName", PyvtkPVPythonModule_GetFullName, METH_VARARGS,
   (char*)"V.GetFullName() -> string\nC++: char *GetFullName()\n\nSet/get the full name for this module (e.g.\npackage.subpackage.module).\n"},
  {(char*)"SetFullName", PyvtkPVPythonModule_SetFullName, METH_VARARGS,
   (char*)"V.SetFullName(string)\nC++: void SetFullName(char *)\n\nSet/get the full name for this module (e.g.\npackage.subpackage.module).\n"},
  {(char*)"GetIsPackage", PyvtkPVPythonModule_GetIsPackage, METH_VARARGS,
   (char*)"V.GetIsPackage() -> int\nC++: int GetIsPackage()\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {(char*)"SetIsPackage", PyvtkPVPythonModule_SetIsPackage, METH_VARARGS,
   (char*)"V.SetIsPackage(int)\nC++: void SetIsPackage(int a)\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {(char*)"IsPackageOn", PyvtkPVPythonModule_IsPackageOn, METH_VARARGS,
   (char*)"V.IsPackageOn()\nC++: void IsPackageOn()\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {(char*)"IsPackageOff", PyvtkPVPythonModule_IsPackageOff, METH_VARARGS,
   (char*)"V.IsPackageOff()\nC++: void IsPackageOff()\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {(char*)"RegisterModule", PyvtkPVPythonModule_RegisterModule, METH_VARARGS | METH_STATIC,
   (char*)"V.RegisterModule(vtkPVPythonModule)\nC++: static void RegisterModule(vtkPVPythonModule *module)\n\nRegister the Python module.  Once registered, the module can be\nretrieved with GetModule and HaveModule.  Python interpreters can\nquery these global methods in a custom import mechanism.\n"},
  {(char*)"GetModule", PyvtkPVPythonModule_GetModule, METH_VARARGS | METH_STATIC,
   (char*)"V.GetModule(string) -> vtkPVPythonModule\nC++: static vtkPVPythonModule *GetModule(const char *fullname)\n\nReturn the registered Python module with the given full module\nname.  If no such module has been registered, this returns NULL.\n"},
  {(char*)"HasModule", PyvtkPVPythonModule_HasModule, METH_VARARGS | METH_STATIC,
   (char*)"V.HasModule(string) -> int\nC++: static int HasModule(const char *fullname)\n\nReturns 1 if a Python module with the given full name has been\nregistered, 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPythonModule_StaticNew()
{
  return vtkPVPythonModule::New();
}

PyObject *PyVTKClass_vtkPVPythonModuleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPythonModule_StaticNew,
    PyvtkPVPythonModule_Methods,
    "vtkPVPythonModule", modulename,
    NULL, NULL,
    PyvtkPVPythonModule_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVPythonModule_Doc()
{
  static const char *docstring[] = {
    "vtkPVPythonModule - Stores code and option for python modules\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVPythonModule is a simple class that stores some Python source\ncode that makes up a Python module as well as some state variables\nabout the module (such as its name).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPythonModule(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPythonModuleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPythonModule", o) != 0)
    {
    Py_DECREF(o);
    }

}

