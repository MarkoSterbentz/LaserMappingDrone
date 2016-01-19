// python wrapper for vtkPVRepresentedDataInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRepresentedDataInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRepresentedDataInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRepresentedDataInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataInformationNew
#endif

static const char **PyvtkPVRepresentedDataInformation_Doc();


static PyObject *
PyvtkPVRepresentedDataInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedDataInformation *op = static_cast<vtkPVRepresentedDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRepresentedDataInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentedDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedDataInformation *op = static_cast<vtkPVRepresentedDataInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRepresentedDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentedDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedDataInformation *op = static_cast<vtkPVRepresentedDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRepresentedDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRepresentedDataInformation::NewInstance());

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
PyvtkPVRepresentedDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRepresentedDataInformation *tempr = vtkPVRepresentedDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRepresentedDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentedDataInformation *op = static_cast<vtkPVRepresentedDataInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVRepresentedDataInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRepresentedDataInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRepresentedDataInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRepresentedDataInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRepresentedDataInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRepresentedDataInformation\nC++: vtkPVRepresentedDataInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRepresentedDataInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRepresentedDataInformation\nC++: vtkPVRepresentedDataInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVRepresentedDataInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRepresentedDataInformation_StaticNew()
{
  return vtkPVRepresentedDataInformation::New();
}

PyObject *PyVTKClass_vtkPVRepresentedDataInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRepresentedDataInformation_StaticNew,
    PyvtkPVRepresentedDataInformation_Methods,
    "vtkPVRepresentedDataInformation", modulename,
    NULL, NULL,
    PyvtkPVRepresentedDataInformation_Doc(),
    PyVTKClass_vtkPVDataInformationNew(modulename));
  return cls;
}

const char **PyvtkPVRepresentedDataInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVRepresentedDataInformation\n\n",
    "Superclass: vtkPVDataInformation\n\n",
    "vtkPVRepresentedDataInformation is a vtkPVDataInformation subclass\nthat knows how to gather rendered data-information from a\nvtkPVDataRepresentation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRepresentedDataInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRepresentedDataInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRepresentedDataInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

