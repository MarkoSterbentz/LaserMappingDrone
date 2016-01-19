// python wrapper for vtkAMRConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRConnectivity_Doc();


static PyObject *
PyvtkAMRConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRConnectivity::NewInstance());

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
PyvtkAMRConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRConnectivity *tempr = vtkAMRConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_AddInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputVolumeArrayToProcess(temp0);
      }
    else
      {
      op->vtkAMRConnectivity::AddInputVolumeArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_ClearInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputVolumeArrayToProcess();
      }
    else
      {
      op->vtkAMRConnectivity::ClearInputVolumeArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkAMRConnectivity::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionSurfaceValue(temp0);
      }
    else
      {
      op->vtkAMRConnectivity::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_GetResolveBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolveBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetResolveBlocks() :
      op->vtkAMRConnectivity::GetResolveBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SetResolveBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolveBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolveBlocks(temp0);
      }
    else
      {
      op->vtkAMRConnectivity::SetResolveBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_GetPropagateGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropagateGhosts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPropagateGhosts() :
      op->vtkAMRConnectivity::GetPropagateGhosts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SetPropagateGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropagateGhosts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPropagateGhosts(temp0);
      }
    else
      {
      op->vtkAMRConnectivity::SetPropagateGhosts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRConnectivity\nC++: vtkAMRConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRConnectivity\nC++: vtkAMRConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInputVolumeArrayToProcess", PyvtkAMRConnectivity_AddInputVolumeArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputVolumeArrayToProcess(string)\nC++: void AddInputVolumeArrayToProcess(const char *name)\n\nAdd to list of volume arrays to find connected fragments\n"},
  {(char*)"ClearInputVolumeArrayToProcess", PyvtkAMRConnectivity_ClearInputVolumeArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputVolumeArrayToProcess()\nC++: void ClearInputVolumeArrayToProcess()\n\nAdd to list of volume arrays to find connected fragments\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkAMRConnectivity_GetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkAMRConnectivity_SetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double a)\n\nGet / Set volume fraction value.\n"},
  {(char*)"GetResolveBlocks", PyvtkAMRConnectivity_GetResolveBlocks, METH_VARARGS,
   (char*)"V.GetResolveBlocks() -> bool\nC++: bool GetResolveBlocks()\n\nGet / Set where to resolve the regions between blocks\n"},
  {(char*)"SetResolveBlocks", PyvtkAMRConnectivity_SetResolveBlocks, METH_VARARGS,
   (char*)"V.SetResolveBlocks(bool)\nC++: void SetResolveBlocks(bool a)\n\nGet / Set where to resolve the regions between blocks\n"},
  {(char*)"GetPropagateGhosts", PyvtkAMRConnectivity_GetPropagateGhosts, METH_VARARGS,
   (char*)"V.GetPropagateGhosts() -> bool\nC++: bool GetPropagateGhosts()\n\nGet / Set where to resolve the regions between blocks\n"},
  {(char*)"SetPropagateGhosts", PyvtkAMRConnectivity_SetPropagateGhosts, METH_VARARGS,
   (char*)"V.SetPropagateGhosts(bool)\nC++: void SetPropagateGhosts(bool a)\n\nGet / Set where to resolve the regions between blocks\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRConnectivity_StaticNew()
{
  return vtkAMRConnectivity::New();
}

PyObject *PyVTKClass_vtkAMRConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRConnectivity_StaticNew,
    PyvtkAMRConnectivity_Methods,
    "vtkAMRConnectivity", modulename,
    NULL, NULL,
    PyvtkAMRConnectivity_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkAMRConnectivity - Identify fragments in the grid\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    ".SEE vtkAMRConnectivity\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

