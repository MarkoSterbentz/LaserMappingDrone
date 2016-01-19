// python wrapper for vtkMaterialInterfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMaterialInterfaceFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMaterialInterfaceFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMaterialInterfaceFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkMaterialInterfaceFilter_Doc();


static PyObject *
PyvtkMaterialInterfaceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMaterialInterfaceFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaterialInterfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMaterialInterfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaterialInterfaceFilter::NewInstance());

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
PyvtkMaterialInterfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMaterialInterfaceFilter *tempr = vtkMaterialInterfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectMaterialArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectMaterialArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectMaterialArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SelectMaterialArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectMaterialArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectMaterialArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnselectMaterialArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectMaterialArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnselectAllMaterialArrays();
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectAllMaterialArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetMaterialArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMaterialArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaterialArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMaterialArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_Methods[] = {
  {NULL, PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMaterialArrayStatus");
  return NULL;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaterialArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfMaterialArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMaterialArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetMaterialArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectMassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectMassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectMassArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SelectMassArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectMassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectMassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnselectMassArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectMassArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllMassArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllMassArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnselectAllMassArrays();
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectAllMassArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMassArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMassArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMassArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetMassArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMassArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMassArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetMassArrayStatus_Methods[] = {
  {NULL, PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkMaterialInterfaceFilter_GetMassArrayStatus_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetMassArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMassArrayStatus");
  return NULL;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfMassArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMassArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMassArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfMassArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMassArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectVolumeWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVolumeWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectVolumeWtdAvgArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SelectVolumeWtdAvgArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectVolumeWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectVolumeWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnselectVolumeWtdAvgArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectVolumeWtdAvgArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllVolumeWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllVolumeWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnselectAllVolumeWtdAvgArrays();
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectAllVolumeWtdAvgArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetVolumeWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVolumeWtdAvgArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetVolumeWtdAvgArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVolumeWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetVolumeWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVolumeWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetVolumeWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_Methods[] = {
  {NULL, PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVolumeWtdAvgArrayStatus");
  return NULL;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfVolumeWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumeWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVolumeWtdAvgArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfVolumeWtdAvgArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeWtdAvgArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVolumeWtdAvgArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetVolumeWtdAvgArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectMassWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectMassWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectMassWtdAvgArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SelectMassWtdAvgArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectMassWtdAvgArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectMassWtdAvgArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnselectMassWtdAvgArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectMassWtdAvgArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllMassWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllMassWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnselectAllMassWtdAvgArrays();
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectAllMassWtdAvgArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMassWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMassWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMassWtdAvgArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetMassWtdAvgArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMassWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassWtdAvgArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMassWtdAvgArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassWtdAvgArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_Methods[] = {
  {NULL, PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMassWtdAvgArrayStatus");
  return NULL;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfMassWtdAvgArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMassWtdAvgArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMassWtdAvgArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfMassWtdAvgArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassWtdAvgArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetMassWtdAvgArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetMassWtdAvgArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectSummationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSummationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectSummationArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SelectSummationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectSummationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectSummationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnselectSummationArray(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectSummationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_UnselectAllSummationArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnselectAllSummationArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnselectAllSummationArrays();
      }
    else
      {
      op->vtkMaterialInterfaceFilter::UnselectAllSummationArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetSummationArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSummationArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSummationArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetSummationArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummationArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSummationArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetSummationArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummationArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSummationArrayStatus(temp0) :
      op->vtkMaterialInterfaceFilter::GetSummationArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_Methods[] = {
  {NULL, PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceFilter_GetSummationArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSummationArrayStatus");
  return NULL;
}



static PyObject *
PyvtkMaterialInterfaceFilter_GetNumberOfSummationArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSummationArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSummationArrays() :
      op->vtkMaterialInterfaceFilter::GetNumberOfSummationArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetSummationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSummationArrayName(temp0) :
      op->vtkMaterialInterfaceFilter::GetSummationArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetMaterialFractionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialFractionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaterialFractionThreshold(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetMaterialFractionThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMaterialFractionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialFractionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaterialFractionThreshold() :
      op->vtkMaterialInterfaceFilter::GetMaterialFractionThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetComputeOBB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeOBB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeOBB(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetComputeOBB(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetComputeOBB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeOBB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetComputeOBB() :
      op->vtkMaterialInterfaceFilter::GetComputeOBB());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetUpperLoadingBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperLoadingBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpperLoadingBound(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetUpperLoadingBound(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetUpperLoadingBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperLoadingBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUpperLoadingBound() :
      op->vtkMaterialInterfaceFilter::GetUpperLoadingBound());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetOutputBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputBaseName(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetOutputBaseName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetOutputBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputBaseName() :
      op->vtkMaterialInterfaceFilter::GetOutputBaseName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetWriteGeometryOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteGeometryOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteGeometryOutput(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetWriteGeometryOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetWriteGeometryOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteGeometryOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetWriteGeometryOutput() :
      op->vtkMaterialInterfaceFilter::GetWriteGeometryOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetWriteStatisticsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStatisticsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteStatisticsOutput(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetWriteStatisticsOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetWriteStatisticsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteStatisticsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetWriteStatisticsOutput() :
      op->vtkMaterialInterfaceFilter::GetWriteStatisticsOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetBlockGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  unsigned char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlockGhostLevel(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetBlockGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetBlockGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->GetBlockGhostLevel() :
      op->vtkMaterialInterfaceFilter::GetBlockGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SelectionModifiedCallback(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SelectionModifiedCallback");

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  void  *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkMaterialInterfaceFilter::SelectionModifiedCallback(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetClipFunction(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkMaterialInterfaceFilter::GetClipFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_SetInvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInvertVolumeFraction(temp0);
      }
    else
      {
      op->vtkMaterialInterfaceFilter::SetInvertVolumeFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetInvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInvertVolumeFraction() :
      op->vtkMaterialInterfaceFilter::GetInvertVolumeFraction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaterialInterfaceFilter *op = static_cast<vtkMaterialInterfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMaterialInterfaceFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMaterialInterfaceFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaterialInterfaceFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaterialInterfaceFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMaterialInterfaceFilter\nC++: vtkMaterialInterfaceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaterialInterfaceFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaterialInterfaceFilter\nC++: vtkMaterialInterfaceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SelectMaterialArray", PyvtkMaterialInterfaceFilter_SelectMaterialArray, METH_VARARGS,
   (char*)"V.SelectMaterialArray(string)\nC++: void SelectMaterialArray(const char *name)\n\nAdd a single array\n"},
  {(char*)"UnselectMaterialArray", PyvtkMaterialInterfaceFilter_UnselectMaterialArray, METH_VARARGS,
   (char*)"V.UnselectMaterialArray(string)\nC++: void UnselectMaterialArray(const char *name)\n\nremove a single array\n"},
  {(char*)"UnselectAllMaterialArrays", PyvtkMaterialInterfaceFilter_UnselectAllMaterialArrays, METH_VARARGS,
   (char*)"V.UnselectAllMaterialArrays()\nC++: void UnselectAllMaterialArrays()\n\nremove all arrays\n"},
  {(char*)"SetMaterialArrayStatus", PyvtkMaterialInterfaceFilter_SetMaterialArrayStatus, METH_VARARGS,
   (char*)"V.SetMaterialArrayStatus(string, int)\nC++: void SetMaterialArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {(char*)"GetMaterialArrayStatus", PyvtkMaterialInterfaceFilter_GetMaterialArrayStatus, METH_VARARGS,
   (char*)"V.GetMaterialArrayStatus(string) -> int\nC++: int GetMaterialArrayStatus(const char *name)\nV.GetMaterialArrayStatus(int) -> int\nC++: int GetMaterialArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {(char*)"GetNumberOfMaterialArrays", PyvtkMaterialInterfaceFilter_GetNumberOfMaterialArrays, METH_VARARGS,
   (char*)"V.GetNumberOfMaterialArrays() -> int\nC++: int GetNumberOfMaterialArrays()\n\nQuery the number of available arrays\n"},
  {(char*)"GetMaterialArrayName", PyvtkMaterialInterfaceFilter_GetMaterialArrayName, METH_VARARGS,
   (char*)"V.GetMaterialArrayName(int) -> string\nC++: const char *GetMaterialArrayName(int index)\n\nGet the name of a specific array\n"},
  {(char*)"SelectMassArray", PyvtkMaterialInterfaceFilter_SelectMassArray, METH_VARARGS,
   (char*)"V.SelectMassArray(string)\nC++: void SelectMassArray(const char *name)\n\nAdd a single array\n"},
  {(char*)"UnselectMassArray", PyvtkMaterialInterfaceFilter_UnselectMassArray, METH_VARARGS,
   (char*)"V.UnselectMassArray(string)\nC++: void UnselectMassArray(const char *name)\n\nremove a single array\n"},
  {(char*)"UnselectAllMassArrays", PyvtkMaterialInterfaceFilter_UnselectAllMassArrays, METH_VARARGS,
   (char*)"V.UnselectAllMassArrays()\nC++: void UnselectAllMassArrays()\n\nremove all arrays\n"},
  {(char*)"SetMassArrayStatus", PyvtkMaterialInterfaceFilter_SetMassArrayStatus, METH_VARARGS,
   (char*)"V.SetMassArrayStatus(string, int)\nC++: void SetMassArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {(char*)"GetMassArrayStatus", PyvtkMaterialInterfaceFilter_GetMassArrayStatus, METH_VARARGS,
   (char*)"V.GetMassArrayStatus(string) -> int\nC++: int GetMassArrayStatus(const char *name)\nV.GetMassArrayStatus(int) -> int\nC++: int GetMassArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {(char*)"GetNumberOfMassArrays", PyvtkMaterialInterfaceFilter_GetNumberOfMassArrays, METH_VARARGS,
   (char*)"V.GetNumberOfMassArrays() -> int\nC++: int GetNumberOfMassArrays()\n\nQuery the number of available arrays\n"},
  {(char*)"GetMassArrayName", PyvtkMaterialInterfaceFilter_GetMassArrayName, METH_VARARGS,
   (char*)"V.GetMassArrayName(int) -> string\nC++: const char *GetMassArrayName(int index)\n\nGet the name of a specific array\n"},
  {(char*)"SelectVolumeWtdAvgArray", PyvtkMaterialInterfaceFilter_SelectVolumeWtdAvgArray, METH_VARARGS,
   (char*)"V.SelectVolumeWtdAvgArray(string)\nC++: void SelectVolumeWtdAvgArray(const char *name)\n\nAdd a single array\n"},
  {(char*)"UnselectVolumeWtdAvgArray", PyvtkMaterialInterfaceFilter_UnselectVolumeWtdAvgArray, METH_VARARGS,
   (char*)"V.UnselectVolumeWtdAvgArray(string)\nC++: void UnselectVolumeWtdAvgArray(const char *name)\n\nremove a single array\n"},
  {(char*)"UnselectAllVolumeWtdAvgArrays", PyvtkMaterialInterfaceFilter_UnselectAllVolumeWtdAvgArrays, METH_VARARGS,
   (char*)"V.UnselectAllVolumeWtdAvgArrays()\nC++: void UnselectAllVolumeWtdAvgArrays()\n\nremove all arrays\n"},
  {(char*)"SetVolumeWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_SetVolumeWtdAvgArrayStatus, METH_VARARGS,
   (char*)"V.SetVolumeWtdAvgArrayStatus(string, int)\nC++: void SetVolumeWtdAvgArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {(char*)"GetVolumeWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayStatus, METH_VARARGS,
   (char*)"V.GetVolumeWtdAvgArrayStatus(string) -> int\nC++: int GetVolumeWtdAvgArrayStatus(const char *name)\nV.GetVolumeWtdAvgArrayStatus(int) -> int\nC++: int GetVolumeWtdAvgArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {(char*)"GetNumberOfVolumeWtdAvgArrays", PyvtkMaterialInterfaceFilter_GetNumberOfVolumeWtdAvgArrays, METH_VARARGS,
   (char*)"V.GetNumberOfVolumeWtdAvgArrays() -> int\nC++: int GetNumberOfVolumeWtdAvgArrays()\n\nQuery the number of available arrays\n"},
  {(char*)"GetVolumeWtdAvgArrayName", PyvtkMaterialInterfaceFilter_GetVolumeWtdAvgArrayName, METH_VARARGS,
   (char*)"V.GetVolumeWtdAvgArrayName(int) -> string\nC++: const char *GetVolumeWtdAvgArrayName(int index)\n\nGet the name of a specific array\n"},
  {(char*)"SelectMassWtdAvgArray", PyvtkMaterialInterfaceFilter_SelectMassWtdAvgArray, METH_VARARGS,
   (char*)"V.SelectMassWtdAvgArray(string)\nC++: void SelectMassWtdAvgArray(const char *name)\n\nAdd a single array\n"},
  {(char*)"UnselectMassWtdAvgArray", PyvtkMaterialInterfaceFilter_UnselectMassWtdAvgArray, METH_VARARGS,
   (char*)"V.UnselectMassWtdAvgArray(string)\nC++: void UnselectMassWtdAvgArray(const char *name)\n\nremove a single array\n"},
  {(char*)"UnselectAllMassWtdAvgArrays", PyvtkMaterialInterfaceFilter_UnselectAllMassWtdAvgArrays, METH_VARARGS,
   (char*)"V.UnselectAllMassWtdAvgArrays()\nC++: void UnselectAllMassWtdAvgArrays()\n\nremove all arrays\n"},
  {(char*)"SetMassWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_SetMassWtdAvgArrayStatus, METH_VARARGS,
   (char*)"V.SetMassWtdAvgArrayStatus(string, int)\nC++: void SetMassWtdAvgArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {(char*)"GetMassWtdAvgArrayStatus", PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayStatus, METH_VARARGS,
   (char*)"V.GetMassWtdAvgArrayStatus(string) -> int\nC++: int GetMassWtdAvgArrayStatus(const char *name)\nV.GetMassWtdAvgArrayStatus(int) -> int\nC++: int GetMassWtdAvgArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {(char*)"GetNumberOfMassWtdAvgArrays", PyvtkMaterialInterfaceFilter_GetNumberOfMassWtdAvgArrays, METH_VARARGS,
   (char*)"V.GetNumberOfMassWtdAvgArrays() -> int\nC++: int GetNumberOfMassWtdAvgArrays()\n\nQuery the number of available arrays\n"},
  {(char*)"GetMassWtdAvgArrayName", PyvtkMaterialInterfaceFilter_GetMassWtdAvgArrayName, METH_VARARGS,
   (char*)"V.GetMassWtdAvgArrayName(int) -> string\nC++: const char *GetMassWtdAvgArrayName(int index)\n\nGet the name of a specific array\n"},
  {(char*)"SelectSummationArray", PyvtkMaterialInterfaceFilter_SelectSummationArray, METH_VARARGS,
   (char*)"V.SelectSummationArray(string)\nC++: void SelectSummationArray(const char *name)\n\nAdd a single array\n"},
  {(char*)"UnselectSummationArray", PyvtkMaterialInterfaceFilter_UnselectSummationArray, METH_VARARGS,
   (char*)"V.UnselectSummationArray(string)\nC++: void UnselectSummationArray(const char *name)\n\nremove a single array\n"},
  {(char*)"UnselectAllSummationArrays", PyvtkMaterialInterfaceFilter_UnselectAllSummationArrays, METH_VARARGS,
   (char*)"V.UnselectAllSummationArrays()\nC++: void UnselectAllSummationArrays()\n\nremove all arrays\n"},
  {(char*)"SetSummationArrayStatus", PyvtkMaterialInterfaceFilter_SetSummationArrayStatus, METH_VARARGS,
   (char*)"V.SetSummationArrayStatus(string, int)\nC++: void SetSummationArrayStatus(const char *name, int status)\n\nEnable/disable processing on an array\n"},
  {(char*)"GetSummationArrayStatus", PyvtkMaterialInterfaceFilter_GetSummationArrayStatus, METH_VARARGS,
   (char*)"V.GetSummationArrayStatus(string) -> int\nC++: int GetSummationArrayStatus(const char *name)\nV.GetSummationArrayStatus(int) -> int\nC++: int GetSummationArrayStatus(int index)\n\nGet enable./disable status for a given array\n"},
  {(char*)"GetNumberOfSummationArrays", PyvtkMaterialInterfaceFilter_GetNumberOfSummationArrays, METH_VARARGS,
   (char*)"V.GetNumberOfSummationArrays() -> int\nC++: int GetNumberOfSummationArrays()\n\nQuery the number of available arrays\n"},
  {(char*)"GetSummationArrayName", PyvtkMaterialInterfaceFilter_GetSummationArrayName, METH_VARARGS,
   (char*)"V.GetSummationArrayName(int) -> string\nC++: const char *GetSummationArrayName(int index)\n\nGet the name of a specific array\n"},
  {(char*)"SetMaterialFractionThreshold", PyvtkMaterialInterfaceFilter_SetMaterialFractionThreshold, METH_VARARGS,
   (char*)"V.SetMaterialFractionThreshold(float)\nC++: void SetMaterialFractionThreshold(double fraction)\n\nVolume fraction which volxels are included in a frgament.\n"},
  {(char*)"GetMaterialFractionThreshold", PyvtkMaterialInterfaceFilter_GetMaterialFractionThreshold, METH_VARARGS,
   (char*)"V.GetMaterialFractionThreshold() -> float\nC++: double GetMaterialFractionThreshold()\n\nVolume fraction which volxels are included in a frgament.\n"},
  {(char*)"SetComputeOBB", PyvtkMaterialInterfaceFilter_SetComputeOBB, METH_VARARGS,
   (char*)"V.SetComputeOBB(bool)\nC++: void SetComputeOBB(bool a)\n\nTurn on/off OBB calculations\n"},
  {(char*)"GetComputeOBB", PyvtkMaterialInterfaceFilter_GetComputeOBB, METH_VARARGS,
   (char*)"V.GetComputeOBB() -> bool\nC++: bool GetComputeOBB()\n\nTurn on/off OBB calculations\n"},
  {(char*)"SetUpperLoadingBound", PyvtkMaterialInterfaceFilter_SetUpperLoadingBound, METH_VARARGS,
   (char*)"V.SetUpperLoadingBound(int)\nC++: void SetUpperLoadingBound(int nPolys)\n\n"},
  {(char*)"GetUpperLoadingBound", PyvtkMaterialInterfaceFilter_GetUpperLoadingBound, METH_VARARGS,
   (char*)"V.GetUpperLoadingBound() -> int\nC++: int GetUpperLoadingBound()\n\n"},
  {(char*)"SetOutputBaseName", PyvtkMaterialInterfaceFilter_SetOutputBaseName, METH_VARARGS,
   (char*)"V.SetOutputBaseName(string)\nC++: void SetOutputBaseName(char *)\n\nName the file to save a table of fragment attributes to.\n"},
  {(char*)"GetOutputBaseName", PyvtkMaterialInterfaceFilter_GetOutputBaseName, METH_VARARGS,
   (char*)"V.GetOutputBaseName() -> string\nC++: char *GetOutputBaseName()\n\nName the file to save a table of fragment attributes to.\n"},
  {(char*)"SetWriteGeometryOutput", PyvtkMaterialInterfaceFilter_SetWriteGeometryOutput, METH_VARARGS,
   (char*)"V.SetWriteGeometryOutput(bool)\nC++: void SetWriteGeometryOutput(bool a)\n\nIf true, save the results of the filter in a text file\n"},
  {(char*)"GetWriteGeometryOutput", PyvtkMaterialInterfaceFilter_GetWriteGeometryOutput, METH_VARARGS,
   (char*)"V.GetWriteGeometryOutput() -> bool\nC++: bool GetWriteGeometryOutput()\n\nIf true, save the results of the filter in a text file\n"},
  {(char*)"SetWriteStatisticsOutput", PyvtkMaterialInterfaceFilter_SetWriteStatisticsOutput, METH_VARARGS,
   (char*)"V.SetWriteStatisticsOutput(bool)\nC++: void SetWriteStatisticsOutput(bool a)\n\nIf true, save the results of the filter in a text file\n"},
  {(char*)"GetWriteStatisticsOutput", PyvtkMaterialInterfaceFilter_GetWriteStatisticsOutput, METH_VARARGS,
   (char*)"V.GetWriteStatisticsOutput() -> bool\nC++: bool GetWriteStatisticsOutput()\n\nIf true, save the results of the filter in a text file\n"},
  {(char*)"SetBlockGhostLevel", PyvtkMaterialInterfaceFilter_SetBlockGhostLevel, METH_VARARGS,
   (char*)"V.SetBlockGhostLevel(int)\nC++: void SetBlockGhostLevel(unsigned char a)\n\nVariable used to specify the number of ghost level is available\nin each block. By Default set to 1 which is what the scth reader\nprovides\n"},
  {(char*)"GetBlockGhostLevel", PyvtkMaterialInterfaceFilter_GetBlockGhostLevel, METH_VARARGS,
   (char*)"V.GetBlockGhostLevel() -> int\nC++: unsigned char GetBlockGhostLevel()\n\nVariable used to specify the number of ghost level is available\nin each block. By Default set to 1 which is what the scth reader\nprovides\n"},
  {(char*)"SelectionModifiedCallback", PyvtkMaterialInterfaceFilter_SelectionModifiedCallback, METH_VARARGS | METH_STATIC,
   (char*)"V.SelectionModifiedCallback(vtkObject, int, , )\nC++: static void SelectionModifiedCallback(vtkObject *,\n    unsigned long, void *clientdata, void *)\n\nSets modified if array selection changes.\n"},
  {(char*)"SetClipFunction", PyvtkMaterialInterfaceFilter_SetClipFunction, METH_VARARGS,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: void SetClipFunction(vtkImplicitFunction *clipFunction)\n\nSet the clip function which can be a plane or a sphere\n"},
  {(char*)"GetClipFunction", PyvtkMaterialInterfaceFilter_GetClipFunction, METH_VARARGS,
   (char*)"V.GetClipFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetClipFunction()\n\nSet the clip function which can be a plane or a sphere\n"},
  {(char*)"SetInvertVolumeFraction", PyvtkMaterialInterfaceFilter_SetInvertVolumeFraction, METH_VARARGS,
   (char*)"V.SetInvertVolumeFraction(int)\nC++: void SetInvertVolumeFraction(int a)\n\nInvert the volume fraction to extract the negative space. This is\nuseful for extracting a crater.\n"},
  {(char*)"GetInvertVolumeFraction", PyvtkMaterialInterfaceFilter_GetInvertVolumeFraction, METH_VARARGS,
   (char*)"V.GetInvertVolumeFraction() -> int\nC++: int GetInvertVolumeFraction()\n\nInvert the volume fraction to extract the negative space. This is\nuseful for extracting a crater.\n"},
  {(char*)"GetMTime", PyvtkMaterialInterfaceFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator and clip function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaterialInterfaceFilter_StaticNew()
{
  return vtkMaterialInterfaceFilter::New();
}

PyObject *PyVTKClass_vtkMaterialInterfaceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaterialInterfaceFilter_StaticNew,
    PyvtkMaterialInterfaceFilter_Methods,
    "vtkMaterialInterfaceFilter", modulename,
    NULL, NULL,
    PyvtkMaterialInterfaceFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMaterialInterfaceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMaterialInterfaceFilter - Extract particles and analyse them.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter takes a cell data volume fraction and generates a\npolydata surface.  It also performs connectivity on the particles and\ngenerates a particle index as part of the cell data of the output. \nIt computes the volume of each particle from the volume fraction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaterialInterfaceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaterialInterfaceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaterialInterfaceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

