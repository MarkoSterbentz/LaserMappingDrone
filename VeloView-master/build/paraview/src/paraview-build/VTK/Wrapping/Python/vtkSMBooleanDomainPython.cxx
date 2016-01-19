// python wrapper for vtkSMBooleanDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMBooleanDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMBooleanDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMBooleanDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMBooleanDomain_Doc();


static PyObject *
PyvtkSMBooleanDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBooleanDomain *op = static_cast<vtkSMBooleanDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMBooleanDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBooleanDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBooleanDomain *op = static_cast<vtkSMBooleanDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMBooleanDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBooleanDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBooleanDomain *op = static_cast<vtkSMBooleanDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMBooleanDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMBooleanDomain::NewInstance());

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
PyvtkSMBooleanDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMBooleanDomain *tempr = vtkSMBooleanDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBooleanDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBooleanDomain *op = static_cast<vtkSMBooleanDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMBooleanDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMBooleanDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBooleanDomain *op = static_cast<vtkSMBooleanDomain *>(vp);

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
      op->vtkSMBooleanDomain::SetAnimationValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMBooleanDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMBooleanDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMBooleanDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMBooleanDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMBooleanDomain\nC++: vtkSMBooleanDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMBooleanDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMBooleanDomain\nC++: vtkSMBooleanDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInDomain", PyvtkSMBooleanDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\n\nReturns true if the propery is a vtkSMIntVectorProperty. Return 0\notherwise.\n"},
  {(char*)"SetAnimationValue", PyvtkSMBooleanDomain_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(vtkSMProperty, int, float)\nC++: virtual void SetAnimationValue(vtkSMProperty *property,\n    int idx, double value)\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMBooleanDomain_StaticNew()
{
  return vtkSMBooleanDomain::New();
}

PyObject *PyVTKClass_vtkSMBooleanDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMBooleanDomain_StaticNew,
    PyvtkSMBooleanDomain_Methods,
    "vtkSMBooleanDomain", modulename,
    NULL, NULL,
    PyvtkSMBooleanDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));
  return cls;
}

const char **PyvtkSMBooleanDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMBooleanDomain - a domain with two values: true or false\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMBooleanDomain does not really restrict the values of the\nproperty that contains it. All integer values are valid. Rather, it\nis used to specified that the property represents a true/false state.\nThis domains works with only vtkSMIntVectorProperty.\n\nSee Also:\n\nvtkSMDomain vtkSMIntVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMBooleanDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMBooleanDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMBooleanDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

