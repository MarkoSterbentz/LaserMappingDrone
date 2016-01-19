// python wrapper for vtkNonOverlappingAMRAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNonOverlappingAMRAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNonOverlappingAMRAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNonOverlappingAMRAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUniformGridAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUniformGridAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUniformGridAMRAlgorithmNew
#endif

static const char **PyvtkNonOverlappingAMRAlgorithm_Doc();


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNonOverlappingAMRAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonOverlappingAMRAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNonOverlappingAMRAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonOverlappingAMRAlgorithm::NewInstance());

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
PyvtkNonOverlappingAMRAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNonOverlappingAMRAlgorithm *tempr = vtkNonOverlappingAMRAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonOverlappingAMRAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNonOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkNonOverlappingAMRAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonOverlappingAMRAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonOverlappingAMRAlgorithm *op = static_cast<vtkNonOverlappingAMRAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkNonOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkNonOverlappingAMRAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonOverlappingAMRAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkNonOverlappingAMRAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkNonOverlappingAMRAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkNonOverlappingAMRAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkNonOverlappingAMRAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNonOverlappingAMRAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNonOverlappingAMRAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNonOverlappingAMRAlgorithm\nC++: vtkNonOverlappingAMRAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNonOverlappingAMRAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNonOverlappingAMRAlgorithm\nC++: vtkNonOverlappingAMRAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkNonOverlappingAMRAlgorithm_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkNonOverlappingAMR\nC++: vtkNonOverlappingAMR *GetOutput()\nV.GetOutput(int) -> vtkNonOverlappingAMR\nC++: vtkNonOverlappingAMR *GetOutput(int)\n\nGet the output data object for a port on this algorithm\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNonOverlappingAMRAlgorithm_StaticNew()
{
  return vtkNonOverlappingAMRAlgorithm::New();
}

PyObject *PyVTKClass_vtkNonOverlappingAMRAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNonOverlappingAMRAlgorithm_StaticNew,
    PyvtkNonOverlappingAMRAlgorithm_Methods,
    "vtkNonOverlappingAMRAlgorithm", modulename,
    NULL, NULL,
    PyvtkNonOverlappingAMRAlgorithm_Doc(),
    PyVTKClass_vtkUniformGridAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNonOverlappingAMRAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkNonOverlappingAMRAlgorithm.h -- Superclass for algorithms that\n\n",
    "Superclass: vtkUniformGridAMRAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNonOverlappingAMRAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNonOverlappingAMRAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNonOverlappingAMRAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

