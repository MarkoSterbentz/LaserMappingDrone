// python wrapper for vtkSMSILDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSILDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSILDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSILDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMArraySelectionDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMArraySelectionDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMArraySelectionDomainNew
#endif

static const char **PyvtkSMSILDomain_Doc();


static PyObject *
PyvtkSMSILDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSILDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSILDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSILDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSILDomain::NewInstance());

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
PyvtkSMSILDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSILDomain *tempr = vtkSMSILDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILDomain_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSMSILDomain::GetSIL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILDomain_GetSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSubTree() :
      op->vtkSMSILDomain::GetSubTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMSILDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSILDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSILDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSILDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSILDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSILDomain\nC++: vtkSMSILDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSILDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSILDomain\nC++: vtkSMSILDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSIL", PyvtkSMSILDomain_GetSIL, METH_VARARGS,
   (char*)"V.GetSIL() -> vtkGraph\nC++: vtkGraph *GetSIL()\n\nGet the SIL. This does not result in the re-fetching of the SIL,\nit simply returns the most recently fetched SIL. To re-fetch the\nSIL, try calling UpdatePropertyInformation() on the reader proxy.\nThat will result in requesting the vtkSMSILInformationHelper to\nfetch the SIL.\n"},
  {(char*)"GetSubTree", PyvtkSMSILDomain_GetSubTree, METH_VARARGS,
   (char*)"V.GetSubTree() -> string\nC++: char *GetSubTree()\n\nProvide an access to the subtree attribute from the XML\ndefinition of the sub-domaine\n"},
  {(char*)"SetDefaultValues", PyvtkSMSILDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *, bool)\n\nOverridden to leave defaults unchanged.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSILDomain_StaticNew()
{
  return vtkSMSILDomain::New();
}

PyObject *PyVTKClass_vtkSMSILDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSILDomain_StaticNew,
    PyvtkSMSILDomain_Methods,
    "vtkSMSILDomain", modulename,
    NULL, NULL,
    PyvtkSMSILDomain_Doc(),
    PyVTKClass_vtkSMArraySelectionDomainNew(modulename));
  return cls;
}

const char **PyvtkSMSILDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMSILDomain - is a specialization for vtkSMArraySelectionDomain\nwith\n\n",
    "Superclass: vtkSMArraySelectionDomain\n\n",
    "vtkSMSILDomain is basically a vtkSMArraySelectionDomain with a method\nto access the SIL. Having a separate domain also makes it possible to\nautomatically create SIL widgets in the GUI.\n\nvtkSMSILDomain needs a required property with function=\"ArrayList\"\nwhich is typically an information property with the array selection\nstatuses (exactly similar to vtkSMArraySelectionDomain) with one\nnotable except",
    "ion. This information property typically uses the\nvtkSMSILInformationHelper which is used to access the SIL if\nrequested by using GetSIL().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSILDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSILDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSILDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

