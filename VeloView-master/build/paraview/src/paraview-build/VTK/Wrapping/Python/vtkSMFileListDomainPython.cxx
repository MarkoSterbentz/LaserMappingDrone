// python wrapper for vtkSMFileListDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMFileListDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMFileListDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMFileListDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMStringListDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMStringListDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMStringListDomainNew
#endif

static const char **PyvtkSMFileListDomain_Doc();


static PyObject *
PyvtkSMFileListDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFileListDomain *op = static_cast<vtkSMFileListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMFileListDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFileListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFileListDomain *op = static_cast<vtkSMFileListDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFileListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMFileListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFileListDomain *op = static_cast<vtkSMFileListDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMFileListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFileListDomain::NewInstance());

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
PyvtkSMFileListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMFileListDomain *tempr = vtkSMFileListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMFileListDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMFileListDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMFileListDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMFileListDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMFileListDomain\nC++: vtkSMFileListDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMFileListDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMFileListDomain\nC++: vtkSMFileListDomain *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMFileListDomain_StaticNew()
{
  return vtkSMFileListDomain::New();
}

PyObject *PyVTKClass_vtkSMFileListDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMFileListDomain_StaticNew,
    PyvtkSMFileListDomain_Methods,
    "vtkSMFileListDomain", modulename,
    NULL, NULL,
    PyvtkSMFileListDomain_Doc(),
    PyVTKClass_vtkSMStringListDomainNew(modulename));
  return cls;
}

const char **PyvtkSMFileListDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMFileListDomain - list of filenames\n\n",
    "Superclass: vtkSMStringListDomain\n\n",
    "vtkSMFileListDomain represents a domain consisting of a list of\nfilenames. It only works with vtkSMStringVectorProperty.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMFileListDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMFileListDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMFileListDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

