// python wrapper for vtkSIProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSIProperty_Doc();


static PyObject *
PyvtkSIProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProperty::NewInstance());

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
PyvtkSIProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIProperty *tempr = vtkSIProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSIProperty::GetXMLName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCommand() :
      op->vtkSIProperty::GetCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_GetInformationOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetInformationOnly() :
      op->vtkSIProperty::GetInformationOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_GetRepeatable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRepeatable() :
      op->vtkSIProperty::GetRepeatable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_SetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsInternal(temp0);
      }
    else
      {
      op->vtkSIProperty::SetIsInternal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSIProperty_GetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProperty *op = static_cast<vtkSIProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsInternal() :
      op->vtkSIProperty::GetIsInternal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIProperty\nC++: vtkSIProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIProperty\nC++: vtkSIProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetXMLName", PyvtkSIProperty_GetXMLName, METH_VARARGS,
   (char*)"V.GetXMLName() -> string\nC++: char *GetXMLName()\n\nThe name assigned by the xml parser. Used to get the property\nfrom a proxy.\n"},
  {(char*)"GetCommand", PyvtkSIProperty_GetCommand, METH_VARARGS,
   (char*)"V.GetCommand() -> string\nC++: char *GetCommand()\n\nThe command name used to set the value on the server object. For\nexample: SetThetaResolution\n"},
  {(char*)"GetInformationOnly", PyvtkSIProperty_GetInformationOnly, METH_VARARGS,
   (char*)"V.GetInformationOnly() -> bool\nC++: bool GetInformationOnly()\n\nIs InformationOnly is set to true, this property is used to get\ninformation from server instead of setting values.\n"},
  {(char*)"GetRepeatable", PyvtkSIProperty_GetRepeatable, METH_VARARGS,
   (char*)"V.GetRepeatable() -> bool\nC++: bool GetRepeatable()\n\nIf repeatable, a property can have 1 or more values of the same\nkind. This ivar is configured when the xml file is read and is\nmainly useful for information (for example from python).\n"},
  {(char*)"SetIsInternal", PyvtkSIProperty_SetIsInternal, METH_VARARGS,
   (char*)"V.SetIsInternal(bool)\nC++: void SetIsInternal(bool a)\n\nThis ivar is configured when the xml file is read and is mainly\nuseful to trigger a method call. Internal properties are not\nsaved in state\n"},
  {(char*)"GetIsInternal", PyvtkSIProperty_GetIsInternal, METH_VARARGS,
   (char*)"V.GetIsInternal() -> bool\nC++: bool GetIsInternal()\n\nThis ivar is configured when the xml file is read and is mainly\nuseful to trigger a method call. Internal properties are not\nsaved in state\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIProperty_StaticNew()
{
  return vtkSIProperty::New();
}

PyObject *PyVTKClass_vtkSIPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIProperty_StaticNew,
    PyvtkSIProperty_Methods,
    "vtkSIProperty", modulename,
    NULL, NULL,
    PyvtkSIProperty_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSIProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIProperty\n\n",
    "Superclass: vtkObject\n\n",
    "Basic ServerImplementation property used to call a method with no\nargument on a VTK object. If overriden, we naturally allow to call a\nmethod either to set or get a set of values.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

