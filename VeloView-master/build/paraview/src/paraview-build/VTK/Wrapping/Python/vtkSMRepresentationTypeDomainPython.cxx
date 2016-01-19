// python wrapper for vtkSMRepresentationTypeDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMRepresentationTypeDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRepresentationTypeDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRepresentationTypeDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStringListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStringListDomainNew
#endif

static const char **PyvtkSMRepresentationTypeDomain_Doc();


static PyObject *
PyvtkSMRepresentationTypeDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationTypeDomain *op = static_cast<vtkSMRepresentationTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRepresentationTypeDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationTypeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationTypeDomain *op = static_cast<vtkSMRepresentationTypeDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRepresentationTypeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationTypeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationTypeDomain *op = static_cast<vtkSMRepresentationTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRepresentationTypeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRepresentationTypeDomain::NewInstance());

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
PyvtkSMRepresentationTypeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRepresentationTypeDomain *tempr = vtkSMRepresentationTypeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentationTypeDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationTypeDomain *op = static_cast<vtkSMRepresentationTypeDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMRepresentationTypeDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMRepresentationTypeDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRepresentationTypeDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRepresentationTypeDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRepresentationTypeDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRepresentationTypeDomain\nC++: vtkSMRepresentationTypeDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRepresentationTypeDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRepresentationTypeDomain\nC++: vtkSMRepresentationTypeDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDefaultValues", PyvtkSMRepresentationTypeDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nReturns 1 if the domain updated the property. Overridden to use\ninput data information to pick appropriate representation type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMRepresentationTypeDomain_StaticNew()
{
  return vtkSMRepresentationTypeDomain::New();
}

PyObject *PyVTKClass_vtkSMRepresentationTypeDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMRepresentationTypeDomain_StaticNew,
    PyvtkSMRepresentationTypeDomain_Methods,
    "vtkSMRepresentationTypeDomain", modulename,
    NULL, NULL,
    PyvtkSMRepresentationTypeDomain_Doc(),
    PyVTKClass_vtkSMStringListDomainNew(modulename));
  return cls;
}

const char **PyvtkSMRepresentationTypeDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMRepresentationTypeDomain - domain for \"Representation\" property\non\n\n",
    "Superclass: vtkSMStringListDomain\n\n",
    "vtkSMRepresentationTypeDomain is designed to be used as the domain\nfor \"Representation\" property on representation proxies in the\n\"RenderView\". It extends vtkSMStringListDomain to add logic to set\ndefault values based on the input data information.\n\nSupported Required-Property functions:\n\\li Input : (optional) refers to a property that provides the\n    data-producer.\n               When present wi",
    "ll be used to come up with default\n               representation type using data information.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRepresentationTypeDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRepresentationTypeDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRepresentationTypeDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

