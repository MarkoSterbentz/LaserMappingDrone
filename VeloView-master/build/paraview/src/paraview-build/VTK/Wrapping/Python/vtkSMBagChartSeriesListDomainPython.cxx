// python wrapper for vtkSMBagChartSeriesListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMBagChartSeriesListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMBagChartSeriesListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMBagChartSeriesListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMChartSeriesListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMChartSeriesListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMChartSeriesListDomainNew
#endif

static const char **PyvtkSMBagChartSeriesListDomain_Doc();


static PyObject *
PyvtkSMBagChartSeriesListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBagChartSeriesListDomain *op = static_cast<vtkSMBagChartSeriesListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMBagChartSeriesListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBagChartSeriesListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBagChartSeriesListDomain *op = static_cast<vtkSMBagChartSeriesListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMBagChartSeriesListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBagChartSeriesListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBagChartSeriesListDomain *op = static_cast<vtkSMBagChartSeriesListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMBagChartSeriesListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMBagChartSeriesListDomain::NewInstance());

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
PyvtkSMBagChartSeriesListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMBagChartSeriesListDomain *tempr = vtkSMBagChartSeriesListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBagChartSeriesListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBagChartSeriesListDomain *op = static_cast<vtkSMBagChartSeriesListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMBagChartSeriesListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMBagChartSeriesListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMBagChartSeriesListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMBagChartSeriesListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMBagChartSeriesListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMBagChartSeriesListDomain\nC++: vtkSMBagChartSeriesListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMBagChartSeriesListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMBagChartSeriesListDomain\nC++: vtkSMBagChartSeriesListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDefaultValues", PyvtkSMBagChartSeriesListDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nSet the default values for the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMBagChartSeriesListDomain_StaticNew()
{
  return vtkSMBagChartSeriesListDomain::New();
}

PyObject *PyVTKClass_vtkSMBagChartSeriesListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMBagChartSeriesListDomain_StaticNew,
    PyvtkSMBagChartSeriesListDomain_Methods,
    "vtkSMBagChartSeriesListDomain", modulename,
    NULL, NULL,
    PyvtkSMBagChartSeriesListDomain_Doc(),
    PyVTKClass_vtkSMChartSeriesListDomainNew(modulename));
  return cls;
}

const char **PyvtkSMBagChartSeriesListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMBagChartSeriesListDomain - extends vtkSMChartSeriesListDomain to\n\n",
    "Superclass: vtkSMChartSeriesListDomain\n\n",
    "vtkSMBagChartSeriesListDomain extends vtkSMChartSeriesListDomain to\nsetup defaults specific for bag plot representations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMBagChartSeriesListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMBagChartSeriesListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMBagChartSeriesListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

