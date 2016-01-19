// python wrapper for vtkSIStringVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIStringVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIStringVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIStringVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIVectorPropertyNew
#endif

static const char **PyvtkSIStringVectorProperty_Doc();


static PyObject *
PyvtkSIStringVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIStringVectorProperty *op = static_cast<vtkSIStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIStringVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIStringVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIStringVectorProperty *op = static_cast<vtkSIStringVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIStringVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIStringVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIStringVectorProperty *op = static_cast<vtkSIStringVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIStringVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIStringVectorProperty::NewInstance());

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
PyvtkSIStringVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIStringVectorProperty *tempr = vtkSIStringVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIStringVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIStringVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIStringVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIStringVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIStringVectorProperty\nC++: vtkSIStringVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIStringVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIStringVectorProperty\nC++: vtkSIStringVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIStringVectorProperty_StaticNew()
{
  return vtkSIStringVectorProperty::New();
}

PyObject *PyVTKClass_vtkSIStringVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIStringVectorProperty_StaticNew,
    PyvtkSIStringVectorProperty_Methods,
    "vtkSIStringVectorProperty", modulename,
    NULL, NULL,
    PyvtkSIStringVectorProperty_Doc(),
    PyVTKClass_vtkSIVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIStringVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIStringVectorProperty\n\n",
    "Superclass: vtkSIVectorProperty\n\n",
    "ServerImplementation Property to deal with String array as method\narguments.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIStringVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIStringVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIStringVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

