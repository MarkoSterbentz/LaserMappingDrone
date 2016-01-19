// python wrapper for vtkDataTransferHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataTransferHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataTransferHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataTransferHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataTransferHelper_Doc();


static PyObject *
PyvtkDataTransferHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataTransferHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataTransferHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataTransferHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataTransferHelper::NewInstance());

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
PyvtkDataTransferHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataTransferHelper *tempr = vtkDataTransferHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkDataTransferHelper::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetCPUExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      op->SetCPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataTransferHelper::SetCPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetCPUExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCPUExtent(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetCPUExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetCPUExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataTransferHelper_SetCPUExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetCPUExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCPUExtent");
  return NULL;
}



static PyObject *
PyvtkDataTransferHelper_GetCPUExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetCPUExtent() :
      op->vtkDataTransferHelper::GetCPUExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetGPUExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      op->SetGPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataTransferHelper::SetGPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetGPUExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGPUExtent(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetGPUExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetGPUExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataTransferHelper_SetGPUExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetGPUExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGPUExtent");
  return NULL;
}



static PyObject *
PyvtkDataTransferHelper_GetGPUExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGPUExtent() :
      op->vtkDataTransferHelper::GetGPUExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetTextureExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      op->SetTextureExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataTransferHelper::SetTextureExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetTextureExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTextureExtent(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetTextureExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetTextureExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataTransferHelper_SetTextureExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetTextureExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureExtent");
  return NULL;
}



static PyObject *
PyvtkDataTransferHelper_GetTextureExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTextureExtent() :
      op->vtkDataTransferHelper::GetTextureExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetExtentIsValid(temp0) :
      op->vtkDataTransferHelper::GetExtentIsValid(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetCPUExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCPUExtentIsValid() :
      op->vtkDataTransferHelper::GetCPUExtentIsValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetGPUExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGPUExtentIsValid() :
      op->vtkDataTransferHelper::GetGPUExtentIsValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetTextureExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTextureExtentIsValid() :
      op->vtkDataTransferHelper::GetTextureExtentIsValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetMinTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinTextureDimension(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetMinTextureDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetMinTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMinTextureDimension() :
      op->vtkDataTransferHelper::GetMinTextureDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkDataTransferHelper::GetArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetArray(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkDataTransferHelper::GetTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_Upload(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->Upload(temp0, temp1) :
      op->vtkDataTransferHelper::Upload(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_Download(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Download() :
      op->vtkDataTransferHelper::Download());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_DownloadAsync1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadAsync1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DownloadAsync1() :
      op->vtkDataTransferHelper::DownloadAsync1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_DownloadAsync2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadAsync2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DownloadAsync2() :
      op->vtkDataTransferHelper::DownloadAsync2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetShaderSupportsTextureInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderSupportsTextureInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetShaderSupportsTextureInt() :
      op->vtkDataTransferHelper::GetShaderSupportsTextureInt());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetShaderSupportsTextureInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderSupportsTextureInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShaderSupportsTextureInt(temp0);
      }
    else
      {
      op->vtkDataTransferHelper::SetShaderSupportsTextureInt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = vtkDataTransferHelper::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataTransferHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkDataTransferHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataTransferHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataTransferHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataTransferHelper\nC++: vtkDataTransferHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataTransferHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataTransferHelper\nC++: vtkDataTransferHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkDataTransferHelper_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"GetContext", PyvtkDataTransferHelper_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {(char*)"SetCPUExtent", PyvtkDataTransferHelper_SetCPUExtent, METH_VARARGS,
   (char*)"V.SetCPUExtent(int, int, int, int, int, int)\nC++: void SetCPUExtent(int, int, int, int, int, int)\nV.SetCPUExtent((int, int, int, int, int, int))\nC++: void SetCPUExtent(int a[6])\n\n"},
  {(char*)"GetCPUExtent", PyvtkDataTransferHelper_GetCPUExtent, METH_VARARGS,
   (char*)"V.GetCPUExtent() -> (int, int, int, int, int, int)\nC++: int *GetCPUExtent()\n\n"},
  {(char*)"SetGPUExtent", PyvtkDataTransferHelper_SetGPUExtent, METH_VARARGS,
   (char*)"V.SetGPUExtent(int, int, int, int, int, int)\nC++: void SetGPUExtent(int, int, int, int, int, int)\nV.SetGPUExtent((int, int, int, int, int, int))\nC++: void SetGPUExtent(int a[6])\n\n"},
  {(char*)"GetGPUExtent", PyvtkDataTransferHelper_GetGPUExtent, METH_VARARGS,
   (char*)"V.GetGPUExtent() -> (int, int, int, int, int, int)\nC++: int *GetGPUExtent()\n\n"},
  {(char*)"SetTextureExtent", PyvtkDataTransferHelper_SetTextureExtent, METH_VARARGS,
   (char*)"V.SetTextureExtent(int, int, int, int, int, int)\nC++: void SetTextureExtent(int, int, int, int, int, int)\nV.SetTextureExtent((int, int, int, int, int, int))\nC++: void SetTextureExtent(int a[6])\n\n"},
  {(char*)"GetTextureExtent", PyvtkDataTransferHelper_GetTextureExtent, METH_VARARGS,
   (char*)"V.GetTextureExtent() -> (int, int, int, int, int, int)\nC++: int *GetTextureExtent()\n\n"},
  {(char*)"GetExtentIsValid", PyvtkDataTransferHelper_GetExtentIsValid, METH_VARARGS,
   (char*)"V.GetExtentIsValid([int, ...]) -> bool\nC++: bool GetExtentIsValid(int *extent)\n\nTells if the given extent (6 int) is valid. True if min\nextent<=max extent.\n\\pre extent_exists: extent!=0\n"},
  {(char*)"GetCPUExtentIsValid", PyvtkDataTransferHelper_GetCPUExtentIsValid, METH_VARARGS,
   (char*)"V.GetCPUExtentIsValid() -> bool\nC++: bool GetCPUExtentIsValid()\n\nTells if CPUExtent is valid. True if min extent<=max extent.\n"},
  {(char*)"GetGPUExtentIsValid", PyvtkDataTransferHelper_GetGPUExtentIsValid, METH_VARARGS,
   (char*)"V.GetGPUExtentIsValid() -> bool\nC++: bool GetGPUExtentIsValid()\n\nTells if GPUExtent is valid. True if min extent<=max extent.\n"},
  {(char*)"GetTextureExtentIsValid", PyvtkDataTransferHelper_GetTextureExtentIsValid, METH_VARARGS,
   (char*)"V.GetTextureExtentIsValid() -> bool\nC++: bool GetTextureExtentIsValid()\n\nTells if TextureExtent is valid. True if min extent<=max extent.\n"},
  {(char*)"SetMinTextureDimension", PyvtkDataTransferHelper_SetMinTextureDimension, METH_VARARGS,
   (char*)"V.SetMinTextureDimension(int)\nC++: void SetMinTextureDimension(int a)\n\nDefine the minimal dimension of the texture regardless of the\ndimensions of the TextureExtent. Initial value is 1. A texture\nextent can have a given dimension 0D (one value), 1D, 2D or 3D.\nBy default 0D and 1D are translated into a 1D texture, 2D is\ntranslated into a 2D texture, 3D is translated into a 3D texture.\nTo make life easier when writting GLSL code and use only one type\nof sampler (ex: sampler2d), the default behavior can be changed\nby forcing a type of texture with this ivar. 1: default behavior.\nInitial value. 2: force 0D and 1D to be in a 2D texture 3: force\n0D, 1D and 2D texture to be in a 3D texture.\n"},
  {(char*)"GetMinTextureDimension", PyvtkDataTransferHelper_GetMinTextureDimension, METH_VARARGS,
   (char*)"V.GetMinTextureDimension() -> int\nC++: int GetMinTextureDimension()\n\nDefine the minimal dimension of the texture regardless of the\ndimensions of the TextureExtent. Initial value is 1. A texture\nextent can have a given dimension 0D (one value), 1D, 2D or 3D.\nBy default 0D and 1D are translated into a 1D texture, 2D is\ntranslated into a 2D texture, 3D is translated into a 3D texture.\nTo make life easier when writting GLSL code and use only one type\nof sampler (ex: sampler2d), the default behavior can be changed\nby forcing a type of texture with this ivar. 1: default behavior.\nInitial value. 2: force 0D and 1D to be in a 2D texture 3: force\n0D, 1D and 2D texture to be in a 3D texture.\n"},
  {(char*)"GetArray", PyvtkDataTransferHelper_GetArray, METH_VARARGS,
   (char*)"V.GetArray() -> vtkDataArray\nC++: vtkDataArray *GetArray()\n\nGet/Set the CPU data buffer. Initial value is 0.\n"},
  {(char*)"SetArray", PyvtkDataTransferHelper_SetArray, METH_VARARGS,
   (char*)"V.SetArray(vtkDataArray)\nC++: void SetArray(vtkDataArray *array)\n\nGet/Set the CPU data buffer. Initial value is 0.\n"},
  {(char*)"GetTexture", PyvtkDataTransferHelper_GetTexture, METH_VARARGS,
   (char*)"V.GetTexture() -> vtkTextureObject\nC++: vtkTextureObject *GetTexture()\n\nGet/Set the GPU data buffer. Initial value is 0.\n"},
  {(char*)"SetTexture", PyvtkDataTransferHelper_SetTexture, METH_VARARGS,
   (char*)"V.SetTexture(vtkTextureObject)\nC++: void SetTexture(vtkTextureObject *texture)\n\nGet/Set the GPU data buffer. Initial value is 0.\n"},
  {(char*)"Upload", PyvtkDataTransferHelper_Upload, METH_VARARGS,
   (char*)"V.Upload(int, [int, ...]) -> bool\nC++: bool Upload(int components=0, int *componentList=NULL)\n\nOld comment. Upload Extent from CPU data buffer to GPU. The\nWholeExtent must match the Array size. New comment. Upload\nGPUExtent from CPU vtkDataArray to GPU texture. It is possible to\nsend a subset of the components or to specify and order of\ncomponents or both. If components=0, componentList is ignored and\nall components are passed, a texture cannot have more than 4\ncomponents.\n\\pre array_exists: array!=0\n\\pre array_not_empty: array->GetNumberOfTuples()>0\n\\pre valid_cpu_extent: this->GetCPUExtentIsValid()\n\\pre valid_cpu_extent_size:\n    (CPUExtent[1]-CPUExtent[0]+1)*(CPUExtent[3]-CPUExtent[2]+1)*(C\n    PUExtent[5]-CPUExtent[4]+1)==array->GetNumberOfTuples()\n\\pre valid_gpu_extent: this->GetGPUExtentIsValid()\n\\pre gpu_extent_in_cpu_extent: CPUExtent[0]<=GPUExtent[0] &&\n    GPUExtent[1]<=CPUExtent[1] && CPUExtent[2]<=GPUExtent[2] &&\n    GPUExtent[3]<=CPUExtent[3] && CPUExtent[4]<=GPUExtent[4] &&\n    GPUExtent[5]<=CPUExtent[5]\n\\pre gpu_texture_size: !this->GetTextureExtentIsValid() ||\n    (GPUExtent[1]-GPUExtent[0]+1)*(GPUExtent[3]-GPUExtent[2]+1)*(G\n    PUExtent[5]-GPUExtent[4]+1)==(TextureExtent[1]-TextureExtent[0\n    ]+1)*(TextureExtent[3]-TextureExtent[2]+1)*(TextureExtent[5]-T\n    extureExtent[4]+1)\n\\pre texture_can_exist_or_not: texture==0 || texture!=0\n\\pre valid_components: (components==0 && componentList==0 &&\n    array->GetNumberOfComponents()<=4) || (components>=1 &&\n    components<=array->GetNumberOfComponents() && components<=4\n    && componentList!=0)\n"},
  {(char*)"Download", PyvtkDataTransferHelper_Download, METH_VARARGS,
   (char*)"V.Download() -> bool\nC++: bool Download()\n\nold comment: Download Extent from GPU data buffer to CPU. GPU\ndata size must exactly match Extent. CPU data buffer will be\nresized to match WholeExtent in which only the Extent will be\nfilled with the GPU data. new comment: Download GPUExtent from\nGPU texture to CPU vtkDataArray. If Array is not provided, it\nwill be created with the size of CPUExtent. But only the tuples\ncovered by GPUExtent will be download. In this case, if GPUExtent\ndoes not cover all GPUExtent, some of the vtkDataArray will be\nuninitialized. Reminder: A=>B <=> !A||B\n\\pre texture_exists: texture!=0\n\\pre array_not_empty: array==0 || array->GetNumberOfTuples()>0\n\\pre valid_cpu_extent: this->GetCPUExtentIsValid()\n\\pre valid_cpu_extent_size: array==0 ||\n    (CPUExtent[1]-CPUExtent[0]+1)*(CPUExtent[3]-CPUExtent[2]+1)*(C\n    PUExtent[5]-CPUExtent[4]+1)==array->GetNumberOfTuples()\n\\pre valid_gpu_extent: this->GetGPUExtentIsValid()\n\\pre gpu_extent_in_cpu_extent: CPUExtent[0]<=GPUExtent[0] &&\n    GPUExtent[1]<=CPUExtent[1] && CPUExtent[2]<=GPUExtent[2] &&\n    GPUExtent[3]<=CPUExtent[3] && CPUExtent[4]<=GPUExtent[4] &&\n    GPUExtent[5]<=CPUExtent[5]\n\\pre gpu_texture_size: !this->GetTextureExtentIsValid() ||\n    (GPUExtent[1]-GPUExtent[0]+1)*(GPUExtent[3]-GPUExtent[2]+1)*(G\n    PUExtent[5]-GPUExtent[4]+1)==(TextureExtent[1]-TextureExtent[0\n    ]+1)*(TextureExtent[3]-TextureExtent[2]+1)*(TextureExtent[5]-T\n    extureExtent[4]+1)\n\\pre valid_components: array==0 ||\n    array->GetNumberOfComponents()<=4\n\\pre components_match: array==0 ||\n    (texture->GetComponents()==array->GetNumberOfComponents())\n"},
  {(char*)"DownloadAsync1", PyvtkDataTransferHelper_DownloadAsync1, METH_VARARGS,
   (char*)"V.DownloadAsync1() -> bool\nC++: bool DownloadAsync1()\n\nSplits the download in two operations\n* Asynchronously download from texture memory to PBO\n  (DownloadAsync1()).\n* Copy from pbo to user array (DownloadAsync2()).\n"},
  {(char*)"DownloadAsync2", PyvtkDataTransferHelper_DownloadAsync2, METH_VARARGS,
   (char*)"V.DownloadAsync2() -> bool\nC++: bool DownloadAsync2()\n\nSplits the download in two operations\n* Asynchronously download from texture memory to PBO\n  (DownloadAsync1()).\n* Copy from pbo to user array (DownloadAsync2()).\n"},
  {(char*)"GetShaderSupportsTextureInt", PyvtkDataTransferHelper_GetShaderSupportsTextureInt, METH_VARARGS,
   (char*)"V.GetShaderSupportsTextureInt() -> bool\nC++: bool GetShaderSupportsTextureInt()\n\n"},
  {(char*)"SetShaderSupportsTextureInt", PyvtkDataTransferHelper_SetShaderSupportsTextureInt, METH_VARARGS,
   (char*)"V.SetShaderSupportsTextureInt(bool)\nC++: void SetShaderSupportsTextureInt(bool value)\n\n"},
  {(char*)"IsSupported", PyvtkDataTransferHelper_IsSupported, METH_VARARGS | METH_STATIC,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataTransferHelper_StaticNew()
{
  return vtkDataTransferHelper::New();
}

PyObject *PyVTKClass_vtkDataTransferHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataTransferHelper_StaticNew,
    PyvtkDataTransferHelper_Methods,
    "vtkDataTransferHelper", modulename,
    NULL, NULL,
    PyvtkDataTransferHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataTransferHelper_Doc()
{
  static const char *docstring[] = {
    "vtkDataTransferHelper - is a helper class that aids in transferring\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataTransferHelper is a helper class that aids in transferring\ndata\n between the CPU memory and the GPU memory. The data in GPU memory is\n stored as textures which that in CPU memory is stored as\nvtkDataArray.\n vtkDataTransferHelper provides API to transfer only a sub-extent of\nCPU\n structured data to/from the GPU.\n\nSee Also:\n\n\n vtkPixelBufferObject vtkTextureObject vtkOpenGLExtensionManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataTransferHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataTransferHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataTransferHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

