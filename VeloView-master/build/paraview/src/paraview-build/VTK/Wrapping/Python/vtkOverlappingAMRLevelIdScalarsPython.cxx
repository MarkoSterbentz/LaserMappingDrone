// python wrapper for vtkOverlappingAMRLevelIdScalars
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOverlappingAMRLevelIdScalars.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOverlappingAMRLevelIdScalars(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkOverlappingAMRAlgorithmNew
#endif

static const char **PyvtkOverlappingAMRLevelIdScalars_Doc();


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRLevelIdScalars *op = static_cast<vtkOverlappingAMRLevelIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOverlappingAMRLevelIdScalars::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRLevelIdScalars *op = static_cast<vtkOverlappingAMRLevelIdScalars *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverlappingAMRLevelIdScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRLevelIdScalars *op = static_cast<vtkOverlappingAMRLevelIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverlappingAMRLevelIdScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverlappingAMRLevelIdScalars::NewInstance());

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
PyvtkOverlappingAMRLevelIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOverlappingAMRLevelIdScalars *tempr = vtkOverlappingAMRLevelIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOverlappingAMRLevelIdScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkOverlappingAMRLevelIdScalars_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverlappingAMRLevelIdScalars_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverlappingAMRLevelIdScalars_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOverlappingAMRLevelIdScalars\nC++: vtkOverlappingAMRLevelIdScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOverlappingAMRLevelIdScalars_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOverlappingAMRLevelIdScalars\nC++: vtkOverlappingAMRLevelIdScalars *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverlappingAMRLevelIdScalars_StaticNew()
{
  return vtkOverlappingAMRLevelIdScalars::New();
}

PyObject *PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverlappingAMRLevelIdScalars_StaticNew,
    PyvtkOverlappingAMRLevelIdScalars_Methods,
    "vtkOverlappingAMRLevelIdScalars", modulename,
    NULL, NULL,
    PyvtkOverlappingAMRLevelIdScalars_Doc(),
    PyVTKClass_vtkOverlappingAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOverlappingAMRLevelIdScalars_Doc()
{
  static const char *docstring[] = {
    "vtkOverlappingAMRLevelIdScalars - generate scalars from levels.\n\n",
    "Superclass: vtkOverlappingAMRAlgorithm\n\n",
    "vtkOverlappingAMRLevelIdScalars is a filter that generates scalars\nusing the level number for each level. Note that all datasets within\na level get the same scalar. The new scalars array is named\nLevelIdScalars.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverlappingAMRLevelIdScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverlappingAMRLevelIdScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverlappingAMRLevelIdScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

