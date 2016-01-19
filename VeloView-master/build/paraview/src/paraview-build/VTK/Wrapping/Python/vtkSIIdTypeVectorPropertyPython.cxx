// python wrapper for vtkSIIdTypeVectorProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIIdTypeVectorProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIIdTypeVectorProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIIdTypeVectorPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIVectorPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIVectorPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIVectorPropertyNew
#endif

static const char **PyvtkSIIdTypeVectorProperty_Doc();


static PyObject *
PyvtkSIIdTypeVectorProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIIdTypeVectorProperty *op = static_cast<vtkSIIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIIdTypeVectorProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIIdTypeVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIIdTypeVectorProperty *op = static_cast<vtkSIIdTypeVectorProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIIdTypeVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIIdTypeVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIIdTypeVectorProperty *op = static_cast<vtkSIIdTypeVectorProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIIdTypeVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIIdTypeVectorProperty::NewInstance());

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
PyvtkSIIdTypeVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIIdTypeVectorProperty *tempr = vtkSIIdTypeVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIIdTypeVectorProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIIdTypeVectorProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIIdTypeVectorProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIIdTypeVectorProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIIdTypeVectorProperty\nC++: vtkSIIdTypeVectorProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIIdTypeVectorProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIIdTypeVectorProperty\nC++: vtkSIIdTypeVectorProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIIdTypeVectorProperty_StaticNew()
{
  return vtkSIIdTypeVectorProperty::New();
}

PyObject *PyVTKClass_vtkSIIdTypeVectorPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIIdTypeVectorProperty_StaticNew,
    PyvtkSIIdTypeVectorProperty_Methods,
    "vtkSIIdTypeVectorProperty", modulename,
    NULL, NULL,
    PyvtkSIIdTypeVectorProperty_Doc(),
    PyVTKClass_vtkSIVectorPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIIdTypeVectorProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIIdTypeVectorProperty\n\n",
    "Superclass: vtkSIVectorProperty\n\n",
    "IdType ServerSide Property use to set IdType array as method\nparameter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIIdTypeVectorProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIIdTypeVectorPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIIdTypeVectorProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

