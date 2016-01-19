// python wrapper for vtkOverrideInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOverrideInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOverrideInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOverrideInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOverrideInformation_Doc();


static PyObject *
PyvtkOverrideInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOverrideInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverrideInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverrideInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverrideInformation::NewInstance());

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
PyvtkOverrideInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOverrideInformation *tempr = vtkOverrideInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassOverrideName() :
      op->vtkOverrideInformation::GetClassOverrideName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassOverrideWithName() :
      op->vtkOverrideInformation::GetClassOverrideWithName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkOverrideInformation::GetDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetObjectFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObjectFactory *tempr = (ap.IsBound() ?
      op->GetObjectFactory() :
      op->vtkOverrideInformation::GetObjectFactory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClassOverrideName(temp0);
      }
    else
      {
      op->vtkOverrideInformation::SetClassOverrideName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClassOverrideWithName(temp0);
      }
    else
      {
      op->vtkOverrideInformation::SetClassOverrideWithName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDescription(temp0);
      }
    else
      {
      op->vtkOverrideInformation::SetDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOverrideInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkOverrideInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverrideInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverrideInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOverrideInformation\nC++: vtkOverrideInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOverrideInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOverrideInformation\nC++: vtkOverrideInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetClassOverrideName", PyvtkOverrideInformation_GetClassOverrideName, METH_VARARGS,
   (char*)"V.GetClassOverrideName() -> string\nC++: const char *GetClassOverrideName()\n\nReturns the name of the class being overriden.  For example, if\nyou had a factory that provided an override for vtkVertex, then\nthis funciton would return \"vtkVertex\"\n"},
  {(char*)"GetClassOverrideWithName", PyvtkOverrideInformation_GetClassOverrideWithName, METH_VARARGS,
   (char*)"V.GetClassOverrideWithName() -> string\nC++: const char *GetClassOverrideWithName()\n\nReturns the name of the class that will override the class. For\nexample, if you had a factory that provided an override for\nvtkVertex called vtkMyVertex, then this would return\n\"vtkMyVertex\"\n"},
  {(char*)"GetDescription", PyvtkOverrideInformation_GetDescription, METH_VARARGS,
   (char*)"V.GetDescription() -> string\nC++: const char *GetDescription()\n\nReturn a human readable or GUI displayable description of this\noverride.\n"},
  {(char*)"GetObjectFactory", PyvtkOverrideInformation_GetObjectFactory, METH_VARARGS,
   (char*)"V.GetObjectFactory() -> vtkObjectFactory\nC++: vtkObjectFactory *GetObjectFactory()\n\nReturn the specific object factory that this override occurs in.\n"},
  {(char*)"SetClassOverrideName", PyvtkOverrideInformation_SetClassOverrideName, METH_VARARGS,
   (char*)"V.SetClassOverrideName(string)\nC++: void SetClassOverrideName(char *)\n\nSet the class override name\n"},
  {(char*)"SetClassOverrideWithName", PyvtkOverrideInformation_SetClassOverrideWithName, METH_VARARGS,
   (char*)"V.SetClassOverrideWithName(string)\nC++: void SetClassOverrideWithName(char *)\n\n"},
  {(char*)"SetDescription", PyvtkOverrideInformation_SetDescription, METH_VARARGS,
   (char*)"V.SetDescription(string)\nC++: void SetDescription(char *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverrideInformation_StaticNew()
{
  return vtkOverrideInformation::New();
}

PyObject *PyVTKClass_vtkOverrideInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverrideInformation_StaticNew,
    PyvtkOverrideInformation_Methods,
    "vtkOverrideInformation", modulename,
    NULL, NULL,
    PyvtkOverrideInformation_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOverrideInformation_Doc()
{
  static const char *docstring[] = {
    "vtkOverrideInformation - Factory object override information\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOverrideInformation is used to represent the information about a\nclass which is overriden in a vtkObjectFactory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverrideInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverrideInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverrideInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

