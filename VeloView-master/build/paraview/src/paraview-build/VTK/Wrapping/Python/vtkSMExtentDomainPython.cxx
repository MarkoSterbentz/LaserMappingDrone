// python wrapper for vtkSMExtentDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMExtentDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMExtentDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMExtentDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMIntRangeDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMIntRangeDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMIntRangeDomainNew
#endif

static const char **PyvtkSMExtentDomain_Doc();


static PyObject *
PyvtkSMExtentDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMExtentDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMExtentDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMExtentDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMExtentDomain::NewInstance());

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
PyvtkSMExtentDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMExtentDomain *tempr = vtkSMExtentDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

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
      op->vtkSMExtentDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAnimationValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMExtentDomain::SetAnimationValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMExtentDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExtentDomain *op = static_cast<vtkSMExtentDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMExtentDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMExtentDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMExtentDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMExtentDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMExtentDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMExtentDomain\nC++: vtkSMExtentDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMExtentDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMExtentDomain\nC++: vtkSMExtentDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMExtentDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {(char*)"SetAnimationValue", PyvtkSMExtentDomain_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(vtkSMProperty, int, float)\nC++: virtual void SetAnimationValue(vtkSMProperty *property,\n    int idx, double value)\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {(char*)"SetDefaultValues", PyvtkSMExtentDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMExtentDomain_StaticNew()
{
  return vtkSMExtentDomain::New();
}

PyObject *PyVTKClass_vtkSMExtentDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMExtentDomain_StaticNew,
    PyvtkSMExtentDomain_Methods,
    "vtkSMExtentDomain", modulename,
    NULL, NULL,
    PyvtkSMExtentDomain_Doc(),
    PyVTKClass_vtkSMIntRangeDomainNew(modulename));
  return cls;
}

const char **PyvtkSMExtentDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMExtentDomain - int range domain based on data set extent\n\n",
    "Superclass: vtkSMIntRangeDomain\n\n",
    "vtkSMExtentDomain is a subclass of vtkSMIntRangeDomain. In its Update\nmethod, it determines the minimum and maximum extent in each\ndimension of the structured data set with which it is associated. It\nrequires a vtkSMSourceProxy to do this.\n\nSee Also:\n\nvtkSMIntRangeDomain\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMExtentDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMExtentDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMExtentDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

