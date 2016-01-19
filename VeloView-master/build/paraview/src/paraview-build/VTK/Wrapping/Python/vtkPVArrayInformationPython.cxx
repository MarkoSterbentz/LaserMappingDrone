// python wrapper for vtkPVArrayInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVArrayInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVArrayInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVArrayInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVArrayInformation_Doc();


static PyObject *
PyvtkPVArrayInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVArrayInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVArrayInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVArrayInformation::NewInstance());

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
PyvtkPVArrayInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVArrayInformation *tempr = vtkPVArrayInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataType(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::SetDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkPVArrayInformation::GetDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetName(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVArrayInformation::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkPVArrayInformation::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentName(temp0, temp1);
      }
    else
      {
      op->vtkPVArrayInformation::SetComponentName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentName(temp0) :
      op->vtkPVArrayInformation::GetComponentName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTuples(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkPVArrayInformation::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetComponentRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
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
      op->SetComponentRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVArrayInformation::SetComponentRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVArrayInformation_SetComponentRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
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
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetComponentRange(temp0, temp1);
      }
    else
      {
      op->vtkPVArrayInformation::SetComponentRange(temp0, temp1);
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
PyvtkPVArrayInformation_SetComponentRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPVArrayInformation_SetComponentRange_s1(self, args);
    case 2:
      return PyvtkPVArrayInformation_SetComponentRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentRange");
  return NULL;
}



static PyObject *
PyvtkPVArrayInformation_GetComponentRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetComponentRange(temp0) :
      op->vtkPVArrayInformation::GetComponentRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPVArrayInformation_GetComponentRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
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
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetComponentRange(temp0, temp1);
      }
    else
      {
      op->vtkPVArrayInformation::GetComponentRange(temp0, temp1);
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
PyvtkPVArrayInformation_GetComponentRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVArrayInformation_GetComponentRange_s1(self, args);
    case 2:
      return PyvtkPVArrayInformation_GetComponentRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetComponentRange");
  return NULL;
}



static PyObject *
PyvtkPVArrayInformation_GetDataTypeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDataTypeRange(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::GetDataTypeRange(temp0);
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
PyvtkPVArrayInformation_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->Compare(temp0) :
      op->vtkPVArrayInformation::Compare(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
    {
    if (ap.IsBound())
      {
      op->AddRanges(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::AddRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetIsPartial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPartial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsPartial(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::SetIsPartial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetIsPartial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPartial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIsPartial() :
      op->vtkPVArrayInformation::GetIsPartial());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVArrayInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformationKeys(temp0);
      }
    else
      {
      op->vtkPVArrayInformation::AddInformationKeys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddInformationKey(temp0, temp1);
      }
    else
      {
      op->vtkPVArrayInformation::AddInformationKey(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddUniqueInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUniqueInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddUniqueInformationKey(temp0, temp1);
      }
    else
      {
      op->vtkPVArrayInformation::AddUniqueInformationKey(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetNumberOfInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationKeys() :
      op->vtkPVArrayInformation::GetNumberOfInformationKeys());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetInformationKeyLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyLocation(temp0) :
      op->vtkPVArrayInformation::GetInformationKeyLocation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetInformationKeyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyName(temp0) :
      op->vtkPVArrayInformation::GetInformationKeyName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_HasInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->HasInformationKey(temp0, temp1) :
      op->vtkPVArrayInformation::HasInformationKey(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVArrayInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVArrayInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVArrayInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVArrayInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVArrayInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataType", PyvtkPVArrayInformation_SetDataType, METH_VARARGS,
   (char*)"V.SetDataType(int)\nC++: void SetDataType(int a)\n\nDataType is the string name of the data type: VTK_FLOAT ... the\nvalue \"VTK_VOID\" means that different processes have different\ntypes.\n"},
  {(char*)"GetDataType", PyvtkPVArrayInformation_GetDataType, METH_VARARGS,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nDataType is the string name of the data type: VTK_FLOAT ... the\nvalue \"VTK_VOID\" means that different processes have different\ntypes.\n"},
  {(char*)"SetName", PyvtkPVArrayInformation_SetName, METH_VARARGS,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nSet/get array's name\n"},
  {(char*)"GetName", PyvtkPVArrayInformation_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nSet/get array's name\n"},
  {(char*)"SetNumberOfComponents", PyvtkPVArrayInformation_SetNumberOfComponents, METH_VARARGS,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps)\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {(char*)"GetNumberOfComponents", PyvtkPVArrayInformation_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {(char*)"SetComponentName", PyvtkPVArrayInformation_SetComponentName, METH_VARARGS,
   (char*)"V.SetComponentName(int, string)\nC++: void SetComponentName(vtkIdType component, const char *name)\n\nSet the name for a component. Must be >= 1.\n"},
  {(char*)"GetComponentName", PyvtkPVArrayInformation_GetComponentName, METH_VARARGS,
   (char*)"V.GetComponentName(int) -> string\nC++: const char *GetComponentName(vtkIdType component)\n\n"},
  {(char*)"SetNumberOfTuples", PyvtkPVArrayInformation_SetNumberOfTuples, METH_VARARGS,
   (char*)"V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(int a)\n\nSet/get the array's length\n"},
  {(char*)"GetNumberOfTuples", PyvtkPVArrayInformation_GetNumberOfTuples, METH_VARARGS,
   (char*)"V.GetNumberOfTuples() -> int\nC++: int GetNumberOfTuples()\n\nSet/get the array's length\n"},
  {(char*)"SetComponentRange", PyvtkPVArrayInformation_SetComponentRange, METH_VARARGS,
   (char*)"V.SetComponentRange(int, float, float)\nC++: void SetComponentRange(int comp, double min, double max)\nV.SetComponentRange(int, [float, ...])\nC++: void SetComponentRange(int comp, double *range)\n\nThere is a range for each component. Range for component -1 is\nthe range of the vector magnitude. The number of components\nshould be set before these ranges.\n"},
  {(char*)"GetComponentRange", PyvtkPVArrayInformation_GetComponentRange, METH_VARARGS,
   (char*)"V.GetComponentRange(int) -> (float, float)\nC++: double *GetComponentRange(int component)\nV.GetComponentRange(int, [float, ...])\nC++: void GetComponentRange(int comp, double *range)\n\nThere is a range for each component. Range for component -1 is\nthe range of the vector magnitude. The number of components\nshould be set before these ranges.\n"},
  {(char*)"GetDataTypeRange", PyvtkPVArrayInformation_GetDataTypeRange, METH_VARARGS,
   (char*)"V.GetDataTypeRange([float, float])\nC++: void GetDataTypeRange(double range[2])\n\nThis method return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255). Nothing particular for 12bits\ndata is done\n"},
  {(char*)"Compare", PyvtkPVArrayInformation_Compare, METH_VARARGS,
   (char*)"V.Compare(vtkPVArrayInformation) -> int\nC++: int Compare(vtkPVArrayInformation *info)\n\nReturns 1 if the array can be combined. It must have the same\nname and number of components.\n"},
  {(char*)"AddRanges", PyvtkPVArrayInformation_AddRanges, METH_VARARGS,
   (char*)"V.AddRanges(vtkPVArrayInformation)\nC++: void AddRanges(vtkPVArrayInformation *info)\n\nMerge (union) ranges into this object.\n"},
  {(char*)"DeepCopy", PyvtkPVArrayInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkPVArrayInformation)\nC++: void DeepCopy(vtkPVArrayInformation *info)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVArrayInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVArrayInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVArrayInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVArrayInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"SetIsPartial", PyvtkPVArrayInformation_SetIsPartial, METH_VARARGS,
   (char*)"V.SetIsPartial(int)\nC++: void SetIsPartial(int a)\n\nIf IsPartial is true, this array is in only some of the parts of\na multi-block dataset. By default, IsPartial is set to 0.\n"},
  {(char*)"GetIsPartial", PyvtkPVArrayInformation_GetIsPartial, METH_VARARGS,
   (char*)"V.GetIsPartial() -> int\nC++: int GetIsPartial()\n\nIf IsPartial is true, this array is in only some of the parts of\na multi-block dataset. By default, IsPartial is set to 0.\n"},
  {(char*)"Initialize", PyvtkPVArrayInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRemove all infommation. Next add will be like a copy.\n"},
  {(char*)"AddInformationKeys", PyvtkPVArrayInformation_AddInformationKeys, METH_VARARGS,
   (char*)"V.AddInformationKeys(vtkPVArrayInformation)\nC++: void AddInformationKeys(vtkPVArrayInformation *info)\n\nMerge (union) keys into this object.\n"},
  {(char*)"AddInformationKey", PyvtkPVArrayInformation_AddInformationKey, METH_VARARGS,
   (char*)"V.AddInformationKey(string, string)\nC++: void AddInformationKey(const char *location,\n    const char *name)\n\nMerge (union) keys into this object.\n"},
  {(char*)"AddUniqueInformationKey", PyvtkPVArrayInformation_AddUniqueInformationKey, METH_VARARGS,
   (char*)"V.AddUniqueInformationKey(string, string)\nC++: void AddUniqueInformationKey(const char *location,\n    const char *name)\n\nMerge (union) keys into this object.\n"},
  {(char*)"GetNumberOfInformationKeys", PyvtkPVArrayInformation_GetNumberOfInformationKeys, METH_VARARGS,
   (char*)"V.GetNumberOfInformationKeys() -> int\nC++: int GetNumberOfInformationKeys()\n\nGet information on the InformationKeys of this array\n"},
  {(char*)"GetInformationKeyLocation", PyvtkPVArrayInformation_GetInformationKeyLocation, METH_VARARGS,
   (char*)"V.GetInformationKeyLocation(int) -> string\nC++: const char *GetInformationKeyLocation(int)\n\nGet information on the InformationKeys of this array\n"},
  {(char*)"GetInformationKeyName", PyvtkPVArrayInformation_GetInformationKeyName, METH_VARARGS,
   (char*)"V.GetInformationKeyName(int) -> string\nC++: const char *GetInformationKeyName(int)\n\nGet information on the InformationKeys of this array\n"},
  {(char*)"HasInformationKey", PyvtkPVArrayInformation_HasInformationKey, METH_VARARGS,
   (char*)"V.HasInformationKey(string, string) -> int\nC++: int HasInformationKey(const char *location, const char *name)\n\nGet information on the InformationKeys of this array\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVArrayInformation_StaticNew()
{
  return vtkPVArrayInformation::New();
}

PyObject *PyVTKClass_vtkPVArrayInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVArrayInformation_StaticNew,
    PyvtkPVArrayInformation_Methods,
    "vtkPVArrayInformation", modulename,
    NULL, NULL,
    PyvtkPVArrayInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVArrayInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVArrayInformation - Data array information like type.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "This objects is for eliminating direct access to vtkDataObjects by\nthe \"client\".  Only vtkPVPart and vtkPVProcessModule should access\nthe data directly.  At the moment, this object is only a container\nand has no useful methods for operating on data. Note:  I could just\nuse vtkDataArray objects and store the range as values in the array. \nThis would eliminate this object.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVArrayInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVArrayInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVArrayInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

