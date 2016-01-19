// python wrapper for vtkSIDataArrayProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIDataArrayProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIDataArrayProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIDataArrayPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSIDataArrayProperty_Doc();


static PyObject *
PyvtkSIDataArrayProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDataArrayProperty *op = static_cast<vtkSIDataArrayProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIDataArrayProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDataArrayProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDataArrayProperty *op = static_cast<vtkSIDataArrayProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDataArrayProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIDataArrayProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDataArrayProperty *op = static_cast<vtkSIDataArrayProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIDataArrayProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDataArrayProperty::NewInstance());

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
PyvtkSIDataArrayProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIDataArrayProperty *tempr = vtkSIDataArrayProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIDataArrayProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIDataArrayProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIDataArrayProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIDataArrayProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIDataArrayProperty\nC++: vtkSIDataArrayProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIDataArrayProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIDataArrayProperty\nC++: vtkSIDataArrayProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIDataArrayProperty_StaticNew()
{
  return vtkSIDataArrayProperty::New();
}

PyObject *PyVTKClass_vtkSIDataArrayPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIDataArrayProperty_StaticNew,
    PyvtkSIDataArrayProperty_Methods,
    "vtkSIDataArrayProperty", modulename,
    NULL, NULL,
    PyvtkSIDataArrayProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIDataArrayProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIDataArrayProperty - InformationOnly property\n\n",
    "Superclass: vtkSIProperty\n\n",
    "SIProperty that deals with vtkDataArray object type\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIDataArrayProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIDataArrayPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIDataArrayProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

