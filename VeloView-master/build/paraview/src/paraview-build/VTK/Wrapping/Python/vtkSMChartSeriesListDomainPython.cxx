// python wrapper for vtkSMChartSeriesListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMChartSeriesListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMChartSeriesListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMChartSeriesListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStringListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStringListDomainNew
#endif

static const char **PyvtkSMChartSeriesListDomain_Doc();


static PyObject *
PyvtkSMChartSeriesListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesListDomain *op = static_cast<vtkSMChartSeriesListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMChartSeriesListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesListDomain *op = static_cast<vtkSMChartSeriesListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartSeriesListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesListDomain *op = static_cast<vtkSMChartSeriesListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMChartSeriesListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartSeriesListDomain::NewInstance());

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
PyvtkSMChartSeriesListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMChartSeriesListDomain *tempr = vtkSMChartSeriesListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesListDomain *op = static_cast<vtkSMChartSeriesListDomain *>(vp);

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
      op->vtkSMChartSeriesListDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartSeriesListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartSeriesListDomain *op = static_cast<vtkSMChartSeriesListDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMChartSeriesListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMChartSeriesListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMChartSeriesListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMChartSeriesListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMChartSeriesListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMChartSeriesListDomain\nC++: vtkSMChartSeriesListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMChartSeriesListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMChartSeriesListDomain\nC++: vtkSMChartSeriesListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMChartSeriesListDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {(char*)"SetDefaultValues", PyvtkSMChartSeriesListDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nSet the default values for the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMChartSeriesListDomain_StaticNew()
{
  return vtkSMChartSeriesListDomain::New();
}

PyObject *PyVTKClass_vtkSMChartSeriesListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMChartSeriesListDomain_StaticNew,
    PyvtkSMChartSeriesListDomain_Methods,
    "vtkSMChartSeriesListDomain", modulename,
    NULL, NULL,
    PyvtkSMChartSeriesListDomain_Doc(),
    PyVTKClass_vtkSMStringListDomainNew(modulename));
  return cls;
}

const char **PyvtkSMChartSeriesListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMChartSeriesListDomain - list of strings corresponding to the\nnames\n\n",
    "Superclass: vtkSMStringListDomain\n\n",
    "vtkSMChartSeriesListDomain is designed to be used for the X-axis\narray name property on chart representations. This is similar to\nvtkSMArrayListDomain, however, it simplifies the logic that is uses\nto determine the available arrays and at the same time, uses custom\nlogic to pick the default array for based on priorities for arrays.\n\nSupported Required-Property functions:\n\\li Input : (required) ref",
    "ers to a property that provides the\n    data-producer.\n\\li FieldDataSelection : (required) refers to a field-selection\n    property\nused to select the data-association i.e. cell-data, point-data etc.\n\nSupported XML attributes\n\\li hide_partial_arrays : when set to 1, partial arrays will not be\n    shown in\nthe domain (default).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMChartSeriesListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMChartSeriesListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMChartSeriesListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

