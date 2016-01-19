// python wrapper for vtkImageActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSliceNew
extern "C" { PyObject *PyVTKClass_vtkImageSliceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSliceNew
#endif

static const char **PyvtkImageActor_Doc();


static PyObject *
PyvtkImageActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageActor::NewInstance());

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
PyvtkImageActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageActor *tempr = vtkImageActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->vtkImageActor::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageActor::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolate(temp0);
      }
    else
      {
      op->vtkImageActor::SetInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageActor::GetInterpolate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOn();
      }
    else
      {
      op->vtkImageActor::InterpolateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOff();
      }
    else
      {
      op->vtkImageActor::InterpolateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkImageActor::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkImageActor::GetOpacity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkImageActor::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkImageActor::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_SetDisplayExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDisplayExtent(temp0);
      }
    else
      {
      op->vtkImageActor::SetDisplayExtent(temp0);
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
PyvtkImageActor_SetDisplayExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->SetDisplayExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageActor::SetDisplayExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageActor_SetDisplayExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageActor_SetDisplayExtent_s1(self, args);
    case 6:
      return PyvtkImageActor_SetDisplayExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplayExtent");
  return NULL;
}



static PyObject *
PyvtkImageActor_GetDisplayExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDisplayExtent(temp0);
      }
    else
      {
      op->vtkImageActor::GetDisplayExtent(temp0);
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
PyvtkImageActor_GetDisplayExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDisplayExtent() :
      op->vtkImageActor::GetDisplayExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageActor_GetDisplayExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageActor_GetDisplayExtent_s1(self, args);
    case 0:
      return PyvtkImageActor_GetDisplayExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayExtent");
  return NULL;
}



static PyObject *
PyvtkImageActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->vtkImageActor::GetBounds(temp0);
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
PyvtkImageActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkImageActor_GetDisplayBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayBounds() :
      op->vtkImageActor::GetDisplayBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageActor_GetDisplayBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->GetDisplayBounds(temp0);
      }
    else
      {
      op->vtkImageActor::GetDisplayBounds(temp0);
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
PyvtkImageActor_GetDisplayBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageActor_GetDisplayBounds_s1(self, args);
    case 1:
      return PyvtkImageActor_GetDisplayBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayBounds");
  return NULL;
}



static PyObject *
PyvtkImageActor_GetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumber() :
      op->vtkImageActor::GetSliceNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetSliceNumberMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMax() :
      op->vtkImageActor::GetSliceNumberMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetSliceNumberMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMin() :
      op->vtkImageActor::GetSliceNumberMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZSlice(temp0);
      }
    else
      {
      op->vtkImageActor::SetZSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageActor::GetZSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageActor::GetWholeZMin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageActor::GetWholeZMax());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImageActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageActor_Methods[] = {
  {(char*)"GetClassName", PyvtkImageActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageActor\nC++: vtkImageActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageActor\nC++: vtkImageActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputData", PyvtkImageActor_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *)\n\nSet/Get the image data input for the image actor.  This is for\nbackwards compatibility, for a proper pipeline connection you\nshould use GetMapper()->SetInputConnection() instead.\n"},
  {(char*)"GetInput", PyvtkImageActor_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSet/Get the image data input for the image actor.  This is for\nbackwards compatibility, for a proper pipeline connection you\nshould use GetMapper()->SetInputConnection() instead.\n"},
  {(char*)"SetInterpolate", PyvtkImageActor_SetInterpolate, METH_VARARGS,
   (char*)"V.SetInterpolate(int)\nC++: virtual void SetInterpolate(int)\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {(char*)"GetInterpolate", PyvtkImageActor_GetInterpolate, METH_VARARGS,
   (char*)"V.GetInterpolate() -> int\nC++: virtual int GetInterpolate()\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {(char*)"InterpolateOn", PyvtkImageActor_InterpolateOn, METH_VARARGS,
   (char*)"V.InterpolateOn()\nC++: void InterpolateOn()\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {(char*)"InterpolateOff", PyvtkImageActor_InterpolateOff, METH_VARARGS,
   (char*)"V.InterpolateOff()\nC++: void InterpolateOff()\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {(char*)"SetOpacity", PyvtkImageActor_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: virtual void SetOpacity(double)\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacity", PyvtkImageActor_GetOpacity, METH_VARARGS,
   (char*)"V.GetOpacity() -> float\nC++: virtual double GetOpacity()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacityMinValue", PyvtkImageActor_GetOpacityMinValue, METH_VARARGS,
   (char*)"V.GetOpacityMinValue() -> float\nC++: double GetOpacityMinValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"GetOpacityMaxValue", PyvtkImageActor_GetOpacityMaxValue, METH_VARARGS,
   (char*)"V.GetOpacityMaxValue() -> float\nC++: double GetOpacityMaxValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {(char*)"SetDisplayExtent", PyvtkImageActor_SetDisplayExtent, METH_VARARGS,
   (char*)"V.SetDisplayExtent([int, int, int, int, int, int])\nC++: void SetDisplayExtent(int extent[6])\nV.SetDisplayExtent(int, int, int, int, int, int)\nC++: void SetDisplayExtent(int minX, int maxX, int minY, int maxY,\n     int minZ, int maxZ)\n\nThe image extent is generally set explicitly, but if not set it\nwill be determined from the input image data.\n"},
  {(char*)"GetDisplayExtent", PyvtkImageActor_GetDisplayExtent, METH_VARARGS,
   (char*)"V.GetDisplayExtent([int, int, int, int, int, int])\nC++: void GetDisplayExtent(int extent[6])\nV.GetDisplayExtent() -> (int, int, int, int, int, int)\nC++: int *GetDisplayExtent()\n\nThe image extent is generally set explicitly, but if not set it\nwill be determined from the input image data.\n"},
  {(char*)"GetBounds", PyvtkImageActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds of this image actor. Either copy the bounds into a\nuser provided array or return a pointer to an array. In either\ncase the boudns is expressed as a 6-vector (xmin,xmax, ymin,ymax,\nzmin,zmax).\n"},
  {(char*)"GetDisplayBounds", PyvtkImageActor_GetDisplayBounds, METH_VARARGS,
   (char*)"V.GetDisplayBounds() -> (float, ...)\nC++: double *GetDisplayBounds()\nV.GetDisplayBounds([float, float, float, float, float, float])\nC++: void GetDisplayBounds(double bounds[6])\n\nGet the bounds of the data that is displayed by this image actor.\n If the transformation matrix for this actor is the identity\nmatrix, this will return the same value as GetBounds.\n"},
  {(char*)"GetSliceNumber", PyvtkImageActor_GetSliceNumber, METH_VARARGS,
   (char*)"V.GetSliceNumber() -> int\nC++: int GetSliceNumber()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {(char*)"GetSliceNumberMax", PyvtkImageActor_GetSliceNumberMax, METH_VARARGS,
   (char*)"V.GetSliceNumberMax() -> int\nC++: int GetSliceNumberMax()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {(char*)"GetSliceNumberMin", PyvtkImageActor_GetSliceNumberMin, METH_VARARGS,
   (char*)"V.GetSliceNumberMin() -> int\nC++: int GetSliceNumberMin()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {(char*)"SetZSlice", PyvtkImageActor_SetZSlice, METH_VARARGS,
   (char*)"V.SetZSlice(int)\nC++: void SetZSlice(int z)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetZSlice", PyvtkImageActor_GetZSlice, METH_VARARGS,
   (char*)"V.GetZSlice() -> int\nC++: int GetZSlice()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetWholeZMin", PyvtkImageActor_GetWholeZMin, METH_VARARGS,
   (char*)"V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"GetWholeZMax", PyvtkImageActor_GetWholeZMax, METH_VARARGS,
   (char*)"V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkImageActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nInternal method, should only be used by rendering. Does this prop\nhave some translucent polygonal geometry?\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageActor_StaticNew()
{
  return vtkImageActor::New();
}

PyObject *PyVTKClass_vtkImageActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageActor_StaticNew,
    PyvtkImageActor_Methods,
    "vtkImageActor", modulename,
    NULL, NULL,
    PyvtkImageActor_Doc(),
    PyVTKClass_vtkImageSliceNew(modulename));
  return cls;
}

const char **PyvtkImageActor_Doc()
{
  static const char *docstring[] = {
    "vtkImageActor - draw an image in a rendered 3D scene\n\n",
    "Superclass: vtkImageSlice\n\n",
    "vtkImageActor is used to render an image in a 3D scene.  The image is\nplaced at the origin of the image, and its size is controlled by the\nimage dimensions and image spacing. The orientation of the image is\northogonal to one of the x-y-z axes depending on which plane the\nimage is defined in.  This class has been mostly superseded by the\nvtkImageSlice class, which provides more functionality than\nv",
    "tkImageActor.\n\nSee Also:\n\nvtkImageData vtkImageSliceMapper vtkImageProperty\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

