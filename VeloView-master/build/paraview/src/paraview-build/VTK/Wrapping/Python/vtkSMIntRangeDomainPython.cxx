// python wrapper for vtkSMIntRangeDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMIntRangeDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMIntRangeDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMIntRangeDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMIntRangeDomain_Doc();


static PyObject *
PyvtkSMIntRangeDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMIntRangeDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntRangeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMIntRangeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntRangeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMIntRangeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMIntRangeDomain::NewInstance());

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
PyvtkSMIntRangeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMIntRangeDomain *tempr = vtkSMIntRangeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntRangeDomain_GetMinimum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinimum(temp0, temp1) :
      op->vtkSMIntRangeDomain::GetMinimum(temp0, temp1));

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
PyvtkSMIntRangeDomain_GetMinimum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinimum(temp0) :
      op->vtkSMIntRangeDomain::GetMinimum(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMIntRangeDomain_GetMinimum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMIntRangeDomain_GetMinimum_s1(self, args);
    case 1:
      return PyvtkSMIntRangeDomain_GetMinimum_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMinimum");
  return NULL;
}



static PyObject *
PyvtkSMIntRangeDomain_GetMaximum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximum(temp0, temp1) :
      op->vtkSMIntRangeDomain::GetMaximum(temp0, temp1));

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
PyvtkSMIntRangeDomain_GetMaximum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximum(temp0) :
      op->vtkSMIntRangeDomain::GetMaximum(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMIntRangeDomain_GetMaximum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMIntRangeDomain_GetMaximum_s1(self, args);
    case 1:
      return PyvtkSMIntRangeDomain_GetMaximum_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximum");
  return NULL;
}



static PyObject *
PyvtkSMIntRangeDomain_GetMinimumExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinimumExists(temp0) :
      op->vtkSMIntRangeDomain::GetMinimumExists(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMIntRangeDomain_GetMaximumExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIntRangeDomain *op = static_cast<vtkSMIntRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumExists(temp0) :
      op->vtkSMIntRangeDomain::GetMaximumExists(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMIntRangeDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMIntRangeDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMIntRangeDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMIntRangeDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMIntRangeDomain\nC++: vtkSMIntRangeDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMIntRangeDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMIntRangeDomain\nC++: vtkSMIntRangeDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMinimum", PyvtkSMIntRangeDomain_GetMinimum, METH_VARARGS,
   (char*)"V.GetMinimum(int, int) -> int\nC++: int GetMinimum(unsigned int idx, int &exists)\nV.GetMinimum(int) -> int\nC++: int GetMinimum(unsigned int idx)\n\nReturn a min. value if it exists. If the min. exists exists is\nset to 1. Otherwise, it is set to 0. An unspecified min. is\nequivalent to -inf\n"},
  {(char*)"GetMaximum", PyvtkSMIntRangeDomain_GetMaximum, METH_VARARGS,
   (char*)"V.GetMaximum(int, int) -> int\nC++: int GetMaximum(unsigned int idx, int &exists)\nV.GetMaximum(int) -> int\nC++: int GetMaximum(unsigned int idx)\n\nReturn a max. value if it exists. If the max. exists exists is\nset to 1. Otherwise, it is set to 0. An unspecified max. is\nequivalent to +inf\n"},
  {(char*)"GetMinimumExists", PyvtkSMIntRangeDomain_GetMinimumExists, METH_VARARGS,
   (char*)"V.GetMinimumExists(int) -> int\nC++: int GetMinimumExists(unsigned int idx)\n\nReturns if minimum/maximum bound is set for the domain.\n"},
  {(char*)"GetMaximumExists", PyvtkSMIntRangeDomain_GetMaximumExists, METH_VARARGS,
   (char*)"V.GetMaximumExists(int) -> int\nC++: int GetMaximumExists(unsigned int idx)\n\nReturns if minimum/maximum bound is set for the domain.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMIntRangeDomain_StaticNew()
{
  return vtkSMIntRangeDomain::New();
}

PyObject *PyVTKClass_vtkSMIntRangeDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMIntRangeDomain_StaticNew,
    PyvtkSMIntRangeDomain_Methods,
    "vtkSMIntRangeDomain", modulename,
    NULL, NULL,
    PyvtkSMIntRangeDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMIntRangeDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMIntRangeDomain - type specific extension to\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMIntRangeDomain is a type specific extension to\nvtkSMRangeDomainTemplate for ints.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMIntRangeDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMIntRangeDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMIntRangeDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

