// python wrapper for vtkSMFixedTypeDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMFixedTypeDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMFixedTypeDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMFixedTypeDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMFixedTypeDomain_Doc();


static PyObject *
PyvtkSMFixedTypeDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMFixedTypeDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFixedTypeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFixedTypeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFixedTypeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMFixedTypeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFixedTypeDomain::NewInstance());

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
PyvtkSMFixedTypeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMFixedTypeDomain *tempr = vtkSMFixedTypeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFixedTypeDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMFixedTypeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMFixedTypeDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  vtkSMSourceProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMFixedTypeDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMFixedTypeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMFixedTypeDomain_IsInDomain_s1(self, args);
    case 2:
      return PyvtkSMFixedTypeDomain_IsInDomain_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return NULL;
}


static PyMethodDef PyvtkSMFixedTypeDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMFixedTypeDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMFixedTypeDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMFixedTypeDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMFixedTypeDomain\nC++: vtkSMFixedTypeDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMFixedTypeDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMFixedTypeDomain\nC++: vtkSMFixedTypeDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMFixedTypeDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\nV.IsInDomain(vtkSMSourceProxy, vtkSMSourceProxy) -> int\nC++: virtual int IsInDomain(vtkSMSourceProxy *oldProxy,\n    vtkSMSourceProxy *newProxy)\n\nReturns true if the value of the propery is in the domain. The\npropery has to be a vtkSMProxyProperty which points to a\nvtkSMSourceProxy. If the new (unchecked) source proxy has the\nsame number of parts and data types as the old (checked) one, it\nreturns 1. Returns 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMFixedTypeDomain_StaticNew()
{
  return vtkSMFixedTypeDomain::New();
}

PyObject *PyVTKClass_vtkSMFixedTypeDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMFixedTypeDomain_StaticNew,
    PyvtkSMFixedTypeDomain_Methods,
    "vtkSMFixedTypeDomain", modulename,
    NULL, NULL,
    PyvtkSMFixedTypeDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMFixedTypeDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMFixedTypeDomain - restricts the proxy to have the same type as\nprevious proxy\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMFixedTypeDomain is used by input properties of filters that can\nnot have different input types after input is set the first time. For\nexample, a sub-class vtkDataSetToDataSetFilter, once connected in a\npipeline can not change it's input type, say, from vtkImageData to\nvtkUnstructuredGrid because it's output can not change.\n\nSee Also:\n\nvtkSMDomain\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMFixedTypeDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMFixedTypeDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMFixedTypeDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

