// python wrapper for vtkPVEnvironmentInformationHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVEnvironmentInformationHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVEnvironmentInformationHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVEnvironmentInformationHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVEnvironmentInformationHelper_Doc();


static PyObject *
PyvtkPVEnvironmentInformationHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVEnvironmentInformationHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnvironmentInformationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVEnvironmentInformationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnvironmentInformationHelper::NewInstance());

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
PyvtkPVEnvironmentInformationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVEnvironmentInformationHelper *tempr = vtkPVEnvironmentInformationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_SetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVariable(temp0);
      }
    else
      {
      op->vtkPVEnvironmentInformationHelper::SetVariable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_GetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVariable() :
      op->vtkPVEnvironmentInformationHelper::GetVariable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVEnvironmentInformationHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkPVEnvironmentInformationHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVEnvironmentInformationHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVEnvironmentInformationHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVEnvironmentInformationHelper\nC++: vtkPVEnvironmentInformationHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVEnvironmentInformationHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVEnvironmentInformationHelper\nC++: vtkPVEnvironmentInformationHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVariable", PyvtkPVEnvironmentInformationHelper_SetVariable, METH_VARARGS,
   (char*)"V.SetVariable(string)\nC++: void SetVariable(char *)\n\nGet/Set the environment variable that we want to get the value of\n"},
  {(char*)"GetVariable", PyvtkPVEnvironmentInformationHelper_GetVariable, METH_VARARGS,
   (char*)"V.GetVariable() -> string\nC++: char *GetVariable()\n\nGet/Set the environment variable that we want to get the value of\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVEnvironmentInformationHelper_StaticNew()
{
  return vtkPVEnvironmentInformationHelper::New();
}

PyObject *PyVTKClass_vtkPVEnvironmentInformationHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVEnvironmentInformationHelper_StaticNew,
    PyvtkPVEnvironmentInformationHelper_Methods,
    "vtkPVEnvironmentInformationHelper", modulename,
    NULL, NULL,
    PyvtkPVEnvironmentInformationHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVEnvironmentInformationHelper_Doc()
{
  static const char *docstring[] = {
    "vtkPVEnvironmentInformationHelper - Helper object that can\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVEnvironmentInformationHelper can be used to get values of\nenvironment variables.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVEnvironmentInformationHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVEnvironmentInformationHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVEnvironmentInformationHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

