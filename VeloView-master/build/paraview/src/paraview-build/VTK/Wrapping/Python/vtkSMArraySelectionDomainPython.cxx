// python wrapper for vtkSMArraySelectionDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMArraySelectionDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMArraySelectionDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMArraySelectionDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStringListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStringListDomainNew
#endif

static const char **PyvtkSMArraySelectionDomain_Doc();


static PyObject *
PyvtkSMArraySelectionDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMArraySelectionDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMArraySelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMArraySelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMArraySelectionDomain::NewInstance());

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
PyvtkSMArraySelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMArraySelectionDomain *tempr = vtkSMArraySelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMArraySelectionDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMArraySelectionDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMArraySelectionDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMArraySelectionDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMArraySelectionDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMArraySelectionDomain\nC++: vtkSMArraySelectionDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMArraySelectionDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMArraySelectionDomain\nC++: vtkSMArraySelectionDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDefaultValues", PyvtkSMArraySelectionDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nSince this domain relies on an information only property to get\nthe default status, we override this method to copy the values\nthe info property as the default array selection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMArraySelectionDomain_StaticNew()
{
  return vtkSMArraySelectionDomain::New();
}

PyObject *PyVTKClass_vtkSMArraySelectionDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMArraySelectionDomain_StaticNew,
    PyvtkSMArraySelectionDomain_Methods,
    "vtkSMArraySelectionDomain", modulename,
    NULL, NULL,
    PyvtkSMArraySelectionDomain_Doc(),
    PyVTKClass_vtkSMStringListDomainNew(modulename));
  return cls;
}

const char **PyvtkSMArraySelectionDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMArraySelectionDomain - used on properties that allow users to\n\n",
    "Superclass: vtkSMStringListDomain\n\n",
    "vtkSMArraySelectionDomain is a domain that can be for used for\nproperties that allow users to set selection-statuses for multiple\narrays (or similar items). This is similar to vtkSMArrayListDomain,\nthe only different is that vtkSMArrayListDomain is designed to work\nwith data-information obtained from the required Input property,\nwhile vtkSMArraySelectionDomain depends on a required\ninformation-onl",
    "y property (\"ArrayList\") that provides the arrays\navailable.\n\nSupported Required-Property functions:\n\\li ArrayList : points a string-vector property that produces the\n(array_name, status) tuples. This is typically an information-only\nproperty.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMArraySelectionDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMArraySelectionDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMArraySelectionDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

