// python wrapper for vtkSMStringListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMStringListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMStringListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMStringListDomain_Doc();


static PyObject *
PyvtkSMStringListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMStringListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStringListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStringListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStringListDomain::NewInstance());

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
PyvtkSMStringListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMStringListDomain *tempr = vtkSMStringListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMStringListDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMStringListDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMStringListDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMStringListDomain_IsInDomain(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMStringListDomain_IsInDomain_s1(self, args);
    case 2:
      return PyvtkSMStringListDomain_IsInDomain_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return NULL;
}



static PyObject *
PyvtkSMStringListDomain_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkSMStringListDomain::GetString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_GetNumberOfStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfStrings() :
      op->vtkSMStringListDomain::GetNumberOfStrings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

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
      op->vtkSMStringListDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

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
      op->vtkSMStringListDomain::SetAnimationValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMStringListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMStringListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMStringListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMStringListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMStringListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMStringListDomain\nC++: vtkSMStringListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMStringListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMStringListDomain\nC++: vtkSMStringListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMStringListDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\nV.IsInDomain(string, int) -> int\nC++: int IsInDomain(const char *string, unsigned int &idx)\n\nReturns true if the value of the property is in the domain. The\npropery has to be a vtkSMStringVectorProperty. If all vector\nvalues are in the domain, it returns 1. It returns 0 otherwise.\n"},
  {(char*)"GetString", PyvtkSMStringListDomain_GetString, METH_VARARGS,
   (char*)"V.GetString(int) -> string\nC++: const char *GetString(unsigned int idx)\n\nReturns a string in the domain. The pointer may become invalid\nonce the domain has been modified.\n"},
  {(char*)"GetNumberOfStrings", PyvtkSMStringListDomain_GetNumberOfStrings, METH_VARARGS,
   (char*)"V.GetNumberOfStrings() -> int\nC++: unsigned int GetNumberOfStrings()\n\nReturns the number of strings in the domain.\n"},
  {(char*)"Update", PyvtkSMStringListDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {(char*)"SetAnimationValue", PyvtkSMStringListDomain_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(vtkSMProperty, int, float)\nC++: virtual void SetAnimationValue(vtkSMProperty *, int, double)\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {(char*)"SetDefaultValues", PyvtkSMStringListDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. Returns 1\nif the domain updated the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMStringListDomain_StaticNew()
{
  return vtkSMStringListDomain::New();
}

PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMStringListDomain_StaticNew,
    PyvtkSMStringListDomain_Methods,
    "vtkSMStringListDomain", modulename,
    NULL, NULL,
    PyvtkSMStringListDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMStringListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMStringListDomain - list of strings\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMStringListDomain represents a domain consisting of a list of\nstrings. It only works with vtkSMStringVectorProperty. Valid XML\nelements are:\n * <String value=\"\">\n \n\nSee Also:\n\nvtkSMDomain vtkSMStringVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMStringListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMStringListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMStringListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

