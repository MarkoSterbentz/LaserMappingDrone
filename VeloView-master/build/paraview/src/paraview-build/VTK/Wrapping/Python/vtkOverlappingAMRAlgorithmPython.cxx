// python wrapper for vtkOverlappingAMRAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOverlappingAMRAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOverlappingAMRAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUniformGridAMRAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUniformGridAMRAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUniformGridAMRAlgorithmNew
#endif

static const char **PyvtkOverlappingAMRAlgorithm_Doc();


static PyObject *
PyvtkOverlappingAMRAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRAlgorithm *op = static_cast<vtkOverlappingAMRAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOverlappingAMRAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMRAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRAlgorithm *op = static_cast<vtkOverlappingAMRAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverlappingAMRAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMRAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRAlgorithm *op = static_cast<vtkOverlappingAMRAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverlappingAMRAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverlappingAMRAlgorithm::NewInstance());

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
PyvtkOverlappingAMRAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOverlappingAMRAlgorithm *tempr = vtkOverlappingAMRAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOverlappingAMRAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRAlgorithm *op = static_cast<vtkOverlappingAMRAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkOverlappingAMRAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOverlappingAMRAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRAlgorithm *op = static_cast<vtkOverlappingAMRAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkOverlappingAMRAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOverlappingAMRAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkOverlappingAMRAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkOverlappingAMRAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkOverlappingAMRAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkOverlappingAMRAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOverlappingAMRAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOverlappingAMRAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOverlappingAMRAlgorithm\nC++: vtkOverlappingAMRAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOverlappingAMRAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOverlappingAMRAlgorithm\nC++: vtkOverlappingAMRAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkOverlappingAMRAlgorithm_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkOverlappingAMR\nC++: vtkOverlappingAMR *GetOutput()\nV.GetOutput(int) -> vtkOverlappingAMR\nC++: vtkOverlappingAMR *GetOutput(int)\n\nGet the output data object for a port on this algorithm\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOverlappingAMRAlgorithm_StaticNew()
{
  return vtkOverlappingAMRAlgorithm::New();
}

PyObject *PyVTKClass_vtkOverlappingAMRAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOverlappingAMRAlgorithm_StaticNew,
    PyvtkOverlappingAMRAlgorithm_Methods,
    "vtkOverlappingAMRAlgorithm", modulename,
    NULL, NULL,
    PyvtkOverlappingAMRAlgorithm_Doc(),
    PyVTKClass_vtkUniformGridAMRAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOverlappingAMRAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkOverlappingAMRAlgorithm.h -- Superclass for overlapping AMR classes\n\n",
    "Superclass: vtkUniformGridAMRAlgorithm\n\n",
    "A base class for all algorithms that take as input vtkOverlappingAMR\nand\n produce vtkOverlappingAMR.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOverlappingAMRAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOverlappingAMRAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOverlappingAMRAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

