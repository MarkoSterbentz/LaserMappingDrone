// python wrapper for vtkSMFieldDataDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMFieldDataDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMFieldDataDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMFieldDataDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMEnumerationDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMEnumerationDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMEnumerationDomainNew
#endif

static const char **PyvtkSMFieldDataDomain_Doc();


static PyObject *
PyvtkSMFieldDataDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMFieldDataDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFieldDataDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMFieldDataDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFieldDataDomain::NewInstance());

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
PyvtkSMFieldDataDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMFieldDataDomain *tempr = vtkSMFieldDataDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

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
      op->vtkSMFieldDataDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMFieldDataDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFieldDataDomain *op = static_cast<vtkSMFieldDataDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMFieldDataDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMFieldDataDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMFieldDataDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMFieldDataDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMFieldDataDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMFieldDataDomain\nC++: vtkSMFieldDataDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMFieldDataDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMFieldDataDomain\nC++: vtkSMFieldDataDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMFieldDataDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *prop)\n\nCheck the input and appropriate fields (point data or cell data)\nto the enumeration. This uses the Input property with a\nvtkSMInputArrayDomain.\n"},
  {(char*)"SetDefaultValues", PyvtkSMFieldDataDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nOverridden to ensure that the property's default value is valid\nfor the enumeration, if not it will be set to the first\nenumeration value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMFieldDataDomain_StaticNew()
{
  return vtkSMFieldDataDomain::New();
}

PyObject *PyVTKClass_vtkSMFieldDataDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMFieldDataDomain_StaticNew,
    PyvtkSMFieldDataDomain_Methods,
    "vtkSMFieldDataDomain", modulename,
    NULL, NULL,
    PyvtkSMFieldDataDomain_Doc(),
    PyVTKClass_vtkSMEnumerationDomainNew(modulename));
  return cls;
}

const char **PyvtkSMFieldDataDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMFieldDataDomain - enumeration with point and cell data entries\n\n",
    "Superclass: vtkSMEnumerationDomain\n\n",
    "vtkSMFieldDataDomain is a sub-class vtkSMEnumerationDomain that looks\nat the input in Update() and populates the entry list based on\nwhether there are valid arrays in point/cell/vertex/edge/row data. At\nmost it consists of two entries: (\"Point Data\",\nvtkDataObject::FIELD_ASSOCIATION_POINTS) and (\"Cell Data\", \nvtkDataObject::FIELD_ASSOCIATION_CELLS) in case of vtkDataSet\nsubclasses OR (\"Vertex Data",
    "\",\nvtkDataObject::FIELD_ASSOCIATION_VERTICES) and (\"Edge Data\",\nvtkDataObject::FIELD_ASSOCIATION_EDGES) in case of vtkGraph and\nsubclasses OR (\"Row Data\", vtkDataObject::FIELD_ASSOCIATION_ROWS) in\ncase of vtkTable and subclasses. It requires Input\n(vtkSMProxyProperty) property. If attribute\n\"disable_update_domain_entries\" is set to true (false by default),\nthen the domain values will not changed b",
    "ased on input field\navailability. Only the default value setting will be affected by\nthat.\n\nSee Also:\n\nvtkSMEnumerationDomain vtkSMProxyProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMFieldDataDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMFieldDataDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMFieldDataDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

