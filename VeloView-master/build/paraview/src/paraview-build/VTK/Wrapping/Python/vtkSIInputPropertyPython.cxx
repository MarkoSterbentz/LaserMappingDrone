// python wrapper for vtkSIInputProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIInputProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIInputProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIInputPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIProxyPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIProxyPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIProxyPropertyNew
#endif

static const char **PyvtkSIInputProperty_Doc();


static PyObject *
PyvtkSIInputProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIInputProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIInputProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIInputProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIInputProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIInputProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIInputProperty::NewInstance());

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
PyvtkSIInputProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIInputProperty *tempr = vtkSIInputProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIInputProperty_GetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIInputProperty *op = static_cast<vtkSIInputProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPortIndex() :
      op->vtkSIInputProperty::GetPortIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIInputProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIInputProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIInputProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIInputProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIInputProperty\nC++: vtkSIInputProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIInputProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIInputProperty\nC++: vtkSIInputProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPortIndex", PyvtkSIInputProperty_GetPortIndex, METH_VARARGS,
   (char*)"V.GetPortIndex() -> int\nC++: int GetPortIndex()\n\nControls which input port this property uses when making\nconnections. By default, this is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIInputProperty_StaticNew()
{
  return vtkSIInputProperty::New();
}

PyObject *PyVTKClass_vtkSIInputPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIInputProperty_StaticNew,
    PyvtkSIInputProperty_Methods,
    "vtkSIInputProperty", modulename,
    NULL, NULL,
    PyvtkSIInputProperty_Doc(),
    PyVTKClass_vtkSIProxyPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIInputProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIInputProperty\n\n",
    "Superclass: vtkSIProxyProperty\n\n",
    "ServerSide Property use to set vtkOutputPort as method parameter. For\nthat we need the object on which we should get the Port and its port\nnumber.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIInputProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIInputPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIInputProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

