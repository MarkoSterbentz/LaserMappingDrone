// python wrapper for vtkPVGenericAttributeInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVGenericAttributeInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVGenericAttributeInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVGenericAttributeInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVArrayInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVArrayInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVArrayInformationNew
#endif

static const char **PyvtkPVGenericAttributeInformation_Doc();


static PyObject *
PyvtkPVGenericAttributeInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVGenericAttributeInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericAttributeInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGenericAttributeInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericAttributeInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGenericAttributeInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGenericAttributeInformation::NewInstance());

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
PyvtkPVGenericAttributeInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVGenericAttributeInformation *tempr = vtkPVGenericAttributeInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGenericAttributeInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGenericAttributeInformation *op = static_cast<vtkPVGenericAttributeInformation *>(vp);

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
      op->vtkPVGenericAttributeInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVGenericAttributeInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVGenericAttributeInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVGenericAttributeInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVGenericAttributeInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVGenericAttributeInformation\nC++: vtkPVGenericAttributeInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVGenericAttributeInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVGenericAttributeInformation\nC++: vtkPVGenericAttributeInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVGenericAttributeInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVGenericAttributeInformation_StaticNew()
{
  return vtkPVGenericAttributeInformation::New();
}

PyObject *PyVTKClass_vtkPVGenericAttributeInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVGenericAttributeInformation_StaticNew,
    PyvtkPVGenericAttributeInformation_Methods,
    "vtkPVGenericAttributeInformation", modulename,
    NULL, NULL,
    PyvtkPVGenericAttributeInformation_Doc(),
    PyVTKClass_vtkPVArrayInformationNew(modulename));
  return cls;
}

const char **PyvtkPVGenericAttributeInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVGenericAttributeInformation - Generic attribute information like\ntype.\n\n",
    "Superclass: vtkPVArrayInformation\n\n",
    "This objects is for eliminating direct access to vtkDataObjects by\nthe \"client\".  Only vtkPVPart and vtkPVProcessModule should access\nthe data directly.  At the moment, this object is only a container\nand has no useful methods for operating on data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVGenericAttributeInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVGenericAttributeInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVGenericAttributeInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

