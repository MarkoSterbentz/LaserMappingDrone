// python wrapper for vtkMultiBlockDataSetAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkMultiBlockDataSetAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMultiBlockDataSetAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkMultiBlockDataSetAlgorithm_Doc();


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMultiBlockDataSetAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiBlockDataSetAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiBlockDataSetAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiBlockDataSetAlgorithm::NewInstance());

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
PyvtkMultiBlockDataSetAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMultiBlockDataSetAlgorithm *tempr = vtkMultiBlockDataSetAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkMultiBlockDataSetAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkMultiBlockDataSetAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMultiBlockDataSetAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkMultiBlockDataSetAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkMultiBlockDataSetAlgorithm_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkMultiBlockDataSetAlgorithm::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkMultiBlockDataSetAlgorithm::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMultiBlockDataSetAlgorithm_SetInputData_s1(self, args);
    case 2:
      return PyvtkMultiBlockDataSetAlgorithm_SetInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}


static PyMethodDef PyvtkMultiBlockDataSetAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiBlockDataSetAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiBlockDataSetAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiBlockDataSetAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMultiBlockDataSetAlgorithm\nC++: vtkMultiBlockDataSetAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiBlockDataSetAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiBlockDataSetAlgorithm\nC++: vtkMultiBlockDataSetAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkMultiBlockDataSetAlgorithm_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetOutput()\nV.GetOutput(int) -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInputData", PyvtkMultiBlockDataSetAlgorithm_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiBlockDataSetAlgorithm_StaticNew()
{
  return vtkMultiBlockDataSetAlgorithm::New();
}

PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiBlockDataSetAlgorithm_StaticNew,
    PyvtkMultiBlockDataSetAlgorithm_Methods,
    "vtkMultiBlockDataSetAlgorithm", modulename,
    NULL, NULL,
    PyvtkMultiBlockDataSetAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMultiBlockDataSetAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkMultiBlockDataSetAlgorithm - Superclass for algorithms that\nproduce only vtkMultiBlockDataSet as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "Algorithms that take any type of data object (including composite\ndataset) and produce a vtkMultiBlockDataSet in the output can\nsubclass from this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiBlockDataSetAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiBlockDataSetAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

