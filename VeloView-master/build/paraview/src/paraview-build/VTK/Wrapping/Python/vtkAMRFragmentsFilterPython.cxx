// python wrapper for vtkAMRFragmentsFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRFragmentsFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRFragmentsFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRFragmentsFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRFragmentsFilter_Doc();


static PyObject *
PyvtkAMRFragmentsFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRFragmentsFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFragmentsFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRFragmentsFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFragmentsFilter::NewInstance());

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
PyvtkAMRFragmentsFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRFragmentsFilter *tempr = vtkAMRFragmentsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

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
      op->vtkAMRFragmentsFilter::AddInputVolumeArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputVolumeArrayToProcess();
      }
    else
      {
      op->vtkAMRFragmentsFilter::ClearInputVolumeArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputMassArrayToProcess(temp0);
      }
    else
      {
      op->vtkAMRFragmentsFilter::AddInputMassArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputMassArrayToProcess();
      }
    else
      {
      op->vtkAMRFragmentsFilter::ClearInputMassArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputVolumeWeightedArrayToProcess(temp0);
      }
    else
      {
      op->vtkAMRFragmentsFilter::AddInputVolumeWeightedArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputVolumeWeightedArrayToProcess();
      }
    else
      {
      op->vtkAMRFragmentsFilter::ClearInputVolumeWeightedArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInputMassWeightedArrayToProcess(temp0);
      }
    else
      {
      op->vtkAMRFragmentsFilter::AddInputMassWeightedArrayToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearInputMassWeightedArrayToProcess();
      }
    else
      {
      op->vtkAMRFragmentsFilter::ClearInputMassWeightedArrayToProcess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetExtractSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractSurface(temp0);
      }
    else
      {
      op->vtkAMRFragmentsFilter::SetExtractSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetExtractSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetExtractSurface() :
      op->vtkAMRFragmentsFilter::GetExtractSurface());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ExtractSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractSurfaceOn();
      }
    else
      {
      op->vtkAMRFragmentsFilter::ExtractSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ExtractSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractSurfaceOff();
      }
    else
      {
      op->vtkAMRFragmentsFilter::ExtractSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetUseWatertightSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseWatertightSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseWatertightSurface(temp0);
      }
    else
      {
      op->vtkAMRFragmentsFilter::SetUseWatertightSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetUseWatertightSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseWatertightSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseWatertightSurface() :
      op->vtkAMRFragmentsFilter::GetUseWatertightSurface());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_UseWatertightSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseWatertightSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseWatertightSurfaceOn();
      }
    else
      {
      op->vtkAMRFragmentsFilter::UseWatertightSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_UseWatertightSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseWatertightSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseWatertightSurfaceOff();
      }
    else
      {
      op->vtkAMRFragmentsFilter::UseWatertightSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetIntegrateFragments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrateFragments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrateFragments(temp0);
      }
    else
      {
      op->vtkAMRFragmentsFilter::SetIntegrateFragments(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetIntegrateFragments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrateFragments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIntegrateFragments() :
      op->vtkAMRFragmentsFilter::GetIntegrateFragments());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_IntegrateFragmentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateFragmentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntegrateFragmentsOn();
      }
    else
      {
      op->vtkAMRFragmentsFilter::IntegrateFragmentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_IntegrateFragmentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateFragmentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntegrateFragmentsOff();
      }
    else
      {
      op->vtkAMRFragmentsFilter::IntegrateFragmentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkAMRFragmentsFilter::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

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
      op->vtkAMRFragmentsFilter::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRFragmentsFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRFragmentsFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRFragmentsFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRFragmentsFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRFragmentsFilter\nC++: vtkAMRFragmentsFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRFragmentsFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRFragmentsFilter\nC++: vtkAMRFragmentsFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInputVolumeArrayToProcess", PyvtkAMRFragmentsFilter_AddInputVolumeArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputVolumeArrayToProcess(string)\nC++: void AddInputVolumeArrayToProcess(const char *name)\n\nAdd to list of volume arrays to find connected fragments\n"},
  {(char*)"ClearInputVolumeArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputVolumeArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputVolumeArrayToProcess()\nC++: void ClearInputVolumeArrayToProcess()\n\nAdd to list of volume arrays to find connected fragments\n"},
  {(char*)"AddInputMassArrayToProcess", PyvtkAMRFragmentsFilter_AddInputMassArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputMassArrayToProcess(string)\nC++: void AddInputMassArrayToProcess(const char *name)\n\nAdd to list of mass arrays\n"},
  {(char*)"ClearInputMassArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputMassArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputMassArrayToProcess()\nC++: void ClearInputMassArrayToProcess()\n\nAdd to list of mass arrays\n"},
  {(char*)"AddInputVolumeWeightedArrayToProcess", PyvtkAMRFragmentsFilter_AddInputVolumeWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputVolumeWeightedArrayToProcess(string)\nC++: void AddInputVolumeWeightedArrayToProcess(const char *name)\n\nAdd to list of volume weighted arrays\n"},
  {(char*)"ClearInputVolumeWeightedArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputVolumeWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputVolumeWeightedArrayToProcess()\nC++: void ClearInputVolumeWeightedArrayToProcess()\n\nAdd to list of volume weighted arrays\n"},
  {(char*)"AddInputMassWeightedArrayToProcess", PyvtkAMRFragmentsFilter_AddInputMassWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.AddInputMassWeightedArrayToProcess(string)\nC++: void AddInputMassWeightedArrayToProcess(const char *name)\n\nAdd to list of mass weighted arrays\n"},
  {(char*)"ClearInputMassWeightedArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputMassWeightedArrayToProcess, METH_VARARGS,
   (char*)"V.ClearInputMassWeightedArrayToProcess()\nC++: void ClearInputMassWeightedArrayToProcess()\n\nAdd to list of mass weighted arrays\n"},
  {(char*)"SetExtractSurface", PyvtkAMRFragmentsFilter_SetExtractSurface, METH_VARARGS,
   (char*)"V.SetExtractSurface(bool)\nC++: void SetExtractSurface(bool a)\n\nWhether or not to extract a surface\n"},
  {(char*)"GetExtractSurface", PyvtkAMRFragmentsFilter_GetExtractSurface, METH_VARARGS,
   (char*)"V.GetExtractSurface() -> bool\nC++: bool GetExtractSurface()\n\nWhether or not to extract a surface\n"},
  {(char*)"ExtractSurfaceOn", PyvtkAMRFragmentsFilter_ExtractSurfaceOn, METH_VARARGS,
   (char*)"V.ExtractSurfaceOn()\nC++: void ExtractSurfaceOn()\n\nWhether or not to extract a surface\n"},
  {(char*)"ExtractSurfaceOff", PyvtkAMRFragmentsFilter_ExtractSurfaceOff, METH_VARARGS,
   (char*)"V.ExtractSurfaceOff()\nC++: void ExtractSurfaceOff()\n\nWhether or not to extract a surface\n"},
  {(char*)"SetUseWatertightSurface", PyvtkAMRFragmentsFilter_SetUseWatertightSurface, METH_VARARGS,
   (char*)"V.SetUseWatertightSurface(bool)\nC++: void SetUseWatertightSurface(bool a)\n\n"},
  {(char*)"GetUseWatertightSurface", PyvtkAMRFragmentsFilter_GetUseWatertightSurface, METH_VARARGS,
   (char*)"V.GetUseWatertightSurface() -> bool\nC++: bool GetUseWatertightSurface()\n\n"},
  {(char*)"UseWatertightSurfaceOn", PyvtkAMRFragmentsFilter_UseWatertightSurfaceOn, METH_VARARGS,
   (char*)"V.UseWatertightSurfaceOn()\nC++: void UseWatertightSurfaceOn()\n\n"},
  {(char*)"UseWatertightSurfaceOff", PyvtkAMRFragmentsFilter_UseWatertightSurfaceOff, METH_VARARGS,
   (char*)"V.UseWatertightSurfaceOff()\nC++: void UseWatertightSurfaceOff()\n\n"},
  {(char*)"SetIntegrateFragments", PyvtkAMRFragmentsFilter_SetIntegrateFragments, METH_VARARGS,
   (char*)"V.SetIntegrateFragments(bool)\nC++: void SetIntegrateFragments(bool a)\n\n"},
  {(char*)"GetIntegrateFragments", PyvtkAMRFragmentsFilter_GetIntegrateFragments, METH_VARARGS,
   (char*)"V.GetIntegrateFragments() -> bool\nC++: bool GetIntegrateFragments()\n\n"},
  {(char*)"IntegrateFragmentsOn", PyvtkAMRFragmentsFilter_IntegrateFragmentsOn, METH_VARARGS,
   (char*)"V.IntegrateFragmentsOn()\nC++: void IntegrateFragmentsOn()\n\n"},
  {(char*)"IntegrateFragmentsOff", PyvtkAMRFragmentsFilter_IntegrateFragmentsOff, METH_VARARGS,
   (char*)"V.IntegrateFragmentsOff()\nC++: void IntegrateFragmentsOff()\n\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkAMRFragmentsFilter_GetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkAMRFragmentsFilter_SetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double a)\n\nGet / Set volume fraction value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRFragmentsFilter_StaticNew()
{
  return vtkAMRFragmentsFilter::New();
}

PyObject *PyVTKClass_vtkAMRFragmentsFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRFragmentsFilter_StaticNew,
    PyvtkAMRFragmentsFilter_Methods,
    "vtkAMRFragmentsFilter", modulename,
    NULL, NULL,
    PyvtkAMRFragmentsFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRFragmentsFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAMRFragmentsFilter - A meta filter that combines \n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Input 0: The AMR Volume\n\n\n  Output 0: A multiblock containing tables of fragments, one block\n            for each requested material\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRFragmentsFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRFragmentsFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRFragmentsFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

