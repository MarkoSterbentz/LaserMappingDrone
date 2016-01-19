// python wrapper for vtkSMArrayRangeDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMArrayRangeDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMArrayRangeDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMArrayRangeDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDoubleRangeDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDoubleRangeDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDoubleRangeDomainNew
#endif

static const char **PyvtkSMArrayRangeDomain_Doc();


static PyObject *
PyvtkSMArrayRangeDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMArrayRangeDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayRangeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMArrayRangeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayRangeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMArrayRangeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMArrayRangeDomain::NewInstance());

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
PyvtkSMArrayRangeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMArrayRangeDomain *tempr = vtkSMArrayRangeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMArrayRangeDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayRangeDomain *op = static_cast<vtkSMArrayRangeDomain *>(vp);

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
      op->vtkSMArrayRangeDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMArrayRangeDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMArrayRangeDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMArrayRangeDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMArrayRangeDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMArrayRangeDomain\nC++: vtkSMArrayRangeDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMArrayRangeDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMArrayRangeDomain\nC++: vtkSMArrayRangeDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMArrayRangeDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *prop)\n\nUpdates the range based on the scalar range of the currently\nselected array. This requires Input (vtkSMProxyProperty) and\nArraySelection (vtkSMStringVectorProperty) properties. Currently,\nthis uses only the first component of the array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMArrayRangeDomain_StaticNew()
{
  return vtkSMArrayRangeDomain::New();
}

PyObject *PyVTKClass_vtkSMArrayRangeDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMArrayRangeDomain_StaticNew,
    PyvtkSMArrayRangeDomain_Methods,
    "vtkSMArrayRangeDomain", modulename,
    NULL, NULL,
    PyvtkSMArrayRangeDomain_Doc(),
    PyVTKClass_vtkSMDoubleRangeDomainNew(modulename));
  return cls;
}

const char **PyvtkSMArrayRangeDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMArrayRangeDomain - double range domain based on array range\n\n",
    "Superclass: vtkSMDoubleRangeDomain\n\n",
    "vtkSMArrayRangeDomain is a sub-class of vtkSMDoubleRangeDomain. In\nit's Update(), it sets min/max values based on the range of an input\narray. It requires Input (vtkSMProxyProperty) and ArraySelection\n(vtkSMStringVectorProperty) properties.\n\nSee Also:\n\nvtkSMDoubleRangeDomain vtkSMProxyProperty vtkSMStringVectorProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMArrayRangeDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMArrayRangeDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMArrayRangeDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

