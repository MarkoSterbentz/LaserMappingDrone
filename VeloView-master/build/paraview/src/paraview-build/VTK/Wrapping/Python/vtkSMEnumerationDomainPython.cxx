// python wrapper for vtkSMEnumerationDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMEnumerationDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMEnumerationDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMEnumerationDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMEnumerationDomain_Doc();


static PyObject *
PyvtkSMEnumerationDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMEnumerationDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMEnumerationDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMEnumerationDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMEnumerationDomain::NewInstance());

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
PyvtkSMEnumerationDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMEnumerationDomain *tempr = vtkSMEnumerationDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMEnumerationDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMEnumerationDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMEnumerationDomain::IsInDomain(temp0, temp1));

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
PyvtkSMEnumerationDomain_IsInDomain(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMEnumerationDomain_IsInDomain_s1(self, args);
    case 2:
      return PyvtkSMEnumerationDomain_IsInDomain_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return NULL;
}



static PyObject *
PyvtkSMEnumerationDomain_GetNumberOfEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfEntries() :
      op->vtkSMEnumerationDomain::GetNumberOfEntries());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetEntryValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEntryValue(temp0) :
      op->vtkSMEnumerationDomain::GetEntryValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMEnumerationDomain_GetEntryValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetEntryValue(temp0, temp1) :
      op->vtkSMEnumerationDomain::GetEntryValue(temp0, temp1));

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
PyvtkSMEnumerationDomain_GetEntryValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMEnumerationDomain_GetEntryValue_s1(self, args);
    case 2:
      return PyvtkSMEnumerationDomain_GetEntryValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEntryValue");
  return NULL;
}



static PyObject *
PyvtkSMEnumerationDomain_GetEntryText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetEntryText(temp0) :
      op->vtkSMEnumerationDomain::GetEntryText(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetEntryTextForValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryTextForValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetEntryTextForValue(temp0) :
      op->vtkSMEnumerationDomain::GetEntryTextForValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_HasEntryText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasEntryText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->HasEntryText(temp0) :
      op->vtkSMEnumerationDomain::HasEntryText(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_GetEntryValueForText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryValueForText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEntryValueForText(temp0) :
      op->vtkSMEnumerationDomain::GetEntryValueForText(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_AddEntry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddEntry(temp0, temp1);
      }
    else
      {
      op->vtkSMEnumerationDomain::AddEntry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_RemoveAllEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllEntries();
      }
    else
      {
      op->vtkSMEnumerationDomain::RemoveAllEntries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

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
      op->vtkSMEnumerationDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMEnumerationDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnumerationDomain *op = static_cast<vtkSMEnumerationDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMEnumerationDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMEnumerationDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMEnumerationDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMEnumerationDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMEnumerationDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMEnumerationDomain\nC++: vtkSMEnumerationDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMEnumerationDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMEnumerationDomain\nC++: vtkSMEnumerationDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMEnumerationDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\nV.IsInDomain(int, int) -> int\nC++: int IsInDomain(int val, unsigned int &idx)\n\nReturns true if the value of the propery is in the domain. The\npropery has to be a vtkSMIntVectorProperty. If all vector values\nare in the domain, it returns 1. It returns 0 otherwise.\n"},
  {(char*)"GetNumberOfEntries", PyvtkSMEnumerationDomain_GetNumberOfEntries, METH_VARARGS,
   (char*)"V.GetNumberOfEntries() -> int\nC++: unsigned int GetNumberOfEntries()\n\nReturns the number of entries in the enumeration.\n"},
  {(char*)"GetEntryValue", PyvtkSMEnumerationDomain_GetEntryValue, METH_VARARGS,
   (char*)"V.GetEntryValue(int) -> int\nC++: int GetEntryValue(unsigned int idx)\nV.GetEntryValue(string, int) -> int\nC++: int GetEntryValue(const char *text, int &valid)\n\nReturns the integer value of an enumeration entry.\n"},
  {(char*)"GetEntryText", PyvtkSMEnumerationDomain_GetEntryText, METH_VARARGS,
   (char*)"V.GetEntryText(int) -> string\nC++: const char *GetEntryText(unsigned int idx)\n\nReturns the descriptive string of an enumeration entry.\n"},
  {(char*)"GetEntryTextForValue", PyvtkSMEnumerationDomain_GetEntryTextForValue, METH_VARARGS,
   (char*)"V.GetEntryTextForValue(int) -> string\nC++: const char *GetEntryTextForValue(int value)\n\nReturns the text for an enumeration value.\n"},
  {(char*)"HasEntryText", PyvtkSMEnumerationDomain_HasEntryText, METH_VARARGS,
   (char*)"V.HasEntryText(string) -> int\nC++: int HasEntryText(const char *text)\n\nReturn 1 is the text is present in the enumeration, otherwise 0.\n"},
  {(char*)"GetEntryValueForText", PyvtkSMEnumerationDomain_GetEntryValueForText, METH_VARARGS,
   (char*)"V.GetEntryValueForText(string) -> int\nC++: int GetEntryValueForText(const char *text)\n\nGet the value for an enumeration text. The return value is valid\nonly is HasEntryText() returns 1.\n"},
  {(char*)"AddEntry", PyvtkSMEnumerationDomain_AddEntry, METH_VARARGS,
   (char*)"V.AddEntry(string, int)\nC++: void AddEntry(const char *text, int value)\n\nAdd a new enumeration entry. text cannot be null.\n"},
  {(char*)"RemoveAllEntries", PyvtkSMEnumerationDomain_RemoveAllEntries, METH_VARARGS,
   (char*)"V.RemoveAllEntries()\nC++: void RemoveAllEntries()\n\nClear all entries.\n"},
  {(char*)"Update", PyvtkSMEnumerationDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *property)\n\nUpdate self based on the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {(char*)"SetDefaultValues", PyvtkSMEnumerationDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nOverridden to ensure that the property's default value is valid\nfor the enumeration, if not it will be set to the first\nenumeration value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMEnumerationDomain_StaticNew()
{
  return vtkSMEnumerationDomain::New();
}

PyObject *PyVTKClass_vtkSMEnumerationDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMEnumerationDomain_StaticNew,
    PyvtkSMEnumerationDomain_Methods,
    "vtkSMEnumerationDomain", modulename,
    NULL, NULL,
    PyvtkSMEnumerationDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMEnumerationDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMEnumerationDomain - list of integers with associated strings\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMEnumerationDomain represents an enumeration of integer values\nwith associated descriptive strings. Valid XML elements are:\n * <Entry text=\"\" value=\"\"/> where text is the descriptive\n string and value is the integer value.\n \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMEnumerationDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMEnumerationDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMEnumerationDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

