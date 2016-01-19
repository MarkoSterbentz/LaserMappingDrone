// python wrapper for vtkSIArraySelectionProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIArraySelectionProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIArraySelectionProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIArraySelectionPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSIArraySelectionProperty_Doc();


static PyObject *
PyvtkSIArraySelectionProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIArraySelectionProperty *op = static_cast<vtkSIArraySelectionProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIArraySelectionProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIArraySelectionProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIArraySelectionProperty *op = static_cast<vtkSIArraySelectionProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIArraySelectionProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIArraySelectionProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIArraySelectionProperty *op = static_cast<vtkSIArraySelectionProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIArraySelectionProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIArraySelectionProperty::NewInstance());

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
PyvtkSIArraySelectionProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIArraySelectionProperty *tempr = vtkSIArraySelectionProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIArraySelectionProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIArraySelectionProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIArraySelectionProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIArraySelectionProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIArraySelectionProperty\nC++: vtkSIArraySelectionProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIArraySelectionProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIArraySelectionProperty\nC++: vtkSIArraySelectionProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIArraySelectionProperty_StaticNew()
{
  return vtkSIArraySelectionProperty::New();
}

PyObject *PyVTKClass_vtkSIArraySelectionPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIArraySelectionProperty_StaticNew,
    PyvtkSIArraySelectionProperty_Methods,
    "vtkSIArraySelectionProperty", modulename,
    NULL, NULL,
    PyvtkSIArraySelectionProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIArraySelectionProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIArraySelectionProperty - InformationOnly property\n\n",
    "Superclass: vtkSIProperty\n\n",
    "SIProperty that deals with ArraySelection object\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIArraySelectionProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIArraySelectionPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIArraySelectionProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

