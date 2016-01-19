// python wrapper for vtkUniformGridAMR
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUniformGridAMR.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUniformGridAMR(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUniformGridAMRNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetNew
#endif

static const char **PyvtkUniformGridAMR_Doc();


static PyObject *
PyvtkUniformGridAMR_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUniformGridAMR::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUniformGridAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridAMR::NewInstance());

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
PyvtkUniformGridAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkUniformGridAMR::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUniformGridAMR::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkUniformGridAMR::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

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
      op->vtkUniformGridAMR::Initialize(temp0, temp1);
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
PyvtkUniformGridAMR_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkUniformGridAMR_Initialize_s1(self, args);
    case 2:
      return PyvtkUniformGridAMR_Initialize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkUniformGridAMR_SetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

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
      op->vtkUniformGridAMR::SetGridDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkUniformGridAMR::GetGridDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkUniformGridAMR::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetTotalNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfBlocks() :
      op->vtkUniformGridAMR::GetTotalNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets(temp0) :
      op->vtkUniformGridAMR::GetNumberOfDataSets(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

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
      op->vtkUniformGridAMR::GetBounds(temp0);
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
PyvtkUniformGridAMR_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkUniformGridAMR::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGridAMR_GetBounds_s1(self, args);
    case 0:
      return PyvtkUniformGridAMR_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkUniformGridAMR_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

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
      op->GetMin(temp0);
      }
    else
      {
      op->vtkUniformGridAMR::GetMin(temp0);
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
PyvtkUniformGridAMR_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

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
      op->GetMax(temp0);
      }
    else
      {
      op->vtkUniformGridAMR::GetMax(temp0);
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
PyvtkUniformGridAMR_SetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1);
      }
    else
      {
      op->vtkUniformGridAMR::SetDataSet(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_SetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkUniformGrid *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkUniformGrid"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformGridAMR::SetDataSet(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_SetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkUniformGridAMR_SetDataSet_s1(self, args);
    case 3:
      return PyvtkUniformGridAMR_SetDataSet_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSet");
  return NULL;
}



static PyObject *
PyvtkUniformGridAMR_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkUniformGridAMR::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0, temp1) :
      op->vtkUniformGridAMR::GetDataSet(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGridAMR_GetDataSet_s1(self, args);
    case 2:
      return PyvtkUniformGridAMR_GetDataSet_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSet");
  return NULL;
}



static PyObject *
PyvtkUniformGridAMR_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex(temp0, temp1) :
      op->vtkUniformGridAMR::GetCompositeIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetLevelAndIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelAndIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

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
      op->GetLevelAndIndex(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformGridAMR::GetLevelAndIndex(temp0, temp1, temp2);
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
PyvtkUniformGridAMR_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkUniformGridAMR::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkUniformGridAMR::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkUniformGridAMR::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformGridAMR_GetData_Methods[] = {
  {NULL, PyvtkUniformGridAMR_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUniformGridAMR_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUniformGridAMR_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGridAMR_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUniformGridAMR_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkUniformGridAMR_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformGridAMR_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUniformGridAMR_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUniformGridAMR_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUniformGridAMR\nC++: vtkUniformGridAMR *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUniformGridAMR_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformGridAMR\nC++: vtkUniformGridAMR *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewIterator", PyvtkUniformGridAMR_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by the\nuser).\n"},
  {(char*)"GetDataObjectType", PyvtkUniformGridAMR_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"Initialize", PyvtkUniformGridAMR_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\nV.Initialize(int, (int, ...))\nC++: virtual void Initialize(int numLevels,\n    const int *blocksPerLevel)\n\nRestore data object to initial\n"},
  {(char*)"SetGridDescription", PyvtkUniformGridAMR_SetGridDescription, METH_VARARGS,
   (char*)"V.SetGridDescription(int)\nC++: void SetGridDescription(int gridDescription)\n\nSet/Get the data description of this uniform grid instance, e.g.\nVTK_XYZ_GRID\n"},
  {(char*)"GetGridDescription", PyvtkUniformGridAMR_GetGridDescription, METH_VARARGS,
   (char*)"V.GetGridDescription() -> int\nC++: int GetGridDescription()\n\nSet/Get the data description of this uniform grid instance, e.g.\nVTK_XYZ_GRID\n"},
  {(char*)"GetNumberOfLevels", PyvtkUniformGridAMR_GetNumberOfLevels, METH_VARARGS,
   (char*)"V.GetNumberOfLevels() -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturn the number of levels\n"},
  {(char*)"GetTotalNumberOfBlocks", PyvtkUniformGridAMR_GetTotalNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetTotalNumberOfBlocks() -> int\nC++: virtual unsigned int GetTotalNumberOfBlocks()\n\nReturn the total number of blocks, including NULL blocks\n"},
  {(char*)"GetNumberOfDataSets", PyvtkUniformGridAMR_GetNumberOfDataSets, METH_VARARGS,
   (char*)"V.GetNumberOfDataSets(int) -> int\nC++: unsigned int GetNumberOfDataSets(const unsigned int level)\n\nReturns the number of datasets at the given level, including null\nblocks\n"},
  {(char*)"GetBounds", PyvtkUniformGridAMR_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, ...)\nC++: const double *GetBounds()\n\nRetrieve the bounds of the AMR domain\n"},
  {(char*)"GetMin", PyvtkUniformGridAMR_GetMin, METH_VARARGS,
   (char*)"V.GetMin([float, float, float])\nC++: void GetMin(double min[3])\n\nRetrieve the bounds of the AMR domain\n"},
  {(char*)"GetMax", PyvtkUniformGridAMR_GetMax, METH_VARARGS,
   (char*)"V.GetMax([float, float, float])\nC++: void GetMax(double max[3])\n\nRetrieve the bounds of the AMR domain\n"},
  {(char*)"SetDataSet", PyvtkUniformGridAMR_SetDataSet, METH_VARARGS,
   (char*)"V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\nV.SetDataSet(int, int, vtkUniformGrid)\nC++: virtual void SetDataSet(unsigned int level, unsigned int idx,\n     vtkUniformGrid *grid)\n\nUnhiding superclass method.\n"},
  {(char*)"GetDataSet", PyvtkUniformGridAMR_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: vtkDataObject *GetDataSet(vtkCompositeDataIterator *iter)\nV.GetDataSet(int, int) -> vtkUniformGrid\nC++: vtkUniformGrid *GetDataSet(unsigned int level,\n    unsigned int idx)\n\nReturn the data set pointed to by iter\n"},
  {(char*)"GetCompositeIndex", PyvtkUniformGridAMR_GetCompositeIndex, METH_VARARGS,
   (char*)"V.GetCompositeIndex(int, int) -> int\nC++: int GetCompositeIndex(const unsigned int level,\n    const unsigned int index)\n\nRetrieves the composite index  associated with the data at the\ngiven (level,index) pair.\n"},
  {(char*)"GetLevelAndIndex", PyvtkUniformGridAMR_GetLevelAndIndex, METH_VARARGS,
   (char*)"V.GetLevelAndIndex(int, int, int)\nC++: void GetLevelAndIndex(const unsigned int compositeIdx,\n    unsigned int &level, unsigned int &idx)\n\nGivenes the composite Idx (as set by SetCompositeIdx) this method\nreturns the corresponding level and dataset index within the\nlevel.\n"},
  {(char*)"ShallowCopy", PyvtkUniformGridAMR_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nOverride ShallowCopy/DeepCopy and CopyStructure\n"},
  {(char*)"DeepCopy", PyvtkUniformGridAMR_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nOverride ShallowCopy/DeepCopy and CopyStructure\n"},
  {(char*)"CopyStructure", PyvtkUniformGridAMR_CopyStructure, METH_VARARGS,
   (char*)"V.CopyStructure(vtkCompositeDataSet)\nC++: virtual void CopyStructure(vtkCompositeDataSet *src)\n\nOverride ShallowCopy/DeepCopy and CopyStructure\n"},
  {(char*)"GetData", PyvtkUniformGridAMR_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *GetData(vtkInformationVector *v,\n    int i=0)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformGridAMR_StaticNew()
{
  return vtkUniformGridAMR::New();
}

PyObject *PyVTKClass_vtkUniformGridAMRNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformGridAMR_StaticNew,
    PyvtkUniformGridAMR_Methods,
    "vtkUniformGridAMR", modulename,
    NULL, NULL,
    PyvtkUniformGridAMR_Doc(),
    PyVTKClass_vtkCompositeDataSetNew(modulename));
  return cls;
}

const char **PyvtkUniformGridAMR_Doc()
{
  static const char *docstring[] = {
    "vtkUniformGridAMR - no description provided.\n\n",
    "Superclass: vtkCompositeDataSet\n\n",
    "vtkUniformGridAMR is a concrete implementation of\nvtkCompositeDataSet. The dataset type is restricted to\nvtkUniformGrid.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformGridAMR(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformGridAMRNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformGridAMR", o) != 0)
    {
    Py_DECREF(o);
    }

}

