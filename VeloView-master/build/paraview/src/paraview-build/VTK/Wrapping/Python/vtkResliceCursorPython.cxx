// python wrapper for vtkResliceCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkResliceCursor_Doc();


static PyObject *
PyvtkResliceCursor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursor::NewInstance());

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
PyvtkResliceCursor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursor *tempr = vtkResliceCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkResliceCursor::GetImage());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursor::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetCenter(temp0);
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
PyvtkResliceCursor_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkResliceCursor_SetCenter_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkResliceCursor_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkResliceCursor::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetThickness_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetThickness(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursor::SetThickness(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetThickness_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetThickness(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetThickness(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkResliceCursor_SetThickness_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetThickness_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetThickness");
  return NULL;
}



static PyObject *
PyvtkResliceCursor_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkResliceCursor::GetThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThickMode(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetThickMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThickMode() :
      op->vtkResliceCursor::GetThickMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_ThickModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThickModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThickModeOn();
      }
    else
      {
      op->vtkResliceCursor::ThickModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_ThickModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThickModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThickModeOff();
      }
    else
      {
      op->vtkResliceCursor::ThickModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyData() :
      op->vtkResliceCursor::GetPolyData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetCenterlineAxisPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxisPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxisPolyData(temp0) :
      op->vtkResliceCursor::GetCenterlineAxisPolyData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane(temp0) :
      op->vtkResliceCursor::GetPlane(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkResliceCursor::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetXAxis() :
      op->vtkResliceCursor::GetXAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkResliceCursor::GetYAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetZAxis() :
      op->vtkResliceCursor::GetZAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetXAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetXAxis(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursor::SetXAxis(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXAxis(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkResliceCursor_SetXAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetXAxis_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxis");
  return NULL;
}



static PyObject *
PyvtkResliceCursor_SetYAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetYAxis(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursor::SetYAxis(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYAxis(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkResliceCursor_SetYAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetYAxis_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxis");
  return NULL;
}



static PyObject *
PyvtkResliceCursor_SetZAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetZAxis(temp0, temp1, temp2);
      }
    else
      {
      op->vtkResliceCursor::SetZAxis(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZAxis(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetZAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkResliceCursor_SetZAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetZAxis_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxis");
  return NULL;
}



static PyObject *
PyvtkResliceCursor_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkResliceCursor::GetAxis(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHole(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetHole(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHole() :
      op->vtkResliceCursor::GetHole());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHoleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHoleWidth(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetHoleWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHoleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHoleWidth() :
      op->vtkResliceCursor::GetHoleWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHoleWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHoleWidthInPixels(temp0);
      }
    else
      {
      op->vtkResliceCursor::SetHoleWidthInPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHoleWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHoleWidthInPixels() :
      op->vtkResliceCursor::GetHoleWidthInPixels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursor::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursor_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkResliceCursor::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursor_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkResliceCursor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkResliceCursor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursor\nC++: vtkResliceCursor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceCursor\nC++: vtkResliceCursor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImage", PyvtkResliceCursor_SetImage, METH_VARARGS,
   (char*)"V.SetImage(vtkImageData)\nC++: virtual void SetImage(vtkImageData *)\n\nSet the image (3D) that we are slicing\n"},
  {(char*)"GetImage", PyvtkResliceCursor_GetImage, METH_VARARGS,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nSet the image (3D) that we are slicing\n"},
  {(char*)"SetCenter", PyvtkResliceCursor_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: virtual void SetCenter(double, double, double)\nV.SetCenter([float, float, float])\nC++: virtual void SetCenter(double center[3])\n\nSet/Get the cente of the reslice cursor.\n"},
  {(char*)"GetCenter", PyvtkResliceCursor_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetThickness", PyvtkResliceCursor_SetThickness, METH_VARARGS,
   (char*)"V.SetThickness(float, float, float)\nC++: void SetThickness(double, double, double)\nV.SetThickness((float, float, float))\nC++: void SetThickness(double a[3])\n\n"},
  {(char*)"GetThickness", PyvtkResliceCursor_GetThickness, METH_VARARGS,
   (char*)"V.GetThickness() -> (float, float, float)\nC++: double *GetThickness()\n\n"},
  {(char*)"SetThickMode", PyvtkResliceCursor_SetThickMode, METH_VARARGS,
   (char*)"V.SetThickMode(int)\nC++: void SetThickMode(int a)\n\nEnable disable thick mode. Default is to enable it.\n"},
  {(char*)"GetThickMode", PyvtkResliceCursor_GetThickMode, METH_VARARGS,
   (char*)"V.GetThickMode() -> int\nC++: int GetThickMode()\n\nEnable disable thick mode. Default is to enable it.\n"},
  {(char*)"ThickModeOn", PyvtkResliceCursor_ThickModeOn, METH_VARARGS,
   (char*)"V.ThickModeOn()\nC++: void ThickModeOn()\n\nEnable disable thick mode. Default is to enable it.\n"},
  {(char*)"ThickModeOff", PyvtkResliceCursor_ThickModeOff, METH_VARARGS,
   (char*)"V.ThickModeOff()\nC++: void ThickModeOff()\n\nEnable disable thick mode. Default is to enable it.\n"},
  {(char*)"GetPolyData", PyvtkResliceCursor_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData() -> vtkPolyData\nC++: virtual vtkPolyData *GetPolyData()\n\nGet the 3D PolyData representation\n"},
  {(char*)"GetCenterlineAxisPolyData", PyvtkResliceCursor_GetCenterlineAxisPolyData, METH_VARARGS,
   (char*)"V.GetCenterlineAxisPolyData(int) -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxisPolyData(int axis)\n\nGet the slab and centerline polydata along an axis\n"},
  {(char*)"GetPlane", PyvtkResliceCursor_GetPlane, METH_VARARGS,
   (char*)"V.GetPlane(int) -> vtkPlane\nC++: virtual vtkPlane *GetPlane(int n)\n\nGet the planes that represent normals along the X, Y and Z. The\nargument passed to this method must be an integer in the range\n0-2 (corresponding to the X, Y and Z axes.\n"},
  {(char*)"Update", PyvtkResliceCursor_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nBuild the polydata\n"},
  {(char*)"GetXAxis", PyvtkResliceCursor_GetXAxis, METH_VARARGS,
   (char*)"V.GetXAxis() -> (float, float, float)\nC++: double *GetXAxis()\n\n"},
  {(char*)"GetYAxis", PyvtkResliceCursor_GetYAxis, METH_VARARGS,
   (char*)"V.GetYAxis() -> (float, float, float)\nC++: double *GetYAxis()\n\n"},
  {(char*)"GetZAxis", PyvtkResliceCursor_GetZAxis, METH_VARARGS,
   (char*)"V.GetZAxis() -> (float, float, float)\nC++: double *GetZAxis()\n\n"},
  {(char*)"SetXAxis", PyvtkResliceCursor_SetXAxis, METH_VARARGS,
   (char*)"V.SetXAxis(float, float, float)\nC++: void SetXAxis(double, double, double)\nV.SetXAxis((float, float, float))\nC++: void SetXAxis(double a[3])\n\n"},
  {(char*)"SetYAxis", PyvtkResliceCursor_SetYAxis, METH_VARARGS,
   (char*)"V.SetYAxis(float, float, float)\nC++: void SetYAxis(double, double, double)\nV.SetYAxis((float, float, float))\nC++: void SetYAxis(double a[3])\n\n"},
  {(char*)"SetZAxis", PyvtkResliceCursor_SetZAxis, METH_VARARGS,
   (char*)"V.SetZAxis(float, float, float)\nC++: void SetZAxis(double, double, double)\nV.SetZAxis((float, float, float))\nC++: void SetZAxis(double a[3])\n\n"},
  {(char*)"GetAxis", PyvtkResliceCursor_GetAxis, METH_VARARGS,
   (char*)"V.GetAxis(int) -> (float, ...)\nC++: virtual double *GetAxis(int i)\n\nGet the computed axes directions\n"},
  {(char*)"SetHole", PyvtkResliceCursor_SetHole, METH_VARARGS,
   (char*)"V.SetHole(int)\nC++: void SetHole(int a)\n\nShow a hole in the center of the cursor, so its easy to see the\npixels within the hole. ON by default\n"},
  {(char*)"GetHole", PyvtkResliceCursor_GetHole, METH_VARARGS,
   (char*)"V.GetHole() -> int\nC++: int GetHole()\n\nShow a hole in the center of the cursor, so its easy to see the\npixels within the hole. ON by default\n"},
  {(char*)"SetHoleWidth", PyvtkResliceCursor_SetHoleWidth, METH_VARARGS,
   (char*)"V.SetHoleWidth(float)\nC++: void SetHoleWidth(double a)\n\nSet the width of the hole in mm\n"},
  {(char*)"GetHoleWidth", PyvtkResliceCursor_GetHoleWidth, METH_VARARGS,
   (char*)"V.GetHoleWidth() -> float\nC++: double GetHoleWidth()\n\nSet the width of the hole in mm\n"},
  {(char*)"SetHoleWidthInPixels", PyvtkResliceCursor_SetHoleWidthInPixels, METH_VARARGS,
   (char*)"V.SetHoleWidthInPixels(float)\nC++: void SetHoleWidthInPixels(double a)\n\nSet the width of the hole in pixels. If set, this will override\nthe hole with in mm.\n"},
  {(char*)"GetHoleWidthInPixels", PyvtkResliceCursor_GetHoleWidthInPixels, METH_VARARGS,
   (char*)"V.GetHoleWidthInPixels() -> float\nC++: double GetHoleWidthInPixels()\n\nSet the width of the hole in pixels. If set, this will override\nthe hole with in mm.\n"},
  {(char*)"GetMTime", PyvtkResliceCursor_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long int GetMTime()\n\nGet the MTime. Check the MTime of the internal planes as well.\n"},
  {(char*)"Reset", PyvtkResliceCursor_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: virtual void Reset()\n\nReset the cursor to the default position, ie with the axes,\nnormal to each other and axis aligned and with the cursor pointed\nat the center of the image.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursor_StaticNew()
{
  return vtkResliceCursor::New();
}

PyObject *PyVTKClass_vtkResliceCursorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursor_StaticNew,
    PyvtkResliceCursor_Methods,
    "vtkResliceCursor", modulename,
    NULL, NULL,
    PyvtkResliceCursor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkResliceCursor_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursor - Geometry for a reslice cursor\n\n",
    "Superclass: vtkObject\n\n",
    "This class represents a reslice cursor. It consists of two cross\nsectional hairs, with an optional thickness. The crosshairs hairs may\nhave a hole in the center. These may be translated or rotated\nindependent of each other in the view. The result is used to reslice\nthe data along these cross sections. This allows the user to perform\nmulti-planar thin or thick reformat of the data on an image view,",
    "\nrather than a 3D view.\n\nSee Also:\n\nvtkResliceCursorWidget vtkResliceCursor\nvtkResliceCursorPolyDataAlgorithm vtkResliceCursorRepresentation\nvtkResliceCursorThickLineRepresentation vtkResliceCursorActor\nvtkImagePlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursor", o) != 0)
    {
    Py_DECREF(o);
    }

}

