// python wrapper for vtkSMRepresentedArrayListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMRepresentedArrayListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRepresentedArrayListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRepresentedArrayListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMArrayListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMArrayListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMArrayListDomainNew
#endif

static const char **PyvtkSMRepresentedArrayListDomain_Doc();


static PyObject *
PyvtkSMRepresentedArrayListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRepresentedArrayListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRepresentedArrayListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRepresentedArrayListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRepresentedArrayListDomain::NewInstance());

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
PyvtkSMRepresentedArrayListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRepresentedArrayListDomain *tempr = vtkSMRepresentedArrayListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRepresentedArrayListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentedArrayListDomain *op = static_cast<vtkSMRepresentedArrayListDomain *>(vp);

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
      op->vtkSMRepresentedArrayListDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMRepresentedArrayListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRepresentedArrayListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRepresentedArrayListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRepresentedArrayListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRepresentedArrayListDomain\nC++: vtkSMRepresentedArrayListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRepresentedArrayListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRepresentedArrayListDomain\nC++: vtkSMRepresentedArrayListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMRepresentedArrayListDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate the domain.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMRepresentedArrayListDomain_StaticNew()
{
  return vtkSMRepresentedArrayListDomain::New();
}

PyObject *PyVTKClass_vtkSMRepresentedArrayListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMRepresentedArrayListDomain_StaticNew,
    PyvtkSMRepresentedArrayListDomain_Methods,
    "vtkSMRepresentedArrayListDomain", modulename,
    NULL, NULL,
    PyvtkSMRepresentedArrayListDomain_Doc(),
    PyVTKClass_vtkSMArrayListDomainNew(modulename));
  return cls;
}

const char **PyvtkSMRepresentedArrayListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMRepresentedArrayListDomain - extends vtkSMArrayListDomain to add\n\n",
    "Superclass: vtkSMArrayListDomain\n\n",
    "Representations often add new arrays on top of the ones provided by\nthe inputs to the representations. In that case, the domains for\nproperties that allow users to pick one of those newly added arrays\nneed to show those arrays e.g. \"ColorArrayName\" property of geometry\nrepresentations. This domain extends vtkSMArrayListDomain to add\narrays from represented data for representations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRepresentedArrayListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRepresentedArrayListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRepresentedArrayListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

