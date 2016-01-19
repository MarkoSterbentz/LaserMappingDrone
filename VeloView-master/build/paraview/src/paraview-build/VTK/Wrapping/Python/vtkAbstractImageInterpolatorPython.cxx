// python wrapper for vtkAbstractImageInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractImageInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractImageInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractImageInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractImageInterpolator_Doc();


static PyObject *
PyvtkAbstractImageInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractImageInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractImageInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractImageInterpolator::NewInstance());

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
PyvtkAbstractImageInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractImageInterpolator *tempr = vtkAbstractImageInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseData();
      }
    else
      {
      op->vtkAbstractImageInterpolator::ReleaseData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkAbstractImageInterpolator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAbstractImageInterpolator::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Interpolate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    double tempr = (ap.IsBound() ?
      op->Interpolate(temp0, temp1, temp2, temp3) :
      op->vtkAbstractImageInterpolator::Interpolate(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractImageInterpolator_Interpolate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0[3];
  const int size0 = 3;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->Interpolate(temp0, temp1) :
      op->vtkAbstractImageInterpolator::Interpolate(temp0, temp1));

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
PyvtkAbstractImageInterpolator_Interpolate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkAbstractImageInterpolator_Interpolate_s1(self, args);
    case 2:
      return PyvtkAbstractImageInterpolator_Interpolate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Interpolate");
  return NULL;
}



static PyObject *
PyvtkAbstractImageInterpolator_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutValue(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetOutValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkAbstractImageInterpolator::GetOutValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAbstractImageInterpolator::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetComponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentOffset(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetComponentOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetComponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentOffset() :
      op->vtkAbstractImageInterpolator::GetComponentOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetComponentCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponentCount(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetComponentCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetComponentCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentCount() :
      op->vtkAbstractImageInterpolator::GetComponentCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ComputeNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeNumberOfComponents(temp0) :
      op->vtkAbstractImageInterpolator::ComputeNumberOfComponents(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkAbstractImageInterpolator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_InterpolateIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0[3];
  const int size0 = 3;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateIJK(temp0, temp1);
      }
    else
      {
      op->vtkAbstractImageInterpolator::InterpolateIJK(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_CheckBoundsIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckBoundsIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    bool tempr = (ap.IsBound() ?
      op->CheckBoundsIJK(temp0) :
      op->vtkAbstractImageInterpolator::CheckBoundsIJK(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderMode(temp0);
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetBorderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToClamp();
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetBorderModeToClamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToRepeat();
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetBorderModeToRepeat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToMirror();
      }
    else
      {
      op->vtkAbstractImageInterpolator::SetBorderModeToMirror();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkAbstractImageInterpolator::GetBorderMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkAbstractImageInterpolator::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0[16];
  const int size0 = 16;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->ComputeSupportSize(temp0, temp1);

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
PyvtkAbstractImageInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsSeparable();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkAbstractImageInterpolator::GetSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAbstractImageInterpolator::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkAbstractImageInterpolator::GetExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkAbstractImageInterpolator::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractImageInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractImageInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractImageInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractImageInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractImageInterpolator\nC++: vtkAbstractImageInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractImageInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractImageInterpolator\nC++: vtkAbstractImageInterpolator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkAbstractImageInterpolator_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkDataObject)\nC++: virtual void Initialize(vtkDataObject *data)\n\nInitialize the interpolator with the data that you wish to\ninterpolate.\n"},
  {(char*)"ReleaseData", PyvtkAbstractImageInterpolator_ReleaseData, METH_VARARGS,
   (char*)"V.ReleaseData()\nC++: virtual void ReleaseData()\n\nRelease any data stored by the interpolator.\n"},
  {(char*)"DeepCopy", PyvtkAbstractImageInterpolator_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkAbstractImageInterpolator)\nC++: void DeepCopy(vtkAbstractImageInterpolator *obj)\n\nCopy the interpolator.  It is possible to duplicate an\ninterpolator by calling NewInstance() followed by DeepCopy().\n"},
  {(char*)"Update", PyvtkAbstractImageInterpolator_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nUpdate the interpolator.  If the interpolator has been modified\nby a Set method since Initialize() was called, you must call this\nmethod to update the interpolator before you can use it.\n"},
  {(char*)"Interpolate", PyvtkAbstractImageInterpolator_Interpolate, METH_VARARGS,
   (char*)"V.Interpolate(float, float, float, int) -> float\nC++: double Interpolate(double x, double y, double z,\n    int component)\nV.Interpolate((float, float, float), [float, ...]) -> bool\nC++: bool Interpolate(const double point[3], double *value)\n\nGet the result of interpolating the specified component of the\ninput data, which should be set to zero if there is only one\ncomponent. If the point is not within the bounds of the data set,\nthen OutValue will be returned.  This method is primarily meant\nfor use by the wrapper languages.\n"},
  {(char*)"SetOutValue", PyvtkAbstractImageInterpolator_SetOutValue, METH_VARARGS,
   (char*)"V.SetOutValue(float)\nC++: void SetOutValue(double outValue)\n\nThe value to return when the point is out of bounds.\n"},
  {(char*)"GetOutValue", PyvtkAbstractImageInterpolator_GetOutValue, METH_VARARGS,
   (char*)"V.GetOutValue() -> float\nC++: double GetOutValue()\n\nThe value to return when the point is out of bounds.\n"},
  {(char*)"SetTolerance", PyvtkAbstractImageInterpolator_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double tol)\n\nThe tolerance to apply when checking whether a point is out of\nbounds. This is a fractional distance relative to the voxel size,\nso a tolerance of 1 expands the bounds by one voxel.\n"},
  {(char*)"GetTolerance", PyvtkAbstractImageInterpolator_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nThe tolerance to apply when checking whether a point is out of\nbounds. This is a fractional distance relative to the voxel size,\nso a tolerance of 1 expands the bounds by one voxel.\n"},
  {(char*)"SetComponentOffset", PyvtkAbstractImageInterpolator_SetComponentOffset, METH_VARARGS,
   (char*)"V.SetComponentOffset(int)\nC++: void SetComponentOffset(int offset)\n\nThis method specifies which component of the input will be\ninterpolated, or if ComponentCount is also set, it specifies the\nfirst component. When the interpolation is performed, it will be\nclamped to the number of available components.\n"},
  {(char*)"GetComponentOffset", PyvtkAbstractImageInterpolator_GetComponentOffset, METH_VARARGS,
   (char*)"V.GetComponentOffset() -> int\nC++: int GetComponentOffset()\n\nThis method specifies which component of the input will be\ninterpolated, or if ComponentCount is also set, it specifies the\nfirst component. When the interpolation is performed, it will be\nclamped to the number of available components.\n"},
  {(char*)"SetComponentCount", PyvtkAbstractImageInterpolator_SetComponentCount, METH_VARARGS,
   (char*)"V.SetComponentCount(int)\nC++: void SetComponentCount(int count)\n\nThis method specifies the number of components to extract.  The\ndefault value is -1, which extracts all available components. \nWhen the interpolation is performed, this will be clamped to the\nnumber of available components.\n"},
  {(char*)"GetComponentCount", PyvtkAbstractImageInterpolator_GetComponentCount, METH_VARARGS,
   (char*)"V.GetComponentCount() -> int\nC++: int GetComponentCount()\n\nThis method specifies the number of components to extract.  The\ndefault value is -1, which extracts all available components. \nWhen the interpolation is performed, this will be clamped to the\nnumber of available components.\n"},
  {(char*)"ComputeNumberOfComponents", PyvtkAbstractImageInterpolator_ComputeNumberOfComponents, METH_VARARGS,
   (char*)"V.ComputeNumberOfComponents(int) -> int\nC++: int ComputeNumberOfComponents(int inputComponents)\n\nCompute the number of output components based on the\nComponentOffset, ComponentCount, and the number of components in\nthe input data.\n"},
  {(char*)"GetNumberOfComponents", PyvtkAbstractImageInterpolator_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components that will be returned when\nInterpolate() is called.  This is only valid after\ninitialization.  Before then, use ComputeNumberOfComponents\ninstead.\n"},
  {(char*)"InterpolateIJK", PyvtkAbstractImageInterpolator_InterpolateIJK, METH_VARARGS,
   (char*)"V.InterpolateIJK((float, float, float), [float, ...])\nC++: void InterpolateIJK(const double point[3], double *value)\n\nA version of Interpolate that takes structured coords instead of\ndata coords.  Structured coords are the data coords after\nsubtracting the Origin and dividing by the Spacing.\n"},
  {(char*)"CheckBoundsIJK", PyvtkAbstractImageInterpolator_CheckBoundsIJK, METH_VARARGS,
   (char*)"V.CheckBoundsIJK((float, float, float)) -> bool\nC++: bool CheckBoundsIJK(const double x[3])\n\nCheck an x,y,z point to see if it is within the bounds for the\nstructured coords of the image.  This is meant to be called prior\nto InterpolateIJK.  The bounds that are checked against are the\ninput image extent plus the tolerance.\n"},
  {(char*)"SetBorderMode", PyvtkAbstractImageInterpolator_SetBorderMode, METH_VARARGS,
   (char*)"V.SetBorderMode(int)\nC++: void SetBorderMode(int mode)\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {(char*)"SetBorderModeToClamp", PyvtkAbstractImageInterpolator_SetBorderModeToClamp, METH_VARARGS,
   (char*)"V.SetBorderModeToClamp()\nC++: void SetBorderModeToClamp()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {(char*)"SetBorderModeToRepeat", PyvtkAbstractImageInterpolator_SetBorderModeToRepeat, METH_VARARGS,
   (char*)"V.SetBorderModeToRepeat()\nC++: void SetBorderModeToRepeat()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {(char*)"SetBorderModeToMirror", PyvtkAbstractImageInterpolator_SetBorderModeToMirror, METH_VARARGS,
   (char*)"V.SetBorderModeToMirror()\nC++: void SetBorderModeToMirror()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {(char*)"GetBorderMode", PyvtkAbstractImageInterpolator_GetBorderMode, METH_VARARGS,
   (char*)"V.GetBorderMode() -> int\nC++: int GetBorderMode()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {(char*)"GetBorderModeAsString", PyvtkAbstractImageInterpolator_GetBorderModeAsString, METH_VARARGS,
   (char*)"V.GetBorderModeAsString() -> string\nC++: const char *GetBorderModeAsString()\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {(char*)"ComputeSupportSize", PyvtkAbstractImageInterpolator_ComputeSupportSize, METH_VARARGS,
   (char*)"V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: virtual void ComputeSupportSize(const double matrix[16],\n    int support[3])\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass NULL as the matrix to\nretrieve the full kernel size.\n"},
  {(char*)"IsSeparable", PyvtkAbstractImageInterpolator_IsSeparable, METH_VARARGS,
   (char*)"V.IsSeparable() -> bool\nC++: virtual bool IsSeparable()\n\nTrue if the interpolation is separable, which means that the\nweights can be precomputed in order to accelerate the\ninterpolation.  Any interpolator which is separable will\nimplement the methods PrecomputeWeightsForExtent and\nInterpolateRow\n"},
  {(char*)"GetSpacing", PyvtkAbstractImageInterpolator_GetSpacing, METH_VARARGS,
   (char*)"V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {(char*)"GetOrigin", PyvtkAbstractImageInterpolator_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"GetExtent", PyvtkAbstractImageInterpolator_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"GetWholeExtent", PyvtkAbstractImageInterpolator_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractImageInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractImageInterpolator_Methods,
    "vtkAbstractImageInterpolator", modulename,
    NULL, NULL,
    PyvtkAbstractImageInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractImageInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractImageInterpolator - interpolate data values from images\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAbstractImageInterpolator provides an abstract interface for\ninterpolating image data.  You specify the data set you want to\ninterpolate values from, then call Interpolate(x,y,z) to interpolate\nthe data.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept. of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\nSee also:\n\nvtkImageReslice vtkI",
    "mageInterpolator vtkImageSincInterpolator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractImageInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractImageInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractImageInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_IMAGE_BORDER_CLAMP", 0 },
        { "VTK_IMAGE_BORDER_REPEAT", 1 },
        { "VTK_IMAGE_BORDER_MIRROR", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

