// python wrapper for vtkBooleanTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBooleanTexture.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBooleanTexture(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBooleanTextureNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkBooleanTexture_Doc();


static PyObject *
PyvtkBooleanTexture_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBooleanTexture::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBooleanTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBooleanTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBooleanTexture::NewInstance());

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
PyvtkBooleanTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBooleanTexture *tempr = vtkBooleanTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXSize(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetXSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXSize() :
      op->vtkBooleanTexture::GetXSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYSize(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetYSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYSize() :
      op->vtkBooleanTexture::GetYSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThickness(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkBooleanTexture::GetThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInIn(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetInIn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetInIn(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetInIn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetInIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInIn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInIn");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetInIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInIn() :
      op->vtkBooleanTexture::GetInIn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInOut(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetInOut(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetInOut(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetInOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetInOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInOut_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInOut");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetInOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInOut() :
      op->vtkBooleanTexture::GetInOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutIn(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetOutIn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutIn(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetOutIn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetOutIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutIn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutIn");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetOutIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutIn() :
      op->vtkBooleanTexture::GetOutIn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutOut(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetOutOut(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutOut(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetOutOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetOutOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutOut_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutOut");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetOutOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutOut() :
      op->vtkBooleanTexture::GetOutOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOnOn(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetOnOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOnOn(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetOnOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetOnOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnOn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOnOn");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetOnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnOn() :
      op->vtkBooleanTexture::GetOnOn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOnIn(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetOnIn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOnIn(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetOnIn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetOnIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnIn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOnIn");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetOnIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnIn() :
      op->vtkBooleanTexture::GetOnIn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOnOut(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetOnOut(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOnOut(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetOnOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetOnOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnOut_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOnOut");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetOnOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnOut() :
      op->vtkBooleanTexture::GetOnOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInOn(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetInOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetInOn(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetInOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetInOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInOn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInOn");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInOn() :
      op->vtkBooleanTexture::GetInOn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutOn(temp0, temp1);
      }
    else
      {
      op->vtkBooleanTexture::SetOutOn(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutOn(temp0);
      }
    else
      {
      op->vtkBooleanTexture::SetOutOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBooleanTexture_SetOutOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutOn_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutOn");
  return NULL;
}



static PyObject *
PyvtkBooleanTexture_GetOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutOn() :
      op->vtkBooleanTexture::GetOutOn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkBooleanTexture_Methods[] = {
  {(char*)"GetClassName", PyvtkBooleanTexture_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBooleanTexture_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBooleanTexture_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBooleanTexture\nC++: vtkBooleanTexture *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBooleanTexture_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBooleanTexture\nC++: vtkBooleanTexture *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXSize", PyvtkBooleanTexture_SetXSize, METH_VARARGS,
   (char*)"V.SetXSize(int)\nC++: void SetXSize(int a)\n\nSet the X texture map dimension.\n"},
  {(char*)"GetXSize", PyvtkBooleanTexture_GetXSize, METH_VARARGS,
   (char*)"V.GetXSize() -> int\nC++: int GetXSize()\n\nSet the X texture map dimension.\n"},
  {(char*)"SetYSize", PyvtkBooleanTexture_SetYSize, METH_VARARGS,
   (char*)"V.SetYSize(int)\nC++: void SetYSize(int a)\n\nSet the Y texture map dimension.\n"},
  {(char*)"GetYSize", PyvtkBooleanTexture_GetYSize, METH_VARARGS,
   (char*)"V.GetYSize() -> int\nC++: int GetYSize()\n\nSet the Y texture map dimension.\n"},
  {(char*)"SetThickness", PyvtkBooleanTexture_SetThickness, METH_VARARGS,
   (char*)"V.SetThickness(int)\nC++: void SetThickness(int a)\n\nSet the thickness of the \"on\" region.\n"},
  {(char*)"GetThickness", PyvtkBooleanTexture_GetThickness, METH_VARARGS,
   (char*)"V.GetThickness() -> int\nC++: int GetThickness()\n\nSet the thickness of the \"on\" region.\n"},
  {(char*)"SetInIn", PyvtkBooleanTexture_SetInIn, METH_VARARGS,
   (char*)"V.SetInIn(int, int)\nC++: void SetInIn(unsigned char, unsigned char)\nV.SetInIn((int, int))\nC++: void SetInIn(unsigned char a[2])\n\n"},
  {(char*)"GetInIn", PyvtkBooleanTexture_GetInIn, METH_VARARGS,
   (char*)"V.GetInIn() -> (int, int)\nC++: unsigned char *GetInIn()\n\nSpecify intensity/transparency for \"in/in\" region.\n"},
  {(char*)"SetInOut", PyvtkBooleanTexture_SetInOut, METH_VARARGS,
   (char*)"V.SetInOut(int, int)\nC++: void SetInOut(unsigned char, unsigned char)\nV.SetInOut((int, int))\nC++: void SetInOut(unsigned char a[2])\n\n"},
  {(char*)"GetInOut", PyvtkBooleanTexture_GetInOut, METH_VARARGS,
   (char*)"V.GetInOut() -> (int, int)\nC++: unsigned char *GetInOut()\n\nSpecify intensity/transparency for \"in/out\" region.\n"},
  {(char*)"SetOutIn", PyvtkBooleanTexture_SetOutIn, METH_VARARGS,
   (char*)"V.SetOutIn(int, int)\nC++: void SetOutIn(unsigned char, unsigned char)\nV.SetOutIn((int, int))\nC++: void SetOutIn(unsigned char a[2])\n\n"},
  {(char*)"GetOutIn", PyvtkBooleanTexture_GetOutIn, METH_VARARGS,
   (char*)"V.GetOutIn() -> (int, int)\nC++: unsigned char *GetOutIn()\n\nSpecify intensity/transparency for \"out/in\" region.\n"},
  {(char*)"SetOutOut", PyvtkBooleanTexture_SetOutOut, METH_VARARGS,
   (char*)"V.SetOutOut(int, int)\nC++: void SetOutOut(unsigned char, unsigned char)\nV.SetOutOut((int, int))\nC++: void SetOutOut(unsigned char a[2])\n\n"},
  {(char*)"GetOutOut", PyvtkBooleanTexture_GetOutOut, METH_VARARGS,
   (char*)"V.GetOutOut() -> (int, int)\nC++: unsigned char *GetOutOut()\n\nSpecify intensity/transparency for \"out/out\" region.\n"},
  {(char*)"SetOnOn", PyvtkBooleanTexture_SetOnOn, METH_VARARGS,
   (char*)"V.SetOnOn(int, int)\nC++: void SetOnOn(unsigned char, unsigned char)\nV.SetOnOn((int, int))\nC++: void SetOnOn(unsigned char a[2])\n\n"},
  {(char*)"GetOnOn", PyvtkBooleanTexture_GetOnOn, METH_VARARGS,
   (char*)"V.GetOnOn() -> (int, int)\nC++: unsigned char *GetOnOn()\n\nSpecify intensity/transparency for \"on/on\" region.\n"},
  {(char*)"SetOnIn", PyvtkBooleanTexture_SetOnIn, METH_VARARGS,
   (char*)"V.SetOnIn(int, int)\nC++: void SetOnIn(unsigned char, unsigned char)\nV.SetOnIn((int, int))\nC++: void SetOnIn(unsigned char a[2])\n\n"},
  {(char*)"GetOnIn", PyvtkBooleanTexture_GetOnIn, METH_VARARGS,
   (char*)"V.GetOnIn() -> (int, int)\nC++: unsigned char *GetOnIn()\n\nSpecify intensity/transparency for \"on/in\" region.\n"},
  {(char*)"SetOnOut", PyvtkBooleanTexture_SetOnOut, METH_VARARGS,
   (char*)"V.SetOnOut(int, int)\nC++: void SetOnOut(unsigned char, unsigned char)\nV.SetOnOut((int, int))\nC++: void SetOnOut(unsigned char a[2])\n\n"},
  {(char*)"GetOnOut", PyvtkBooleanTexture_GetOnOut, METH_VARARGS,
   (char*)"V.GetOnOut() -> (int, int)\nC++: unsigned char *GetOnOut()\n\nSpecify intensity/transparency for \"on/out\" region.\n"},
  {(char*)"SetInOn", PyvtkBooleanTexture_SetInOn, METH_VARARGS,
   (char*)"V.SetInOn(int, int)\nC++: void SetInOn(unsigned char, unsigned char)\nV.SetInOn((int, int))\nC++: void SetInOn(unsigned char a[2])\n\n"},
  {(char*)"GetInOn", PyvtkBooleanTexture_GetInOn, METH_VARARGS,
   (char*)"V.GetInOn() -> (int, int)\nC++: unsigned char *GetInOn()\n\nSpecify intensity/transparency for \"in/on\" region.\n"},
  {(char*)"SetOutOn", PyvtkBooleanTexture_SetOutOn, METH_VARARGS,
   (char*)"V.SetOutOn(int, int)\nC++: void SetOutOn(unsigned char, unsigned char)\nV.SetOutOn((int, int))\nC++: void SetOutOn(unsigned char a[2])\n\n"},
  {(char*)"GetOutOn", PyvtkBooleanTexture_GetOutOn, METH_VARARGS,
   (char*)"V.GetOutOn() -> (int, int)\nC++: unsigned char *GetOutOn()\n\nSpecify intensity/transparency for \"out/on\" region.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBooleanTexture_StaticNew()
{
  return vtkBooleanTexture::New();
}

PyObject *PyVTKClass_vtkBooleanTextureNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBooleanTexture_StaticNew,
    PyvtkBooleanTexture_Methods,
    "vtkBooleanTexture", modulename,
    NULL, NULL,
    PyvtkBooleanTexture_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBooleanTexture_Doc()
{
  static const char *docstring[] = {
    "vtkBooleanTexture - generate 2D texture map based on combinations of\ninside, outside, and on region boundary\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkBooleanTexture is a filter to generate a 2D texture map based on\ncombinations of inside, outside, and on region boundary. The \"region\"\nis implicitly represented via 2D texture coordinates. These texture\ncoordinates are normally generated using a filter like\nvtkImplicitTextureCoords, which generates the texture coordinates for\nany implicit function.\n\nvtkBooleanTexture generates the map according",
    " to the s-t texture\ncoordinates plus the notion of being in, on, or outside of a region.\nAn in region is when the texture coordinate is between\n(0,0.5-thickness/2).  An out region is where the texture coordinate\nis (0.5+thickness/2). An on region is between\n(0.5-thickness/2,0.5+thickness/2). The combination in, on, and out\nfor each of the s-t texture coordinates results in 16 possible\ncombinations",
    " (see text). For each combination, a different value of\nintensity and transparency can be assigned. To assign maximum\nintensity and/or opacity use the value 255. A minimum value of 0\nresults in a black region (for intensity) and a fully transparent\nregion (for transparency).\n\nSee Also:\n\nvtkImplicitTextureCoords vtkThresholdTextureCoords\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBooleanTexture(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBooleanTextureNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBooleanTexture", o) != 0)
    {
    Py_DECREF(o);
    }

}

