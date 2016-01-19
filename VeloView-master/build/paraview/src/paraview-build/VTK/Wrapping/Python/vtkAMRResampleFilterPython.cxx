// python wrapper for vtkAMRResampleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAMRResampleFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRResampleFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRResampleFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRResampleFilter_Doc();


static PyObject *
PyvtkAMRResampleFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRResampleFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRResampleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRResampleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRResampleFilter::NewInstance());

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
PyvtkAMRResampleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRResampleFilter *tempr = vtkAMRResampleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSamples(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRResampleFilter::SetNumberOfSamples(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSamples(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetNumberOfSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRResampleFilter_SetNumberOfSamples_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetNumberOfSamples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfSamples");
  return NULL;
}



static PyObject *
PyvtkAMRResampleFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkAMRResampleFilter::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetTransferToNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferToNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransferToNodes(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetTransferToNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetTransferToNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferToNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTransferToNodes() :
      op->vtkAMRResampleFilter::GetTransferToNodes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetDemandDrivenMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDemandDrivenMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDemandDrivenMode(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetDemandDrivenMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetDemandDrivenMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDemandDrivenMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDemandDrivenMode() :
      op->vtkAMRResampleFilter::GetDemandDrivenMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPartitions(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetNumberOfPartitions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkAMRResampleFilter::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRResampleFilter::SetMin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMin(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetMin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRResampleFilter_SetMin_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetMin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMin");
  return NULL;
}



static PyObject *
PyvtkAMRResampleFilter_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMin() :
      op->vtkAMRResampleFilter::GetMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMax(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRResampleFilter::SetMax(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMax(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetMax(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRResampleFilter_SetMax_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetMax_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMax");
  return NULL;
}



static PyObject *
PyvtkAMRResampleFilter_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMax() :
      op->vtkAMRResampleFilter::GetMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetUseBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBiasVector(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetUseBiasVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetUseBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseBiasVector() :
      op->vtkAMRResampleFilter::GetUseBiasVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetBiasVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetBiasVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRResampleFilter::SetBiasVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetBiasVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBiasVector(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetBiasVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetBiasVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRResampleFilter_SetBiasVector_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetBiasVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBiasVector");
  return NULL;
}



static PyObject *
PyvtkAMRResampleFilter_GetBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBiasVector() :
      op->vtkAMRResampleFilter::GetBiasVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkAMRResampleFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRResampleFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRResampleFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRResampleFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRResampleFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRResampleFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRResampleFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRResampleFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRResampleFilter\nC++: vtkAMRResampleFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRResampleFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRResampleFilter\nC++: vtkAMRResampleFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfSamples", PyvtkAMRResampleFilter_SetNumberOfSamples, METH_VARARGS,
   (char*)"V.SetNumberOfSamples(int, int, int)\nC++: void SetNumberOfSamples(int, int, int)\nV.SetNumberOfSamples((int, int, int))\nC++: void SetNumberOfSamples(int a[3])\n\n"},
  {(char*)"GetNumberOfSamples", PyvtkAMRResampleFilter_GetNumberOfSamples, METH_VARARGS,
   (char*)"V.GetNumberOfSamples() -> (int, int, int)\nC++: int *GetNumberOfSamples()\n\n"},
  {(char*)"SetTransferToNodes", PyvtkAMRResampleFilter_SetTransferToNodes, METH_VARARGS,
   (char*)"V.SetTransferToNodes(int)\nC++: void SetTransferToNodes(int a)\n\nSet & Get macro for the TransferToNodes flag\n"},
  {(char*)"GetTransferToNodes", PyvtkAMRResampleFilter_GetTransferToNodes, METH_VARARGS,
   (char*)"V.GetTransferToNodes() -> int\nC++: int GetTransferToNodes()\n\nSet & Get macro for the TransferToNodes flag\n"},
  {(char*)"SetDemandDrivenMode", PyvtkAMRResampleFilter_SetDemandDrivenMode, METH_VARARGS,
   (char*)"V.SetDemandDrivenMode(int)\nC++: void SetDemandDrivenMode(int a)\n\nSet & Get macro to allow the filter to operate in both\ndemand-driven and standard modes\n"},
  {(char*)"GetDemandDrivenMode", PyvtkAMRResampleFilter_GetDemandDrivenMode, METH_VARARGS,
   (char*)"V.GetDemandDrivenMode() -> int\nC++: int GetDemandDrivenMode()\n\nSet & Get macro to allow the filter to operate in both\ndemand-driven and standard modes\n"},
  {(char*)"SetNumberOfPartitions", PyvtkAMRResampleFilter_SetNumberOfPartitions, METH_VARARGS,
   (char*)"V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(int a)\n\nSet & Get macro for the number of subdivisions\n"},
  {(char*)"GetNumberOfPartitions", PyvtkAMRResampleFilter_GetNumberOfPartitions, METH_VARARGS,
   (char*)"V.GetNumberOfPartitions() -> int\nC++: int GetNumberOfPartitions()\n\nSet & Get macro for the number of subdivisions\n"},
  {(char*)"SetMin", PyvtkAMRResampleFilter_SetMin, METH_VARARGS,
   (char*)"V.SetMin(float, float, float)\nC++: void SetMin(double, double, double)\nV.SetMin((float, float, float))\nC++: void SetMin(double a[3])\n\n"},
  {(char*)"GetMin", PyvtkAMRResampleFilter_GetMin, METH_VARARGS,
   (char*)"V.GetMin() -> (float, float, float)\nC++: double *GetMin()\n\n"},
  {(char*)"SetMax", PyvtkAMRResampleFilter_SetMax, METH_VARARGS,
   (char*)"V.SetMax(float, float, float)\nC++: void SetMax(double, double, double)\nV.SetMax((float, float, float))\nC++: void SetMax(double a[3])\n\n"},
  {(char*)"GetMax", PyvtkAMRResampleFilter_GetMax, METH_VARARGS,
   (char*)"V.GetMax() -> (float, float, float)\nC++: double *GetMax()\n\n"},
  {(char*)"SetUseBiasVector", PyvtkAMRResampleFilter_SetUseBiasVector, METH_VARARGS,
   (char*)"V.SetUseBiasVector(bool)\nC++: void SetUseBiasVector(bool a)\n\nSet & Get macro for the number of subdivisions\n"},
  {(char*)"GetUseBiasVector", PyvtkAMRResampleFilter_GetUseBiasVector, METH_VARARGS,
   (char*)"V.GetUseBiasVector() -> bool\nC++: bool GetUseBiasVector()\n\nSet & Get macro for the number of subdivisions\n"},
  {(char*)"SetBiasVector", PyvtkAMRResampleFilter_SetBiasVector, METH_VARARGS,
   (char*)"V.SetBiasVector(float, float, float)\nC++: void SetBiasVector(double, double, double)\nV.SetBiasVector((float, float, float))\nC++: void SetBiasVector(double a[3])\n\n"},
  {(char*)"GetBiasVector", PyvtkAMRResampleFilter_GetBiasVector, METH_VARARGS,
   (char*)"V.GetBiasVector() -> (float, float, float)\nC++: double *GetBiasVector()\n\n"},
  {(char*)"SetController", PyvtkAMRResampleFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *a)\n\nSet & Get macro for the multi-process controller\n"},
  {(char*)"GetController", PyvtkAMRResampleFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet & Get macro for the multi-process controller\n"},
  {(char*)"FillInputPortInformation", PyvtkAMRResampleFilter_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {(char*)"FillOutputPortInformation", PyvtkAMRResampleFilter_FillOutputPortInformation, METH_VARARGS,
   (char*)"V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillOutputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRResampleFilter_StaticNew()
{
  return vtkAMRResampleFilter::New();
}

PyObject *PyVTKClass_vtkAMRResampleFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRResampleFilter_StaticNew,
    PyvtkAMRResampleFilter_Methods,
    "vtkAMRResampleFilter", modulename,
    NULL, NULL,
    PyvtkAMRResampleFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRResampleFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAMRResampleFilter.h -- Resamples AMR data to a uniform grid.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter is a concrete instance of vtkMultiBlockDataSetAlgorithm\nand\n provides functionality for extracting portion of the AMR dataset,\nspecified\n by a bounding box, in a uniform grid of the desired level of\nresolution.\n The resulting uniform grid is stored in a vtkMultiBlockDataSet where\nthe\n number of blocks correspond to the number of processors utilized for\nthe\n operation.\n\nCaveats:\n\n\n Data",
    " of the input AMR dataset is assumed to be cell-centered.\n\nSee Also:\n\n\n vtkOverlappingAMR, vtkUniformGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRResampleFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRResampleFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRResampleFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

