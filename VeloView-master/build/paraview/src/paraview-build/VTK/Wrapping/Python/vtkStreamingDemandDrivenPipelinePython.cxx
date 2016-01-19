// python wrapper for vtkStreamingDemandDrivenPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkStreamingDemandDrivenPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDemandDrivenPipelineNew
extern "C" { PyObject *PyVTKClass_vtkDemandDrivenPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkDemandDrivenPipelineNew
#endif

static const char **PyvtkStreamingDemandDrivenPipeline_Doc();


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamingDemandDrivenPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingDemandDrivenPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamingDemandDrivenPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingDemandDrivenPipeline::NewInstance());

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
PyvtkStreamingDemandDrivenPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamingDemandDrivenPipeline *tempr = vtkStreamingDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkStreamingDemandDrivenPipeline::Update());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkStreamingDemandDrivenPipeline::Update(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStreamingDemandDrivenPipeline_Update_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateWholeExtent() :
      op->vtkStreamingDemandDrivenPipeline::UpdateWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->PropagateUpdateExtent(temp0) :
      op->vtkStreamingDemandDrivenPipeline::PropagateUpdateExtent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PropagateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->PropagateTime(temp0) :
      op->vtkStreamingDemandDrivenPipeline::PropagateTime(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UpdateTimeDependentInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeDependentInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateTimeDependentInformation(temp0) :
      op->vtkStreamingDemandDrivenPipeline::UpdateTimeDependentInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetWholeExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetWholeExtent");

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkStreamingDemandDrivenPipeline::SetWholeExtent(temp0, temp1);

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

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWholeExtent");

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkStreamingDemandDrivenPipeline::GetWholeExtent(temp0, temp1);

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

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWholeExtent");

  vtkInformation *temp0 = NULL;
  int sizer = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int *tempr = vtkStreamingDemandDrivenPipeline::GetWholeExtent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetUpdateExtentToWholeExtent(temp0) :
      op->vtkStreamingDemandDrivenPipeline::SetUpdateExtentToWholeExtent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdateExtentToWholeExtent");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdateExtentToWholeExtent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_s2, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtentToWholeExtent");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetUpdateExtent(temp0, temp1) :
      op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1));

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

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    int tempr = (ap.IsBound() ?
      op->SetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdateExtent");

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1);

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

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->SetUpdateExtent(temp0, temp1, temp2, temp3) :
      op->vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdateExtent");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdateExtent(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s1, METH_VARARGS,
   (char*)"@iO *i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s3, METH_VARARGS | METH_STATIC,
   (char*)"OO *vtkInformation *i"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s4, METH_VARARGS,
   (char*)"@iiii"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s5, METH_VARARGS | METH_STATIC,
   (char*)"Oiii *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s1(self, args);
    case 7:
    case 8:
      return PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s2(self, args);
    case 5:
      return PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent_s4(self, args);
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateExtent");

  vtkInformation *temp0 = NULL;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkStreamingDemandDrivenPipeline::GetUpdateExtent(temp0, temp1);

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

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateExtent");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int *tempr = vtkStreamingDemandDrivenPipeline::GetUpdateExtent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdatePiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdatePiece");

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdatePiece(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdatePiece(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdatePiece");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::GetUpdatePiece(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateNumberOfPieces(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdateNumberOfPieces");

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdateNumberOfPieces(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateNumberOfPieces(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateNumberOfPieces");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::GetUpdateNumberOfPieces(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateGhostLevel(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdateGhostLevel");

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdateGhostLevel(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateGhostLevel(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateGhostLevel");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::GetUpdateGhostLevel(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetUpdateTimeStep(temp0, temp1) :
      op->vtkStreamingDemandDrivenPipeline::SetUpdateTimeStep(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUpdateTimeStep");

  vtkInformation *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    int tempr = vtkStreamingDemandDrivenPipeline::SetUpdateTimeStep(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep_Methods[] = {
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep_s1, METH_VARARGS,
   (char*)"@id"},
  {NULL, PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep_s2, METH_VARARGS | METH_STATIC,
   (char*)"Od *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateTimeStep");
  return NULL;
}



static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetRequestExactExtent(temp0, temp1) :
      op->vtkStreamingDemandDrivenPipeline::SetRequestExactExtent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRequestExactExtent(temp0) :
      op->vtkStreamingDemandDrivenPipeline::GetRequestExactExtent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_TIME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_TIME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_TIME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_TIME_DEPENDENT_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_TIME_DEPENDENT_INFORMATION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkStreamingDemandDrivenPipeline::REQUEST_TIME_DEPENDENT_INFORMATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_CONTINUE_EXECUTING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTINUE_EXECUTING");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_INITIALIZED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT_INITIALIZED");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_INITIALIZED();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_PIECE_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_PIECE_NUMBER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_PIECES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_NUMBER_OF_PIECES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_GHOST_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_NUMBER_OF_GHOST_LEVELS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_COMBINED_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMBINED_UPDATE_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkStreamingDemandDrivenPipeline::COMBINED_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_WHOLE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WHOLE_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkStreamingDemandDrivenPipeline::WHOLE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UNRESTRICTED_UPDATE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UNRESTRICTED_UPDATE_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UNRESTRICTED_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_EXACT_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EXACT_EXTENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::EXACT_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_STEPS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_STEPS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkStreamingDemandDrivenPipeline::TIME_STEPS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_RANGE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkStreamingDemandDrivenPipeline::TIME_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_TIME_STEP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_TIME_STEP");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_TIME_STEP();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_DEPENDENT_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_DEPENDENT_INFORMATION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::TIME_DEPENDENT_INFORMATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_BOUNDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BOUNDS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkStreamingDemandDrivenPipeline::BOUNDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamingDemandDrivenPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamingDemandDrivenPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamingDemandDrivenPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamingDemandDrivenPipeline\nC++: vtkStreamingDemandDrivenPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamingDemandDrivenPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamingDemandDrivenPipeline\nC++: vtkStreamingDemandDrivenPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkStreamingDemandDrivenPipeline_Update, METH_VARARGS,
   (char*)"V.Update() -> int\nC++: virtual int Update()\nV.Update(int) -> int\nC++: virtual int Update(int port)\n\nBring the outputs up-to-date.\n"},
  {(char*)"UpdateWholeExtent", PyvtkStreamingDemandDrivenPipeline_UpdateWholeExtent, METH_VARARGS,
   (char*)"V.UpdateWholeExtent() -> int\nC++: virtual int UpdateWholeExtent()\n\nBring the outputs up-to-date.\n"},
  {(char*)"PropagateUpdateExtent", PyvtkStreamingDemandDrivenPipeline_PropagateUpdateExtent, METH_VARARGS,
   (char*)"V.PropagateUpdateExtent(int) -> int\nC++: int PropagateUpdateExtent(int outputPort)\n\nPropagate the update request from the given output port back\nthrough the pipeline.  Should be called only when information is\nup to date.\n"},
  {(char*)"PropagateTime", PyvtkStreamingDemandDrivenPipeline_PropagateTime, METH_VARARGS,
   (char*)"V.PropagateTime(int) -> int\nC++: int PropagateTime(int outputPort)\n\nPropagate time through the pipeline. this is a special pass only\nnecessary if there is temporal meta data that must be updated\n"},
  {(char*)"UpdateTimeDependentInformation", PyvtkStreamingDemandDrivenPipeline_UpdateTimeDependentInformation, METH_VARARGS,
   (char*)"V.UpdateTimeDependentInformation(int) -> int\nC++: int UpdateTimeDependentInformation(int outputPort)\n\nPropagate time through the pipeline. this is a special pass only\nnecessary if there is temporal meta data that must be updated\n"},
  {(char*)"SetWholeExtent", PyvtkStreamingDemandDrivenPipeline_SetWholeExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.SetWholeExtent(vtkInformation, [int, int, int, int, int, int])\n    -> int\nC++: static int SetWholeExtent(vtkInformation *, int extent[6])\n\nSet/Get the whole extent of an output port.  The whole extent is\nmeta data for structured data sets.  It gets set by the algorithm\nduring the update information pass.\n"},
  {(char*)"GetWholeExtent", PyvtkStreamingDemandDrivenPipeline_GetWholeExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetWholeExtent(vtkInformation, [int, int, int, int, int, int])\nC++: static void GetWholeExtent(vtkInformation *, int extent[6])\nV.GetWholeExtent(vtkInformation) -> (int, int, int, int, int, int)\nC++: static int *GetWholeExtent(vtkInformation *)\n\nSet/Get the whole extent of an output port.  The whole extent is\nmeta data for structured data sets.  It gets set by the algorithm\nduring the update information pass.\n"},
  {(char*)"SetUpdateExtentToWholeExtent", PyvtkStreamingDemandDrivenPipeline_SetUpdateExtentToWholeExtent, METH_VARARGS,
   (char*)"V.SetUpdateExtentToWholeExtent(int) -> int\nC++: int SetUpdateExtentToWholeExtent(int port)\nV.SetUpdateExtentToWholeExtent(vtkInformation) -> int\nC++: static int SetUpdateExtentToWholeExtent(vtkInformation *)\n\nIf the whole input extent is required to generate the requested\noutput extent, this method can be called to set the input update\nextent to the whole input extent. This method assumes that the\nwhole extent is known (that UpdateInformation has been called)\n"},
  {(char*)"SetUpdateExtent", PyvtkStreamingDemandDrivenPipeline_SetUpdateExtent, METH_VARARGS,
   (char*)"V.SetUpdateExtent(int, [int, int, int, int, int, int]) -> int\nC++: int SetUpdateExtent(int port, int extent[6])\nV.SetUpdateExtent(int, int, int, int, int, int, int) -> int\nC++: int SetUpdateExtent(int port, int x0, int x1, int y0, int y1,\n     int z0, int z1)\nV.SetUpdateExtent(vtkInformation, [int, int, int, int, int, int])\n    -> int\nC++: static int SetUpdateExtent(vtkInformation *, int extent[6])\nV.SetUpdateExtent(int, int, int, int) -> int\nC++: int SetUpdateExtent(int port, int piece, int numPieces,\n    int ghostLevel)\nV.SetUpdateExtent(vtkInformation, int, int, int) -> int\nC++: static int SetUpdateExtent(vtkInformation *, int piece,\n    int numPieces, int ghostLevel)\n\nGet/Set the update extent for output ports that use 3D extents.\n"},
  {(char*)"GetUpdateExtent", PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUpdateExtent(vtkInformation, [int, int, int, int, int, int])\nC++: static void GetUpdateExtent(vtkInformation *, int extent[6])\nV.GetUpdateExtent(vtkInformation) -> (int, ...)\nC++: static int *GetUpdateExtent(vtkInformation *)\n\nGet/Set the update extent for output ports that use 3D extents.\n"},
  {(char*)"SetUpdatePiece", PyvtkStreamingDemandDrivenPipeline_SetUpdatePiece, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUpdatePiece(vtkInformation, int) -> int\nC++: static int SetUpdatePiece(vtkInformation *, int piece)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdatePiece", PyvtkStreamingDemandDrivenPipeline_GetUpdatePiece, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUpdatePiece(vtkInformation) -> int\nC++: static int GetUpdatePiece(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_SetUpdateNumberOfPieces, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUpdateNumberOfPieces(vtkInformation, int) -> int\nC++: static int SetUpdateNumberOfPieces(vtkInformation *, int n)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdateNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_GetUpdateNumberOfPieces, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUpdateNumberOfPieces(vtkInformation) -> int\nC++: static int GetUpdateNumberOfPieces(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateGhostLevel", PyvtkStreamingDemandDrivenPipeline_SetUpdateGhostLevel, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUpdateGhostLevel(vtkInformation, int) -> int\nC++: static int SetUpdateGhostLevel(vtkInformation *, int n)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"GetUpdateGhostLevel", PyvtkStreamingDemandDrivenPipeline_GetUpdateGhostLevel, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUpdateGhostLevel(vtkInformation) -> int\nC++: static int GetUpdateGhostLevel(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {(char*)"SetUpdateTimeStep", PyvtkStreamingDemandDrivenPipeline_SetUpdateTimeStep, METH_VARARGS,
   (char*)"V.SetUpdateTimeStep(int, float) -> int\nC++: int SetUpdateTimeStep(int port, double time)\nV.SetUpdateTimeStep(vtkInformation, float) -> int\nC++: static int SetUpdateTimeStep(vtkInformation *, double time)\n\nGet/Set the update extent for output ports that use Temporal\nExtents\n"},
  {(char*)"SetRequestExactExtent", PyvtkStreamingDemandDrivenPipeline_SetRequestExactExtent, METH_VARARGS,
   (char*)"V.SetRequestExactExtent(int, int) -> int\nC++: int SetRequestExactExtent(int port, int flag)\n\nThis request flag indicates whether the requester can handle more\ndata than requested for the given port.  Right now it is used in\nvtkImageData.  Image filters can return more data than requested.\nThe the consumer cannot handle this (i.e. DataSetToDataSetFitler)\nthe image will crop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"GetRequestExactExtent", PyvtkStreamingDemandDrivenPipeline_GetRequestExactExtent, METH_VARARGS,
   (char*)"V.GetRequestExactExtent(int) -> int\nC++: int GetRequestExactExtent(int port)\n\nThis request flag indicates whether the requester can handle more\ndata than requested for the given port.  Right now it is used in\nvtkImageData.  Image filters can return more data than requested.\nThe the consumer cannot handle this (i.e. DataSetToDataSetFitler)\nthe image will crop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"REQUEST_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_UPDATE_EXTENT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_EXTENT()\n\nKey defining a request to propagate the update extent\nupstream.\\ingroup InformationKeys\n"},
  {(char*)"REQUEST_UPDATE_TIME", PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_TIME, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_UPDATE_TIME() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_TIME()\n\nKey defining a request to propagate the update extent\nupstream.\\ingroup InformationKeys\n"},
  {(char*)"REQUEST_TIME_DEPENDENT_INFORMATION", PyvtkStreamingDemandDrivenPipeline_REQUEST_TIME_DEPENDENT_INFORMATION, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_TIME_DEPENDENT_INFORMATION() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_TIME_DEPENDENT_INFORMATION(\n    )\n\nKey defining a request to make sure the meta information is up to\ndate.\\ingroup InformationKeys\n"},
  {(char*)"CONTINUE_EXECUTING", PyvtkStreamingDemandDrivenPipeline_CONTINUE_EXECUTING, METH_VARARGS | METH_STATIC,
   (char*)"V.CONTINUE_EXECUTING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTINUE_EXECUTING()\n\nKey for an algorithm to store in a request to tell this executive\nto keep executing it.\\ingroup InformationKeys\n"},
  {(char*)"UPDATE_EXTENT_INITIALIZED", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_INITIALIZED, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_EXTENT_INITIALIZED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_EXTENT_INITIALIZED()\n\nKeys to store an update request in pipeline information.\\ingroup\nInformationKeys\n"},
  {(char*)"UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *UPDATE_EXTENT()\n\n\\ingroup InformationKeys\n"},
  {(char*)"UPDATE_PIECE_NUMBER", PyvtkStreamingDemandDrivenPipeline_UPDATE_PIECE_NUMBER, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_PIECE_NUMBER()\n\n\\ingroup InformationKeys\n"},
  {(char*)"UPDATE_NUMBER_OF_PIECES", PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_PIECES, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_NUMBER_OF_PIECES()\n\n\\ingroup InformationKeys\n"},
  {(char*)"UPDATE_NUMBER_OF_GHOST_LEVELS", PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_GHOST_LEVELS, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_NUMBER_OF_GHOST_LEVELS(\n    )\n\n\\ingroup InformationKeys\n"},
  {(char*)"COMBINED_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_COMBINED_UPDATE_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.COMBINED_UPDATE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *COMBINED_UPDATE_EXTENT(\n    )\n\nKey for combining the update extents requested by all consumers,\nso that the final extent that is produced satisfies all\nconsumers.\\ingroup InformationKeys\n"},
  {(char*)"WHOLE_EXTENT", PyvtkStreamingDemandDrivenPipeline_WHOLE_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.WHOLE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *WHOLE_EXTENT()\n\nKey to store the whole extent provided in pipeline\ninformation.\\ingroup InformationKeys\n"},
  {(char*)"UNRESTRICTED_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_UNRESTRICTED_UPDATE_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.UNRESTRICTED_UPDATE_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UNRESTRICTED_UPDATE_EXTENT()\n\nThis is set if the update extent is not restricted to the whole\nextent, for sources that can generate an extent of any requested\nsize.\\ingroup InformationKeys\n"},
  {(char*)"EXACT_EXTENT", PyvtkStreamingDemandDrivenPipeline_EXACT_EXTENT, METH_VARARGS | METH_STATIC,
   (char*)"V.EXACT_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *EXACT_EXTENT()\n\nKey to specify the request for exact extent in pipeline\ninformation.\\ingroup InformationKeys\n"},
  {(char*)"TIME_STEPS", PyvtkStreamingDemandDrivenPipeline_TIME_STEPS, METH_VARARGS | METH_STATIC,
   (char*)"V.TIME_STEPS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *TIME_STEPS()\n\nKey to store available time steps.\\ingroup InformationKeys\n"},
  {(char*)"TIME_RANGE", PyvtkStreamingDemandDrivenPipeline_TIME_RANGE, METH_VARARGS | METH_STATIC,
   (char*)"V.TIME_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *TIME_RANGE()\n\nKey to store available time range for continuous sources.\\ingroup\nInformationKeys\n"},
  {(char*)"UPDATE_TIME_STEP", PyvtkStreamingDemandDrivenPipeline_UPDATE_TIME_STEP, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_TIME_STEP() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *UPDATE_TIME_STEP()\n\nUpdate time steps requested by the pipeline.\\ingroup\nInformationKeys\n"},
  {(char*)"TIME_DEPENDENT_INFORMATION", PyvtkStreamingDemandDrivenPipeline_TIME_DEPENDENT_INFORMATION, METH_VARARGS | METH_STATIC,
   (char*)"V.TIME_DEPENDENT_INFORMATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *TIME_DEPENDENT_INFORMATION()\n\nWhether there are time dependent meta information if there is,\nthe pipeline will perform two extra passes to gather the time\ndependent information\\ingroup InformationKeys\n"},
  {(char*)"BOUNDS", PyvtkStreamingDemandDrivenPipeline_BOUNDS, METH_VARARGS | METH_STATIC,
   (char*)"V.BOUNDS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *BOUNDS()\n\nkey to record the bounds of a dataset.\\ingroup InformationKeys\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamingDemandDrivenPipeline_StaticNew()
{
  return vtkStreamingDemandDrivenPipeline::New();
}

PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamingDemandDrivenPipeline_StaticNew,
    PyvtkStreamingDemandDrivenPipeline_Methods,
    "vtkStreamingDemandDrivenPipeline", modulename,
    NULL, NULL,
    PyvtkStreamingDemandDrivenPipeline_Doc(),
    PyVTKClass_vtkDemandDrivenPipelineNew(modulename));
  return cls;
}

const char **PyvtkStreamingDemandDrivenPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkStreamingDemandDrivenPipeline - Executive supporting partial\nupdates.\n\n",
    "Superclass: vtkDemandDrivenPipeline\n\n",
    "vtkStreamingDemandDrivenPipeline is an executive that supports\nupdating only a portion of the data set in the pipeline.  This is the\nstyle of pipeline update that is provided by the old-style VTK 4.x\npipeline.  Instead of always updating an entire data set, this\nexecutive supports asking for pieces or sub-extents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamingDemandDrivenPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamingDemandDrivenPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_UPDATE_EXTENT_COMBINE", 1 },
        { "VTK_UPDATE_EXTENT_REPLACE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

