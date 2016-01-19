// python wrapper for vtkCubeAxesRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCubeAxesRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCubeAxesRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCubeAxesRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkCubeAxesRepresentation_Doc();


static PyObject *
PyvtkCubeAxesRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCubeAxesRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeAxesRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCubeAxesRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeAxesRepresentation::NewInstance());

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
PyvtkCubeAxesRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCubeAxesRepresentation *tempr = vtkCubeAxesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkCubeAxesRepresentation::GetPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetOrientation_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetOrientation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientation");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkCubeAxesRepresentation::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetScale_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkCubeAxesRepresentation::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataBounds() :
      op->vtkCubeAxesRepresentation::GetDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetCustomBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetCustomBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesRepresentation_SetCustomBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetCustomBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetCustomBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBounds() :
      op->vtkCubeAxesRepresentation::GetCustomBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetCustomBoundsActive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBoundsActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetCustomBoundsActive(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomBoundsActive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomBoundsActive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBoundsActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomBoundsActive(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomBoundsActive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomBoundsActive(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetCustomBoundsActive_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetCustomBoundsActive_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBoundsActive");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetCustomBoundsActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBoundsActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCustomBoundsActive() :
      op->vtkCubeAxesRepresentation::GetCustomBoundsActive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetCustomRangeActive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomRangeActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetCustomRangeActive(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomRangeActive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomRangeActive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomRangeActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomRangeActive(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomRangeActive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomRangeActive(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetCustomRangeActive_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetCustomRangeActive_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomRangeActive");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetCustomRangeActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomRangeActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCustomRangeActive() :
      op->vtkCubeAxesRepresentation::GetCustomRangeActive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetOriginalBoundsRangeActive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalBoundsRangeActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetOriginalBoundsRangeActive(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetOriginalBoundsRangeActive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetOriginalBoundsRangeActive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalBoundsRangeActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOriginalBoundsRangeActive(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetOriginalBoundsRangeActive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetOriginalBoundsRangeActive(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetOriginalBoundsRangeActive_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetOriginalBoundsRangeActive_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginalBoundsRangeActive");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetOriginalBoundsRangeActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalBoundsRangeActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOriginalBoundsRangeActive() :
      op->vtkCubeAxesRepresentation::GetOriginalBoundsRangeActive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetCustomRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetCustomRange(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomRange(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCustomRange(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCustomRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetCustomRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesRepresentation_SetCustomRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetCustomRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_GetCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCustomRange() :
      op->vtkCubeAxesRepresentation::GetCustomRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetColor(temp0);
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
PyvtkCubeAxesRepresentation_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetColor_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkCubeAxesRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkCubeAxesRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetUseDefaultXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultXTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetUseDefaultXTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_GetUseDefaultXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultXTitle() :
      op->vtkCubeAxesRepresentation::GetUseDefaultXTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetUseDefaultYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultYTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetUseDefaultYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_GetUseDefaultYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultYTitle() :
      op->vtkCubeAxesRepresentation::GetUseDefaultYTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetUseDefaultZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultZTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetUseDefaultZTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_GetUseDefaultZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultZTitle() :
      op->vtkCubeAxesRepresentation::GetUseDefaultZTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetXTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetZTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlyMode(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetFlyMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInertia(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetInertia(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffset(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocation(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetTickLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetXAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetXAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetXAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawXGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetDrawXGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetYAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetYAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetYAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawYGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetDrawYGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetZAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetZAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetZAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawZGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetDrawZGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridLineLocation(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetGridLineLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetUseOfAxesOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOfAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOfAxesOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetUseOfAxesOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetAxesOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

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
      op->SetAxesOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetAxesOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesRepresentation_SetAxesOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetAxesOrigin(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetAxesOrigin(temp0);
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
PyvtkCubeAxesRepresentation_SetAxesOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCubeAxesRepresentation_SetAxesOrigin_s1(self, args);
    case 1:
      return PyvtkCubeAxesRepresentation_SetAxesOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxesOrigin");
  return NULL;
}



static PyObject *
PyvtkCubeAxesRepresentation_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetXLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetYLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetZLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStickyAxes(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetStickyAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesRepresentation_SetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesRepresentation *op = static_cast<vtkCubeAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterStickyAxes(temp0);
      }
    else
      {
      op->vtkCubeAxesRepresentation::SetCenterStickyAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCubeAxesRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCubeAxesRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCubeAxesRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCubeAxesRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCubeAxesRepresentation\nC++: vtkCubeAxesRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCubeAxesRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCubeAxesRepresentation\nC++: vtkCubeAxesRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkCubeAxesRepresentation_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {(char*)"GetPosition", PyvtkCubeAxesRepresentation_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\n"},
  {(char*)"SetOrientation", PyvtkCubeAxesRepresentation_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\nV.SetOrientation((float, float, float))\nC++: void SetOrientation(double a[3])\n\n"},
  {(char*)"GetOrientation", PyvtkCubeAxesRepresentation_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\n\n"},
  {(char*)"SetScale", PyvtkCubeAxesRepresentation_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {(char*)"GetScale", PyvtkCubeAxesRepresentation_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\n"},
  {(char*)"GetDataBounds", PyvtkCubeAxesRepresentation_GetDataBounds, METH_VARARGS,
   (char*)"V.GetDataBounds() -> (float, float, float, float, float, float)\nC++: double *GetDataBounds()\n\n"},
  {(char*)"SetCustomBounds", PyvtkCubeAxesRepresentation_SetCustomBounds, METH_VARARGS,
   (char*)"V.SetCustomBounds(float, float, float, float, float, float)\nC++: void SetCustomBounds(double, double, double, double, double,\n    double)\nV.SetCustomBounds((float, float, float, float, float, float))\nC++: void SetCustomBounds(double a[6])\n\n"},
  {(char*)"GetCustomBounds", PyvtkCubeAxesRepresentation_GetCustomBounds, METH_VARARGS,
   (char*)"V.GetCustomBounds() -> (float, float, float, float, float, float)\nC++: double *GetCustomBounds()\n\n"},
  {(char*)"SetCustomBoundsActive", PyvtkCubeAxesRepresentation_SetCustomBoundsActive, METH_VARARGS,
   (char*)"V.SetCustomBoundsActive(int, int, int)\nC++: void SetCustomBoundsActive(int, int, int)\nV.SetCustomBoundsActive((int, int, int))\nC++: void SetCustomBoundsActive(int a[3])\n\n"},
  {(char*)"GetCustomBoundsActive", PyvtkCubeAxesRepresentation_GetCustomBoundsActive, METH_VARARGS,
   (char*)"V.GetCustomBoundsActive() -> (int, int, int)\nC++: int *GetCustomBoundsActive()\n\n"},
  {(char*)"SetCustomRangeActive", PyvtkCubeAxesRepresentation_SetCustomRangeActive, METH_VARARGS,
   (char*)"V.SetCustomRangeActive(int, int, int)\nC++: void SetCustomRangeActive(int, int, int)\nV.SetCustomRangeActive((int, int, int))\nC++: void SetCustomRangeActive(int a[3])\n\n"},
  {(char*)"GetCustomRangeActive", PyvtkCubeAxesRepresentation_GetCustomRangeActive, METH_VARARGS,
   (char*)"V.GetCustomRangeActive() -> (int, int, int)\nC++: int *GetCustomRangeActive()\n\n"},
  {(char*)"SetOriginalBoundsRangeActive", PyvtkCubeAxesRepresentation_SetOriginalBoundsRangeActive, METH_VARARGS,
   (char*)"V.SetOriginalBoundsRangeActive(int, int, int)\nC++: void SetOriginalBoundsRangeActive(int, int, int)\nV.SetOriginalBoundsRangeActive((int, int, int))\nC++: void SetOriginalBoundsRangeActive(int a[3])\n\n"},
  {(char*)"GetOriginalBoundsRangeActive", PyvtkCubeAxesRepresentation_GetOriginalBoundsRangeActive, METH_VARARGS,
   (char*)"V.GetOriginalBoundsRangeActive() -> (int, int, int)\nC++: int *GetOriginalBoundsRangeActive()\n\n"},
  {(char*)"SetCustomRange", PyvtkCubeAxesRepresentation_SetCustomRange, METH_VARARGS,
   (char*)"V.SetCustomRange(float, float, float, float, float, float)\nC++: void SetCustomRange(double, double, double, double, double,\n    double)\nV.SetCustomRange((float, float, float, float, float, float))\nC++: void SetCustomRange(double a[6])\n\n"},
  {(char*)"GetCustomRange", PyvtkCubeAxesRepresentation_GetCustomRange, METH_VARARGS,
   (char*)"V.GetCustomRange() -> (float, float, float, float, float, float)\nC++: double *GetCustomRange()\n\n"},
  {(char*)"SetColor", PyvtkCubeAxesRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\nV.SetColor([float, float, float])\nC++: virtual void SetColor(double rgb[3])\n\nSet the actor color.\n"},
  {(char*)"MarkModified", PyvtkCubeAxesRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkCubeAxesRepresentation when the input is modified.\n"},
  {(char*)"ProcessViewRequest", PyvtkCubeAxesRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {(char*)"SetVisibility", PyvtkCubeAxesRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation.\n"},
  {(char*)"SetUseDefaultXTitle", PyvtkCubeAxesRepresentation_SetUseDefaultXTitle, METH_VARARGS,
   (char*)"V.SetUseDefaultXTitle(int)\nC++: void SetUseDefaultXTitle(int a)\n\nAllow user to specify custom XYZAxisRanges based on arbitrary\nnumber\n"},
  {(char*)"GetUseDefaultXTitle", PyvtkCubeAxesRepresentation_GetUseDefaultXTitle, METH_VARARGS,
   (char*)"V.GetUseDefaultXTitle() -> int\nC++: int GetUseDefaultXTitle()\n\nAllow user to specify custom XYZAxisRanges based on arbitrary\nnumber\n"},
  {(char*)"SetUseDefaultYTitle", PyvtkCubeAxesRepresentation_SetUseDefaultYTitle, METH_VARARGS,
   (char*)"V.SetUseDefaultYTitle(int)\nC++: void SetUseDefaultYTitle(int a)\n\nEnable/Disable the usage of the FieldData to override the YTitle\nvalue.\n"},
  {(char*)"GetUseDefaultYTitle", PyvtkCubeAxesRepresentation_GetUseDefaultYTitle, METH_VARARGS,
   (char*)"V.GetUseDefaultYTitle() -> int\nC++: int GetUseDefaultYTitle()\n\nEnable/Disable the usage of the FieldData to override the YTitle\nvalue.\n"},
  {(char*)"SetUseDefaultZTitle", PyvtkCubeAxesRepresentation_SetUseDefaultZTitle, METH_VARARGS,
   (char*)"V.SetUseDefaultZTitle(int)\nC++: void SetUseDefaultZTitle(int a)\n\nEnable/Disable the usage of the FieldData to override the ZTitle\nvalue.\n"},
  {(char*)"GetUseDefaultZTitle", PyvtkCubeAxesRepresentation_GetUseDefaultZTitle, METH_VARARGS,
   (char*)"V.GetUseDefaultZTitle() -> int\nC++: int GetUseDefaultZTitle()\n\nEnable/Disable the usage of the FieldData to override the ZTitle\nvalue.\n"},
  {(char*)"SetXTitle", PyvtkCubeAxesRepresentation_SetXTitle, METH_VARARGS,
   (char*)"V.SetXTitle(string)\nC++: virtual void SetXTitle(const char *val)\n\nSet the user defined title that could be use it\nUseDefaultXTitle=0\n"},
  {(char*)"SetYTitle", PyvtkCubeAxesRepresentation_SetYTitle, METH_VARARGS,
   (char*)"V.SetYTitle(string)\nC++: virtual void SetYTitle(const char *val)\n\nSet the user defined title that could be use it\nUseDefaultYTitle=0\n"},
  {(char*)"SetZTitle", PyvtkCubeAxesRepresentation_SetZTitle, METH_VARARGS,
   (char*)"V.SetZTitle(string)\nC++: virtual void SetZTitle(const char *val)\n\nSet the user defined title that could be use it\nUseDefaultZTitle=0\n"},
  {(char*)"SetFlyMode", PyvtkCubeAxesRepresentation_SetFlyMode, METH_VARARGS,
   (char*)"V.SetFlyMode(int)\nC++: virtual void SetFlyMode(int val)\n\n"},
  {(char*)"SetInertia", PyvtkCubeAxesRepresentation_SetInertia, METH_VARARGS,
   (char*)"V.SetInertia(int)\nC++: virtual void SetInertia(int val)\n\n"},
  {(char*)"SetCornerOffset", PyvtkCubeAxesRepresentation_SetCornerOffset, METH_VARARGS,
   (char*)"V.SetCornerOffset(float)\nC++: virtual void SetCornerOffset(double val)\n\n"},
  {(char*)"SetTickLocation", PyvtkCubeAxesRepresentation_SetTickLocation, METH_VARARGS,
   (char*)"V.SetTickLocation(int)\nC++: virtual void SetTickLocation(int val)\n\n"},
  {(char*)"SetXAxisVisibility", PyvtkCubeAxesRepresentation_SetXAxisVisibility, METH_VARARGS,
   (char*)"V.SetXAxisVisibility(int)\nC++: virtual void SetXAxisVisibility(int val)\n\n"},
  {(char*)"SetXAxisTickVisibility", PyvtkCubeAxesRepresentation_SetXAxisTickVisibility, METH_VARARGS,
   (char*)"V.SetXAxisTickVisibility(int)\nC++: virtual void SetXAxisTickVisibility(int val)\n\n"},
  {(char*)"SetXAxisMinorTickVisibility", PyvtkCubeAxesRepresentation_SetXAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.SetXAxisMinorTickVisibility(int)\nC++: virtual void SetXAxisMinorTickVisibility(int val)\n\n"},
  {(char*)"SetDrawXGridlines", PyvtkCubeAxesRepresentation_SetDrawXGridlines, METH_VARARGS,
   (char*)"V.SetDrawXGridlines(int)\nC++: virtual void SetDrawXGridlines(int val)\n\n"},
  {(char*)"SetYAxisVisibility", PyvtkCubeAxesRepresentation_SetYAxisVisibility, METH_VARARGS,
   (char*)"V.SetYAxisVisibility(int)\nC++: virtual void SetYAxisVisibility(int val)\n\n"},
  {(char*)"SetYAxisTickVisibility", PyvtkCubeAxesRepresentation_SetYAxisTickVisibility, METH_VARARGS,
   (char*)"V.SetYAxisTickVisibility(int)\nC++: virtual void SetYAxisTickVisibility(int val)\n\n"},
  {(char*)"SetYAxisMinorTickVisibility", PyvtkCubeAxesRepresentation_SetYAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.SetYAxisMinorTickVisibility(int)\nC++: virtual void SetYAxisMinorTickVisibility(int val)\n\n"},
  {(char*)"SetDrawYGridlines", PyvtkCubeAxesRepresentation_SetDrawYGridlines, METH_VARARGS,
   (char*)"V.SetDrawYGridlines(int)\nC++: virtual void SetDrawYGridlines(int val)\n\n"},
  {(char*)"SetZAxisVisibility", PyvtkCubeAxesRepresentation_SetZAxisVisibility, METH_VARARGS,
   (char*)"V.SetZAxisVisibility(int)\nC++: virtual void SetZAxisVisibility(int val)\n\n"},
  {(char*)"SetZAxisTickVisibility", PyvtkCubeAxesRepresentation_SetZAxisTickVisibility, METH_VARARGS,
   (char*)"V.SetZAxisTickVisibility(int)\nC++: virtual void SetZAxisTickVisibility(int val)\n\n"},
  {(char*)"SetZAxisMinorTickVisibility", PyvtkCubeAxesRepresentation_SetZAxisMinorTickVisibility, METH_VARARGS,
   (char*)"V.SetZAxisMinorTickVisibility(int)\nC++: virtual void SetZAxisMinorTickVisibility(int val)\n\n"},
  {(char*)"SetDrawZGridlines", PyvtkCubeAxesRepresentation_SetDrawZGridlines, METH_VARARGS,
   (char*)"V.SetDrawZGridlines(int)\nC++: virtual void SetDrawZGridlines(int val)\n\n"},
  {(char*)"SetGridLineLocation", PyvtkCubeAxesRepresentation_SetGridLineLocation, METH_VARARGS,
   (char*)"V.SetGridLineLocation(int)\nC++: virtual void SetGridLineLocation(int val)\n\n"},
  {(char*)"SetUseOfAxesOrigin", PyvtkCubeAxesRepresentation_SetUseOfAxesOrigin, METH_VARARGS,
   (char*)"V.SetUseOfAxesOrigin(int)\nC++: virtual void SetUseOfAxesOrigin(int val)\n\n"},
  {(char*)"SetAxesOrigin", PyvtkCubeAxesRepresentation_SetAxesOrigin, METH_VARARGS,
   (char*)"V.SetAxesOrigin(float, float, float)\nC++: virtual void SetAxesOrigin(double valX, double valY,\n    double valZ)\nV.SetAxesOrigin([float, float, float])\nC++: virtual void SetAxesOrigin(double val[3])\n\n"},
  {(char*)"SetXLabelFormat", PyvtkCubeAxesRepresentation_SetXLabelFormat, METH_VARARGS,
   (char*)"V.SetXLabelFormat(string)\nC++: virtual void SetXLabelFormat(const char *format)\n\n"},
  {(char*)"SetYLabelFormat", PyvtkCubeAxesRepresentation_SetYLabelFormat, METH_VARARGS,
   (char*)"V.SetYLabelFormat(string)\nC++: virtual void SetYLabelFormat(const char *format)\n\n"},
  {(char*)"SetZLabelFormat", PyvtkCubeAxesRepresentation_SetZLabelFormat, METH_VARARGS,
   (char*)"V.SetZLabelFormat(string)\nC++: virtual void SetZLabelFormat(const char *format)\n\n"},
  {(char*)"SetStickyAxes", PyvtkCubeAxesRepresentation_SetStickyAxes, METH_VARARGS,
   (char*)"V.SetStickyAxes(int)\nC++: virtual void SetStickyAxes(int val)\n\n"},
  {(char*)"SetCenterStickyAxes", PyvtkCubeAxesRepresentation_SetCenterStickyAxes, METH_VARARGS,
   (char*)"V.SetCenterStickyAxes(int)\nC++: virtual void SetCenterStickyAxes(int val)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCubeAxesRepresentation_StaticNew()
{
  return vtkCubeAxesRepresentation::New();
}

PyObject *PyVTKClass_vtkCubeAxesRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCubeAxesRepresentation_StaticNew,
    PyvtkCubeAxesRepresentation_Methods,
    "vtkCubeAxesRepresentation", modulename,
    NULL, NULL,
    PyvtkCubeAxesRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkCubeAxesRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCubeAxesRepresentation - representation for a cube-axes.\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkCubeAxesRepresentation is a representation for the Cube-Axes that\nshows a bounding box with labels around any input dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCubeAxesRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCubeAxesRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCubeAxesRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

