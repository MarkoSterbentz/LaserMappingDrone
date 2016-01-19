// python wrapper for vtkSMCoreUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMCoreUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCoreUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCoreUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSMCoreUtilities_Doc();


static PyObject *
PyvtkSMCoreUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCoreUtilities *op = static_cast<vtkSMCoreUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCoreUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCoreUtilities *op = static_cast<vtkSMCoreUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCoreUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCoreUtilities *op = static_cast<vtkSMCoreUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCoreUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCoreUtilities::NewInstance());

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
PyvtkSMCoreUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCoreUtilities *tempr = vtkSMCoreUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_GetFileNameProperty(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFileNameProperty");

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    const char *tempr = vtkSMCoreUtilities::GetFileNameProperty(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_SanitizeName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SanitizeName");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkStdString tempr = vtkSMCoreUtilities::SanitizeName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCoreUtilities_AdjustRangeForLog(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AdjustRangeForLog");

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = vtkSMCoreUtilities::AdjustRangeForLog(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCoreUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCoreUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCoreUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCoreUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCoreUtilities\nC++: vtkSMCoreUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCoreUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCoreUtilities\nC++: vtkSMCoreUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileNameProperty", PyvtkSMCoreUtilities_GetFileNameProperty, METH_VARARGS | METH_STATIC,
   (char*)"V.GetFileNameProperty(vtkSMProxy) -> string\nC++: static const char *GetFileNameProperty(vtkSMProxy *)\n\nGiven a proxy (or proxy prototype), returns the name of the\nproperty that ParaView application will be use as the default\nFileName property. Returns the name of the property or NULL when\nno such property is found.\n"},
  {(char*)"SanitizeName", PyvtkSMCoreUtilities_SanitizeName, METH_VARARGS | METH_STATIC,
   (char*)"V.SanitizeName(string) -> string\nC++: static vtkStdString SanitizeName(const char *)\n\nSanitize a label/name to be remove spaces, delimiters etc.\n"},
  {(char*)"AdjustRangeForLog", PyvtkSMCoreUtilities_AdjustRangeForLog, METH_VARARGS | METH_STATIC,
   (char*)"V.AdjustRangeForLog([float, float]) -> bool\nC++: static bool AdjustRangeForLog(double range[2])\n\nGiven a range, converts it to be a valid range to switch to log\nspace. If the range is changed, returns true, otherwise returns\nfalse.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCoreUtilities_StaticNew()
{
  return vtkSMCoreUtilities::New();
}

PyObject *PyVTKClass_vtkSMCoreUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCoreUtilities_StaticNew,
    PyvtkSMCoreUtilities_Methods,
    "vtkSMCoreUtilities", modulename,
    NULL, NULL,
    PyvtkSMCoreUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSMCoreUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkSMCoreUtilities - collection of utilities.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSMCoreUtilities provides miscellaneous utility functions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCoreUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCoreUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCoreUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

