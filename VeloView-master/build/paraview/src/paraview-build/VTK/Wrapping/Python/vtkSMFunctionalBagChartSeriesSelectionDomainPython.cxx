// python wrapper for vtkSMFunctionalBagChartSeriesSelectionDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMFunctionalBagChartSeriesSelectionDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMFunctionalBagChartSeriesSelectionDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMFunctionalBagChartSeriesSelectionDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMChartSeriesSelectionDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMChartSeriesSelectionDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMChartSeriesSelectionDomainNew
#endif

static const char **PyvtkSMFunctionalBagChartSeriesSelectionDomain_Doc();


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMFunctionalBagChartSeriesSelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::NewInstance());

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
PyvtkSMFunctionalBagChartSeriesSelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMFunctionalBagChartSeriesSelectionDomain *tempr = vtkSMFunctionalBagChartSeriesSelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_GetDefaultSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDefaultSeriesVisibility(temp0) :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::GetDefaultSeriesVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMFunctionalBagChartSeriesSelectionDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMFunctionalBagChartSeriesSelectionDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMFunctionalBagChartSeriesSelectionDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMFunctionalBagChartSeriesSelectionDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMFunctionalBagChartSeriesSelectionDomain\nC++: vtkSMFunctionalBagChartSeriesSelectionDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMFunctionalBagChartSeriesSelectionDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSMFunctionalBagChartSeriesSelectionDomain\nC++: vtkSMFunctionalBagChartSeriesSelectionDomain *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetDefaultSeriesVisibility", PyvtkSMFunctionalBagChartSeriesSelectionDomain_GetDefaultSeriesVisibility, METH_VARARGS,
   (char*)"V.GetDefaultSeriesVisibility(string) -> bool\nC++: virtual bool GetDefaultSeriesVisibility(const char *)\n\nReturns the default visibility for a series given its name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMFunctionalBagChartSeriesSelectionDomain_StaticNew()
{
  return vtkSMFunctionalBagChartSeriesSelectionDomain::New();
}

PyObject *PyVTKClass_vtkSMFunctionalBagChartSeriesSelectionDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMFunctionalBagChartSeriesSelectionDomain_StaticNew,
    PyvtkSMFunctionalBagChartSeriesSelectionDomain_Methods,
    "vtkSMFunctionalBagChartSeriesSelectionDomain", modulename,
    NULL, NULL,
    PyvtkSMFunctionalBagChartSeriesSelectionDomain_Doc(),
    PyVTKClass_vtkSMChartSeriesSelectionDomainNew(modulename));
  return cls;
}

const char **PyvtkSMFunctionalBagChartSeriesSelectionDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMFunctionalBagChartSeriesSelectionDomain - extends\nvtkSMChartSeriesListDomain to\n\n",
    "Superclass: vtkSMChartSeriesSelectionDomain\n\n",
    "vtkSMFunctionalBagChartSeriesSelectionDomain extends\nvtkSMChartSeriesSelectionDomain to handle default values visibility\nfor bags and outliers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMFunctionalBagChartSeriesSelectionDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMFunctionalBagChartSeriesSelectionDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMFunctionalBagChartSeriesSelectionDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

