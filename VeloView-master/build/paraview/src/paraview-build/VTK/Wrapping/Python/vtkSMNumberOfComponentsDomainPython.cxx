// python wrapper for vtkSMNumberOfComponentsDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMNumberOfComponentsDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMNumberOfComponentsDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMNumberOfComponentsDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMIntRangeDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMIntRangeDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMIntRangeDomainNew
#endif

static const char **PyvtkSMNumberOfComponentsDomain_Doc();


static PyObject *
PyvtkSMNumberOfComponentsDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMNumberOfComponentsDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNumberOfComponentsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMNumberOfComponentsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNumberOfComponentsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMNumberOfComponentsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMNumberOfComponentsDomain::NewInstance());

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
PyvtkSMNumberOfComponentsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMNumberOfComponentsDomain *tempr = vtkSMNumberOfComponentsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMNumberOfComponentsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNumberOfComponentsDomain *op = static_cast<vtkSMNumberOfComponentsDomain *>(vp);

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
      op->vtkSMNumberOfComponentsDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMNumberOfComponentsDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMNumberOfComponentsDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMNumberOfComponentsDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMNumberOfComponentsDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMNumberOfComponentsDomain\nC++: vtkSMNumberOfComponentsDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMNumberOfComponentsDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMNumberOfComponentsDomain\nC++: vtkSMNumberOfComponentsDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMNumberOfComponentsDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *prop)\n\nUpdates the range based on the scalar range of the currently\nselected array. This requires Input (vtkSMProxyProperty) and\nArraySelection (vtkSMStringVectorProperty) properties. Currently,\nthis uses only the first component of the array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMNumberOfComponentsDomain_StaticNew()
{
  return vtkSMNumberOfComponentsDomain::New();
}

PyObject *PyVTKClass_vtkSMNumberOfComponentsDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMNumberOfComponentsDomain_StaticNew,
    PyvtkSMNumberOfComponentsDomain_Methods,
    "vtkSMNumberOfComponentsDomain", modulename,
    NULL, NULL,
    PyvtkSMNumberOfComponentsDomain_Doc(),
    PyVTKClass_vtkSMIntRangeDomainNew(modulename));
  return cls;
}

const char **PyvtkSMNumberOfComponentsDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMNumberOfComponentsDomain - int range domain based on the number\nof\n\n",
    "Superclass: vtkSMIntRangeDomain\n\n",
    "vtkSMNumberOfComponentsDomain is used for properties that allow the\nuser to choose the component number to process for the choosen array.\nIt needs two required properties with following functions:\n* Input -- input property for the filter.\n* ArraySelection -- string vector property used to select the array.\n  This domain will not work if either of the required properties is\n  missing.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMNumberOfComponentsDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMNumberOfComponentsDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMNumberOfComponentsDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

