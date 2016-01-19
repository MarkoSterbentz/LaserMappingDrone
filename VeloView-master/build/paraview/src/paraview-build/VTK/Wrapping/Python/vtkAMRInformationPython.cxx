// python wrapper for vtkAMRInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRBox.h"
#include "vtkAMRInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAMRInformation_Doc();


static PyObject *
PyvtkAMRInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRInformation::NewInstance());

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
PyvtkAMRInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRInformation *tempr = vtkAMRInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  int temp0;
  int *temp1 = NULL;
  int small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkAMRInformation::Initialize(temp0, temp1);
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
PyvtkAMRInformation_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkAMRInformation::GetGridDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridDescription(temp0);
      }
    else
      {
      op->vtkAMRInformation::SetGridDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

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
      op->GetOrigin(temp0);
      }
    else
      {
      op->vtkAMRInformation::GetOrigin(temp0);
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
PyvtkAMRInformation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAMRInformation::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetOrigin_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetOrigin(temp0, temp1, temp2) :
      op->vtkAMRInformation::GetOrigin(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAMRInformation_GetOrigin_s1(self, args);
    case 0:
      return PyvtkAMRInformation_GetOrigin_s2(self, args);
    case 3:
      return PyvtkAMRInformation_GetOrigin_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return NULL;
}



static PyObject *
PyvtkAMRInformation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkAMRInformation::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMRInformation::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets(temp0) :
      op->vtkAMRInformation::GetNumberOfDataSets(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetTotalNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfBlocks() :
      op->vtkAMRInformation::GetTotalNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetIndex(temp0, temp1) :
      op->vtkAMRInformation::GetIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_ComputeIndexPair(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIndexPair");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ComputeIndexPair(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRInformation::ComputeIndexPair(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAMRInformation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetBounds(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAMRInformation::GetBounds(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAMRInformation_GetBounds_s1(self, args);
    case 3:
      return PyvtkAMRInformation_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAMRInformation_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSpacing(temp0, temp1);
      }
    else
      {
      op->vtkAMRInformation::GetSpacing(temp0, temp1);
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


static PyObject *
PyvtkAMRInformation_HasSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasSpacing(temp0) :
      op->vtkAMRInformation::HasSpacing(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAMRBlockSourceIndex(temp0) :
      op->vtkAMRInformation::GetAMRBlockSourceIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAMRBlockSourceIndex(temp0, temp1);
      }
    else
      {
      op->vtkAMRInformation::SetAMRBlockSourceIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GenerateRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRefinementRatio();
      }
    else
      {
      op->vtkAMRInformation::GenerateRefinementRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_HasRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasRefinementRatio() :
      op->vtkAMRInformation::HasRefinementRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRefinementRatio(temp0, temp1);
      }
    else
      {
      op->vtkAMRInformation::SetRefinementRatio(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkAMRInformation::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0, temp1);
      }
    else
      {
      op->vtkAMRInformation::SetSpacing(temp0, temp1);
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
PyvtkAMRInformation_HasChildrenInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChildrenInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasChildrenInformation() :
      op->vtkAMRInformation::HasChildrenInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetParents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetParents(temp0, temp1, temp2) :
      op->vtkAMRInformation::GetParents(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetChildren(temp0, temp1, temp2) :
      op->vtkAMRInformation::GetChildren(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_PrintParentChildInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParentChildInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->PrintParentChildInfo(temp0, temp1);
      }
    else
      {
      op->vtkAMRInformation::PrintParentChildInfo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_GenerateParentChildInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateParentChildInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateParentChildInformation();
      }
    else
      {
      op->vtkAMRInformation::GenerateParentChildInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_Audit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Audit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Audit() :
      op->vtkAMRInformation::Audit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3) :
      op->vtkAMRInformation::FindCell(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRInformation_FindGrid_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindGrid(temp0, temp1, temp2) :
      op->vtkAMRInformation::FindGrid(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAMRInformation_FindGrid_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindGrid(temp0, temp1, temp2) :
      op->vtkAMRInformation::FindGrid(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRInformation_FindGrid_Methods[] = {
  {NULL, PyvtkAMRInformation_FindGrid_s1, METH_VARARGS,
   (char*)"@OiI *d"},
  {NULL, PyvtkAMRInformation_FindGrid_s2, METH_VARARGS,
   (char*)"@OII *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAMRInformation_FindGrid(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRInformation_FindGrid_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindGrid");
  return NULL;
}



static PyObject *
PyvtkAMRInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  vtkAMRInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAMRInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAMRInformation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRInformation\nC++: vtkAMRInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRInformation\nC++: vtkAMRInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkAMRInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, (int, ...))\nC++: void Initialize(int numLevels, const int *blocksPerLevel)\n\n"},
  {(char*)"GetGridDescription", PyvtkAMRInformation_GetGridDescription, METH_VARARGS,
   (char*)"V.GetGridDescription() -> int\nC++: int GetGridDescription()\n\nreturns the value of vtkUniformGrid::GridDescription() of any\nblock\n"},
  {(char*)"SetGridDescription", PyvtkAMRInformation_SetGridDescription, METH_VARARGS,
   (char*)"V.SetGridDescription(int)\nC++: void SetGridDescription(int description)\n\nreturns the value of vtkUniformGrid::GridDescription() of any\nblock\n"},
  {(char*)"GetOrigin", PyvtkAMRInformation_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin([float, float, float])\nC++: void GetOrigin(double origin[3])\nV.GetOrigin() -> (float, ...)\nC++: double *GetOrigin()\nV.GetOrigin(int, int, [float, ...]) -> bool\nC++: bool GetOrigin(unsigned int level, unsigned int id,\n    double *origin)\n\nGet the AMR dataset origin The origin is essentially the minimum\nof all the grids.\n"},
  {(char*)"SetOrigin", PyvtkAMRInformation_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin((float, ...))\nC++: void SetOrigin(const double *origin)\n\nGet the AMR dataset origin The origin is essentially the minimum\nof all the grids.\n"},
  {(char*)"GetNumberOfLevels", PyvtkAMRInformation_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturn the number of levels\n"},
  {(char*)"GetNumberOfDataSets", PyvtkAMRInformation_GetNumberOfDataSets, METH_VARARGS,
   (char*)"V.GetNumberOfDataSets(int) -> int\nC++: unsigned int GetNumberOfDataSets(unsigned int level)\n\nReturns the number of datasets at the given levelx\n"},
  {(char*)"GetTotalNumberOfBlocks", PyvtkAMRInformation_GetTotalNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetTotalNumberOfBlocks() -> int\nC++: unsigned int GetTotalNumberOfBlocks()\n\nReturns total number of datasets\n"},
  {(char*)"GetIndex", PyvtkAMRInformation_GetIndex, METH_VARARGS,
   (char*)"V.GetIndex(int, int) -> int\nC++: int GetIndex(unsigned int level, unsigned int id)\n\nReturns the single index from a pair of indices\n"},
  {(char*)"ComputeIndexPair", PyvtkAMRInformation_ComputeIndexPair, METH_VARARGS,
   (char*)"V.ComputeIndexPair(int, int, int)\nC++: void ComputeIndexPair(unsigned int index,\n    unsigned int &level, unsigned int &id)\n\nReturns the an index pair given a single index\n"},
  {(char*)"GetBounds", PyvtkAMRInformation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, ...)\nC++: const double *GetBounds()\nV.GetBounds(int, int, [float, ...])\nC++: void GetBounds(unsigned int level, unsigned int id,\n    double *bb)\n\n"},
  {(char*)"GetSpacing", PyvtkAMRInformation_GetSpacing, METH_VARARGS,
   (char*)"V.GetSpacing(int, [float, float, float])\nC++: void GetSpacing(unsigned int level, double spacing[3])\n\n"},
  {(char*)"HasSpacing", PyvtkAMRInformation_HasSpacing, METH_VARARGS,
   (char*)"V.HasSpacing(int) -> bool\nC++: bool HasSpacing(unsigned int level)\n\n"},
  {(char*)"GetAMRBlockSourceIndex", PyvtkAMRInformation_GetAMRBlockSourceIndex, METH_VARARGS,
   (char*)"V.GetAMRBlockSourceIndex(int) -> int\nC++: int GetAMRBlockSourceIndex(int index)\n\nGet/Set the SourceIndex of a block. Typically, this is a\nfile-type specific index that can be used by a reader to load a\nparticular file block\n"},
  {(char*)"SetAMRBlockSourceIndex", PyvtkAMRInformation_SetAMRBlockSourceIndex, METH_VARARGS,
   (char*)"V.SetAMRBlockSourceIndex(int, int)\nC++: void SetAMRBlockSourceIndex(int index, int sourceId)\n\nGet/Set the SourceIndex of a block. Typically, this is a\nfile-type specific index that can be used by a reader to load a\nparticular file block\n"},
  {(char*)"GenerateRefinementRatio", PyvtkAMRInformation_GenerateRefinementRatio, METH_VARARGS,
   (char*)"V.GenerateRefinementRatio()\nC++: void GenerateRefinementRatio()\n\nThis method computes the refinement ratio at each level. At each\nlevel, l, the refinement ratio r_l is computed by r_l = D_{l} /\nD_{l+1}, where D_{l+1} and D_{l} are the grid spacings at the\nnext and current level respectively.\n\nAssumptions:\n\n1) Within each level, the refinement ratios are the same for all\n   blocks.\n2) The refinement ratio is uniform along each dimension of the\n   block.\n"},
  {(char*)"HasRefinementRatio", PyvtkAMRInformation_HasRefinementRatio, METH_VARARGS,
   (char*)"V.HasRefinementRatio() -> bool\nC++: bool HasRefinementRatio()\n\nReturns Wether refinement ratio has been set (either by calling\nGenerateRefinementRatio() or by calling SetRefinementRatio()\n"},
  {(char*)"SetRefinementRatio", PyvtkAMRInformation_SetRefinementRatio, METH_VARARGS,
   (char*)"V.SetRefinementRatio(int, int)\nC++: void SetRefinementRatio(unsigned int level, int ratio)\n\nSet the refinement ratio at a level. This method should be called\nfor all levels, if called at all.\n"},
  {(char*)"GetRefinementRatio", PyvtkAMRInformation_GetRefinementRatio, METH_VARARGS,
   (char*)"V.GetRefinementRatio(int) -> int\nC++: int GetRefinementRatio(unsigned int level)\n\nReturns the refinement of a given level.\n"},
  {(char*)"SetSpacing", PyvtkAMRInformation_SetSpacing, METH_VARARGS,
   (char*)"V.SetSpacing(int, (float, ...))\nC++: void SetSpacing(unsigned int level, const double *h)\n\nSet the spacing at a given level\n"},
  {(char*)"HasChildrenInformation", PyvtkAMRInformation_HasChildrenInformation, METH_VARARGS,
   (char*)"V.HasChildrenInformation() -> bool\nC++: bool HasChildrenInformation()\n\n"},
  {(char*)"GetParents", PyvtkAMRInformation_GetParents, METH_VARARGS,
   (char*)"V.GetParents(int, int, int) -> (int, ...)\nC++: unsigned int *GetParents(unsigned int level,\n    unsigned int index, unsigned int &numParents)\n\nReturn a pointer to Parents of a block.  The first entry is the\nnumber of parents the block has followed by its parent ids in\nlevel-1. If none exits it returns NULL.\n"},
  {(char*)"GetChildren", PyvtkAMRInformation_GetChildren, METH_VARARGS,
   (char*)"V.GetChildren(int, int, int) -> (int, ...)\nC++: unsigned int *GetChildren(unsigned int level,\n    unsigned int index, unsigned int &numChildren)\n\nReturn a pointer to Children of a block.  The first entry is the\nnumber of children the block has followed by its childern ids in\nlevel+1. If none exits it returns NULL.\n"},
  {(char*)"PrintParentChildInfo", PyvtkAMRInformation_PrintParentChildInfo, METH_VARARGS,
   (char*)"V.PrintParentChildInfo(int, int)\nC++: void PrintParentChildInfo(unsigned int level,\n    unsigned int index)\n\nPrints the parents and children of a requested block (Debug\nRoutine)\n"},
  {(char*)"GenerateParentChildInformation", PyvtkAMRInformation_GenerateParentChildInformation, METH_VARARGS,
   (char*)"V.GenerateParentChildInformation()\nC++: void GenerateParentChildInformation()\n\n"},
  {(char*)"Audit", PyvtkAMRInformation_Audit, METH_VARARGS,
   (char*)"V.Audit() -> bool\nC++: bool Audit()\n\nChecks whether the meta data is internally consistent.\n"},
  {(char*)"FindCell", PyvtkAMRInformation_FindCell, METH_VARARGS,
   (char*)"V.FindCell([float, float, float], int, int, int) -> bool\nC++: bool FindCell(double q[3], unsigned int level,\n    unsigned int index, int &cellIdx)\n\nGiven a point q, find whether q is bounded by the data set at\n(level,index).  If it is, set cellIdx to the cell index and\nreturn true; otherwise return false\n"},
  {(char*)"FindGrid", PyvtkAMRInformation_FindGrid, METH_VARARGS,
   (char*)"V.FindGrid([float, float, float], int, int) -> bool\nC++: bool FindGrid(double q[3], int level, unsigned int &gridId)\nV.FindGrid([float, float, float], int, int) -> bool\nC++: bool FindGrid(double q[3], unsigned int &level,\n    unsigned int &gridId)\n\nfind the grid that contains the point q at the specified level\n"},
  {(char*)"DeepCopy", PyvtkAMRInformation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkAMRInformation)\nC++: void DeepCopy(vtkAMRInformation *other)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRInformation_StaticNew()
{
  return vtkAMRInformation::New();
}

PyObject *PyVTKClass_vtkAMRInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRInformation_StaticNew,
    PyvtkAMRInformation_Methods,
    "vtkAMRInformation", modulename,
    NULL, NULL,
    PyvtkAMRInformation_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAMRInformation_Doc()
{
  static const char *docstring[] = {
    "vtkAMRInformation - Meta data that describes the structure of an AMR\ndata set\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAMRInformation encaspulates the following meta information for an\nAMR data set\n- a list of vtkAMRBox objects\n- Refinement ratio between AMR levels\n- Grid spacing for each level\n- The file block index for each block\n- parent child information, if requested\n\nSee Also:\n\nvtkOverlappingAMR, vtkAMRBox\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

