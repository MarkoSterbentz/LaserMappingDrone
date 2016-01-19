// python wrapper for vtkPVDataInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkPVDataInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVDataInformation_Doc();


static PyObject *
PyvtkPVDataInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataInformation::NewInstance());

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
PyvtkPVDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataInformation *tempr = vtkPVDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0, temp1) :
      op->vtkPVDataInformation::GetArrayInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPortNumber(temp0);
      }
    else
      {
      op->vtkPVDataInformation::SetPortNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPortNumber() :
      op->vtkPVDataInformation::GetPortNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_AddInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataInformation_AddInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0, temp1);
      }
    else
      {
      op->vtkPVDataInformation::AddInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataInformation_AddInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVDataInformation_AddInformation_s1(self, args);
    case 2:
      return PyvtkPVDataInformation_AddInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInformation");
  return NULL;
}



static PyObject *
PyvtkPVDataInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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
      op->vtkPVDataInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVDataInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataSetType() :
      op->vtkPVDataInformation::GetDataSetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeDataSetType() :
      op->vtkPVDataInformation::GetCompositeDataSetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataSetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataSetTypeAsString() :
      op->vtkPVDataInformation::GetDataSetTypeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_DataSetTypeIsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetTypeIsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->DataSetTypeIsA(temp0) :
      op->vtkPVDataInformation::DataSetTypeIsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPVDataInformation::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPVDataInformation::GetNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfRows() :
      op->vtkPVDataInformation::GetNumberOfRows());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMemorySize() :
      op->vtkPVDataInformation::GetMemorySize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPolygonCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolygonCount() :
      op->vtkPVDataInformation::GetPolygonCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets() :
      op->vtkPVDataInformation::GetNumberOfDataSets());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVDataInformation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPrettyDataTypeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrettyDataTypeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPrettyDataTypeString() :
      op->vtkPVDataInformation::GetPrettyDataTypeString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkPVDataInformation::GetExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPointArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetPointArrayInformation() :
      op->vtkPVDataInformation::GetPointArrayInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetPointDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetPointDataInformation() :
      op->vtkPVDataInformation::GetPointDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCellDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetCellDataInformation() :
      op->vtkPVDataInformation::GetCellDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetVertexDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetVertexDataInformation() :
      op->vtkPVDataInformation::GetVertexDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetEdgeDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetEdgeDataInformation() :
      op->vtkPVDataInformation::GetEdgeDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetRowDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetRowDataInformation() :
      op->vtkPVDataInformation::GetRowDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetFieldDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetFieldDataInformation() :
      op->vtkPVDataInformation::GetFieldDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetAttributeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetAttributeInformation(temp0) :
      op->vtkPVDataInformation::GetAttributeInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCompositeDataInformation *tempr = (ap.IsBound() ?
      op->GetCompositeDataInformation() :
      op->vtkPVDataInformation::GetCompositeDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformationForCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformationForCompositeIndex(temp0) :
      op->vtkPVDataInformation::GetDataInformationForCompositeIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformationForCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

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

    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformationForCompositeIndex(temp0) :
      op->vtkPVDataInformation::GetDataInformationForCompositeIndex(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkPVDataInformation_GetDataInformationForCompositeIndex_Methods[] = {
  {NULL, PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkPVDataInformation_GetDataInformationForCompositeIndex_s2, METH_VARARGS,
   (char*)"@O *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVDataInformation_GetDataInformationForCompositeIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataInformation_GetDataInformationForCompositeIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDataInformationForCompositeIndex");
  return NULL;
}



static PyObject *
PyvtkPVDataInformation_GetDataClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDataClassName() :
      op->vtkPVDataInformation::GetDataClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeDataClassName() :
      op->vtkPVDataInformation::GetCompositeDataClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetTimeSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTimeSpan() :
      op->vtkPVDataInformation::GetTimeSpan());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetHasTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHasTime() :
      op->vtkPVDataInformation::GetHasTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkPVDataInformation::GetTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetTimeLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTimeLabel() :
      op->vtkPVDataInformation::GetTimeLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_IsDataStructured(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataStructured");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsDataStructured() :
      op->vtkPVDataInformation::IsDataStructured());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetCompositeDataSetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeDataSetName() :
      op->vtkPVDataInformation::GetCompositeDataSetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_RegisterHelper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterHelper");

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVDataInformation::RegisterHelper(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_GetSortArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSortArrays() :
      op->vtkPVDataInformation::GetSortArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataInformation_SetSortArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataInformation *op = static_cast<vtkPVDataInformation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSortArrays(temp0);
      }
    else
      {
      op->vtkPVDataInformation::SetSortArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataInformation\nC++: vtkPVDataInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataInformation\nC++: vtkPVDataInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetArrayInformation", PyvtkPVDataInformation_GetArrayInformation, METH_VARARGS,
   (char*)"V.GetArrayInformation(string, int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(\n    const char *arrayname, int fieldAssociation)\n\nMethod to find and return attribute array information for a\nparticular array for the given attribute type if one exists.\nReturns NULL if none is found.fieldAssociation can be\nvtkDataObject::FIELD_ASSOCIATION_POINTS,\nvtkDataObject::FIELD_ASSOCIATION_CELLS etc. (use\nvtkDataObject::FIELD_ASSOCIATION_NONE for field data) (or\nvtkDataObject::POINT, vtkDataObject::CELL, vtkDataObject::FIELD).\n"},
  {(char*)"SetPortNumber", PyvtkPVDataInformation_SetPortNumber, METH_VARARGS,
   (char*)"V.SetPortNumber(int)\nC++: void SetPortNumber(int a)\n\nPort number controls which output port the information is\ngathered from. This is the only parameter that can be set on  the\nclient-side before gathering the information.\n"},
  {(char*)"GetPortNumber", PyvtkPVDataInformation_GetPortNumber, METH_VARARGS,
   (char*)"V.GetPortNumber() -> int\nC++: int GetPortNumber()\n\nPort number controls which output port the information is\ngathered from. This is the only parameter that can be set on  the\nclient-side before gathering the information.\n"},
  {(char*)"CopyFromObject", PyvtkPVDataInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVDataInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *info)\nV.AddInformation(vtkPVInformation, int)\nC++: virtual void AddInformation(vtkPVInformation *,\n    int addingParts)\n\nMerge another information object. Calls AddInformation(info, 0).\n"},
  {(char*)"CopyToStream", PyvtkPVDataInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVDataInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"Initialize", PyvtkPVDataInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRemove all information.  The next add will be like a copy. I\nmight want to put this in the PVInformation superclass.\n"},
  {(char*)"GetDataSetType", PyvtkPVDataInformation_GetDataSetType, METH_VARARGS,
   (char*)"V.GetDataSetType() -> int\nC++: int GetDataSetType()\n\nAccess to information.\n"},
  {(char*)"GetCompositeDataSetType", PyvtkPVDataInformation_GetCompositeDataSetType, METH_VARARGS,
   (char*)"V.GetCompositeDataSetType() -> int\nC++: int GetCompositeDataSetType()\n\nAccess to information.\n"},
  {(char*)"GetDataSetTypeAsString", PyvtkPVDataInformation_GetDataSetTypeAsString, METH_VARARGS,
   (char*)"V.GetDataSetTypeAsString() -> string\nC++: const char *GetDataSetTypeAsString()\n\nAccess to information.\n"},
  {(char*)"DataSetTypeIsA", PyvtkPVDataInformation_DataSetTypeIsA, METH_VARARGS,
   (char*)"V.DataSetTypeIsA(string) -> int\nC++: int DataSetTypeIsA(const char *type)\n\nAccess to information.\n"},
  {(char*)"GetNumberOfPoints", PyvtkPVDataInformation_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkTypeInt64 GetNumberOfPoints()\n\nAccess to information.\n"},
  {(char*)"GetNumberOfCells", PyvtkPVDataInformation_GetNumberOfCells, METH_VARARGS,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkTypeInt64 GetNumberOfCells()\n\nAccess to information.\n"},
  {(char*)"GetNumberOfRows", PyvtkPVDataInformation_GetNumberOfRows, METH_VARARGS,
   (char*)"V.GetNumberOfRows() -> int\nC++: vtkTypeInt64 GetNumberOfRows()\n\nAccess to information.\n"},
  {(char*)"GetMemorySize", PyvtkPVDataInformation_GetMemorySize, METH_VARARGS,
   (char*)"V.GetMemorySize() -> int\nC++: int GetMemorySize()\n\nAccess to information.\n"},
  {(char*)"GetPolygonCount", PyvtkPVDataInformation_GetPolygonCount, METH_VARARGS,
   (char*)"V.GetPolygonCount() -> int\nC++: int GetPolygonCount()\n\nAccess to information.\n"},
  {(char*)"GetNumberOfDataSets", PyvtkPVDataInformation_GetNumberOfDataSets, METH_VARARGS,
   (char*)"V.GetNumberOfDataSets() -> int\nC++: int GetNumberOfDataSets()\n\nAccess to information.\n"},
  {(char*)"GetBounds", PyvtkPVDataInformation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"GetPrettyDataTypeString", PyvtkPVDataInformation_GetPrettyDataTypeString, METH_VARARGS,
   (char*)"V.GetPrettyDataTypeString() -> string\nC++: const char *GetPrettyDataTypeString()\n\nReturns a string describing the datatype that can be directly\nshown in a user interface.\n"},
  {(char*)"GetExtent", PyvtkPVDataInformation_GetExtent, METH_VARARGS,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"GetPointArrayInformation", PyvtkPVDataInformation_GetPointArrayInformation, METH_VARARGS,
   (char*)"V.GetPointArrayInformation() -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetPointArrayInformation()\n\nAccess to information about points. Only valid for subclasses of\nvtkPointSet.\n"},
  {(char*)"GetPointDataInformation", PyvtkPVDataInformation_GetPointDataInformation, METH_VARARGS,
   (char*)"V.GetPointDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetPointDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetCellDataInformation", PyvtkPVDataInformation_GetCellDataInformation, METH_VARARGS,
   (char*)"V.GetCellDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetCellDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetVertexDataInformation", PyvtkPVDataInformation_GetVertexDataInformation, METH_VARARGS,
   (char*)"V.GetVertexDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetVertexDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetEdgeDataInformation", PyvtkPVDataInformation_GetEdgeDataInformation, METH_VARARGS,
   (char*)"V.GetEdgeDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetEdgeDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetRowDataInformation", PyvtkPVDataInformation_GetRowDataInformation, METH_VARARGS,
   (char*)"V.GetRowDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetRowDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetFieldDataInformation", PyvtkPVDataInformation_GetFieldDataInformation, METH_VARARGS,
   (char*)"V.GetFieldDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetFieldDataInformation()\n\nAccesse to information about field data, if any.\n"},
  {(char*)"GetAttributeInformation", PyvtkPVDataInformation_GetAttributeInformation, METH_VARARGS,
   (char*)"V.GetAttributeInformation(int)\n    -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetAttributeInformation(\n    int fieldAssociation)\n\nMethod to access vtkPVDataSetAttributesInformation using field\nassociation type.fieldAssociation can be\nvtkDataObject::FIELD_ASSOCIATION_POINTS,\nvtkDataObject::FIELD_ASSOCIATION_CELLS etc. (use\nvtkDataObject::FIELD_ASSOCIATION_NONE for field data).\n"},
  {(char*)"GetCompositeDataInformation", PyvtkPVDataInformation_GetCompositeDataInformation, METH_VARARGS,
   (char*)"V.GetCompositeDataInformation() -> vtkPVCompositeDataInformation\nC++: vtkPVCompositeDataInformation *GetCompositeDataInformation()\n\nIf data is composite, this provides information specific to\ncomposite datasets.\n"},
  {(char*)"GetDataInformationForCompositeIndex", PyvtkPVDataInformation_GetDataInformationForCompositeIndex, METH_VARARGS,
   (char*)"V.GetDataInformationForCompositeIndex(int) -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformationForCompositeIndex(\n    int index)\nV.GetDataInformationForCompositeIndex([int, ...])\n    -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformationForCompositeIndex(\n    int *index)\n\nGiven the flat-index for a node in a composite dataset, this\nmethod returns the data information for the node, it available.\n"},
  {(char*)"GetDataClassName", PyvtkPVDataInformation_GetDataClassName, METH_VARARGS,
   (char*)"V.GetDataClassName() -> string\nC++: char *GetDataClassName()\n\nClassName of the data represented by information object.\n"},
  {(char*)"GetCompositeDataClassName", PyvtkPVDataInformation_GetCompositeDataClassName, METH_VARARGS,
   (char*)"V.GetCompositeDataClassName() -> string\nC++: char *GetCompositeDataClassName()\n\nThe least common class name of composite dataset blocks\n"},
  {(char*)"GetTimeSpan", PyvtkPVDataInformation_GetTimeSpan, METH_VARARGS,
   (char*)"V.GetTimeSpan() -> (float, float)\nC++: double *GetTimeSpan()\n\n"},
  {(char*)"GetHasTime", PyvtkPVDataInformation_GetHasTime, METH_VARARGS,
   (char*)"V.GetHasTime() -> int\nC++: int GetHasTime()\n\nReturns if the Time is set.\n"},
  {(char*)"GetTime", PyvtkPVDataInformation_GetTime, METH_VARARGS,
   (char*)"V.GetTime() -> float\nC++: double GetTime()\n\nReturns the data time if, GetHasTime() return true.\n"},
  {(char*)"GetTimeLabel", PyvtkPVDataInformation_GetTimeLabel, METH_VARARGS,
   (char*)"V.GetTimeLabel() -> string\nC++: char *GetTimeLabel()\n\nReturns the label that should be used instead of \"Time\" if any.\n"},
  {(char*)"IsDataStructured", PyvtkPVDataInformation_IsDataStructured, METH_VARARGS,
   (char*)"V.IsDataStructured() -> int\nC++: int IsDataStructured()\n\nReturns if the data type is structured.\n"},
  {(char*)"GetCompositeDataSetName", PyvtkPVDataInformation_GetCompositeDataSetName, METH_VARARGS,
   (char*)"V.GetCompositeDataSetName() -> string\nC++: char *GetCompositeDataSetName()\n\nIf this instance of vtkPVDataInformation summarizes a node in a\ncomposite-dataset, and if that node has been given a label in\nthat composite dataset (using vtkCompositeDataSet::NAME\nmeta-data), then this will return that name. Returns NULL if this\ninstance doesn't represent a node in a composite dataset or\ndoesn't have a label/name associated with it.\n"},
  {(char*)"RegisterHelper", PyvtkPVDataInformation_RegisterHelper, METH_VARARGS | METH_STATIC,
   (char*)"V.RegisterHelper(string, string)\nC++: static void RegisterHelper(const char *classname,\n    const char *helperclassname)\n\nAllows run time addition of information getters for new classes\n"},
  {(char*)"GetSortArrays", PyvtkPVDataInformation_GetSortArrays, METH_VARARGS,
   (char*)"V.GetSortArrays() -> bool\nC++: bool GetSortArrays()\n\nSpecify whether or not to sort the point data, cell data, and\nfield data arrays. The default is to sort.\n"},
  {(char*)"SetSortArrays", PyvtkPVDataInformation_SetSortArrays, METH_VARARGS,
   (char*)"V.SetSortArrays(bool)\nC++: void SetSortArrays(bool)\n\nSpecify whether or not to sort the point data, cell data, and\nfield data arrays. The default is to sort.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDataInformation_StaticNew()
{
  return vtkPVDataInformation::New();
}

PyObject *PyVTKClass_vtkPVDataInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDataInformation_StaticNew,
    PyvtkPVDataInformation_Methods,
    "vtkPVDataInformation", modulename,
    NULL, NULL,
    PyvtkPVDataInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVDataInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataInformation - Light object for holding data information.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "This object is a light weight object.  It has no user interface and\ndoes not necessarily last a long time.  It is meant to help collect\ninformation about data object and collections of data objects.  It\nhas a PV in the class name because it should never be moved into VTK.\n\nCaveats:\n\nGet polygons only works for poly data and it does not work propelry\nfor the triangle strips.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

