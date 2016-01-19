// python wrapper for vtkSMDataTypeDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDataTypeDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDataTypeDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDataTypeDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMDataTypeDomain_Doc();


static PyObject *
PyvtkSMDataTypeDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDataTypeDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDataTypeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDataTypeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDataTypeDomain::NewInstance());

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
PyvtkSMDataTypeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDataTypeDomain *tempr = vtkSMDataTypeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMDataTypeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMDataTypeDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMDataTypeDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDataTypeDomain_IsInDomain_Methods[] = {
  {NULL, PyvtkSMDataTypeDomain_IsInDomain_s1, METH_VARARGS,
   (char*)"@O *vtkSMProperty"},
  {NULL, PyvtkSMDataTypeDomain_IsInDomain_s2, METH_VARARGS,
   (char*)"@O|i *vtkSMSourceProxy"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMDataTypeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMDataTypeDomain_IsInDomain_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMDataTypeDomain_IsInDomain_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return NULL;
}



static PyObject *
PyvtkSMDataTypeDomain_GetNumberOfDataTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataTypes() :
      op->vtkSMDataTypeDomain::GetNumberOfDataTypes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataType(temp0) :
      op->vtkSMDataTypeDomain::GetDataType(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDataTypeDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDataTypeDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDataTypeDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDataTypeDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDataTypeDomain\nC++: vtkSMDataTypeDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDataTypeDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDataTypeDomain\nC++: vtkSMDataTypeDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMDataTypeDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\nV.IsInDomain(vtkSMSourceProxy, int) -> int\nC++: int IsInDomain(vtkSMSourceProxy *proxy, int outputport=0)\n\nReturns true if the value of the propery is in the domain. The\npropery has to be a vtkSMProxyProperty which points to a\nvtkSMSourceProxy. If all data types of the input's parts are in\nthe domain, it returns. It returns 0 otherwise.\n"},
  {(char*)"GetNumberOfDataTypes", PyvtkSMDataTypeDomain_GetNumberOfDataTypes, METH_VARARGS,
   (char*)"V.GetNumberOfDataTypes() -> int\nC++: unsigned int GetNumberOfDataTypes()\n\nReturns the number of acceptable data types.\n"},
  {(char*)"GetDataType", PyvtkSMDataTypeDomain_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType(int) -> string\nC++: const char *GetDataType(unsigned int idx)\n\nReturns a data type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDataTypeDomain_StaticNew()
{
  return vtkSMDataTypeDomain::New();
}

PyObject *PyVTKClass_vtkSMDataTypeDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDataTypeDomain_StaticNew,
    PyvtkSMDataTypeDomain_Methods,
    "vtkSMDataTypeDomain", modulename,
    NULL, NULL,
    PyvtkSMDataTypeDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMDataTypeDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMDataTypeDomain - restricts the input proxies to one or more data\ntypes\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMDataTypeDomain restricts the input proxies to one or more data\ntypes. These data types are specified in the XML with the <DataType>\nelement. VTK class names are used. It is possible to specify a\nsuperclass (i.e. vtkDataSet) for a more general domain. Works with\nvtkSMSourceProxy only. Valid XML elements are:\n * <DataType value=\"\"> where value is the classname for the data type\n for example: vt",
    "kDataSet, vtkImageData,...\n \n\nSee Also:\n\nvtkSMDomain  vtkSMSourceProxy\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDataTypeDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDataTypeDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDataTypeDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

