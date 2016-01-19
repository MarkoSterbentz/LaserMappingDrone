// python wrapper for vtkLevelIdScalars
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLevelIdScalars.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLevelIdScalars(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLevelIdScalarsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew
#endif

static const char **PyvtkLevelIdScalars_Doc();


static PyObject *
PyvtkLevelIdScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLevelIdScalars *op = static_cast<vtkLevelIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLevelIdScalars::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLevelIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLevelIdScalars *op = static_cast<vtkLevelIdScalars *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLevelIdScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLevelIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLevelIdScalars *op = static_cast<vtkLevelIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLevelIdScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLevelIdScalars::NewInstance());

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
PyvtkLevelIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLevelIdScalars *tempr = vtkLevelIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLevelIdScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkLevelIdScalars_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLevelIdScalars_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLevelIdScalars_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLevelIdScalars\nC++: vtkLevelIdScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLevelIdScalars_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLevelIdScalars\nC++: vtkLevelIdScalars *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLevelIdScalars_StaticNew()
{
  return vtkLevelIdScalars::New();
}

PyObject *PyVTKClass_vtkLevelIdScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLevelIdScalars_StaticNew,
    PyvtkLevelIdScalars_Methods,
    "vtkLevelIdScalars", modulename,
    NULL, NULL,
    PyvtkLevelIdScalars_Doc(),
    PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew(modulename));
  return cls;
}

const char **PyvtkLevelIdScalars_Doc()
{
  static const char *docstring[] = {
    "vtkLevelIdScalars.h -- Empty class for backwards compatibility\n\n",
    "Superclass: vtkOverlappingAMRLevelIdScalars\n\n",
    "Empty class for backwards compatibility.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLevelIdScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLevelIdScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLevelIdScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

