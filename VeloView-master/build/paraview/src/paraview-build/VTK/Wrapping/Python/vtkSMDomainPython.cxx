// python wrapper for vtkSMDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSessionObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMSessionObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSessionObjectNew
#endif

static const char **PyvtkSMDomain_Doc();


static PyObject *
PyvtkSMDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDomain::NewInstance());

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
PyvtkSMDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDomain *tempr = vtkSMDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = op->IsInDomain(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkSMDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAnimationValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMDomain::SetAnimationValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSMDomain::GetXMLName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_GetIsOptional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsOptional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsOptional() :
      op->vtkSMDomain::GetIsOptional());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDomain_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomain *op = static_cast<vtkSMDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMDomain::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDomain\nC++: vtkSMDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDomain\nC++: vtkSMDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\n\nIs the (unchecked) value of the property in the domain?\nOverwritten by sub-classes.\n"},
  {(char*)"Update", PyvtkSMDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *requestingProperty)\n\nUpdate self based on the \"unchecked\" values of all required\nproperties. Subclasses must override this method to update the\ndomain based on the requestingProperty (and/or other required\nproperties).\n"},
  {(char*)"SetAnimationValue", PyvtkSMDomain_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(vtkSMProperty, int, float)\nC++: virtual void SetAnimationValue(vtkSMProperty *, int index,\n    double value)\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {(char*)"SetDefaultValues", PyvtkSMDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. If\nuse_unchecked_values is true, the property's unchecked values\nwill be changed by this method. Returns 1 if the domain updated\nthe property. Default implementation does nothing.\n"},
  {(char*)"GetXMLName", PyvtkSMDomain_GetXMLName, METH_VARARGS,
   (char*)"V.GetXMLName() -> string\nC++: char *GetXMLName()\n\nAssigned by the XML parser. The name assigned in the XML\nconfiguration. Can be used to figure out the origin of the\ndomain.\n"},
  {(char*)"GetIsOptional", PyvtkSMDomain_GetIsOptional, METH_VARARGS,
   (char*)"V.GetIsOptional() -> bool\nC++: bool GetIsOptional()\n\nWhen the IsOptional flag is set, IsInDomain() always returns\ntrue. This is used by properties that use domains to provide\ninformation (a suggestion to the gui for example) as opposed to\nrestrict their values.\n"},
  {(char*)"GetProperty", PyvtkSMDomain_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetProperty()\n\nProvides access to the vtkSMProperty on which this domain is\nhooked up.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMDomain_Methods,
    "vtkSMDomain", modulename,
    NULL, NULL,
    PyvtkSMDomain_Doc(),
    PyVTKClass_vtkSMSessionObjectNew(modulename));
  return cls;
}

const char **PyvtkSMDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMDomain - represents the possible values a property can have\n\n",
    "Superclass: vtkSMSessionObject\n\n",
    "vtkSMDomain is an abstract class that describes the \"domain\" of a a\nwidget. A domain is a collection of possible values a property can\nhave.\n\nEach domain can depend on one or more properties to compute it's\nvalues. This are called \"required\" properties and can be set in the\nXML configuration file.\n\nEvery time a domain changes it must fire a\nvtkCommand::DomainModifiedEvent. Applications may decide ",
    "to update\nthe UI every-time the domain changes. As a result, domains ideally\nshould only fire that event when their values change for real not\njust potentially changed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

