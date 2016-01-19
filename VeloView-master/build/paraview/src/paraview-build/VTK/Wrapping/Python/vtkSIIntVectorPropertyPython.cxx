// python wrapper for vtkSIIntVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIIntVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIIntVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIIntVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIVectorPropertyNew
#endif

static const char **PyvtkSIIntVectorProperty_Doc();


static PyObject *
PyvtkSIIntVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIIntVectorProperty *op = static_cast<vtkSIIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIIntVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIIntVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIIntVectorProperty *op = static_cast<vtkSIIntVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIIntVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIIntVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIIntVectorProperty *op = static_cast<vtkSIIntVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIIntVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIIntVectorProperty::NewInstance());

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
PyvtkSIIntVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIIntVectorProperty *tempr = vtkSIIntVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIIntVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIIntVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIIntVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIIntVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIIntVectorProperty\nC++: vtkSIIntVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIIntVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIIntVectorProperty\nC++: vtkSIIntVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIIntVectorProperty_StaticNew()
{
  return vtkSIIntVectorProperty::New();
}

PyObject *PyVTKClass_vtkSIIntVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIIntVectorProperty_StaticNew,
    PyvtkSIIntVectorProperty_Methods,
    "vtkSIIntVectorProperty", modulename,
    NULL, NULL,
    PyvtkSIIntVectorProperty_Doc(),
    PyVTKClass_vtkSIVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIIntVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIIntVectorProperty\n\n",
    "Superclass: vtkSIVectorProperty\n\n",
    "ServerSide Property use to set int array as method argument.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIIntVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIIntVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIIntVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

