// python wrapper for vtkPVTestUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVTestUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTestUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTestUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVTestUtilities_Doc();


static PyObject *
PyvtkPVTestUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTestUtilities *op = static_cast<vtkPVTestUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTestUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTestUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTestUtilities *op = static_cast<vtkPVTestUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTestUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTestUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTestUtilities *op = static_cast<vtkPVTestUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTestUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTestUtilities::NewInstance());

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
PyvtkPVTestUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTestUtilities *tempr = vtkPVTestUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTestUtilities_GetDataFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTestUtilities *op = static_cast<vtkPVTestUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDataFilePath(temp0) :
      op->vtkPVTestUtilities::GetDataFilePath(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTestUtilities_GetTempFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTempFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTestUtilities *op = static_cast<vtkPVTestUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTempFilePath(temp0) :
      op->vtkPVTestUtilities::GetTempFilePath(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTestUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTestUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTestUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTestUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTestUtilities\nC++: vtkPVTestUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTestUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTestUtilities\nC++: vtkPVTestUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataFilePath", PyvtkPVTestUtilities_GetDataFilePath, METH_VARARGS,
   (char*)"V.GetDataFilePath(string) -> string\nC++: char *GetDataFilePath(const char *name)\n\nGiven a path relative to the Data root (provided in argv by -D\noption), construct a OS independent path to the file specified by\n\"name\". \"name\" should not start with a path seperator and if path\nseperators are needed use '/'. Be sure to delete [] the return\nwhen you are finished.\n"},
  {(char*)"GetTempFilePath", PyvtkPVTestUtilities_GetTempFilePath, METH_VARARGS,
   (char*)"V.GetTempFilePath(string) -> string\nC++: char *GetTempFilePath(const char *name)\n\nGiven a path relative to the working directory (provided in argv\nby -T option), construct a OS independent path to the file\nspecified by \"name\". \"name\" should not start with a path\nseperator and if path seperators are needed use '/'. Be sure to\ndelete [] the return when you are finished.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTestUtilities_StaticNew()
{
  return vtkPVTestUtilities::New();
}

PyObject *PyVTKClass_vtkPVTestUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTestUtilities_StaticNew,
    PyvtkPVTestUtilities_Methods,
    "vtkPVTestUtilities", modulename,
    NULL, NULL,
    PyvtkPVTestUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVTestUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkPVTestUtilities - A class to facilitate common test operations\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTestUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTestUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTestUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

