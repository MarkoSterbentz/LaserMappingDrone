// python wrapper for vtkSMChartUseIndexForAxisDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMChartUseIndexForAxisDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMChartUseIndexForAxisDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMChartUseIndexForAxisDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMBooleanDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMBooleanDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMBooleanDomainNew
#endif

static const char **PyvtkSMChartUseIndexForAxisDomain_Doc();


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMChartUseIndexForAxisDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartUseIndexForAxisDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMChartUseIndexForAxisDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartUseIndexForAxisDomain::NewInstance());

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
PyvtkSMChartUseIndexForAxisDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMChartUseIndexForAxisDomain *tempr = vtkSMChartUseIndexForAxisDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMChartUseIndexForAxisDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartUseIndexForAxisDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartUseIndexForAxisDomain *op = static_cast<vtkSMChartUseIndexForAxisDomain *>(vp);

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
      op->vtkSMChartUseIndexForAxisDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMChartUseIndexForAxisDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMChartUseIndexForAxisDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMChartUseIndexForAxisDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMChartUseIndexForAxisDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMChartUseIndexForAxisDomain\nC++: vtkSMChartUseIndexForAxisDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMChartUseIndexForAxisDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMChartUseIndexForAxisDomain\nC++: vtkSMChartUseIndexForAxisDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDefaultValues", PyvtkSMChartUseIndexForAxisDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nSet the default values for the property. Overridden to handle the\ndefault value for \"UseIndexForXAxis\" property, if any.\nUseIndexForXAxis needs to be OFF by default, if the required\nproperty e.g. XArrayName property has one of the known types of\narrays, otherwise it must be ON.\n"},
  {(char*)"Update", PyvtkSMChartUseIndexForAxisDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *requestingProperty)\n\nOverridden to fire DomainModified when the required property\nchanges. This ensures that SetDefaultValues() is called during\nproxy post-initialization after the required property has been\nreset to default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMChartUseIndexForAxisDomain_StaticNew()
{
  return vtkSMChartUseIndexForAxisDomain::New();
}

PyObject *PyVTKClass_vtkSMChartUseIndexForAxisDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMChartUseIndexForAxisDomain_StaticNew,
    PyvtkSMChartUseIndexForAxisDomain_Methods,
    "vtkSMChartUseIndexForAxisDomain", modulename,
    NULL, NULL,
    PyvtkSMChartUseIndexForAxisDomain_Doc(),
    PyVTKClass_vtkSMBooleanDomainNew(modulename));
  return cls;
}

const char **PyvtkSMChartUseIndexForAxisDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMChartUseIndexForAxisDomain - extends vtkSMBooleanDomain to pick a\n\n",
    "Superclass: vtkSMBooleanDomain\n\n",
    "vtkSMChartUseIndexForAxisDomain extends vtkSMBooleanDomain to add\nlogic to pick an appropriate default e.g. UseIndexForXAxis for bar\nand line charts needs to be set to 0 by default, if the XArrayName is\none of the known arrays such as \"bin_extents\", \"arc_length\", and set\nto 1 otherwise. This class encapsulates that logic.\n\nSupported Required-Property functions:\n\\li ArraySelection : (required) refe",
    "rs to the property that dictates\n    the\narray selection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMChartUseIndexForAxisDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMChartUseIndexForAxisDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMChartUseIndexForAxisDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

