// python wrapper for vtkPVLastSelectionInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVLastSelectionInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVLastSelectionInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVLastSelectionInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVSelectionInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVSelectionInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVSelectionInformationNew
#endif

static const char **PyvtkPVLastSelectionInformation_Doc();


static PyObject *
PyvtkPVLastSelectionInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLastSelectionInformation *op = static_cast<vtkPVLastSelectionInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVLastSelectionInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLastSelectionInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLastSelectionInformation *op = static_cast<vtkPVLastSelectionInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLastSelectionInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLastSelectionInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLastSelectionInformation *op = static_cast<vtkPVLastSelectionInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLastSelectionInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLastSelectionInformation::NewInstance());

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
PyvtkPVLastSelectionInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVLastSelectionInformation *tempr = vtkPVLastSelectionInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLastSelectionInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLastSelectionInformation *op = static_cast<vtkPVLastSelectionInformation *>(vp);

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
      op->vtkPVLastSelectionInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVLastSelectionInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVLastSelectionInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVLastSelectionInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVLastSelectionInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVLastSelectionInformation\nC++: vtkPVLastSelectionInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVLastSelectionInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVLastSelectionInformation\nC++: vtkPVLastSelectionInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVLastSelectionInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVLastSelectionInformation_StaticNew()
{
  return vtkPVLastSelectionInformation::New();
}

PyObject *PyVTKClass_vtkPVLastSelectionInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVLastSelectionInformation_StaticNew,
    PyvtkPVLastSelectionInformation_Methods,
    "vtkPVLastSelectionInformation", modulename,
    NULL, NULL,
    PyvtkPVLastSelectionInformation_Doc(),
    PyVTKClass_vtkPVSelectionInformationNew(modulename));
  return cls;
}

const char **PyvtkPVLastSelectionInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVLastSelectionInformation\n\n",
    "Superclass: vtkPVSelectionInformation\n\n",
    "vtkPVLastSelectionInformation is used to obtain the LastSelection\nfrom vtkPVRenderView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVLastSelectionInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVLastSelectionInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVLastSelectionInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

