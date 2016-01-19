// python wrapper for vtkAxisActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAxisFollower.h"
#include "vtkProp3DAxisFollower.h"
#include "vtkAxisActor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAxisActor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAxisActorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkAxisActor_Doc();


static PyObject *
PyvtkAxisActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAxisActor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisActor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisActor::NewInstance());

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
PyvtkAxisActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAxisActor *tempr = vtkAxisActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkAxisActor::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkAxisActor::SetPoint1(temp0);
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
PyvtkAxisActor_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxisActor::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetPoint1_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxisActor::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkAxisActor::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkAxisActor::SetPoint2(temp0);
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
PyvtkAxisActor_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxisActor::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetPoint2_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxisActor::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkAxisActor::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxisActor_SetRange_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkAxisActor::GetRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkAxisActor::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkAxisActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetBounds_s1(self, args);
    case 6:
      return PyvtkAxisActor_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAxisActor::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::GetBounds(temp0);
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
PyvtkAxisActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAxisActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkAxisActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAxisActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxisActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTextActor3D(temp0);
      }
    else
      {
      op->vtkAxisActor::SetUseTextActor3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseTextActor3D() :
      op->vtkAxisActor::GetUseTextActor3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorTicksVisible(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorTicksVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinorTicksVisible() :
      op->vtkAxisActor::GetMinorTicksVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MinorTicksVisibleOn();
      }
    else
      {
      op->vtkAxisActor::MinorTicksVisibleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MinorTicksVisibleOff();
      }
    else
      {
      op->vtkAxisActor::MinorTicksVisibleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxisActor::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMajorTickSize(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMajorTickSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMajorTickSize() :
      op->vtkAxisActor::GetMajorTickSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorTickSize(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorTickSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinorTickSize() :
      op->vtkAxisActor::GetMinorTickSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTickLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkAxisActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkAxisActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkAxisActor::GetTickLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToInside();
      }
    else
      {
      op->vtkAxisActor::SetTickLocationToInside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToOutside();
      }
    else
      {
      op->vtkAxisActor::SetTickLocationToOutside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToBoth();
      }
    else
      {
      op->vtkAxisActor::SetTickLocationToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisVisibility() :
      op->vtkAxisActor::GetAxisVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::AxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::AxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTickVisibility() :
      op->vtkAxisActor::GetTickVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TickVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::TickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TickVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::TickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkAxisActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkAxisActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::TitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::TitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkAxisActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkAxisActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetAxisLinesProperty(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisLinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisLinesProperty() :
      op->vtkAxisActor::GetAxisLinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetGridlinesProperty(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetGridlinesProperty() :
      op->vtkAxisActor::GetGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetInnerGridlinesProperty(temp0);
      }
    else
      {
      op->vtkAxisActor::SetInnerGridlinesProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetInnerGridlinesProperty() :
      op->vtkAxisActor::GetInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetGridpolysProperty(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridpolysProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetGridpolysProperty() :
      op->vtkAxisActor::GetGridpolysProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawGridlines(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDrawGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlines() :
      op->vtkAxisActor::GetDrawGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridlinesOn();
      }
    else
      {
      op->vtkAxisActor::DrawGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridlinesOff();
      }
    else
      {
      op->vtkAxisActor::DrawGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlinesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlinesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawGridlinesOnly(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDrawGridlinesOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlinesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlinesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlinesOnly() :
      op->vtkAxisActor::GetDrawGridlinesOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridlinesOnlyOn();
      }
    else
      {
      op->vtkAxisActor::DrawGridlinesOnlyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridlinesOnlyOff();
      }
    else
      {
      op->vtkAxisActor::DrawGridlinesOnlyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlinesLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlinesLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawGridlinesLocation(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDrawGridlinesLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlinesLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlinesLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlinesLocation() :
      op->vtkAxisActor::GetDrawGridlinesLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawInnerGridlines(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDrawInnerGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawInnerGridlines() :
      op->vtkAxisActor::GetDrawInnerGridlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawInnerGridlinesOn();
      }
    else
      {
      op->vtkAxisActor::DrawInnerGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawInnerGridlinesOff();
      }
    else
      {
      op->vtkAxisActor::DrawInnerGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridlineXLength(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlineXLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGridlineXLength() :
      op->vtkAxisActor::GetGridlineXLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridlineYLength(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlineYLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGridlineYLength() :
      op->vtkAxisActor::GetGridlineYLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridlineZLength(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlineZLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGridlineZLength() :
      op->vtkAxisActor::GetGridlineZLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawGridpolys(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDrawGridpolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridpolys() :
      op->vtkAxisActor::GetDrawGridpolys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridpolysOn();
      }
    else
      {
      op->vtkAxisActor::DrawGridpolysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridpolysOff();
      }
    else
      {
      op->vtkAxisActor::DrawGridpolysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisType(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisTypeMinValue() :
      op->vtkAxisActor::GetAxisTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisTypeMaxValue() :
      op->vtkAxisActor::GetAxisTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisType() :
      op->vtkAxisActor::GetAxisType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTypeToX();
      }
    else
      {
      op->vtkAxisActor::SetAxisTypeToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTypeToY();
      }
    else
      {
      op->vtkAxisActor::SetAxisTypeToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTypeToZ();
      }
    else
      {
      op->vtkAxisActor::SetAxisTypeToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPosition(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisPositionMinValue() :
      op->vtkAxisActor::GetAxisPositionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisPositionMaxValue() :
      op->vtkAxisActor::GetAxisPositionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisPosition() :
      op->vtkAxisActor::GetAxisPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMinMin();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMinMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMinMax();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMinMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMaxMax();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMaxMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMaxMin();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMaxMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkAxisActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkAxisActor::GetCamera());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxisActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentGeometry(temp0) :
      op->vtkAxisActor::RenderTranslucentGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxisActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAxisActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAxisActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeMaxLabelLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaxLabelLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = (ap.IsBound() ?
      op->ComputeMaxLabelLength(temp0) :
      op->vtkAxisActor::ComputeMaxLabelLength(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeTitleLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTitleLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    double tempr = (ap.IsBound() ?
      op->ComputeTitleLength(temp0) :
      op->vtkAxisActor::ComputeTitleLength(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelScale(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLabelScale(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::SetLabelScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetLabelScale_s1(self, args);
    case 2:
      return PyvtkAxisActor_SetLabelScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return NULL;
}



static PyObject *
PyvtkAxisActor_SetTitleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleScale(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTitleScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinorStart() :
      op->vtkAxisActor::GetMinorStart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMajorStart(temp0) :
      op->vtkAxisActor::GetMajorStart(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMajorStart(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::SetMajorStart(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaMinor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaMinor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDeltaMinor() :
      op->vtkAxisActor::GetDeltaMinor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDeltaMajor(temp0) :
      op->vtkAxisActor::GetDeltaMajor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDeltaMajor(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::SetDeltaMajor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorRangeStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorRangeStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinorRangeStart() :
      op->vtkAxisActor::GetMinorRangeStart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMajorRangeStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMajorRangeStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMajorRangeStart() :
      op->vtkAxisActor::GetMajorRangeStart());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaRangeMinor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaRangeMinor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMinor() :
      op->vtkAxisActor::GetDeltaRangeMinor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaRangeMajor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaRangeMajor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMajor() :
      op->vtkAxisActor::GetDeltaRangeMajor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetLabels(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_BuildAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->BuildAxis(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::BuildAxis(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->GetTitleActor() :
      op->vtkAxisActor::GetTitleActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->GetTitleProp3D() :
      op->vtkAxisActor::GetTitleProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetNumberOfLabelsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsBuilt() :
      op->vtkAxisActor::GetNumberOfLabelsBuilt());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCalculateTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalculateTitleOffset(temp0);
      }
    else
      {
      op->vtkAxisActor::SetCalculateTitleOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCalculateTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCalculateTitleOffset() :
      op->vtkAxisActor::GetCalculateTitleOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateTitleOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTitleOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CalculateTitleOffsetOn();
      }
    else
      {
      op->vtkAxisActor::CalculateTitleOffsetOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateTitleOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTitleOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CalculateTitleOffsetOff();
      }
    else
      {
      op->vtkAxisActor::CalculateTitleOffsetOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCalculateLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalculateLabelOffset(temp0);
      }
    else
      {
      op->vtkAxisActor::SetCalculateLabelOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCalculateLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCalculateLabelOffset() :
      op->vtkAxisActor::GetCalculateLabelOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateLabelOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateLabelOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CalculateLabelOffsetOn();
      }
    else
      {
      op->vtkAxisActor::CalculateLabelOffsetOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateLabelOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateLabelOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CalculateLabelOffsetOff();
      }
    else
      {
      op->vtkAxisActor::CalculateLabelOffsetOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUse2DMode(temp0);
      }
    else
      {
      op->vtkAxisActor::SetUse2DMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkAxisActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetVerticalOffsetXTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalOffsetXTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalOffsetXTitle2D(temp0);
      }
    else
      {
      op->vtkAxisActor::SetVerticalOffsetXTitle2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetVerticalOffsetXTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalOffsetXTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVerticalOffsetXTitle2D() :
      op->vtkAxisActor::GetVerticalOffsetXTitle2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetHorizontalOffsetYTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalOffsetYTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHorizontalOffsetYTitle2D(temp0);
      }
    else
      {
      op->vtkAxisActor::SetHorizontalOffsetYTitle2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetHorizontalOffsetYTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalOffsetYTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHorizontalOffsetYTitle2D() :
      op->vtkAxisActor::GetHorizontalOffsetYTitle2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSaveTitlePosition(temp0);
      }
    else
      {
      op->vtkAxisActor::SetSaveTitlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSaveTitlePosition() :
      op->vtkAxisActor::GetSaveTitlePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetAxisBaseForX(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxisActor::SetAxisBaseForX(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisBaseForX(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisBaseForX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForX_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForX_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForX");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetAxisBaseForX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForX() :
      op->vtkAxisActor::GetAxisBaseForX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetAxisBaseForY(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxisActor::SetAxisBaseForY(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisBaseForY(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisBaseForY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForY_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForY");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetAxisBaseForY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForY() :
      op->vtkAxisActor::GetAxisBaseForY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetAxisBaseForZ(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAxisActor::SetAxisBaseForZ(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisBaseForZ(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisBaseForZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForZ_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForZ_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForZ");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetAxisBaseForZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForZ() :
      op->vtkAxisActor::GetAxisBaseForZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisOnOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOnOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisOnOrigin(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisOnOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisOnOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOnOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAxisOnOrigin() :
      op->vtkAxisActor::GetAxisOnOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelOffset(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkAxisActor::GetLabelOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleOffset(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTitleOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTitleOffset() :
      op->vtkAxisActor::GetTitleOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenSize(temp0);
      }
    else
      {
      op->vtkAxisActor::SetScreenSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkAxisActor::GetScreenSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAxisActor_Methods[] = {
  {(char*)"GetClassName", PyvtkAxisActor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxisActor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxisActor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAxisActor\nC++: vtkAxisActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxisActor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxisActor\nC++: vtkAxisActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPoint1Coordinate", PyvtkAxisActor_GetPoint1Coordinate, METH_VARARGS,
   (char*)"V.GetPoint1Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint1Coordinate()\n\nSpecify the position of the first point defining the axis.\n"},
  {(char*)"SetPoint1", PyvtkAxisActor_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1([float, float, float])\nC++: virtual void SetPoint1(double x[3])\nV.SetPoint1(float, float, float)\nC++: virtual void SetPoint1(double x, double y, double z)\n\nSpecify the position of the first point defining the axis.\n"},
  {(char*)"GetPoint1", PyvtkAxisActor_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (float, ...)\nC++: virtual double *GetPoint1()\n\nSpecify the position of the first point defining the axis.\n"},
  {(char*)"GetPoint2Coordinate", PyvtkAxisActor_GetPoint2Coordinate, METH_VARARGS,
   (char*)"V.GetPoint2Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint2Coordinate()\n\nSpecify the position of the second point defining the axis.\n"},
  {(char*)"SetPoint2", PyvtkAxisActor_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2([float, float, float])\nC++: virtual void SetPoint2(double x[3])\nV.SetPoint2(float, float, float)\nC++: virtual void SetPoint2(double x, double y, double z)\n\nSpecify the position of the second point defining the axis.\n"},
  {(char*)"GetPoint2", PyvtkAxisActor_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (float, ...)\nC++: virtual double *GetPoint2()\n\nSpecify the position of the second point defining the axis.\n"},
  {(char*)"SetRange", PyvtkAxisActor_SetRange, METH_VARARGS,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkAxisActor_GetRange, METH_VARARGS,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify the (min,max) axis range. This will be used in the\ngeneration of labels, if labels are visible.\n"},
  {(char*)"SetBounds", PyvtkAxisActor_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\nV.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"GetBounds", PyvtkAxisActor_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds(void)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"SetLabelFormat", PyvtkAxisActor_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {(char*)"GetLabelFormat", PyvtkAxisActor_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {(char*)"SetUseTextActor3D", PyvtkAxisActor_SetUseTextActor3D, METH_VARARGS,
   (char*)"V.SetUseTextActor3D(int)\nC++: void SetUseTextActor3D(int a)\n\nRender text as polygons (vtkVectorText) or as sprites\n(vtkTextActor3D). In 2D mode, the value is ignored and text is\nrendered as vtkTextActor. False(0) by default. See Also:\nGetUse2DMode(), SetUse2DMode\n"},
  {(char*)"GetUseTextActor3D", PyvtkAxisActor_GetUseTextActor3D, METH_VARARGS,
   (char*)"V.GetUseTextActor3D() -> int\nC++: int GetUseTextActor3D()\n\nRender text as polygons (vtkVectorText) or as sprites\n(vtkTextActor3D). In 2D mode, the value is ignored and text is\nrendered as vtkTextActor. False(0) by default. See Also:\nGetUse2DMode(), SetUse2DMode\n"},
  {(char*)"SetMinorTicksVisible", PyvtkAxisActor_SetMinorTicksVisible, METH_VARARGS,
   (char*)"V.SetMinorTicksVisible(int)\nC++: void SetMinorTicksVisible(int a)\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"GetMinorTicksVisible", PyvtkAxisActor_GetMinorTicksVisible, METH_VARARGS,
   (char*)"V.GetMinorTicksVisible() -> int\nC++: int GetMinorTicksVisible()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"MinorTicksVisibleOn", PyvtkAxisActor_MinorTicksVisibleOn, METH_VARARGS,
   (char*)"V.MinorTicksVisibleOn()\nC++: void MinorTicksVisibleOn()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"MinorTicksVisibleOff", PyvtkAxisActor_MinorTicksVisibleOff, METH_VARARGS,
   (char*)"V.MinorTicksVisibleOff()\nC++: void MinorTicksVisibleOff()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"SetTitle", PyvtkAxisActor_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(const char *t)\n\nSet/Get the title of the axis actor,\n"},
  {(char*)"GetTitle", PyvtkAxisActor_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the axis actor,\n"},
  {(char*)"SetMajorTickSize", PyvtkAxisActor_SetMajorTickSize, METH_VARARGS,
   (char*)"V.SetMajorTickSize(float)\nC++: void SetMajorTickSize(double a)\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"GetMajorTickSize", PyvtkAxisActor_GetMajorTickSize, METH_VARARGS,
   (char*)"V.GetMajorTickSize() -> float\nC++: double GetMajorTickSize()\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"SetMinorTickSize", PyvtkAxisActor_SetMinorTickSize, METH_VARARGS,
   (char*)"V.SetMinorTickSize(float)\nC++: void SetMinorTickSize(double a)\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"GetMinorTickSize", PyvtkAxisActor_GetMinorTickSize, METH_VARARGS,
   (char*)"V.GetMinorTickSize() -> float\nC++: double GetMinorTickSize()\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"SetTickLocation", PyvtkAxisActor_SetTickLocation, METH_VARARGS,
   (char*)"V.SetTickLocation(int)\nC++: void SetTickLocation(int)\n\nSet/Get the location of the ticks.\n"},
  {(char*)"GetTickLocationMinValue", PyvtkAxisActor_GetTickLocationMinValue, METH_VARARGS,
   (char*)"V.GetTickLocationMinValue() -> int\nC++: int GetTickLocationMinValue()\n\nSet/Get the location of the ticks.\n"},
  {(char*)"GetTickLocationMaxValue", PyvtkAxisActor_GetTickLocationMaxValue, METH_VARARGS,
   (char*)"V.GetTickLocationMaxValue() -> int\nC++: int GetTickLocationMaxValue()\n\nSet/Get the location of the ticks.\n"},
  {(char*)"GetTickLocation", PyvtkAxisActor_GetTickLocation, METH_VARARGS,
   (char*)"V.GetTickLocation() -> int\nC++: int GetTickLocation()\n\nSet/Get the location of the ticks.\n"},
  {(char*)"SetTickLocationToInside", PyvtkAxisActor_SetTickLocationToInside, METH_VARARGS,
   (char*)"V.SetTickLocationToInside()\nC++: void SetTickLocationToInside(void)\n\n"},
  {(char*)"SetTickLocationToOutside", PyvtkAxisActor_SetTickLocationToOutside, METH_VARARGS,
   (char*)"V.SetTickLocationToOutside()\nC++: void SetTickLocationToOutside(void)\n\n"},
  {(char*)"SetTickLocationToBoth", PyvtkAxisActor_SetTickLocationToBoth, METH_VARARGS,
   (char*)"V.SetTickLocationToBoth()\nC++: void SetTickLocationToBoth(void)\n\n"},
  {(char*)"SetAxisVisibility", PyvtkAxisActor_SetAxisVisibility, METH_VARARGS,
   (char*)"V.SetAxisVisibility(int)\nC++: void SetAxisVisibility(int a)\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"GetAxisVisibility", PyvtkAxisActor_GetAxisVisibility, METH_VARARGS,
   (char*)"V.GetAxisVisibility() -> int\nC++: int GetAxisVisibility()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"AxisVisibilityOn", PyvtkAxisActor_AxisVisibilityOn, METH_VARARGS,
   (char*)"V.AxisVisibilityOn()\nC++: void AxisVisibilityOn()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"AxisVisibilityOff", PyvtkAxisActor_AxisVisibilityOff, METH_VARARGS,
   (char*)"V.AxisVisibilityOff()\nC++: void AxisVisibilityOff()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"SetTickVisibility", PyvtkAxisActor_SetTickVisibility, METH_VARARGS,
   (char*)"V.SetTickVisibility(int)\nC++: void SetTickVisibility(int a)\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"GetTickVisibility", PyvtkAxisActor_GetTickVisibility, METH_VARARGS,
   (char*)"V.GetTickVisibility() -> int\nC++: int GetTickVisibility()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"TickVisibilityOn", PyvtkAxisActor_TickVisibilityOn, METH_VARARGS,
   (char*)"V.TickVisibilityOn()\nC++: void TickVisibilityOn()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"TickVisibilityOff", PyvtkAxisActor_TickVisibilityOff, METH_VARARGS,
   (char*)"V.TickVisibilityOff()\nC++: void TickVisibilityOff()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"SetLabelVisibility", PyvtkAxisActor_SetLabelVisibility, METH_VARARGS,
   (char*)"V.SetLabelVisibility(int)\nC++: void SetLabelVisibility(int a)\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"GetLabelVisibility", PyvtkAxisActor_GetLabelVisibility, METH_VARARGS,
   (char*)"V.GetLabelVisibility() -> int\nC++: int GetLabelVisibility()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"LabelVisibilityOn", PyvtkAxisActor_LabelVisibilityOn, METH_VARARGS,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"LabelVisibilityOff", PyvtkAxisActor_LabelVisibilityOff, METH_VARARGS,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"SetTitleVisibility", PyvtkAxisActor_SetTitleVisibility, METH_VARARGS,
   (char*)"V.SetTitleVisibility(int)\nC++: void SetTitleVisibility(int a)\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"GetTitleVisibility", PyvtkAxisActor_GetTitleVisibility, METH_VARARGS,
   (char*)"V.GetTitleVisibility() -> int\nC++: int GetTitleVisibility()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"TitleVisibilityOn", PyvtkAxisActor_TitleVisibilityOn, METH_VARARGS,
   (char*)"V.TitleVisibilityOn()\nC++: void TitleVisibilityOn()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"TitleVisibilityOff", PyvtkAxisActor_TitleVisibilityOff, METH_VARARGS,
   (char*)"V.TitleVisibilityOff()\nC++: void TitleVisibilityOff()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"SetTitleTextProperty", PyvtkAxisActor_SetTitleTextProperty, METH_VARARGS,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the axis title text property.\n"},
  {(char*)"GetTitleTextProperty", PyvtkAxisActor_GetTitleTextProperty, METH_VARARGS,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the axis title text property.\n"},
  {(char*)"SetLabelTextProperty", PyvtkAxisActor_SetLabelTextProperty, METH_VARARGS,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the axis labels text property.\n"},
  {(char*)"GetLabelTextProperty", PyvtkAxisActor_GetLabelTextProperty, METH_VARARGS,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the axis labels text property.\n"},
  {(char*)"SetAxisLinesProperty", PyvtkAxisActor_SetAxisLinesProperty, METH_VARARGS,
   (char*)"V.SetAxisLinesProperty(vtkProperty)\nC++: void SetAxisLinesProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {(char*)"GetAxisLinesProperty", PyvtkAxisActor_GetAxisLinesProperty, METH_VARARGS,
   (char*)"V.GetAxisLinesProperty() -> vtkProperty\nC++: vtkProperty *GetAxisLinesProperty()\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {(char*)"SetGridlinesProperty", PyvtkAxisActor_SetGridlinesProperty, METH_VARARGS,
   (char*)"V.SetGridlinesProperty(vtkProperty)\nC++: void SetGridlinesProperty(vtkProperty *)\n\nGet/Set gridlines actor property (outer grid lines)\n"},
  {(char*)"GetGridlinesProperty", PyvtkAxisActor_GetGridlinesProperty, METH_VARARGS,
   (char*)"V.GetGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetGridlinesProperty()\n\nGet/Set gridlines actor property (outer grid lines)\n"},
  {(char*)"SetInnerGridlinesProperty", PyvtkAxisActor_SetInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.SetInnerGridlinesProperty(vtkProperty)\nC++: void SetInnerGridlinesProperty(vtkProperty *)\n\nGet/Set inner gridlines actor property\n"},
  {(char*)"GetInnerGridlinesProperty", PyvtkAxisActor_GetInnerGridlinesProperty, METH_VARARGS,
   (char*)"V.GetInnerGridlinesProperty() -> vtkProperty\nC++: vtkProperty *GetInnerGridlinesProperty()\n\nGet/Set inner gridlines actor property\n"},
  {(char*)"SetGridpolysProperty", PyvtkAxisActor_SetGridpolysProperty, METH_VARARGS,
   (char*)"V.SetGridpolysProperty(vtkProperty)\nC++: void SetGridpolysProperty(vtkProperty *)\n\nGet/Set gridPolys actor property (grid quads)\n"},
  {(char*)"GetGridpolysProperty", PyvtkAxisActor_GetGridpolysProperty, METH_VARARGS,
   (char*)"V.GetGridpolysProperty() -> vtkProperty\nC++: vtkProperty *GetGridpolysProperty()\n\nGet/Set gridPolys actor property (grid quads)\n"},
  {(char*)"SetDrawGridlines", PyvtkAxisActor_SetDrawGridlines, METH_VARARGS,
   (char*)"V.SetDrawGridlines(int)\nC++: void SetDrawGridlines(int a)\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"GetDrawGridlines", PyvtkAxisActor_GetDrawGridlines, METH_VARARGS,
   (char*)"V.GetDrawGridlines() -> int\nC++: int GetDrawGridlines()\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"DrawGridlinesOn", PyvtkAxisActor_DrawGridlinesOn, METH_VARARGS,
   (char*)"V.DrawGridlinesOn()\nC++: void DrawGridlinesOn()\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"DrawGridlinesOff", PyvtkAxisActor_DrawGridlinesOff, METH_VARARGS,
   (char*)"V.DrawGridlinesOff()\nC++: void DrawGridlinesOff()\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"SetDrawGridlinesOnly", PyvtkAxisActor_SetDrawGridlinesOnly, METH_VARARGS,
   (char*)"V.SetDrawGridlinesOnly(int)\nC++: void SetDrawGridlinesOnly(int a)\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {(char*)"GetDrawGridlinesOnly", PyvtkAxisActor_GetDrawGridlinesOnly, METH_VARARGS,
   (char*)"V.GetDrawGridlinesOnly() -> int\nC++: int GetDrawGridlinesOnly()\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {(char*)"DrawGridlinesOnlyOn", PyvtkAxisActor_DrawGridlinesOnlyOn, METH_VARARGS,
   (char*)"V.DrawGridlinesOnlyOn()\nC++: void DrawGridlinesOnlyOn()\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {(char*)"DrawGridlinesOnlyOff", PyvtkAxisActor_DrawGridlinesOnlyOff, METH_VARARGS,
   (char*)"V.DrawGridlinesOnlyOff()\nC++: void DrawGridlinesOnlyOff()\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/...\n"},
  {(char*)"SetDrawGridlinesLocation", PyvtkAxisActor_SetDrawGridlinesLocation, METH_VARARGS,
   (char*)"V.SetDrawGridlinesLocation(int)\nC++: void SetDrawGridlinesLocation(int a)\n\n"},
  {(char*)"GetDrawGridlinesLocation", PyvtkAxisActor_GetDrawGridlinesLocation, METH_VARARGS,
   (char*)"V.GetDrawGridlinesLocation() -> int\nC++: int GetDrawGridlinesLocation()\n\n"},
  {(char*)"SetDrawInnerGridlines", PyvtkAxisActor_SetDrawInnerGridlines, METH_VARARGS,
   (char*)"V.SetDrawInnerGridlines(int)\nC++: void SetDrawInnerGridlines(int a)\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {(char*)"GetDrawInnerGridlines", PyvtkAxisActor_GetDrawInnerGridlines, METH_VARARGS,
   (char*)"V.GetDrawInnerGridlines() -> int\nC++: int GetDrawInnerGridlines()\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {(char*)"DrawInnerGridlinesOn", PyvtkAxisActor_DrawInnerGridlinesOn, METH_VARARGS,
   (char*)"V.DrawInnerGridlinesOn()\nC++: void DrawInnerGridlinesOn()\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {(char*)"DrawInnerGridlinesOff", PyvtkAxisActor_DrawInnerGridlinesOff, METH_VARARGS,
   (char*)"V.DrawInnerGridlinesOff()\nC++: void DrawInnerGridlinesOff()\n\nSet/Get whether inner gridlines should be drawn.\n"},
  {(char*)"SetGridlineXLength", PyvtkAxisActor_SetGridlineXLength, METH_VARARGS,
   (char*)"V.SetGridlineXLength(float)\nC++: void SetGridlineXLength(double a)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"GetGridlineXLength", PyvtkAxisActor_GetGridlineXLength, METH_VARARGS,
   (char*)"V.GetGridlineXLength() -> float\nC++: double GetGridlineXLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"SetGridlineYLength", PyvtkAxisActor_SetGridlineYLength, METH_VARARGS,
   (char*)"V.SetGridlineYLength(float)\nC++: void SetGridlineYLength(double a)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"GetGridlineYLength", PyvtkAxisActor_GetGridlineYLength, METH_VARARGS,
   (char*)"V.GetGridlineYLength() -> float\nC++: double GetGridlineYLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"SetGridlineZLength", PyvtkAxisActor_SetGridlineZLength, METH_VARARGS,
   (char*)"V.SetGridlineZLength(float)\nC++: void SetGridlineZLength(double a)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"GetGridlineZLength", PyvtkAxisActor_GetGridlineZLength, METH_VARARGS,
   (char*)"V.GetGridlineZLength() -> float\nC++: double GetGridlineZLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"SetDrawGridpolys", PyvtkAxisActor_SetDrawGridpolys, METH_VARARGS,
   (char*)"V.SetDrawGridpolys(int)\nC++: void SetDrawGridpolys(int a)\n\nSet/Get whether gridpolys should be drawn.\n"},
  {(char*)"GetDrawGridpolys", PyvtkAxisActor_GetDrawGridpolys, METH_VARARGS,
   (char*)"V.GetDrawGridpolys() -> int\nC++: int GetDrawGridpolys()\n\nSet/Get whether gridpolys should be drawn.\n"},
  {(char*)"DrawGridpolysOn", PyvtkAxisActor_DrawGridpolysOn, METH_VARARGS,
   (char*)"V.DrawGridpolysOn()\nC++: void DrawGridpolysOn()\n\nSet/Get whether gridpolys should be drawn.\n"},
  {(char*)"DrawGridpolysOff", PyvtkAxisActor_DrawGridpolysOff, METH_VARARGS,
   (char*)"V.DrawGridpolysOff()\nC++: void DrawGridpolysOff()\n\nSet/Get whether gridpolys should be drawn.\n"},
  {(char*)"SetAxisType", PyvtkAxisActor_SetAxisType, METH_VARARGS,
   (char*)"V.SetAxisType(int)\nC++: void SetAxisType(int)\n\nSet/Get the type of this axis.\n"},
  {(char*)"GetAxisTypeMinValue", PyvtkAxisActor_GetAxisTypeMinValue, METH_VARARGS,
   (char*)"V.GetAxisTypeMinValue() -> int\nC++: int GetAxisTypeMinValue()\n\nSet/Get the type of this axis.\n"},
  {(char*)"GetAxisTypeMaxValue", PyvtkAxisActor_GetAxisTypeMaxValue, METH_VARARGS,
   (char*)"V.GetAxisTypeMaxValue() -> int\nC++: int GetAxisTypeMaxValue()\n\nSet/Get the type of this axis.\n"},
  {(char*)"GetAxisType", PyvtkAxisActor_GetAxisType, METH_VARARGS,
   (char*)"V.GetAxisType() -> int\nC++: int GetAxisType()\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisTypeToX", PyvtkAxisActor_SetAxisTypeToX, METH_VARARGS,
   (char*)"V.SetAxisTypeToX()\nC++: void SetAxisTypeToX(void)\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisTypeToY", PyvtkAxisActor_SetAxisTypeToY, METH_VARARGS,
   (char*)"V.SetAxisTypeToY()\nC++: void SetAxisTypeToY(void)\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisTypeToZ", PyvtkAxisActor_SetAxisTypeToZ, METH_VARARGS,
   (char*)"V.SetAxisTypeToZ()\nC++: void SetAxisTypeToZ(void)\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisPosition", PyvtkAxisActor_SetAxisPosition, METH_VARARGS,
   (char*)"V.SetAxisPosition(int)\nC++: void SetAxisPosition(int)\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"GetAxisPositionMinValue", PyvtkAxisActor_GetAxisPositionMinValue, METH_VARARGS,
   (char*)"V.GetAxisPositionMinValue() -> int\nC++: int GetAxisPositionMinValue()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"GetAxisPositionMaxValue", PyvtkAxisActor_GetAxisPositionMaxValue, METH_VARARGS,
   (char*)"V.GetAxisPositionMaxValue() -> int\nC++: int GetAxisPositionMaxValue()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"GetAxisPosition", PyvtkAxisActor_GetAxisPosition, METH_VARARGS,
   (char*)"V.GetAxisPosition() -> int\nC++: int GetAxisPosition()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"SetAxisPositionToMinMin", PyvtkAxisActor_SetAxisPositionToMinMin, METH_VARARGS,
   (char*)"V.SetAxisPositionToMinMin()\nC++: void SetAxisPositionToMinMin(void)\n\n"},
  {(char*)"SetAxisPositionToMinMax", PyvtkAxisActor_SetAxisPositionToMinMax, METH_VARARGS,
   (char*)"V.SetAxisPositionToMinMax()\nC++: void SetAxisPositionToMinMax(void)\n\n"},
  {(char*)"SetAxisPositionToMaxMax", PyvtkAxisActor_SetAxisPositionToMaxMax, METH_VARARGS,
   (char*)"V.SetAxisPositionToMaxMax()\nC++: void SetAxisPositionToMaxMax(void)\n\n"},
  {(char*)"SetAxisPositionToMaxMin", PyvtkAxisActor_SetAxisPositionToMaxMin, METH_VARARGS,
   (char*)"V.SetAxisPositionToMaxMin()\nC++: void SetAxisPositionToMaxMin(void)\n\n"},
  {(char*)"SetCamera", PyvtkAxisActor_SetCamera, METH_VARARGS,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {(char*)"GetCamera", PyvtkAxisActor_GetCamera, METH_VARARGS,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAxisActor_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"RenderTranslucentGeometry", PyvtkAxisActor_RenderTranslucentGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkAxisActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"RenderOverlay", PyvtkAxisActor_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkAxisActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry()\n\nDraw the axis.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAxisActor_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"ComputeMaxLabelLength", PyvtkAxisActor_ComputeMaxLabelLength, METH_VARARGS,
   (char*)"V.ComputeMaxLabelLength((float, float, float)) -> float\nC++: double ComputeMaxLabelLength(const double[3])\n\n"},
  {(char*)"ComputeTitleLength", PyvtkAxisActor_ComputeTitleLength, METH_VARARGS,
   (char*)"V.ComputeTitleLength((float, float, float)) -> float\nC++: double ComputeTitleLength(const double[3])\n\n"},
  {(char*)"SetLabelScale", PyvtkAxisActor_SetLabelScale, METH_VARARGS,
   (char*)"V.SetLabelScale(float)\nC++: void SetLabelScale(const double scale)\nV.SetLabelScale(int, float)\nC++: void SetLabelScale(int labelIndex, const double scale)\n\n"},
  {(char*)"SetTitleScale", PyvtkAxisActor_SetTitleScale, METH_VARARGS,
   (char*)"V.SetTitleScale(float)\nC++: void SetTitleScale(const double scale)\n\n"},
  {(char*)"SetMinorStart", PyvtkAxisActor_SetMinorStart, METH_VARARGS,
   (char*)"V.SetMinorStart(float)\nC++: void SetMinorStart(double a)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"GetMinorStart", PyvtkAxisActor_GetMinorStart, METH_VARARGS,
   (char*)"V.GetMinorStart() -> float\nC++: double GetMinorStart()\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"GetMajorStart", PyvtkAxisActor_GetMajorStart, METH_VARARGS,
   (char*)"V.GetMajorStart(int) -> float\nC++: double GetMajorStart(int axis)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"SetMajorStart", PyvtkAxisActor_SetMajorStart, METH_VARARGS,
   (char*)"V.SetMajorStart(int, float)\nC++: void SetMajorStart(int axis, double value)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"SetDeltaMinor", PyvtkAxisActor_SetDeltaMinor, METH_VARARGS,
   (char*)"V.SetDeltaMinor(float)\nC++: void SetDeltaMinor(double a)\n\n"},
  {(char*)"GetDeltaMinor", PyvtkAxisActor_GetDeltaMinor, METH_VARARGS,
   (char*)"V.GetDeltaMinor() -> float\nC++: double GetDeltaMinor()\n\n"},
  {(char*)"GetDeltaMajor", PyvtkAxisActor_GetDeltaMajor, METH_VARARGS,
   (char*)"V.GetDeltaMajor(int) -> float\nC++: double GetDeltaMajor(int axis)\n\n"},
  {(char*)"SetDeltaMajor", PyvtkAxisActor_SetDeltaMajor, METH_VARARGS,
   (char*)"V.SetDeltaMajor(int, float)\nC++: void SetDeltaMajor(int axis, double value)\n\n"},
  {(char*)"SetMinorRangeStart", PyvtkAxisActor_SetMinorRangeStart, METH_VARARGS,
   (char*)"V.SetMinorRangeStart(float)\nC++: void SetMinorRangeStart(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetMinorRangeStart", PyvtkAxisActor_GetMinorRangeStart, METH_VARARGS,
   (char*)"V.GetMinorRangeStart() -> float\nC++: double GetMinorRangeStart()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetMajorRangeStart", PyvtkAxisActor_SetMajorRangeStart, METH_VARARGS,
   (char*)"V.SetMajorRangeStart(float)\nC++: void SetMajorRangeStart(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetMajorRangeStart", PyvtkAxisActor_GetMajorRangeStart, METH_VARARGS,
   (char*)"V.GetMajorRangeStart() -> float\nC++: double GetMajorRangeStart()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetDeltaRangeMinor", PyvtkAxisActor_SetDeltaRangeMinor, METH_VARARGS,
   (char*)"V.SetDeltaRangeMinor(float)\nC++: void SetDeltaRangeMinor(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetDeltaRangeMinor", PyvtkAxisActor_GetDeltaRangeMinor, METH_VARARGS,
   (char*)"V.GetDeltaRangeMinor() -> float\nC++: double GetDeltaRangeMinor()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetDeltaRangeMajor", PyvtkAxisActor_SetDeltaRangeMajor, METH_VARARGS,
   (char*)"V.SetDeltaRangeMajor(float)\nC++: void SetDeltaRangeMajor(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetDeltaRangeMajor", PyvtkAxisActor_GetDeltaRangeMajor, METH_VARARGS,
   (char*)"V.GetDeltaRangeMajor() -> float\nC++: double GetDeltaRangeMajor()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetLabels", PyvtkAxisActor_SetLabels, METH_VARARGS,
   (char*)"V.SetLabels(vtkStringArray)\nC++: void SetLabels(vtkStringArray *labels)\n\n"},
  {(char*)"BuildAxis", PyvtkAxisActor_BuildAxis, METH_VARARGS,
   (char*)"V.BuildAxis(vtkViewport, bool)\nC++: void BuildAxis(vtkViewport *viewport, bool)\n\n"},
  {(char*)"GetTitleActor", PyvtkAxisActor_GetTitleActor, METH_VARARGS,
   (char*)"V.GetTitleActor() -> vtkAxisFollower\nC++: vtkAxisFollower *GetTitleActor()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {(char*)"GetTitleProp3D", PyvtkAxisActor_GetTitleProp3D, METH_VARARGS,
   (char*)"V.GetTitleProp3D() -> vtkProp3DAxisFollower\nC++: vtkProp3DAxisFollower *GetTitleProp3D()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {(char*)"GetNumberOfLabelsBuilt", PyvtkAxisActor_GetNumberOfLabelsBuilt, METH_VARARGS,
   (char*)"V.GetNumberOfLabelsBuilt() -> int\nC++: int GetNumberOfLabelsBuilt()\n\nGet total number of labels built. Once built this count does not\nchange.\n"},
  {(char*)"SetCalculateTitleOffset", PyvtkAxisActor_SetCalculateTitleOffset, METH_VARARGS,
   (char*)"V.SetCalculateTitleOffset(int)\nC++: void SetCalculateTitleOffset(int a)\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {(char*)"GetCalculateTitleOffset", PyvtkAxisActor_GetCalculateTitleOffset, METH_VARARGS,
   (char*)"V.GetCalculateTitleOffset() -> int\nC++: int GetCalculateTitleOffset()\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {(char*)"CalculateTitleOffsetOn", PyvtkAxisActor_CalculateTitleOffsetOn, METH_VARARGS,
   (char*)"V.CalculateTitleOffsetOn()\nC++: void CalculateTitleOffsetOn()\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {(char*)"CalculateTitleOffsetOff", PyvtkAxisActor_CalculateTitleOffsetOff, METH_VARARGS,
   (char*)"V.CalculateTitleOffsetOff()\nC++: void CalculateTitleOffsetOff()\n\nSet/Get flag whether to calculate title offset. Default is true.\n"},
  {(char*)"SetCalculateLabelOffset", PyvtkAxisActor_SetCalculateLabelOffset, METH_VARARGS,
   (char*)"V.SetCalculateLabelOffset(int)\nC++: void SetCalculateLabelOffset(int a)\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {(char*)"GetCalculateLabelOffset", PyvtkAxisActor_GetCalculateLabelOffset, METH_VARARGS,
   (char*)"V.GetCalculateLabelOffset() -> int\nC++: int GetCalculateLabelOffset()\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {(char*)"CalculateLabelOffsetOn", PyvtkAxisActor_CalculateLabelOffsetOn, METH_VARARGS,
   (char*)"V.CalculateLabelOffsetOn()\nC++: void CalculateLabelOffsetOn()\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {(char*)"CalculateLabelOffsetOff", PyvtkAxisActor_CalculateLabelOffsetOff, METH_VARARGS,
   (char*)"V.CalculateLabelOffsetOff()\nC++: void CalculateLabelOffsetOff()\n\nSet/Get flag whether to calculate label offset. Default is true.\n"},
  {(char*)"SetUse2DMode", PyvtkAxisActor_SetUse2DMode, METH_VARARGS,
   (char*)"V.SetUse2DMode(int)\nC++: void SetUse2DMode(int a)\n\nSet/Get the 2D mode\n"},
  {(char*)"GetUse2DMode", PyvtkAxisActor_GetUse2DMode, METH_VARARGS,
   (char*)"V.GetUse2DMode() -> int\nC++: int GetUse2DMode()\n\nSet/Get the 2D mode\n"},
  {(char*)"SetVerticalOffsetXTitle2D", PyvtkAxisActor_SetVerticalOffsetXTitle2D, METH_VARARGS,
   (char*)"V.SetVerticalOffsetXTitle2D(float)\nC++: void SetVerticalOffsetXTitle2D(double a)\n\nSet/Get the 2D mode the vertical offset for X title in 2D mode\n"},
  {(char*)"GetVerticalOffsetXTitle2D", PyvtkAxisActor_GetVerticalOffsetXTitle2D, METH_VARARGS,
   (char*)"V.GetVerticalOffsetXTitle2D() -> float\nC++: double GetVerticalOffsetXTitle2D()\n\nSet/Get the 2D mode the vertical offset for X title in 2D mode\n"},
  {(char*)"SetHorizontalOffsetYTitle2D", PyvtkAxisActor_SetHorizontalOffsetYTitle2D, METH_VARARGS,
   (char*)"V.SetHorizontalOffsetYTitle2D(float)\nC++: void SetHorizontalOffsetYTitle2D(double a)\n\nSet/Get the 2D mode the horizontal offset for Y title in 2D mode\n"},
  {(char*)"GetHorizontalOffsetYTitle2D", PyvtkAxisActor_GetHorizontalOffsetYTitle2D, METH_VARARGS,
   (char*)"V.GetHorizontalOffsetYTitle2D() -> float\nC++: double GetHorizontalOffsetYTitle2D()\n\nSet/Get the 2D mode the horizontal offset for Y title in 2D mode\n"},
  {(char*)"SetSaveTitlePosition", PyvtkAxisActor_SetSaveTitlePosition, METH_VARARGS,
   (char*)"V.SetSaveTitlePosition(int)\nC++: void SetSaveTitlePosition(int a)\n\nSet/Get whether title position must be saved in 2D mode\n"},
  {(char*)"GetSaveTitlePosition", PyvtkAxisActor_GetSaveTitlePosition, METH_VARARGS,
   (char*)"V.GetSaveTitlePosition() -> int\nC++: int GetSaveTitlePosition()\n\nSet/Get whether title position must be saved in 2D mode\n"},
  {(char*)"SetAxisBaseForX", PyvtkAxisActor_SetAxisBaseForX, METH_VARARGS,
   (char*)"V.SetAxisBaseForX(float, float, float)\nC++: void SetAxisBaseForX(double, double, double)\nV.SetAxisBaseForX((float, float, float))\nC++: void SetAxisBaseForX(double a[3])\n\n"},
  {(char*)"GetAxisBaseForX", PyvtkAxisActor_GetAxisBaseForX, METH_VARARGS,
   (char*)"V.GetAxisBaseForX() -> (float, float, float)\nC++: double *GetAxisBaseForX()\n\n"},
  {(char*)"SetAxisBaseForY", PyvtkAxisActor_SetAxisBaseForY, METH_VARARGS,
   (char*)"V.SetAxisBaseForY(float, float, float)\nC++: void SetAxisBaseForY(double, double, double)\nV.SetAxisBaseForY((float, float, float))\nC++: void SetAxisBaseForY(double a[3])\n\n"},
  {(char*)"GetAxisBaseForY", PyvtkAxisActor_GetAxisBaseForY, METH_VARARGS,
   (char*)"V.GetAxisBaseForY() -> (float, float, float)\nC++: double *GetAxisBaseForY()\n\n"},
  {(char*)"SetAxisBaseForZ", PyvtkAxisActor_SetAxisBaseForZ, METH_VARARGS,
   (char*)"V.SetAxisBaseForZ(float, float, float)\nC++: void SetAxisBaseForZ(double, double, double)\nV.SetAxisBaseForZ((float, float, float))\nC++: void SetAxisBaseForZ(double a[3])\n\n"},
  {(char*)"GetAxisBaseForZ", PyvtkAxisActor_GetAxisBaseForZ, METH_VARARGS,
   (char*)"V.GetAxisBaseForZ() -> (float, float, float)\nC++: double *GetAxisBaseForZ()\n\n"},
  {(char*)"SetAxisOnOrigin", PyvtkAxisActor_SetAxisOnOrigin, METH_VARARGS,
   (char*)"V.SetAxisOnOrigin(int)\nC++: void SetAxisOnOrigin(int a)\n\nNotify the axes that is not part of a cube anymore\n"},
  {(char*)"GetAxisOnOrigin", PyvtkAxisActor_GetAxisOnOrigin, METH_VARARGS,
   (char*)"V.GetAxisOnOrigin() -> int\nC++: int GetAxisOnOrigin()\n\nNotify the axes that is not part of a cube anymore\n"},
  {(char*)"SetLabelOffset", PyvtkAxisActor_SetLabelOffset, METH_VARARGS,
   (char*)"V.SetLabelOffset(float)\nC++: void SetLabelOffset(double a)\n\nSet/Get the offsets used to position texts.\n"},
  {(char*)"GetLabelOffset", PyvtkAxisActor_GetLabelOffset, METH_VARARGS,
   (char*)"V.GetLabelOffset() -> float\nC++: double GetLabelOffset()\n\nSet/Get the offsets used to position texts.\n"},
  {(char*)"SetTitleOffset", PyvtkAxisActor_SetTitleOffset, METH_VARARGS,
   (char*)"V.SetTitleOffset(float)\nC++: void SetTitleOffset(double a)\n\nSet/Get the offsets used to position texts.\n"},
  {(char*)"GetTitleOffset", PyvtkAxisActor_GetTitleOffset, METH_VARARGS,
   (char*)"V.GetTitleOffset() -> float\nC++: double GetTitleOffset()\n\nSet/Get the offsets used to position texts.\n"},
  {(char*)"SetScreenSize", PyvtkAxisActor_SetScreenSize, METH_VARARGS,
   (char*)"V.SetScreenSize(float)\nC++: void SetScreenSize(double a)\n\nSet/Get the offsets used to position texts.\n"},
  {(char*)"GetScreenSize", PyvtkAxisActor_GetScreenSize, METH_VARARGS,
   (char*)"V.GetScreenSize() -> float\nC++: double GetScreenSize()\n\nSet/Get the offsets used to position texts.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxisActor_StaticNew()
{
  return vtkAxisActor::New();
}

PyObject *PyVTKClass_vtkAxisActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxisActor_StaticNew,
    PyvtkAxisActor_Methods,
    "vtkAxisActor", modulename,
    NULL, NULL,
    PyvtkAxisActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkAxisActor_Doc()
{
  static const char *docstring[] = {
    "vtkAxisActor - Create an axis with tick marks and labels\n\n",
    "Superclass: vtkActor\n\n",
    "vtkAxisActor creates an axis with tick marks, labels, and/or a title,\ndepending on the particular instance variable settings. It is assumed\nthat the axes is part of a bounding box and is orthoganal to one of\nthe coordinate axes.  To use this class, you typically specify two\npoints defining the start and end points of the line (xyz definition\nusing vtkCoordinate class), the axis type (X, Y or Z), t",
    "he axis\nlocation in relation to the bounding box, the bounding box, the\nnumber of labels, and the data range (min,max). You can also control\nwhat parts of the axis are visible including the line, the tick\nmarks, the labels, and the title. It is also possible to control\ngridlines, and specifiy on which 'side' the tickmarks are drawn\n(again with respect to the underlying assumed bounding box). You c",
    "an\nalso specify the label format (a printf style format).\n\nThis class decides how to locate the labels, and how to create\nreasonable tick marks and labels.\n\nLabels follow the camera so as to be legible from any viewpoint.\n\nThe instance variables Point1 and Point2 are instances of\nvtkCoordinate. All calculations and references are in World\nCoordinates.\n\nThanks:\n\nThis class was written by: Hank Chil",
    "ds, Kathleen Bonnell, Amy\nSquillacote, Brad Whitlock, Eric Brugger, Claire Guilbaud, Nicolas\nDolegieviez, Will Schroeder, Karthik Krishnan, Aashish Chaudhary,\nPhilippe Pebay, David Gobbi, David Partyka, Utkarsh Ayachit David\nCole, Francois Bertel, and Mark Olesen Part of this work was\nsupported by CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM\nIle-De-France, BP12, F-91297 Arpajon, France.",
    "\n\nSee Also:\n\nvtkActor vtkVectorText vtkPolyDataMapper vtkAxisActor2D vtkCoordinate\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxisActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxisActor", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 12; c++)
    {
    static const struct { const char *name; int value; }
      constants[12] = {
        { "VTK_MAX_LABELS", 200 },
        { "VTK_MAX_TICKS", 1000 },
        { "VTK_AXIS_TYPE_X", 0 },
        { "VTK_AXIS_TYPE_Y", 1 },
        { "VTK_AXIS_TYPE_Z", 2 },
        { "VTK_TICKS_INSIDE", 0 },
        { "VTK_TICKS_OUTSIDE", 1 },
        { "VTK_TICKS_BOTH", 2 },
        { "VTK_AXIS_POS_MINMIN", 0 },
        { "VTK_AXIS_POS_MINMAX", 1 },
        { "VTK_AXIS_POS_MAXMAX", 2 },
        { "VTK_AXIS_POS_MAXMIN", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

