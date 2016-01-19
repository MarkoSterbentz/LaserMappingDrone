// python wrapper for vtkSelectionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectionSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectionSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectionSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkSelectionSource_Doc();


static PyObject *
PyvtkSelectionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectionSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionSource::NewInstance());

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
PyvtkSelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectionSource *tempr = vtkSelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddID(temp0, temp1);
      }
    else
      {
      op->vtkSelectionSource::AddID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddStringID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddStringID(temp0, temp1);
      }
    else
      {
      op->vtkSelectionSource::AddStringID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

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
      op->AddLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSelectionSource::AddLocation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddThreshold(temp0, temp1);
      }
    else
      {
      op->vtkSelectionSource::AddThreshold(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetFrustum(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetFrustum(temp0);
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
PyvtkSelectionSource_AddBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddBlock(temp0);
      }
    else
      {
      op->vtkSelectionSource::AddBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllIDs();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllStringIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllStringIDs();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllStringIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllThresholds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllThresholds();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllThresholds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLocations();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllLocations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllBlocks();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContentType(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetContentType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetContentType() :
      op->vtkSelectionSource::GetContentType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkSelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContainingCells(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetContainingCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkSelectionSource::GetContainingCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverse(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkSelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkSelectionSource::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayComponent(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetArrayComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkSelectionSource::GetArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeIndex(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetCompositeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex() :
      op->vtkSelectionSource::GetCompositeIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalLevel(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetHierarchicalLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalLevel() :
      op->vtkSelectionSource::GetHierarchicalLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalIndex(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetHierarchicalIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalIndex() :
      op->vtkSelectionSource::GetHierarchicalIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQueryString(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetQueryString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkSelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectionSource\nC++: vtkSelectionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionSource\nC++: vtkSelectionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddID", PyvtkSelectionSource_AddID, METH_VARARGS,
   (char*)"V.AddID(int, int)\nC++: void AddID(vtkIdType piece, vtkIdType id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {(char*)"AddStringID", PyvtkSelectionSource_AddStringID, METH_VARARGS,
   (char*)"V.AddStringID(int, string)\nC++: void AddStringID(vtkIdType piece, const char *id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {(char*)"AddLocation", PyvtkSelectionSource_AddLocation, METH_VARARGS,
   (char*)"V.AddLocation(float, float, float)\nC++: void AddLocation(double x, double y, double z)\n\nAdd a point in world space to probe at.\n"},
  {(char*)"AddThreshold", PyvtkSelectionSource_AddThreshold, METH_VARARGS,
   (char*)"V.AddThreshold(float, float)\nC++: void AddThreshold(double min, double max)\n\nAdd a value range to threshold within.\n"},
  {(char*)"SetFrustum", PyvtkSelectionSource_SetFrustum, METH_VARARGS,
   (char*)"V.SetFrustum([float, ...])\nC++: void SetFrustum(double *vertices)\n\nSet a frustum to choose within.\n"},
  {(char*)"AddBlock", PyvtkSelectionSource_AddBlock, METH_VARARGS,
   (char*)"V.AddBlock(int)\nC++: void AddBlock(vtkIdType blockno)\n\nAdd the flat-index/composite index for a block.\n"},
  {(char*)"RemoveAllIDs", PyvtkSelectionSource_RemoveAllIDs, METH_VARARGS,
   (char*)"V.RemoveAllIDs()\nC++: void RemoveAllIDs()\n\nRemoves all IDs.\n"},
  {(char*)"RemoveAllStringIDs", PyvtkSelectionSource_RemoveAllStringIDs, METH_VARARGS,
   (char*)"V.RemoveAllStringIDs()\nC++: void RemoveAllStringIDs()\n\nRemoves all IDs.\n"},
  {(char*)"RemoveAllThresholds", PyvtkSelectionSource_RemoveAllThresholds, METH_VARARGS,
   (char*)"V.RemoveAllThresholds()\nC++: void RemoveAllThresholds()\n\nRemove all thresholds added with AddThreshold.\n"},
  {(char*)"RemoveAllLocations", PyvtkSelectionSource_RemoveAllLocations, METH_VARARGS,
   (char*)"V.RemoveAllLocations()\nC++: void RemoveAllLocations()\n\nRemove all locations added with AddLocation.\n"},
  {(char*)"RemoveAllBlocks", PyvtkSelectionSource_RemoveAllBlocks, METH_VARARGS,
   (char*)"V.RemoveAllBlocks()\nC++: void RemoveAllBlocks()\n\nRemove all blocks added with AddBlock.\n"},
  {(char*)"SetContentType", PyvtkSelectionSource_SetContentType, METH_VARARGS,
   (char*)"V.SetContentType(int)\nC++: void SetContentType(int a)\n\nSet the content type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionContent.\n"},
  {(char*)"GetContentType", PyvtkSelectionSource_GetContentType, METH_VARARGS,
   (char*)"V.GetContentType() -> int\nC++: int GetContentType()\n\nSet the content type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionContent.\n"},
  {(char*)"SetFieldType", PyvtkSelectionSource_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {(char*)"GetFieldType", PyvtkSelectionSource_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {(char*)"SetContainingCells", PyvtkSelectionSource_SetContainingCells, METH_VARARGS,
   (char*)"V.SetContainingCells(int)\nC++: void SetContainingCells(int a)\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {(char*)"GetContainingCells", PyvtkSelectionSource_GetContainingCells, METH_VARARGS,
   (char*)"V.GetContainingCells() -> int\nC++: int GetContainingCells()\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {(char*)"SetInverse", PyvtkSelectionSource_SetInverse, METH_VARARGS,
   (char*)"V.SetInverse(int)\nC++: void SetInverse(int a)\n\nDetermines whether the selection describes what to include or\nexclude. Default is 0, meaning include.\n"},
  {(char*)"GetInverse", PyvtkSelectionSource_GetInverse, METH_VARARGS,
   (char*)"V.GetInverse() -> int\nC++: int GetInverse()\n\nDetermines whether the selection describes what to include or\nexclude. Default is 0, meaning include.\n"},
  {(char*)"SetArrayName", PyvtkSelectionSource_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nAccess to the name of the selection's subset description array.\n"},
  {(char*)"GetArrayName", PyvtkSelectionSource_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nAccess to the name of the selection's subset description array.\n"},
  {(char*)"SetArrayComponent", PyvtkSelectionSource_SetArrayComponent, METH_VARARGS,
   (char*)"V.SetArrayComponent(int)\nC++: void SetArrayComponent(int a)\n\nAccess to the component number for the array specified by\nArrayName. Default is component 0. Use -1 for magnitude.\n"},
  {(char*)"GetArrayComponent", PyvtkSelectionSource_GetArrayComponent, METH_VARARGS,
   (char*)"V.GetArrayComponent() -> int\nC++: int GetArrayComponent()\n\nAccess to the component number for the array specified by\nArrayName. Default is component 0. Use -1 for magnitude.\n"},
  {(char*)"SetCompositeIndex", PyvtkSelectionSource_SetCompositeIndex, METH_VARARGS,
   (char*)"V.SetCompositeIndex(int)\nC++: void SetCompositeIndex(int a)\n\nIf CompositeIndex < 0 then COMPOSITE_INDEX() is not added to the\noutput.\n"},
  {(char*)"GetCompositeIndex", PyvtkSelectionSource_GetCompositeIndex, METH_VARARGS,
   (char*)"V.GetCompositeIndex() -> int\nC++: int GetCompositeIndex()\n\nIf CompositeIndex < 0 then COMPOSITE_INDEX() is not added to the\noutput.\n"},
  {(char*)"SetHierarchicalLevel", PyvtkSelectionSource_SetHierarchicalLevel, METH_VARARGS,
   (char*)"V.SetHierarchicalLevel(int)\nC++: void SetHierarchicalLevel(int a)\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"GetHierarchicalLevel", PyvtkSelectionSource_GetHierarchicalLevel, METH_VARARGS,
   (char*)"V.GetHierarchicalLevel() -> int\nC++: int GetHierarchicalLevel()\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"SetHierarchicalIndex", PyvtkSelectionSource_SetHierarchicalIndex, METH_VARARGS,
   (char*)"V.SetHierarchicalIndex(int)\nC++: void SetHierarchicalIndex(int a)\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"GetHierarchicalIndex", PyvtkSelectionSource_GetHierarchicalIndex, METH_VARARGS,
   (char*)"V.GetHierarchicalIndex() -> int\nC++: int GetHierarchicalIndex()\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"SetQueryString", PyvtkSelectionSource_SetQueryString, METH_VARARGS,
   (char*)"V.SetQueryString(string)\nC++: void SetQueryString(char *)\n\nSet/Get the query expression string.\n"},
  {(char*)"GetQueryString", PyvtkSelectionSource_GetQueryString, METH_VARARGS,
   (char*)"V.GetQueryString() -> string\nC++: char *GetQueryString()\n\nSet/Get the query expression string.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionSource_StaticNew()
{
  return vtkSelectionSource::New();
}

PyObject *PyVTKClass_vtkSelectionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionSource_StaticNew,
    PyvtkSelectionSource_Methods,
    "vtkSelectionSource", modulename,
    NULL, NULL,
    PyvtkSelectionSource_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectionSource_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionSource - Generate selection from given set of ids\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

