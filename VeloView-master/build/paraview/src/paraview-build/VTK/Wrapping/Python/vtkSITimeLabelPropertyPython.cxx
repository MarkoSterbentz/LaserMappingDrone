// python wrapper for vtkSITimeLabelProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSITimeLabelProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSITimeLabelProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSITimeLabelPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSITimeLabelProperty_Doc();


static PyObject *
PyvtkSITimeLabelProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeLabelProperty *op = static_cast<vtkSITimeLabelProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSITimeLabelProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeLabelProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeLabelProperty *op = static_cast<vtkSITimeLabelProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSITimeLabelProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeLabelProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeLabelProperty *op = static_cast<vtkSITimeLabelProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSITimeLabelProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSITimeLabelProperty::NewInstance());

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
PyvtkSITimeLabelProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSITimeLabelProperty *tempr = vtkSITimeLabelProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSITimeLabelProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSITimeLabelProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSITimeLabelProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSITimeLabelProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSITimeLabelProperty\nC++: vtkSITimeLabelProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSITimeLabelProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSITimeLabelProperty\nC++: vtkSITimeLabelProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSITimeLabelProperty_StaticNew()
{
  return vtkSITimeLabelProperty::New();
}

PyObject *PyVTKClass_vtkSITimeLabelPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSITimeLabelProperty_StaticNew,
    PyvtkSITimeLabelProperty_Methods,
    "vtkSITimeLabelProperty", modulename,
    NULL, NULL,
    PyvtkSITimeLabelProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSITimeLabelProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSITimeLabelProperty\n\n",
    "Superclass: vtkSIProperty\n\n",
    "SIProperty that deals with TimeLabel annotation on Algorithm object\ntype\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSITimeLabelProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSITimeLabelPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSITimeLabelProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

