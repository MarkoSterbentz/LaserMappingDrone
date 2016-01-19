// python wrapper for vtkImageSliceMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkImageSliceMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSliceMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSliceMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageMapper3DNew
extern "C" { PyObject *PyVTKClass_vtkImageMapper3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMapper3DNew
#endif

static const char **PyvtkImageSliceMapper_Doc();


static PyObject *
PyvtkImageSliceMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSliceMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSliceMapper::NewInstance());

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
PyvtkImageSliceMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSliceMapper *tempr = vtkImageSliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceNumber(temp0);
      }
    else
      {
      op->vtkImageSliceMapper::SetSliceNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumber() :
      op->vtkImageSliceMapper::GetSliceNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumberMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMinValue() :
      op->vtkImageSliceMapper::GetSliceNumberMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumberMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMaxValue() :
      op->vtkImageSliceMapper::GetSliceNumberMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkImageSliceMapper::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkImageSliceMapper::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkImageSliceMapper::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImageSliceMapper::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToX();
      }
    else
      {
      op->vtkImageSliceMapper::SetOrientationToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToY();
      }
    else
      {
      op->vtkImageSliceMapper::SetOrientationToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationToZ();
      }
    else
      {
      op->vtkImageSliceMapper::SetOrientationToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::SetCropping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CroppingOn();
      }
    else
      {
      op->vtkImageSliceMapper::CroppingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CroppingOff();
      }
    else
      {
      op->vtkImageSliceMapper::CroppingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkImageSliceMapper::GetCropping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageSliceMapper::SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCroppingRegion(temp0);
      }
    else
      {
      op->vtkImageSliceMapper::SetCroppingRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageSliceMapper_SetCroppingRegion_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_SetCroppingRegion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegion");
  return NULL;
}



static PyObject *
PyvtkImageSliceMapper_GetCroppingRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCroppingRegion() :
      op->vtkImageSliceMapper::GetCroppingRegion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkImageSliceMapper::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkImageSliceMapper::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageSliceMapper_Update_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkImageSliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkImageSlice *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkImageSliceMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSliceMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageSliceMapper::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::GetBounds(temp0);
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
PyvtkImageSliceMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageSliceMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkImageSliceMapper_GetSlicePlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  double temp1[4];
  double save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSlicePlaneInDataCoords(temp0, temp1);
      }
    else
      {
      op->vtkImageSliceMapper::GetSlicePlaneInDataCoords(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSliceMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSliceMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSliceMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSliceMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSliceMapper\nC++: vtkImageSliceMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSliceMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSliceMapper\nC++: vtkImageSliceMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSliceNumber", PyvtkImageSliceMapper_SetSliceNumber, METH_VARARGS,
   (char*)"V.SetSliceNumber(int)\nC++: virtual void SetSliceNumber(int slice)\n\nThe slice to display, if there are multiple slices.\n"},
  {(char*)"GetSliceNumber", PyvtkImageSliceMapper_GetSliceNumber, METH_VARARGS,
   (char*)"V.GetSliceNumber() -> int\nC++: virtual int GetSliceNumber()\n\nThe slice to display, if there are multiple slices.\n"},
  {(char*)"GetSliceNumberMinValue", PyvtkImageSliceMapper_GetSliceNumberMinValue, METH_VARARGS,
   (char*)"V.GetSliceNumberMinValue() -> int\nC++: virtual int GetSliceNumberMinValue()\n\n"},
  {(char*)"GetSliceNumberMaxValue", PyvtkImageSliceMapper_GetSliceNumberMaxValue, METH_VARARGS,
   (char*)"V.GetSliceNumberMaxValue() -> int\nC++: virtual int GetSliceNumberMaxValue()\n\n"},
  {(char*)"SetOrientation", PyvtkImageSliceMapper_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(int)\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"GetOrientationMinValue", PyvtkImageSliceMapper_GetOrientationMinValue, METH_VARARGS,
   (char*)"V.GetOrientationMinValue() -> int\nC++: int GetOrientationMinValue()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"GetOrientationMaxValue", PyvtkImageSliceMapper_GetOrientationMaxValue, METH_VARARGS,
   (char*)"V.GetOrientationMaxValue() -> int\nC++: int GetOrientationMaxValue()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"GetOrientation", PyvtkImageSliceMapper_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"SetOrientationToX", PyvtkImageSliceMapper_SetOrientationToX, METH_VARARGS,
   (char*)"V.SetOrientationToX()\nC++: void SetOrientationToX()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"SetOrientationToY", PyvtkImageSliceMapper_SetOrientationToY, METH_VARARGS,
   (char*)"V.SetOrientationToY()\nC++: void SetOrientationToY()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"SetOrientationToZ", PyvtkImageSliceMapper_SetOrientationToZ, METH_VARARGS,
   (char*)"V.SetOrientationToZ()\nC++: void SetOrientationToZ()\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is Z.\n"},
  {(char*)"SetCropping", PyvtkImageSliceMapper_SetCropping, METH_VARARGS,
   (char*)"V.SetCropping(int)\nC++: void SetCropping(int a)\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {(char*)"CroppingOn", PyvtkImageSliceMapper_CroppingOn, METH_VARARGS,
   (char*)"V.CroppingOn()\nC++: void CroppingOn()\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {(char*)"CroppingOff", PyvtkImageSliceMapper_CroppingOff, METH_VARARGS,
   (char*)"V.CroppingOff()\nC++: void CroppingOff()\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {(char*)"GetCropping", PyvtkImageSliceMapper_GetCropping, METH_VARARGS,
   (char*)"V.GetCropping() -> int\nC++: int GetCropping()\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {(char*)"SetCroppingRegion", PyvtkImageSliceMapper_SetCroppingRegion, METH_VARARGS,
   (char*)"V.SetCroppingRegion(int, int, int, int, int, int)\nC++: void SetCroppingRegion(int, int, int, int, int, int)\nV.SetCroppingRegion((int, int, int, int, int, int))\nC++: void SetCroppingRegion(int a[6])\n\n"},
  {(char*)"GetCroppingRegion", PyvtkImageSliceMapper_GetCroppingRegion, METH_VARARGS,
   (char*)"V.GetCroppingRegion() -> (int, int, int, int, int, int)\nC++: int *GetCroppingRegion()\n\n"},
  {(char*)"Update", PyvtkImageSliceMapper_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\nV.Update(int)\nC++: virtual void Update(int port)\n\nOverride Update to handle some tricky details.\n"},
  {(char*)"Render", PyvtkImageSliceMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkImageSlice)\nC++: virtual void Render(vtkRenderer *renderer,\n    vtkImageSlice *prop)\n\nThis should only be called by the renderer.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkImageSliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {(char*)"GetMTime", PyvtkImageSliceMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the mtime for the mapper.\n"},
  {(char*)"GetBounds", PyvtkImageSliceMapper_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nThe bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"GetSlicePlaneInDataCoords", PyvtkImageSliceMapper_GetSlicePlaneInDataCoords, METH_VARARGS,
   (char*)"V.GetSlicePlaneInDataCoords(vtkMatrix4x4, [float, float, float,\n    float])\nC++: virtual void GetSlicePlaneInDataCoords(\n    vtkMatrix4x4 *propMatrix, double plane[4])\n\nGet the plane as a homogeneous 4-vector that gives the plane\nequation coefficients.  It is computed from the Orientation and\nSliceNumber, the propMatrix is unused and can be zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSliceMapper_StaticNew()
{
  return vtkImageSliceMapper::New();
}

PyObject *PyVTKClass_vtkImageSliceMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSliceMapper_StaticNew,
    PyvtkImageSliceMapper_Methods,
    "vtkImageSliceMapper", modulename,
    NULL, NULL,
    PyvtkImageSliceMapper_Doc(),
    PyVTKClass_vtkImageMapper3DNew(modulename));
  return cls;
}

const char **PyvtkImageSliceMapper_Doc()
{
  static const char *docstring[] = {
    "vtkImageSliceMapper - map a slice of a vtkImageData to the screen\n\n",
    "Superclass: vtkImageMapper3D\n\n",
    "vtkImageSliceMapper is a mapper that will draw a 2D image, or a slice\nof a 3D image.  For 3D images, the slice may be oriented in the X, Y,\nor Z direction.  This mapper works via 2D textures with accelerated\nzoom and pan operations.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept. of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\nSee a",
    "lso:\n\nvtkImageSlice vtkImageProperty vtkImageResliceMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSliceMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSliceMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSliceMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

