// python wrapper for vtkAMRVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAMRVolumeMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRVolumeMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRVolumeMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkAMRVolumeMapper_Doc();


static PyObject *
PyvtkAMRVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRVolumeMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRVolumeMapper::NewInstance());

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
PyvtkAMRVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRVolumeMapper *tempr = vtkAMRVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkOverlappingAMR *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRVolumeMapper_SetInputData_Methods[] = {
  {NULL, PyvtkAMRVolumeMapper_SetInputData_s1, METH_VARARGS,
   (char*)"@O *vtkImageData"},
  {NULL, PyvtkAMRVolumeMapper_SetInputData_s2, METH_VARARGS,
   (char*)"@O *vtkDataSet"},
  {NULL, PyvtkAMRVolumeMapper_SetInputData_s3, METH_VARARGS,
   (char*)"@O *vtkOverlappingAMR"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAMRVolumeMapper_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRVolumeMapper_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAMRVolumeMapper_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAMRVolumeMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAMRVolumeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkAMRVolumeMapper::GetBlendMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SelectScalarArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectScalarArray(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SelectScalarArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SelectScalarArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectScalarArray(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SelectScalarArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRVolumeMapper_SelectScalarArray_Methods[] = {
  {NULL, PyvtkAMRVolumeMapper_SelectScalarArray_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkAMRVolumeMapper_SelectScalarArray_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAMRVolumeMapper_SelectScalarArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRVolumeMapper_SelectScalarArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectScalarArray");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAMRVolumeMapper::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkAMRVolumeMapper::GetArrayId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkAMRVolumeMapper::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkAMRVolumeMapper::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCropping(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetCropping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkAMRVolumeMapper::GetCropping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetCroppingRegionPlanes(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetCroppingRegionPlanes(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegionPlanes");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetCroppingRegionPlanes(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::GetCroppingRegionPlanes(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCroppingRegionPlanes() :
      op->vtkAMRVolumeMapper::GetCroppingRegionPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s1(self, args);
    case 0:
      return PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCroppingRegionPlanes");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegionFlags(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetCroppingRegionFlags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlags() :
      op->vtkAMRVolumeMapper::GetCroppingRegionFlags());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderMode(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedRenderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRequestedRenderMode() :
      op->vtkAMRVolumeMapper::GetRequestedRenderMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToDefault();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCastAndTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCastAndTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToRayCastAndTexture();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToRayCastAndTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToRayCast();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToRayCast();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToTexture();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToGPU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToGPU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedRenderModeToGPU();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToGPU();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationMode(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInterpolationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkAMRVolumeMapper::GetInterpolationMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToNearestNeighbor();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInterpolationModeToNearestNeighbor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToLinear();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInterpolationModeToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationModeToCubic();
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInterpolationModeToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetNumberOfSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

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
      op->vtkAMRVolumeMapper::SetNumberOfSamples(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetNumberOfSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

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
      op->vtkAMRVolumeMapper::SetNumberOfSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAMRVolumeMapper_SetNumberOfSamples_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_SetNumberOfSamples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfSamples");
  return NULL;
}



static PyObject *
PyvtkAMRVolumeMapper_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkAMRVolumeMapper::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractiveUpdateRate(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetInteractiveUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRate() :
      op->vtkAMRVolumeMapper::GetInteractiveUpdateRate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkAMRVolumeMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_UpdateResampler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateResampler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkOverlappingAMR *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
    {
    if (ap.IsBound())
      {
      op->UpdateResampler(temp0, temp1);
      }
    else
      {
      op->vtkAMRVolumeMapper::UpdateResampler(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_UpdateResamplerFrustrumMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateResamplerFrustrumMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkOverlappingAMR *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
    {
    if (ap.IsBound())
      {
      op->UpdateResamplerFrustrumMethod(temp0, temp1);
      }
    else
      {
      op->vtkAMRVolumeMapper::UpdateResamplerFrustrumMethod(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequestedResamplingMode(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetRequestedResamplingMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetRequestedResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRequestedResamplingMode() :
      op->vtkAMRVolumeMapper::GetRequestedResamplingMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFreezeFocalPoint(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetFreezeFocalPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetFreezeFocalPoint() :
      op->vtkAMRVolumeMapper::GetFreezeFocalPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetResamplerUpdateTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResamplerUpdateTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResamplerUpdateTolerance(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetResamplerUpdateTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetResamplerUpdateTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResamplerUpdateTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetResamplerUpdateTolerance() :
      op->vtkAMRVolumeMapper::GetResamplerUpdateTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetUseDefaultThreading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultThreading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultThreading(temp0);
      }
    else
      {
      op->vtkAMRVolumeMapper::SetUseDefaultThreading(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetUseDefaultThreading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultThreading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseDefaultThreading() :
      op->vtkAMRVolumeMapper::GetUseDefaultThreading());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_ComputeResamplerBoundsFrustumMethod(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeResamplerBoundsFrustumMethod");

  vtkCamera *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  double temp2[6];
  const int size2 = 6;
  double temp3[6];
  double save3[6];
  const int size3 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    bool tempr = vtkAMRVolumeMapper::ComputeResamplerBoundsFrustumMethod(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRVolumeMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRVolumeMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRVolumeMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRVolumeMapper\nC++: vtkAMRVolumeMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRVolumeMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRVolumeMapper\nC++: vtkAMRVolumeMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputData", PyvtkAMRVolumeMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *)\nV.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *)\nV.SetInputData(vtkOverlappingAMR)\nC++: virtual void SetInputData(vtkOverlappingAMR *)\n\nSet the input data\n"},
  {(char*)"SetInputConnection", PyvtkAMRVolumeMapper_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet the input data\n"},
  {(char*)"GetBounds", PyvtkAMRVolumeMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"SetScalarMode", PyvtkAMRVolumeMapper_SetScalarMode, METH_VARARGS,
   (char*)"V.SetScalarMode(int)\nC++: virtual void SetScalarMode(int mode)\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SetBlendMode", PyvtkAMRVolumeMapper_SetBlendMode, METH_VARARGS,
   (char*)"V.SetBlendMode(int)\nC++: virtual void SetBlendMode(int mode)\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"GetBlendMode", PyvtkAMRVolumeMapper_GetBlendMode, METH_VARARGS,
   (char*)"V.GetBlendMode() -> int\nC++: virtual int GetBlendMode()\n\nSet/Get the blend mode. Currently this is only supported by the\nvtkFixedPointVolumeRayCastMapper - other mappers have different\nways to set this (supplying a function to a\nvtkVolumeRayCastMapper) or don't have any options\n(vtkVolumeTextureMapper2D supports only compositing). Additive\nblend mode adds scalars along the ray and multiply them by their\nopacity mapping value.\n"},
  {(char*)"SelectScalarArray", PyvtkAMRVolumeMapper_SelectScalarArray, METH_VARARGS,
   (char*)"V.SelectScalarArray(int)\nC++: virtual void SelectScalarArray(int arrayNum)\nV.SelectScalarArray(string)\nC++: virtual void SelectScalarArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which scalar array to use during rendering. The\ntransfer function in the vtkVolumeProperty (attached to the\ncalling vtkVolume) will decide how to convert vectors to colors.\n"},
  {(char*)"GetArrayName", PyvtkAMRVolumeMapper_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nGet the array name or number and component to use for rendering.\n"},
  {(char*)"GetArrayId", PyvtkAMRVolumeMapper_GetArrayId, METH_VARARGS,
   (char*)"V.GetArrayId() -> int\nC++: virtual int GetArrayId()\n\nGet the array name or number and component to use for rendering.\n"},
  {(char*)"GetArrayAccessMode", PyvtkAMRVolumeMapper_GetArrayAccessMode, METH_VARARGS,
   (char*)"V.GetArrayAccessMode() -> int\nC++: virtual int GetArrayAccessMode()\n\nGet the array name or number and component to use for rendering.\n"},
  {(char*)"GetScalarModeAsString", PyvtkAMRVolumeMapper_GetScalarModeAsString, METH_VARARGS,
   (char*)"V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {(char*)"SetCropping", PyvtkAMRVolumeMapper_SetCropping, METH_VARARGS,
   (char*)"V.SetCropping(int)\nC++: virtual void SetCropping(int mode)\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"GetCropping", PyvtkAMRVolumeMapper_GetCropping, METH_VARARGS,
   (char*)"V.GetCropping() -> int\nC++: virtual int GetCropping()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {(char*)"SetCroppingRegionPlanes", PyvtkAMRVolumeMapper_SetCroppingRegionPlanes, METH_VARARGS,
   (char*)"V.SetCroppingRegionPlanes(float, float, float, float, float,\n    float)\nC++: virtual void SetCroppingRegionPlanes(double arg1,\n    double arg2, double arg3, double arg4, double arg5,\n    double arg6)\nV.SetCroppingRegionPlanes([float, ...])\nC++: virtual void SetCroppingRegionPlanes(double *planes)\n\nSet/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax,\nzmin, zmax ) These planes are defined in volume coordinates -\nspacing and origin are considered.\n"},
  {(char*)"GetCroppingRegionPlanes", PyvtkAMRVolumeMapper_GetCroppingRegionPlanes, METH_VARARGS,
   (char*)"V.GetCroppingRegionPlanes([float, ...])\nC++: virtual void GetCroppingRegionPlanes(double *planes)\nV.GetCroppingRegionPlanes() -> (float, float, float, float, float,\n     float)\nC++: virtual double *GetCroppingRegionPlanes()\n\nSet/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax,\nzmin, zmax ) These planes are defined in volume coordinates -\nspacing and origin are considered.\n"},
  {(char*)"SetCroppingRegionFlags", PyvtkAMRVolumeMapper_SetCroppingRegionFlags, METH_VARARGS,
   (char*)"V.SetCroppingRegionFlags(int)\nC++: virtual void SetCroppingRegionFlags(int mode)\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"GetCroppingRegionFlags", PyvtkAMRVolumeMapper_GetCroppingRegionFlags, METH_VARARGS,
   (char*)"V.GetCroppingRegionFlags() -> int\nC++: virtual int GetCroppingRegionFlags()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {(char*)"SetRequestedRenderMode", PyvtkAMRVolumeMapper_SetRequestedRenderMode, METH_VARARGS,
   (char*)"V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int mode)\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {(char*)"GetRequestedRenderMode", PyvtkAMRVolumeMapper_GetRequestedRenderMode, METH_VARARGS,
   (char*)"V.GetRequestedRenderMode() -> int\nC++: int GetRequestedRenderMode()\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {(char*)"SetRequestedRenderModeToDefault", PyvtkAMRVolumeMapper_SetRequestedRenderModeToDefault, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToDefault()\nC++: void SetRequestedRenderModeToDefault()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::DefaultRenderMode. This is the best option\nfor an application that must adapt to different data types,\nhardware, and rendering parameters.\n"},
  {(char*)"SetRequestedRenderModeToRayCastAndTexture", PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCastAndTexture, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToRayCastAndTexture()\nC++: void SetRequestedRenderModeToRayCastAndTexture()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::RayCastAndTextureRenderMode. This is a good\noption if you want to avoid using advanced OpenGL functionality,\nbut would still like to used 3D texture mapping, if available,\nfor interactive rendering.\n"},
  {(char*)"SetRequestedRenderModeToRayCast", PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCast, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToRayCast()\nC++: void SetRequestedRenderModeToRayCast()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::RayCastRenderMode. This option will use\nsoftware rendering exclusively. This is a good option if you know\nthere is no hardware acceleration.\n"},
  {(char*)"SetRequestedRenderModeToTexture", PyvtkAMRVolumeMapper_SetRequestedRenderModeToTexture, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToTexture()\nC++: void SetRequestedRenderModeToTexture()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::TextureRenderMode. This is a good option if\nyou want to use 3D texture mapping, if available, for interactive\nrendering.\n"},
  {(char*)"SetRequestedRenderModeToGPU", PyvtkAMRVolumeMapper_SetRequestedRenderModeToGPU, METH_VARARGS,
   (char*)"V.SetRequestedRenderModeToGPU()\nC++: void SetRequestedRenderModeToGPU()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::GPURenderMode. This will do the volume\nrendering on the GPU\n"},
  {(char*)"SetInterpolationMode", PyvtkAMRVolumeMapper_SetInterpolationMode, METH_VARARGS,
   (char*)"V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int mode)\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"GetInterpolationMode", PyvtkAMRVolumeMapper_GetInterpolationMode, METH_VARARGS,
   (char*)"V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {(char*)"SetInterpolationModeToNearestNeighbor", PyvtkAMRVolumeMapper_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   (char*)"V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\n"},
  {(char*)"SetInterpolationModeToLinear", PyvtkAMRVolumeMapper_SetInterpolationModeToLinear, METH_VARARGS,
   (char*)"V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\n"},
  {(char*)"SetInterpolationModeToCubic", PyvtkAMRVolumeMapper_SetInterpolationModeToCubic, METH_VARARGS,
   (char*)"V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\n"},
  {(char*)"SetNumberOfSamples", PyvtkAMRVolumeMapper_SetNumberOfSamples, METH_VARARGS,
   (char*)"V.SetNumberOfSamples(int, int, int)\nC++: void SetNumberOfSamples(int, int, int)\nV.SetNumberOfSamples((int, int, int))\nC++: void SetNumberOfSamples(int a[3])\n\n"},
  {(char*)"GetNumberOfSamples", PyvtkAMRVolumeMapper_GetNumberOfSamples, METH_VARARGS,
   (char*)"V.GetNumberOfSamples() -> (int, int, int)\nC++: int *GetNumberOfSamples()\n\n"},
  {(char*)"SetInteractiveUpdateRate", PyvtkAMRVolumeMapper_SetInteractiveUpdateRate, METH_VARARGS,
   (char*)"V.SetInteractiveUpdateRate(float)\nC++: virtual void SetInteractiveUpdateRate(double rate)\n\nSet the rate at or above this render will be considered\ninteractive. If the DesiredUpdateRate of the vtkRenderWindow that\ncaused the Render falls at or above this rate, the render is\nconsidered interactive and the mapper may be adjusted (depending\non the render mode). Initial value is 1.0.\n"},
  {(char*)"GetInteractiveUpdateRate", PyvtkAMRVolumeMapper_GetInteractiveUpdateRate, METH_VARARGS,
   (char*)"V.GetInteractiveUpdateRate() -> float\nC++: virtual double GetInteractiveUpdateRate()\n\nGet the update rate at or above which this is considered an\ninteractive render. Initial value is 1.0.\n"},
  {(char*)"Render", PyvtkAMRVolumeMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAMRVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"UpdateResampler", PyvtkAMRVolumeMapper_UpdateResampler, METH_VARARGS,
   (char*)"V.UpdateResampler(vtkRenderer, vtkOverlappingAMR)\nC++: void UpdateResampler(vtkRenderer *ren,\n    vtkOverlappingAMR *amr)\n\n"},
  {(char*)"UpdateResamplerFrustrumMethod", PyvtkAMRVolumeMapper_UpdateResamplerFrustrumMethod, METH_VARARGS,
   (char*)"V.UpdateResamplerFrustrumMethod(vtkRenderer, vtkOverlappingAMR)\nC++: void UpdateResamplerFrustrumMethod(vtkRenderer *ren,\n    vtkOverlappingAMR *amr)\n\n"},
  {(char*)"SetRequestedResamplingMode", PyvtkAMRVolumeMapper_SetRequestedResamplingMode, METH_VARARGS,
   (char*)"V.SetRequestedResamplingMode(int)\nC++: void SetRequestedResamplingMode(int a)\n\nSelect the type of resampling techinque approach to use.\n"},
  {(char*)"GetRequestedResamplingMode", PyvtkAMRVolumeMapper_GetRequestedResamplingMode, METH_VARARGS,
   (char*)"V.GetRequestedResamplingMode() -> int\nC++: int GetRequestedResamplingMode()\n\nSelect the type of resampling techinque approach to use.\n"},
  {(char*)"SetFreezeFocalPoint", PyvtkAMRVolumeMapper_SetFreezeFocalPoint, METH_VARARGS,
   (char*)"V.SetFreezeFocalPoint(bool)\nC++: void SetFreezeFocalPoint(bool a)\n\nSelect the type of resampling techinque approach to use.\n"},
  {(char*)"GetFreezeFocalPoint", PyvtkAMRVolumeMapper_GetFreezeFocalPoint, METH_VARARGS,
   (char*)"V.GetFreezeFocalPoint() -> bool\nC++: bool GetFreezeFocalPoint()\n\nSelect the type of resampling techinque approach to use.\n"},
  {(char*)"SetResamplerUpdateTolerance", PyvtkAMRVolumeMapper_SetResamplerUpdateTolerance, METH_VARARGS,
   (char*)"V.SetResamplerUpdateTolerance(float)\nC++: void SetResamplerUpdateTolerance(double a)\n\nSets/Gets the tolerance used to determine if the resampler needs\nto be updated. Default is 10e-8\n"},
  {(char*)"GetResamplerUpdateTolerance", PyvtkAMRVolumeMapper_GetResamplerUpdateTolerance, METH_VARARGS,
   (char*)"V.GetResamplerUpdateTolerance() -> float\nC++: double GetResamplerUpdateTolerance()\n\nSets/Gets the tolerance used to determine if the resampler needs\nto be updated. Default is 10e-8\n"},
  {(char*)"SetUseDefaultThreading", PyvtkAMRVolumeMapper_SetUseDefaultThreading, METH_VARARGS,
   (char*)"V.SetUseDefaultThreading(bool)\nC++: void SetUseDefaultThreading(bool a)\n\nSets/Gets a flag that indicates the internal volume mapper should\nuse the  default number of threads.  This is useful in\napplications such as ParaView that will turn off multiple threads\nby default. Default is false\n"},
  {(char*)"GetUseDefaultThreading", PyvtkAMRVolumeMapper_GetUseDefaultThreading, METH_VARARGS,
   (char*)"V.GetUseDefaultThreading() -> bool\nC++: bool GetUseDefaultThreading()\n\nSets/Gets a flag that indicates the internal volume mapper should\nuse the  default number of threads.  This is useful in\napplications such as ParaView that will turn off multiple threads\nby default. Default is false\n"},
  {(char*)"ComputeResamplerBoundsFrustumMethod", PyvtkAMRVolumeMapper_ComputeResamplerBoundsFrustumMethod, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeResamplerBoundsFrustumMethod(vtkCamera, vtkRenderer, (\n    float, float, float, float, float, float), [float, float,\n    float, float, float, float]) -> bool\nC++: static bool ComputeResamplerBoundsFrustumMethod(\n    vtkCamera *camera, vtkRenderer *renderer,\n    const double data_bounds[6], double out_bounds[6])\n\nUtility method used by UpdateResamplerFrustrumMethod() to compute\nthe bounds.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRVolumeMapper_StaticNew()
{
  return vtkAMRVolumeMapper::New();
}

PyObject *PyVTKClass_vtkAMRVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRVolumeMapper_StaticNew,
    PyvtkAMRVolumeMapper_Methods,
    "vtkAMRVolumeMapper", modulename,
    NULL, NULL,
    PyvtkAMRVolumeMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 7; c++)
      {
      static const struct { const char *name; int value; }
        constants[7] = {
          { "DefaultRenderMode", vtkAMRVolumeMapper::DefaultRenderMode },
          { "RayCastAndTextureRenderMode", vtkAMRVolumeMapper::RayCastAndTextureRenderMode },
          { "RayCastRenderMode", vtkAMRVolumeMapper::RayCastRenderMode },
          { "TextureRenderMode", vtkAMRVolumeMapper::TextureRenderMode },
          { "GPURenderMode", vtkAMRVolumeMapper::GPURenderMode },
          { "UndefinedRenderMode", vtkAMRVolumeMapper::UndefinedRenderMode },
          { "InvalidRenderMode", vtkAMRVolumeMapper::InvalidRenderMode },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAMRVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkAMRVolumeMapper - AMR class for a volume mapper\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkAMRVolumeMapper is the  definition of a volume mapper. for AMR\nStructured Data\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

