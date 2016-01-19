// python wrapper for vtkSIDoubleMapProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIDoubleMapProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIDoubleMapProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIDoubleMapPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSIDoubleMapProperty_Doc();


static PyObject *
PyvtkSIDoubleMapProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIDoubleMapProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDoubleMapProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIDoubleMapProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDoubleMapProperty::NewInstance());

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
PyvtkSIDoubleMapProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIDoubleMapProperty *tempr = vtkSIDoubleMapProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSIDoubleMapProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDoubleMapProperty_SetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDoubleMapProperty *op = static_cast<vtkSIDoubleMapProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCleanCommand(temp0);
      }
    else
      {
      op->vtkSIDoubleMapProperty::SetCleanCommand(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSIDoubleMapProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIDoubleMapProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIDoubleMapProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIDoubleMapProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIDoubleMapProperty\nC++: vtkSIDoubleMapProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIDoubleMapProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIDoubleMapProperty\nC++: vtkSIDoubleMapProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCleanCommand", PyvtkSIDoubleMapProperty_GetCleanCommand, METH_VARARGS,
   (char*)"V.GetCleanCommand() -> string\nC++: char *GetCleanCommand()\n\n"},
  {(char*)"SetCleanCommand", PyvtkSIDoubleMapProperty_SetCleanCommand, METH_VARARGS,
   (char*)"V.SetCleanCommand(string)\nC++: void SetCleanCommand(char *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIDoubleMapProperty_StaticNew()
{
  return vtkSIDoubleMapProperty::New();
}

PyObject *PyVTKClass_vtkSIDoubleMapPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIDoubleMapProperty_StaticNew,
    PyvtkSIDoubleMapProperty_Methods,
    "vtkSIDoubleMapProperty", modulename,
    NULL, NULL,
    PyvtkSIDoubleMapProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIDoubleMapProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIDoubleMapProperty\n\n",
    "Superclass: vtkSIProperty\n\n",
    "Map property that manage double value to be set through a method on a\nvtkObject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIDoubleMapProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIDoubleMapPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIDoubleMapProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

