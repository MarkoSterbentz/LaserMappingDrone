// python wrapper for vtkPVSelectionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSelectionSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSelectionSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSelectionSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkPVSelectionSource_Doc();


static PyObject *
PyvtkPVSelectionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSelectionSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSelectionSource::NewInstance());

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
PyvtkPVSelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSelectionSource *tempr = vtkPVSelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  double temp0[32];
  double save0[32];
  const int size0 = 32;
  PyObject *result = NULL;

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
      op->vtkPVSelectionSource::SetFrustum(temp0);
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
PyvtkPVSelectionSource_AddGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddGlobalID(temp0);
      }
    else
      {
      op->vtkPVSelectionSource::AddGlobalID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllGlobalIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllGlobalIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllGlobalIDs();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllGlobalIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddPedigreeID(temp0, temp1);
      }
    else
      {
      op->vtkPVSelectionSource::AddPedigreeID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllPedigreeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPedigreeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPedigreeIDs();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllPedigreeIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddPedigreeStringID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPedigreeStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddPedigreeStringID(temp0, temp1);
      }
    else
      {
      op->vtkPVSelectionSource::AddPedigreeStringID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllPedigreeStringIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPedigreeStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllPedigreeStringIDs();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllPedigreeStringIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllIDs();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddCompositeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCompositeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddCompositeID(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVSelectionSource::AddCompositeID(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllCompositeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCompositeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllCompositeIDs();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllCompositeIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddHierarhicalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHierarhicalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddHierarhicalID(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVSelectionSource::AddHierarhicalID(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllHierarchicalIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllHierarchicalIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllHierarchicalIDs();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllHierarchicalIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddThreshold(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllThresholds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllThresholds();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllThresholds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllBlocks();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddLocation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLocations();
      }
    else
      {
      op->vtkPVSelectionSource::RemoveAllLocations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkPVSelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetContainingCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkPVSelectionSource::GetContainingCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkPVSelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetQueryString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkPVSelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSelectionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSelectionSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSelectionSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSelectionSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSelectionSource\nC++: vtkPVSelectionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSelectionSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSelectionSource\nC++: vtkPVSelectionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFrustum", PyvtkPVSelectionSource_SetFrustum, METH_VARARGS,
   (char*)"V.SetFrustum([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void SetFrustum(double vertices[32])\n\nSet a frustum to choose within.\n"},
  {(char*)"AddGlobalID", PyvtkPVSelectionSource_AddGlobalID, METH_VARARGS,
   (char*)"V.AddGlobalID(int)\nC++: void AddGlobalID(vtkIdType id)\n\nAdd global IDs.\n"},
  {(char*)"RemoveAllGlobalIDs", PyvtkPVSelectionSource_RemoveAllGlobalIDs, METH_VARARGS,
   (char*)"V.RemoveAllGlobalIDs()\nC++: void RemoveAllGlobalIDs()\n\nAdd global IDs.\n"},
  {(char*)"AddPedigreeID", PyvtkPVSelectionSource_AddPedigreeID, METH_VARARGS,
   (char*)"V.AddPedigreeID(string, int)\nC++: void AddPedigreeID(const char *domain, vtkIdType id)\n\nAdd integer pedigree IDs in a particular domain.\n"},
  {(char*)"RemoveAllPedigreeIDs", PyvtkPVSelectionSource_RemoveAllPedigreeIDs, METH_VARARGS,
   (char*)"V.RemoveAllPedigreeIDs()\nC++: void RemoveAllPedigreeIDs()\n\nAdd integer pedigree IDs in a particular domain.\n"},
  {(char*)"AddPedigreeStringID", PyvtkPVSelectionSource_AddPedigreeStringID, METH_VARARGS,
   (char*)"V.AddPedigreeStringID(string, string)\nC++: void AddPedigreeStringID(const char *domain, const char *id)\n\nAdd string pedigree IDs in a particular domain.\n"},
  {(char*)"RemoveAllPedigreeStringIDs", PyvtkPVSelectionSource_RemoveAllPedigreeStringIDs, METH_VARARGS,
   (char*)"V.RemoveAllPedigreeStringIDs()\nC++: void RemoveAllPedigreeStringIDs()\n\nAdd string pedigree IDs in a particular domain.\n"},
  {(char*)"AddID", PyvtkPVSelectionSource_AddID, METH_VARARGS,
   (char*)"V.AddID(int, int)\nC++: void AddID(vtkIdType piece, vtkIdType id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {(char*)"RemoveAllIDs", PyvtkPVSelectionSource_RemoveAllIDs, METH_VARARGS,
   (char*)"V.RemoveAllIDs()\nC++: void RemoveAllIDs()\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {(char*)"AddCompositeID", PyvtkPVSelectionSource_AddCompositeID, METH_VARARGS,
   (char*)"V.AddCompositeID(int, int, int)\nC++: void AddCompositeID(unsigned int composite_index,\n    vtkIdType piece, vtkIdType id)\n\nAdd IDs that will be added to the selection produced by the\nselection source. The source will generate only the ids for which\npiece == UPDATE_PIECE_NUMBER. If piece == -1, the id applies to\nall pieces.\n"},
  {(char*)"RemoveAllCompositeIDs", PyvtkPVSelectionSource_RemoveAllCompositeIDs, METH_VARARGS,
   (char*)"V.RemoveAllCompositeIDs()\nC++: void RemoveAllCompositeIDs()\n\nAdd IDs that will be added to the selection produced by the\nselection source. The source will generate only the ids for which\npiece == UPDATE_PIECE_NUMBER. If piece == -1, the id applies to\nall pieces.\n"},
  {(char*)"AddHierarhicalID", PyvtkPVSelectionSource_AddHierarhicalID, METH_VARARGS,
   (char*)"V.AddHierarhicalID(int, int, int)\nC++: void AddHierarhicalID(unsigned int level,\n    unsigned int dataset, vtkIdType id)\n\nThe list of IDs that will be added to the selection produced by\nthe selection source.\n"},
  {(char*)"RemoveAllHierarchicalIDs", PyvtkPVSelectionSource_RemoveAllHierarchicalIDs, METH_VARARGS,
   (char*)"V.RemoveAllHierarchicalIDs()\nC++: void RemoveAllHierarchicalIDs()\n\nThe list of IDs that will be added to the selection produced by\nthe selection source.\n"},
  {(char*)"AddThreshold", PyvtkPVSelectionSource_AddThreshold, METH_VARARGS,
   (char*)"V.AddThreshold(float, float)\nC++: void AddThreshold(double min, double max)\n\nAdd a value range to threshold within.\n"},
  {(char*)"RemoveAllThresholds", PyvtkPVSelectionSource_RemoveAllThresholds, METH_VARARGS,
   (char*)"V.RemoveAllThresholds()\nC++: void RemoveAllThresholds()\n\nAdd a value range to threshold within.\n"},
  {(char*)"AddBlock", PyvtkPVSelectionSource_AddBlock, METH_VARARGS,
   (char*)"V.AddBlock(int)\nC++: void AddBlock(vtkIdType blockno)\n\nAdd the flat-index/composite index for a block.\n"},
  {(char*)"RemoveAllBlocks", PyvtkPVSelectionSource_RemoveAllBlocks, METH_VARARGS,
   (char*)"V.RemoveAllBlocks()\nC++: void RemoveAllBlocks()\n\nAdd the flat-index/composite index for a block.\n"},
  {(char*)"SetArrayName", PyvtkPVSelectionSource_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(const char *arrayName)\n\nFor threshold and value selection, this controls the name of the\nscalar array that will be thresholded within.\n"},
  {(char*)"AddLocation", PyvtkPVSelectionSource_AddLocation, METH_VARARGS,
   (char*)"V.AddLocation(float, float, float)\nC++: void AddLocation(double x, double y, double z)\n\nAdd a point in world space to probe at.\n"},
  {(char*)"RemoveAllLocations", PyvtkPVSelectionSource_RemoveAllLocations, METH_VARARGS,
   (char*)"V.RemoveAllLocations()\nC++: void RemoveAllLocations()\n\nAdd a point in world space to probe at.\n"},
  {(char*)"SetFieldType", PyvtkPVSelectionSource_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {(char*)"GetFieldType", PyvtkPVSelectionSource_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {(char*)"SetContainingCells", PyvtkPVSelectionSource_SetContainingCells, METH_VARARGS,
   (char*)"V.SetContainingCells(int)\nC++: void SetContainingCells(int a)\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {(char*)"GetContainingCells", PyvtkPVSelectionSource_GetContainingCells, METH_VARARGS,
   (char*)"V.GetContainingCells() -> int\nC++: int GetContainingCells()\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {(char*)"SetInverse", PyvtkPVSelectionSource_SetInverse, METH_VARARGS,
   (char*)"V.SetInverse(int)\nC++: void SetInverse(int a)\n\n\n"},
  {(char*)"GetInverse", PyvtkPVSelectionSource_GetInverse, METH_VARARGS,
   (char*)"V.GetInverse() -> int\nC++: int GetInverse()\n\n\n"},
  {(char*)"SetQueryString", PyvtkPVSelectionSource_SetQueryString, METH_VARARGS,
   (char*)"V.SetQueryString(string)\nC++: void SetQueryString(char *)\n\nSet/get the query expression string.\n"},
  {(char*)"GetQueryString", PyvtkPVSelectionSource_GetQueryString, METH_VARARGS,
   (char*)"V.GetQueryString() -> string\nC++: char *GetQueryString()\n\nSet/get the query expression string.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSelectionSource_StaticNew()
{
  return vtkPVSelectionSource::New();
}

PyObject *PyVTKClass_vtkPVSelectionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSelectionSource_StaticNew,
    PyvtkPVSelectionSource_Methods,
    "vtkPVSelectionSource", modulename,
    NULL, NULL,
    PyvtkPVSelectionSource_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVSelectionSource_Doc()
{
  static const char *docstring[] = {
    "vtkPVSelectionSource - selection source used to produce different\ntypes\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "vtkPVSelectionSource is used to create different types of selections.\nIt provides different APIs for different types of selections to\ncreate. The output selection type depends on the API used most\nrecently.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSelectionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSelectionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSelectionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

