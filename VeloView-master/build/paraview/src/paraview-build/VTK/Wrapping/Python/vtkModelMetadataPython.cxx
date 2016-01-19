// python wrapper for vtkModelMetadata
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkModelMetadata.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkModelMetadata(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkModelMetadataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkModelMetadata_Doc();


static PyObject *
PyvtkModelMetadata_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkModelMetadata::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkModelMetadata::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkModelMetadata *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkModelMetadata::NewInstance());

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
PyvtkModelMetadata_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkModelMetadata *tempr = vtkModelMetadata::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_PrintGlobalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintGlobalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintGlobalInformation();
      }
    else
      {
      op->vtkModelMetadata::PrintGlobalInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_PrintLocalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintLocalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintLocalInformation();
      }
    else
      {
      op->vtkModelMetadata::PrintLocalInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      op->vtkModelMetadata::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkModelMetadata::GetTitle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfInformationLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationLines() :
      op->vtkModelMetadata::GetNumberOfInformationLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepIndex(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetTimeStepIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndex() :
      op->vtkModelMetadata::GetTimeStepIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
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
      op->SetTimeSteps(temp0, temp1);
      }
    else
      {
      op->vtkModelMetadata::SetTimeSteps(temp0, temp1);
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
PyvtkModelMetadata_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkModelMetadata::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetTimeStepValues() :
      op->vtkModelMetadata::GetTimeStepValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkModelMetadata::GetDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBlocks(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNumberOfBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkModelMetadata::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetBlockIds(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetBlockIds(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockIds() :
      op->vtkModelMetadata::GetBlockIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->SetBlockNumberOfElements(temp0) :
      op->vtkModelMetadata::SetBlockNumberOfElements(temp0));

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
PyvtkModelMetadata_GetBlockNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockNumberOfElements() :
      op->vtkModelMetadata::GetBlockNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockNodesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockNodesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetBlockNodesPerElement(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetBlockNodesPerElement(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockNodesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockNodesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockNodesPerElement() :
      op->vtkModelMetadata::GetBlockNodesPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockElementIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockElementIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetBlockElementIdList(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetBlockElementIdList(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockElementIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockElementIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockElementIdList() :
      op->vtkModelMetadata::GetBlockElementIdList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumElementsPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumElementsPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSumElementsPerBlock() :
      op->vtkModelMetadata::GetSumElementsPerBlock());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockElementIdListIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockElementIdListIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockElementIdListIndex() :
      op->vtkModelMetadata::GetBlockElementIdListIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockNumberOfAttributesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockNumberOfAttributesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->SetBlockNumberOfAttributesPerElement(temp0) :
      op->vtkModelMetadata::SetBlockNumberOfAttributesPerElement(temp0));

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
PyvtkModelMetadata_GetBlockNumberOfAttributesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockNumberOfAttributesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockNumberOfAttributesPerElement() :
      op->vtkModelMetadata::GetBlockNumberOfAttributesPerElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetBlockAttributes(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetBlockAttributes(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetBlockAttributes() :
      op->vtkModelMetadata::GetBlockAttributes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSizeBlockAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeBlockAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSizeBlockAttributeArray() :
      op->vtkModelMetadata::GetSizeBlockAttributeArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockAttributesIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockAttributesIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockAttributesIndex() :
      op->vtkModelMetadata::GetBlockAttributesIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfNodeSets(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNumberOfNodeSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSets() :
      op->vtkModelMetadata::GetNumberOfNodeSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetNodeSetIds(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNodeSetIds(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetIds() :
      op->vtkModelMetadata::GetNodeSetIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetSize() :
      op->vtkModelMetadata::GetNodeSetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetNodeIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetNodeIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetNodeSetNodeIdList(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNodeSetNodeIdList(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetNodeIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNodeIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetNodeIdList() :
      op->vtkModelMetadata::GetNodeSetNodeIdList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetNumberOfDistributionFactors() :
      op->vtkModelMetadata::GetNodeSetNumberOfDistributionFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNodeSetDistributionFactors(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNodeSetDistributionFactors(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetNodeSetDistributionFactors() :
      op->vtkModelMetadata::GetNodeSetDistributionFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumNodesPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumNodesPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSumNodesPerNodeSet() :
      op->vtkModelMetadata::GetSumNodesPerNodeSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumDistFactPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumDistFactPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSumDistFactPerNodeSet() :
      op->vtkModelMetadata::GetSumDistFactPerNodeSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetNodeIdListIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNodeIdListIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetNodeIdListIndex() :
      op->vtkModelMetadata::GetNodeSetNodeIdListIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetDistributionFactorIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetDistributionFactorIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetDistributionFactorIndex() :
      op->vtkModelMetadata::GetNodeSetDistributionFactorIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSideSets(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNumberOfSideSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSets() :
      op->vtkModelMetadata::GetNumberOfSideSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetSideSetIds(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetSideSetIds(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetIds() :
      op->vtkModelMetadata::GetSideSetIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->SetSideSetSize(temp0) :
      op->vtkModelMetadata::SetSideSetSize(temp0));

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
PyvtkModelMetadata_GetSideSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetSize() :
      op->vtkModelMetadata::GetSideSetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->SetSideSetNumberOfDistributionFactors(temp0) :
      op->vtkModelMetadata::SetSideSetNumberOfDistributionFactors(temp0));

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
PyvtkModelMetadata_GetSideSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetNumberOfDistributionFactors() :
      op->vtkModelMetadata::GetSideSetNumberOfDistributionFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetElementList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetElementList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetSideSetElementList(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetSideSetElementList(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetElementList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetElementList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetElementList() :
      op->vtkModelMetadata::GetSideSetElementList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetSideList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetSideList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetSideSetSideList(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetSideSetSideList(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetSideList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetSideList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetSideList() :
      op->vtkModelMetadata::GetSideSetSideList());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetNumDFPerSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetNumDFPerSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetSideSetNumDFPerSide(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetSideSetNumDFPerSide(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetNumDFPerSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetNumDFPerSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetNumDFPerSide() :
      op->vtkModelMetadata::GetSideSetNumDFPerSide());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSideSetDistributionFactors(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetSideSetDistributionFactors(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetSideSetDistributionFactors() :
      op->vtkModelMetadata::GetSideSetDistributionFactors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumSidesPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumSidesPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSumSidesPerSideSet() :
      op->vtkModelMetadata::GetSumSidesPerSideSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumDistFactPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumDistFactPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSumDistFactPerSideSet() :
      op->vtkModelMetadata::GetSumDistFactPerSideSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetListIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetListIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetListIndex() :
      op->vtkModelMetadata::GetSideSetListIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetDistributionFactorIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetDistributionFactorIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetDistributionFactorIndex() :
      op->vtkModelMetadata::GetSideSetDistributionFactorIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfBlockProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlockProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlockProperties() :
      op->vtkModelMetadata::GetNumberOfBlockProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetBlockPropertyValue(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetBlockPropertyValue(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetBlockPropertyValue() :
      op->vtkModelMetadata::GetBlockPropertyValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeSetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSetProperties() :
      op->vtkModelMetadata::GetNumberOfNodeSetProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetNodeSetPropertyValue(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNodeSetPropertyValue(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetPropertyValue() :
      op->vtkModelMetadata::GetNodeSetPropertyValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfSideSetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSetProperties() :
      op->vtkModelMetadata::GetNumberOfSideSetProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetSideSetPropertyValue(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetSideSetPropertyValue(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetPropertyValue() :
      op->vtkModelMetadata::GetSideSetPropertyValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfGlobalVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGlobalVariables() :
      op->vtkModelMetadata::GetNumberOfGlobalVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetGlobalVariableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetGlobalVariableValue(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetGlobalVariableValue(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetGlobalVariableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetGlobalVariableValue() :
      op->vtkModelMetadata::GetGlobalVariableValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetElementVariableTruthTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementVariableTruthTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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

    if (ap.IsBound())
      {
      op->SetElementVariableTruthTable(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetElementVariableTruthTable(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetElementVariableTruthTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementVariableTruthTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetElementVariableTruthTable() :
      op->vtkModelMetadata::GetElementVariableTruthTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetAllVariablesDefinedInAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllVariablesDefinedInAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllVariablesDefinedInAllBlocks(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetAllVariablesDefinedInAllBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllVariablesDefinedInAllBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllVariablesDefinedInAllBlocksOn();
      }
    else
      {
      op->vtkModelMetadata::AllVariablesDefinedInAllBlocksOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllVariablesDefinedInAllBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllVariablesDefinedInAllBlocksOff();
      }
    else
      {
      op->vtkModelMetadata::AllVariablesDefinedInAllBlocksOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetAllVariablesDefinedInAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVariablesDefinedInAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllVariablesDefinedInAllBlocks() :
      op->vtkModelMetadata::GetAllVariablesDefinedInAllBlocks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetOriginalNumberOfElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOriginalNumberOfElementVariables() :
      op->vtkModelMetadata::GetOriginalNumberOfElementVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementVariables() :
      op->vtkModelMetadata::GetNumberOfElementVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetElementVariableNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementVariableNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetElementVariableNumberOfComponents() :
      op->vtkModelMetadata::GetElementVariableNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetMapToOriginalElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapToOriginalElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetMapToOriginalElementVariableNames() :
      op->vtkModelMetadata::GetMapToOriginalElementVariableNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetOriginalNumberOfNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOriginalNumberOfNodeVariables() :
      op->vtkModelMetadata::GetOriginalNumberOfNodeVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeVariables() :
      op->vtkModelMetadata::GetNumberOfNodeVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeVariableNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeVariableNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNodeVariableNumberOfComponents() :
      op->vtkModelMetadata::GetNodeVariableNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetMapToOriginalNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapToOriginalNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetMapToOriginalNodeVariableNames() :
      op->vtkModelMetadata::GetMapToOriginalNodeVariableNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeAllGlobalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeAllGlobalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeAllGlobalData();
      }
    else
      {
      op->vtkModelMetadata::FreeAllGlobalData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeAllLocalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeAllLocalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeAllLocalData();
      }
    else
      {
      op->vtkModelMetadata::FreeAllLocalData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeBlockDependentData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeBlockDependentData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeBlockDependentData();
      }
    else
      {
      op->vtkModelMetadata::FreeBlockDependentData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeOriginalElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeOriginalElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeOriginalElementVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeOriginalElementVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeOriginalNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeOriginalNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeOriginalNodeVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeOriginalNodeVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedElementVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedElementVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedNodeVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedNodeVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedElementVariables();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedElementVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedNodeVariables();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedNodeVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkModelMetadata::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkModelMetadata_Methods[] = {
  {(char*)"GetClassName", PyvtkModelMetadata_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkModelMetadata_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkModelMetadata_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkModelMetadata\nC++: vtkModelMetadata *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkModelMetadata_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkModelMetadata\nC++: vtkModelMetadata *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrintGlobalInformation", PyvtkModelMetadata_PrintGlobalInformation, METH_VARARGS,
   (char*)"V.PrintGlobalInformation()\nC++: virtual void PrintGlobalInformation()\n\nThe global fields are those which pertain to the whole\n   file.  Examples are the title, information lines,\n   and list of block IDs.  This method prints out all the\n   global information.\n"},
  {(char*)"PrintLocalInformation", PyvtkModelMetadata_PrintLocalInformation, METH_VARARGS,
   (char*)"V.PrintLocalInformation()\nC++: virtual void PrintLocalInformation()\n\nThe local fields are those which depend on exactly which\n   blocks, which time step, and which variables you read in\n   from the file.  Examples are the number of cells in\n   each block, and the list of nodes in a node set, or the\n   value of the global variables at a time step.  If\n   VERBOSE_TESTING is defined in your execution environment,\n   this method will print more than mere counts, and actually\n   print a few of the IDs, distribution factors and so on.  If\n   VERY_VERBOSE_TESTING is defined, it will print out\n   all ID lists, distribution factor lists, and so on.\n"},
  {(char*)"SetTitle", PyvtkModelMetadata_SetTitle, METH_VARARGS,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nThe title of the dataset.\n"},
  {(char*)"GetTitle", PyvtkModelMetadata_GetTitle, METH_VARARGS,
   (char*)"V.GetTitle() -> string\nC++: const char *GetTitle()\n\nThe title of the dataset.\n"},
  {(char*)"GetNumberOfInformationLines", PyvtkModelMetadata_GetNumberOfInformationLines, METH_VARARGS,
   (char*)"V.GetNumberOfInformationLines() -> int\nC++: int GetNumberOfInformationLines()\n\nGet the number of information lines.\n"},
  {(char*)"SetTimeStepIndex", PyvtkModelMetadata_SetTimeStepIndex, METH_VARARGS,
   (char*)"V.SetTimeStepIndex(int)\nC++: void SetTimeStepIndex(int a)\n\nSet the index of the time step represented by the results\n   data in the file attached to this ModelMetadata object.  Time\n   step indices start at 0 in this file, they start at 1 in\n   an Exodus file.\n"},
  {(char*)"GetTimeStepIndex", PyvtkModelMetadata_GetTimeStepIndex, METH_VARARGS,
   (char*)"V.GetTimeStepIndex() -> int\nC++: int GetTimeStepIndex()\n\nSet the index of the time step represented by the results\n   data in the file attached to this ModelMetadata object.  Time\n   step indices start at 0 in this file, they start at 1 in\n   an Exodus file.\n"},
  {(char*)"SetTimeSteps", PyvtkModelMetadata_SetTimeSteps, METH_VARARGS,
   (char*)"V.SetTimeSteps(int, [float, ...])\nC++: void SetTimeSteps(int numberOfTimeSteps,\n    float *timeStepValues)\n\nSet the total number of time steps in the file,\n   and the value at each time step.  We use your time\n   step value array and delete it when we're done.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkModelMetadata_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nSet the total number of time steps in the file,\n   and the value at each time step.  We use your time\n   step value array and delete it when we're done.\n"},
  {(char*)"GetTimeStepValues", PyvtkModelMetadata_GetTimeStepValues, METH_VARARGS,
   (char*)"V.GetTimeStepValues() -> (float, ...)\nC++: float *GetTimeStepValues()\n\nGet the time step values\n"},
  {(char*)"GetDimension", PyvtkModelMetadata_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nGet the dimension of the model.  This is also the number\n  of coordinate names.\n"},
  {(char*)"SetNumberOfBlocks", PyvtkModelMetadata_SetNumberOfBlocks, METH_VARARGS,
   (char*)"V.SetNumberOfBlocks(int)\nC++: void SetNumberOfBlocks(int a)\n\nThe number of blocks in the file.  Set this before setting\n  any of the block arrays.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkModelMetadata_GetNumberOfBlocks, METH_VARARGS,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nThe number of blocks in the file.  Set this before setting\n  any of the block arrays.\n"},
  {(char*)"SetBlockIds", PyvtkModelMetadata_SetBlockIds, METH_VARARGS,
   (char*)"V.SetBlockIds([int, ...])\nC++: void SetBlockIds(int *)\n\nAn arbitrary integer ID for each block.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetBlockIds", PyvtkModelMetadata_GetBlockIds, METH_VARARGS,
   (char*)"V.GetBlockIds() -> (int, ...)\nC++: int *GetBlockIds()\n\nAn arbitrary integer ID for each block.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetBlockNumberOfElements", PyvtkModelMetadata_SetBlockNumberOfElements, METH_VARARGS,
   (char*)"V.SetBlockNumberOfElements([int, ...]) -> int\nC++: int SetBlockNumberOfElements(int *nelts)\n\nSet or get a pointer to a list of the number of elements in\n  each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetBlockNumberOfElements", PyvtkModelMetadata_GetBlockNumberOfElements, METH_VARARGS,
   (char*)"V.GetBlockNumberOfElements() -> (int, ...)\nC++: int *GetBlockNumberOfElements()\n\nSet or get a pointer to a list of the number of elements in\n  each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetBlockNodesPerElement", PyvtkModelMetadata_SetBlockNodesPerElement, METH_VARARGS,
   (char*)"V.SetBlockNodesPerElement([int, ...])\nC++: void SetBlockNodesPerElement(int *)\n\nSet or get a pointer to a list of the number of nodes in the\n  elements of  each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetBlockNodesPerElement", PyvtkModelMetadata_GetBlockNodesPerElement, METH_VARARGS,
   (char*)"V.GetBlockNodesPerElement() -> (int, ...)\nC++: int *GetBlockNodesPerElement()\n\nSet or get a pointer to a list of the number of nodes in the\n  elements of  each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetBlockElementIdList", PyvtkModelMetadata_SetBlockElementIdList, METH_VARARGS,
   (char*)"V.SetBlockElementIdList([int, ...])\nC++: void SetBlockElementIdList(int *)\n\nSet or get a pointer to a list global element IDs for the\n  elements in each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetBlockElementIdList", PyvtkModelMetadata_GetBlockElementIdList, METH_VARARGS,
   (char*)"V.GetBlockElementIdList() -> (int, ...)\nC++: int *GetBlockElementIdList()\n\nSet or get a pointer to a list global element IDs for the\n  elements in each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSumElementsPerBlock", PyvtkModelMetadata_GetSumElementsPerBlock, METH_VARARGS,
   (char*)"V.GetSumElementsPerBlock() -> int\nC++: int GetSumElementsPerBlock()\n\nGet the length of the list of elements in every block.\n"},
  {(char*)"GetBlockElementIdListIndex", PyvtkModelMetadata_GetBlockElementIdListIndex, METH_VARARGS,
   (char*)"V.GetBlockElementIdListIndex() -> (int, ...)\nC++: int *GetBlockElementIdListIndex()\n\nGet a list of the index into the BlockElementIdList of the\n  start of each block's elements.\n"},
  {(char*)"SetBlockNumberOfAttributesPerElement", PyvtkModelMetadata_SetBlockNumberOfAttributesPerElement, METH_VARARGS,
   (char*)"V.SetBlockNumberOfAttributesPerElement([int, ...]) -> int\nC++: int SetBlockNumberOfAttributesPerElement(int *natts)\n\nSet or get a pointer to a list of the number of attributes\n  stored for the elements in each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetBlockNumberOfAttributesPerElement", PyvtkModelMetadata_GetBlockNumberOfAttributesPerElement, METH_VARARGS,
   (char*)"V.GetBlockNumberOfAttributesPerElement() -> (int, ...)\nC++: int *GetBlockNumberOfAttributesPerElement()\n\nSet or get a pointer to a list of the number of attributes\n  stored for the elements in each block.\n  We use your pointers, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetBlockAttributes", PyvtkModelMetadata_SetBlockAttributes, METH_VARARGS,
   (char*)"V.SetBlockAttributes([float, ...])\nC++: void SetBlockAttributes(float *)\n\nSet or get a pointer to a list of the attributes for all\n   blocks.  The order of the list should be by block, by element\n   within the block, by attribute.  Omit blocks that don't\n   have element attributes.\n"},
  {(char*)"GetBlockAttributes", PyvtkModelMetadata_GetBlockAttributes, METH_VARARGS,
   (char*)"V.GetBlockAttributes() -> (float, ...)\nC++: float *GetBlockAttributes()\n\nSet or get a pointer to a list of the attributes for all\n   blocks.  The order of the list should be by block, by element\n   within the block, by attribute.  Omit blocks that don't\n   have element attributes.\n"},
  {(char*)"GetSizeBlockAttributeArray", PyvtkModelMetadata_GetSizeBlockAttributeArray, METH_VARARGS,
   (char*)"V.GetSizeBlockAttributeArray() -> int\nC++: int GetSizeBlockAttributeArray()\n\nGet the length of the list of floating point block attributes.\n"},
  {(char*)"GetBlockAttributesIndex", PyvtkModelMetadata_GetBlockAttributesIndex, METH_VARARGS,
   (char*)"V.GetBlockAttributesIndex() -> (int, ...)\nC++: int *GetBlockAttributesIndex()\n\nGet a list of the index into the BlockAttributes of the\n  start of each block's element attribute list.\n"},
  {(char*)"SetNumberOfNodeSets", PyvtkModelMetadata_SetNumberOfNodeSets, METH_VARARGS,
   (char*)"V.SetNumberOfNodeSets(int)\nC++: void SetNumberOfNodeSets(int a)\n\nThe number of node sets in the file.  Set this value before\n  setting the various node set arrays.\n"},
  {(char*)"GetNumberOfNodeSets", PyvtkModelMetadata_GetNumberOfNodeSets, METH_VARARGS,
   (char*)"V.GetNumberOfNodeSets() -> int\nC++: int GetNumberOfNodeSets()\n\nThe number of node sets in the file.  Set this value before\n  setting the various node set arrays.\n"},
  {(char*)"SetNodeSetIds", PyvtkModelMetadata_SetNodeSetIds, METH_VARARGS,
   (char*)"V.SetNodeSetIds([int, ...])\nC++: void SetNodeSetIds(int *)\n\nSet or get the list the IDs for each node set.\n  Length of list is the number of node sets.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetNodeSetIds", PyvtkModelMetadata_GetNodeSetIds, METH_VARARGS,
   (char*)"V.GetNodeSetIds() -> (int, ...)\nC++: int *GetNodeSetIds()\n\nSet or get the list the IDs for each node set.\n  Length of list is the number of node sets.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetNodeSetSize", PyvtkModelMetadata_GetNodeSetSize, METH_VARARGS,
   (char*)"V.GetNodeSetSize() -> (int, ...)\nC++: int *GetNodeSetSize()\n\nSet or get a pointer to a list of the number of nodes in each\nnode set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetNodeSetNodeIdList", PyvtkModelMetadata_SetNodeSetNodeIdList, METH_VARARGS,
   (char*)"V.SetNodeSetNodeIdList([int, ...])\nC++: void SetNodeSetNodeIdList(int *)\n\nSet or get a pointer to a concatenated list of the\n  IDs of all nodes in each node set.  First list all IDs in\n  node set 0, then all IDs in node set 1, and so on.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetNodeSetNodeIdList", PyvtkModelMetadata_GetNodeSetNodeIdList, METH_VARARGS,
   (char*)"V.GetNodeSetNodeIdList() -> (int, ...)\nC++: int *GetNodeSetNodeIdList()\n\nSet or get a pointer to a concatenated list of the\n  IDs of all nodes in each node set.  First list all IDs in\n  node set 0, then all IDs in node set 1, and so on.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetNodeSetNumberOfDistributionFactors", PyvtkModelMetadata_GetNodeSetNumberOfDistributionFactors, METH_VARARGS,
   (char*)"V.GetNodeSetNumberOfDistributionFactors() -> (int, ...)\nC++: int *GetNodeSetNumberOfDistributionFactors()\n\nSet or get a list of the number of distribution factors stored\n  by each node set.  This is either 0 or equal to the number of\n  nodes in the node set.\n  Length of list is number of node sets.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetNodeSetDistributionFactors", PyvtkModelMetadata_SetNodeSetDistributionFactors, METH_VARARGS,
   (char*)"V.SetNodeSetDistributionFactors([float, ...])\nC++: void SetNodeSetDistributionFactors(float *)\n\nSet or get a list of the distribution factors for the node sets.\n  The list is organized by node set, and within node set by node.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetNodeSetDistributionFactors", PyvtkModelMetadata_GetNodeSetDistributionFactors, METH_VARARGS,
   (char*)"V.GetNodeSetDistributionFactors() -> (float, ...)\nC++: float *GetNodeSetDistributionFactors()\n\nSet or get a list of the distribution factors for the node sets.\n  The list is organized by node set, and within node set by node.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSumNodesPerNodeSet", PyvtkModelMetadata_GetSumNodesPerNodeSet, METH_VARARGS,
   (char*)"V.GetSumNodesPerNodeSet() -> int\nC++: int GetSumNodesPerNodeSet()\n\nGet the total number of nodes in all node sets\n"},
  {(char*)"GetSumDistFactPerNodeSet", PyvtkModelMetadata_GetSumDistFactPerNodeSet, METH_VARARGS,
   (char*)"V.GetSumDistFactPerNodeSet() -> int\nC++: int GetSumDistFactPerNodeSet()\n\nGet the total number of distribution factors stored for all node\nsets\n"},
  {(char*)"GetNodeSetNodeIdListIndex", PyvtkModelMetadata_GetNodeSetNodeIdListIndex, METH_VARARGS,
   (char*)"V.GetNodeSetNodeIdListIndex() -> (int, ...)\nC++: int *GetNodeSetNodeIdListIndex()\n\nGet a list of the index of the starting entry for each node set\n  in the list of node set node IDs.\n"},
  {(char*)"GetNodeSetDistributionFactorIndex", PyvtkModelMetadata_GetNodeSetDistributionFactorIndex, METH_VARARGS,
   (char*)"V.GetNodeSetDistributionFactorIndex() -> (int, ...)\nC++: int *GetNodeSetDistributionFactorIndex()\n\nGet a list of the index of the starting entry for each node set\n  in the list of node set distribution factors.\n"},
  {(char*)"SetNumberOfSideSets", PyvtkModelMetadata_SetNumberOfSideSets, METH_VARARGS,
   (char*)"V.SetNumberOfSideSets(int)\nC++: void SetNumberOfSideSets(int a)\n\nSet or get the number of side sets.  Set this value before\n  setting any of the other side set arrays.\n"},
  {(char*)"GetNumberOfSideSets", PyvtkModelMetadata_GetNumberOfSideSets, METH_VARARGS,
   (char*)"V.GetNumberOfSideSets() -> int\nC++: int GetNumberOfSideSets()\n\nSet or get the number of side sets.  Set this value before\n  setting any of the other side set arrays.\n"},
  {(char*)"SetSideSetIds", PyvtkModelMetadata_SetSideSetIds, METH_VARARGS,
   (char*)"V.SetSideSetIds([int, ...])\nC++: void SetSideSetIds(int *)\n\nSet or get a pointer to a list giving the ID of each side set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetIds", PyvtkModelMetadata_GetSideSetIds, METH_VARARGS,
   (char*)"V.GetSideSetIds() -> (int, ...)\nC++: int *GetSideSetIds()\n\nSet or get a pointer to a list giving the ID of each side set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetSideSetSize", PyvtkModelMetadata_SetSideSetSize, METH_VARARGS,
   (char*)"V.SetSideSetSize([int, ...]) -> int\nC++: int SetSideSetSize(int *sizes)\n\nSet or get a pointer to a list of the number of sides  in each\nside set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetSize", PyvtkModelMetadata_GetSideSetSize, METH_VARARGS,
   (char*)"V.GetSideSetSize() -> (int, ...)\nC++: int *GetSideSetSize()\n\nSet or get a pointer to a list of the number of sides  in each\nside set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetSideSetNumberOfDistributionFactors", PyvtkModelMetadata_SetSideSetNumberOfDistributionFactors, METH_VARARGS,
   (char*)"V.SetSideSetNumberOfDistributionFactors([int, ...]) -> int\nC++: int SetSideSetNumberOfDistributionFactors(int *df)\n\nSet or get a pointer to a list of the number of distribution\n  factors stored by each side set.   Each side set has either\n  no distribution factors, or 1 per node in the side set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetNumberOfDistributionFactors", PyvtkModelMetadata_GetSideSetNumberOfDistributionFactors, METH_VARARGS,
   (char*)"V.GetSideSetNumberOfDistributionFactors() -> (int, ...)\nC++: int *GetSideSetNumberOfDistributionFactors()\n\nSet or get a pointer to a list of the number of distribution\n  factors stored by each side set.   Each side set has either\n  no distribution factors, or 1 per node in the side set.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetSideSetElementList", PyvtkModelMetadata_SetSideSetElementList, METH_VARARGS,
   (char*)"V.SetSideSetElementList([int, ...])\nC++: void SetSideSetElementList(int *)\n\nSet or get a pointer to a list of the elements containing each\n  side in each side set.  The list is organized by side set, and\n  within side set by element.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetElementList", PyvtkModelMetadata_GetSideSetElementList, METH_VARARGS,
   (char*)"V.GetSideSetElementList() -> (int, ...)\nC++: int *GetSideSetElementList()\n\nSet or get a pointer to a list of the elements containing each\n  side in each side set.  The list is organized by side set, and\n  within side set by element.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetSideSetSideList", PyvtkModelMetadata_SetSideSetSideList, METH_VARARGS,
   (char*)"V.SetSideSetSideList([int, ...])\nC++: void SetSideSetSideList(int *)\n\nSet or get a pointer to the element side for each side in the\nside set.\n  (See the manual for the convention for numbering sides in\ndifferent\n  types of cells.)  Side Ids are arranged by side set and within\n  side set by side, and correspond to the SideSetElementList.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetSideList", PyvtkModelMetadata_GetSideSetSideList, METH_VARARGS,
   (char*)"V.GetSideSetSideList() -> (int, ...)\nC++: int *GetSideSetSideList()\n\nSet or get a pointer to the element side for each side in the\nside set.\n  (See the manual for the convention for numbering sides in\ndifferent\n  types of cells.)  Side Ids are arranged by side set and within\n  side set by side, and correspond to the SideSetElementList.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetSideSetNumDFPerSide", PyvtkModelMetadata_SetSideSetNumDFPerSide, METH_VARARGS,
   (char*)"V.SetSideSetNumDFPerSide([int, ...])\nC++: void SetSideSetNumDFPerSide(int *numNodes)\n\nSet or get a pointer to a list of the number of nodes in each\n  side of each side set.  This list is organized by side set, and\n  within side set by side.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetNumDFPerSide", PyvtkModelMetadata_GetSideSetNumDFPerSide, METH_VARARGS,
   (char*)"V.GetSideSetNumDFPerSide() -> (int, ...)\nC++: int *GetSideSetNumDFPerSide()\n\nSet or get a pointer to a list of the number of nodes in each\n  side of each side set.  This list is organized by side set, and\n  within side set by side.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"SetSideSetDistributionFactors", PyvtkModelMetadata_SetSideSetDistributionFactors, METH_VARARGS,
   (char*)"V.SetSideSetDistributionFactors([float, ...])\nC++: void SetSideSetDistributionFactors(float *)\n\nSet or get a pointer to a list of all the distribution factors.\n  For every side set that has distribution factors, the number of\n  factors per node was given in the\nSideSetNumberOfDistributionFactors\n  array.  If this number for a given side set is N, then for that\n  side set we have N floating point values for each node for each\n  side in the side set.  If nodes are repeated in more than one\n  side, we repeat the distribution factors.  So this list is in\norder\n  by side set, by node.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSideSetDistributionFactors", PyvtkModelMetadata_GetSideSetDistributionFactors, METH_VARARGS,
   (char*)"V.GetSideSetDistributionFactors() -> (float, ...)\nC++: float *GetSideSetDistributionFactors()\n\nSet or get a pointer to a list of all the distribution factors.\n  For every side set that has distribution factors, the number of\n  factors per node was given in the\nSideSetNumberOfDistributionFactors\n  array.  If this number for a given side set is N, then for that\n  side set we have N floating point values for each node for each\n  side in the side set.  If nodes are repeated in more than one\n  side, we repeat the distribution factors.  So this list is in\norder\n  by side set, by node.\n  We use your pointer, and free the memory when the object is\nfreed.\n"},
  {(char*)"GetSumSidesPerSideSet", PyvtkModelMetadata_GetSumSidesPerSideSet, METH_VARARGS,
   (char*)"V.GetSumSidesPerSideSet() -> int\nC++: int GetSumSidesPerSideSet()\n\nGet the total number of sides in all side sets\n"},
  {(char*)"GetSumDistFactPerSideSet", PyvtkModelMetadata_GetSumDistFactPerSideSet, METH_VARARGS,
   (char*)"V.GetSumDistFactPerSideSet() -> int\nC++: int GetSumDistFactPerSideSet()\n\nGet the total number of distribution factors stored for all side\nsets\n"},
  {(char*)"GetSideSetListIndex", PyvtkModelMetadata_GetSideSetListIndex, METH_VARARGS,
   (char*)"V.GetSideSetListIndex() -> (int, ...)\nC++: int *GetSideSetListIndex()\n\nGet a list of the index of the starting entry for each side set\n  in the list of side set side IDs.\n"},
  {(char*)"GetSideSetDistributionFactorIndex", PyvtkModelMetadata_GetSideSetDistributionFactorIndex, METH_VARARGS,
   (char*)"V.GetSideSetDistributionFactorIndex() -> (int, ...)\nC++: int *GetSideSetDistributionFactorIndex()\n\nGet a list of the index of the starting entry for each side set\n  in the list of side set distribution factors.\n"},
  {(char*)"GetNumberOfBlockProperties", PyvtkModelMetadata_GetNumberOfBlockProperties, METH_VARARGS,
   (char*)"V.GetNumberOfBlockProperties() -> int\nC++: int GetNumberOfBlockProperties()\n\nThe number of block properties (global variables)\n"},
  {(char*)"SetBlockPropertyValue", PyvtkModelMetadata_SetBlockPropertyValue, METH_VARARGS,
   (char*)"V.SetBlockPropertyValue([int, ...])\nC++: void SetBlockPropertyValue(int *)\n\nSet or get value for each variable for each block.  List\n  the integer values in order by variable and within variable\n  by block.\n"},
  {(char*)"GetBlockPropertyValue", PyvtkModelMetadata_GetBlockPropertyValue, METH_VARARGS,
   (char*)"V.GetBlockPropertyValue() -> (int, ...)\nC++: int *GetBlockPropertyValue()\n\nSet or get value for each variable for each block.  List\n  the integer values in order by variable and within variable\n  by block.\n"},
  {(char*)"GetNumberOfNodeSetProperties", PyvtkModelMetadata_GetNumberOfNodeSetProperties, METH_VARARGS,
   (char*)"V.GetNumberOfNodeSetProperties() -> int\nC++: int GetNumberOfNodeSetProperties()\n\nThe number of node set properties (global variables)\n"},
  {(char*)"SetNodeSetPropertyValue", PyvtkModelMetadata_SetNodeSetPropertyValue, METH_VARARGS,
   (char*)"V.SetNodeSetPropertyValue([int, ...])\nC++: void SetNodeSetPropertyValue(int *)\n\nSet or get value for each variable for each node set.  List\n  the integer values in order by variable and within variable\n  by node set.\n"},
  {(char*)"GetNodeSetPropertyValue", PyvtkModelMetadata_GetNodeSetPropertyValue, METH_VARARGS,
   (char*)"V.GetNodeSetPropertyValue() -> (int, ...)\nC++: int *GetNodeSetPropertyValue()\n\nSet or get value for each variable for each node set.  List\n  the integer values in order by variable and within variable\n  by node set.\n"},
  {(char*)"GetNumberOfSideSetProperties", PyvtkModelMetadata_GetNumberOfSideSetProperties, METH_VARARGS,
   (char*)"V.GetNumberOfSideSetProperties() -> int\nC++: int GetNumberOfSideSetProperties()\n\nThe number of side set properties (global variables)\n"},
  {(char*)"SetSideSetPropertyValue", PyvtkModelMetadata_SetSideSetPropertyValue, METH_VARARGS,
   (char*)"V.SetSideSetPropertyValue([int, ...])\nC++: void SetSideSetPropertyValue(int *)\n\nSet or get value for each variable for each side set.  List\n  the integer values in order by variable and within variable\n  by side set.\n"},
  {(char*)"GetSideSetPropertyValue", PyvtkModelMetadata_GetSideSetPropertyValue, METH_VARARGS,
   (char*)"V.GetSideSetPropertyValue() -> (int, ...)\nC++: int *GetSideSetPropertyValue()\n\nSet or get value for each variable for each side set.  List\n  the integer values in order by variable and within variable\n  by side set.\n"},
  {(char*)"GetNumberOfGlobalVariables", PyvtkModelMetadata_GetNumberOfGlobalVariables, METH_VARARGS,
   (char*)"V.GetNumberOfGlobalVariables() -> int\nC++: int GetNumberOfGlobalVariables()\n\nGet the number of global variables per time step\n"},
  {(char*)"SetGlobalVariableValue", PyvtkModelMetadata_SetGlobalVariableValue, METH_VARARGS,
   (char*)"V.SetGlobalVariableValue([float, ...])\nC++: void SetGlobalVariableValue(float *f)\n\nSet or get the values of the global variables at the current\n  time step.\n"},
  {(char*)"GetGlobalVariableValue", PyvtkModelMetadata_GetGlobalVariableValue, METH_VARARGS,
   (char*)"V.GetGlobalVariableValue() -> (float, ...)\nC++: float *GetGlobalVariableValue()\n\nSet or get the values of the global variables at the current\n  time step.\n"},
  {(char*)"SetElementVariableTruthTable", PyvtkModelMetadata_SetElementVariableTruthTable, METH_VARARGS,
   (char*)"V.SetElementVariableTruthTable([int, ...])\nC++: void SetElementVariableTruthTable(int *)\n\nA truth table indicating which element variables are\n  defined for which blocks. The variables are all the original\n  element variables that were in the file.\n  The table is by block ID and within block ID by variable.\n"},
  {(char*)"GetElementVariableTruthTable", PyvtkModelMetadata_GetElementVariableTruthTable, METH_VARARGS,
   (char*)"V.GetElementVariableTruthTable() -> (int, ...)\nC++: int *GetElementVariableTruthTable()\n\nA truth table indicating which element variables are\n  defined for which blocks. The variables are all the original\n  element variables that were in the file.\n  The table is by block ID and within block ID by variable.\n"},
  {(char*)"SetAllVariablesDefinedInAllBlocks", PyvtkModelMetadata_SetAllVariablesDefinedInAllBlocks, METH_VARARGS,
   (char*)"V.SetAllVariablesDefinedInAllBlocks(int)\nC++: void SetAllVariablesDefinedInAllBlocks(int a)\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"AllVariablesDefinedInAllBlocksOn", PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOn, METH_VARARGS,
   (char*)"V.AllVariablesDefinedInAllBlocksOn()\nC++: void AllVariablesDefinedInAllBlocksOn()\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"AllVariablesDefinedInAllBlocksOff", PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOff, METH_VARARGS,
   (char*)"V.AllVariablesDefinedInAllBlocksOff()\nC++: void AllVariablesDefinedInAllBlocksOff()\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"GetAllVariablesDefinedInAllBlocks", PyvtkModelMetadata_GetAllVariablesDefinedInAllBlocks, METH_VARARGS,
   (char*)"V.GetAllVariablesDefinedInAllBlocks() -> int\nC++: int GetAllVariablesDefinedInAllBlocks()\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"GetOriginalNumberOfElementVariables", PyvtkModelMetadata_GetOriginalNumberOfElementVariables, METH_VARARGS,
   (char*)"V.GetOriginalNumberOfElementVariables() -> int\nC++: int GetOriginalNumberOfElementVariables()\n\nThe ModelMetadata object may contain these lists:\n   o  the variables in the original data file\n   o  the variables created in the u grid from those original\nvariables\n   o  a mapping from the grid variable names to the original\nnames\n   o  a list of the number of components each grid variable has\n\n\n  (Example: Variables in Exodus II files are all scalars.  Some\nare\n  combined by the ExodusReader into vector variables in the\ngrid.)\n\n\n  These methods return names of the original variables, the names\n  of the grid variables, a list of the number of components in\n  each grid variable, and a list of the index into the list of\n  original variable names where the original name of the first\n  component of a grid variable may be found.  The names of\nsubsequent\n  components would immediately follow the name of the the first\n  component.\n"},
  {(char*)"GetNumberOfElementVariables", PyvtkModelMetadata_GetNumberOfElementVariables, METH_VARARGS,
   (char*)"V.GetNumberOfElementVariables() -> int\nC++: int GetNumberOfElementVariables()\n\nThe ModelMetadata object may contain these lists:\n   o  the variables in the original data file\n   o  the variables created in the u grid from those original\nvariables\n   o  a mapping from the grid variable names to the original\nnames\n   o  a list of the number of components each grid variable has\n\n\n  (Example: Variables in Exodus II files are all scalars.  Some\nare\n  combined by the ExodusReader into vector variables in the\ngrid.)\n\n\n  These methods return names of the original variables, the names\n  of the grid variables, a list of the number of components in\n  each grid variable, and a list of the index into the list of\n  original variable names where the original name of the first\n  component of a grid variable may be found.  The names of\nsubsequent\n  components would immediately follow the name of the the first\n  component.\n"},
  {(char*)"GetElementVariableNumberOfComponents", PyvtkModelMetadata_GetElementVariableNumberOfComponents, METH_VARARGS,
   (char*)"V.GetElementVariableNumberOfComponents() -> (int, ...)\nC++: int *GetElementVariableNumberOfComponents()\n\nThe ModelMetadata object may contain these lists:\n   o  the variables in the original data file\n   o  the variables created in the u grid from those original\nvariables\n   o  a mapping from the grid variable names to the original\nnames\n   o  a list of the number of components each grid variable has\n\n\n  (Example: Variables in Exodus II files are all scalars.  Some\nare\n  combined by the ExodusReader into vector variables in the\ngrid.)\n\n\n  These methods return names of the original variables, the names\n  of the grid variables, a list of the number of components in\n  each grid variable, and a list of the index into the list of\n  original variable names where the original name of the first\n  component of a grid variable may be found.  The names of\nsubsequent\n  components would immediately follow the name of the the first\n  component.\n"},
  {(char*)"GetMapToOriginalElementVariableNames", PyvtkModelMetadata_GetMapToOriginalElementVariableNames, METH_VARARGS,
   (char*)"V.GetMapToOriginalElementVariableNames() -> (int, ...)\nC++: int *GetMapToOriginalElementVariableNames()\n\nThe ModelMetadata object may contain these lists:\n   o  the variables in the original data file\n   o  the variables created in the u grid from those original\nvariables\n   o  a mapping from the grid variable names to the original\nnames\n   o  a list of the number of components each grid variable has\n\n\n  (Example: Variables in Exodus II files are all scalars.  Some\nare\n  combined by the ExodusReader into vector variables in the\ngrid.)\n\n\n  These methods return names of the original variables, the names\n  of the grid variables, a list of the number of components in\n  each grid variable, and a list of the index into the list of\n  original variable names where the original name of the first\n  component of a grid variable may be found.  The names of\nsubsequent\n  components would immediately follow the name of the the first\n  component.\n"},
  {(char*)"GetOriginalNumberOfNodeVariables", PyvtkModelMetadata_GetOriginalNumberOfNodeVariables, METH_VARARGS,
   (char*)"V.GetOriginalNumberOfNodeVariables() -> int\nC++: int GetOriginalNumberOfNodeVariables()\n\n"},
  {(char*)"GetNumberOfNodeVariables", PyvtkModelMetadata_GetNumberOfNodeVariables, METH_VARARGS,
   (char*)"V.GetNumberOfNodeVariables() -> int\nC++: int GetNumberOfNodeVariables()\n\n"},
  {(char*)"GetNodeVariableNumberOfComponents", PyvtkModelMetadata_GetNodeVariableNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNodeVariableNumberOfComponents() -> (int, ...)\nC++: int *GetNodeVariableNumberOfComponents()\n\n"},
  {(char*)"GetMapToOriginalNodeVariableNames", PyvtkModelMetadata_GetMapToOriginalNodeVariableNames, METH_VARARGS,
   (char*)"V.GetMapToOriginalNodeVariableNames() -> (int, ...)\nC++: int *GetMapToOriginalNodeVariableNames()\n\n"},
  {(char*)"FreeAllGlobalData", PyvtkModelMetadata_FreeAllGlobalData, METH_VARARGS,
   (char*)"V.FreeAllGlobalData()\nC++: void FreeAllGlobalData()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeAllLocalData", PyvtkModelMetadata_FreeAllLocalData, METH_VARARGS,
   (char*)"V.FreeAllLocalData()\nC++: void FreeAllLocalData()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeBlockDependentData", PyvtkModelMetadata_FreeBlockDependentData, METH_VARARGS,
   (char*)"V.FreeBlockDependentData()\nC++: void FreeBlockDependentData()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeOriginalElementVariableNames", PyvtkModelMetadata_FreeOriginalElementVariableNames, METH_VARARGS,
   (char*)"V.FreeOriginalElementVariableNames()\nC++: void FreeOriginalElementVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeOriginalNodeVariableNames", PyvtkModelMetadata_FreeOriginalNodeVariableNames, METH_VARARGS,
   (char*)"V.FreeOriginalNodeVariableNames()\nC++: void FreeOriginalNodeVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedElementVariableNames", PyvtkModelMetadata_FreeUsedElementVariableNames, METH_VARARGS,
   (char*)"V.FreeUsedElementVariableNames()\nC++: void FreeUsedElementVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedNodeVariableNames", PyvtkModelMetadata_FreeUsedNodeVariableNames, METH_VARARGS,
   (char*)"V.FreeUsedNodeVariableNames()\nC++: void FreeUsedNodeVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedElementVariables", PyvtkModelMetadata_FreeUsedElementVariables, METH_VARARGS,
   (char*)"V.FreeUsedElementVariables()\nC++: void FreeUsedElementVariables()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedNodeVariables", PyvtkModelMetadata_FreeUsedNodeVariables, METH_VARARGS,
   (char*)"V.FreeUsedNodeVariables()\nC++: void FreeUsedNodeVariables()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"Reset", PyvtkModelMetadata_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nSet the object back to it's initial state\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkModelMetadata_StaticNew()
{
  return vtkModelMetadata::New();
}

PyObject *PyVTKClass_vtkModelMetadataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkModelMetadata_StaticNew,
    PyvtkModelMetadata_Methods,
    "vtkModelMetadata", modulename,
    NULL, NULL,
    PyvtkModelMetadata_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkModelMetadata_Doc()
{
  static const char *docstring[] = {
    "vtkModelMetadata - This class encapsulates the metadata\n\n",
    "Superclass: vtkObject\n\n",
    "This class is inspired by the Exodus II file format, but\n  because this class does not depend on the Exodus library, it\n  should be possible to use it to represent metadata for other\n  dataset file formats.  Sandia Labs uses it in their Exodus II\n  reader, their Exodus II writer and their EnSight writer.\n  vtkDistributedDataFilter looks for metadata attached to\n  it's input and redistributes the m",
    "etadata with the grid.\n\n\n  The fields in this class are those described in the document\n  \"EXODUS II: A Finite Element Data Model\", SAND92-2137, November\n1995.\n\n\n  Element and node IDs stored in this object must be global IDs,\n  in the event that the original dataset was partitioned across\n  many files.\n\n\n  One way to initialize this object is by using vtkExodusModel\n  (a Sandia class used by the ",
    "Sandia Exodus reader).\n  That class will take an open Exodus II file and a\n  vtkUnstructuredGrid drawn from it and will set the required fields.\n\n\n  Alternatively, you can use all the Set*\n  methods to set the individual fields. This class does not\n  copy the data, it simply uses your pointer. This\n  class will free the storage associated with your pointer\n  when the class is deleted.  Most fields",
    " have sensible defaults.\n  The only requirement is that if you are using this ModelMetadata\n  to write out an Exodus or EnSight file in parallel, you must\n  SetBlockIds and SetBlockIdArrayName.  Your vtkUnstructuredGrid must\n  have a cell array giving the block ID for each cell.\n\nCaveats:\n\n\n  The Exodus II library supports an optimized element order map\n  (section 3.7 in the SAND document).  It co",
    "ntains all the element\n  IDs, listed in the order in which a solver should process them.\n  We don't include this, and won't unless there is a request.\n\n\n  There is an assumption in some classes that the name of the cell\n  array containing global element ids is \"GlobalElementId\" and the\n  name of the point array containing global node ids is\n\"GlobalNodeId\".\n  (element == cell) and (node == point).\n",
    "\nSee also:\n\n\n  vtkDistributedDataFilter vtkExtractCells\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkModelMetadata(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkModelMetadataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkModelMetadata", o) != 0)
    {
    Py_DECREF(o);
    }

}

