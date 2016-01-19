// python wrapper for vtkPKdTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPKdTree.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPKdTree(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPKdTreeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkKdTreeNew
extern "C" { PyObject *PyVTKClass_vtkKdTreeNew(const char *); }
#define DECLARED_PyVTKClass_vtkKdTreeNew
#endif

static const char **PyvtkPKdTree_Doc();


static PyObject *
PyvtkPKdTree_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPKdTree::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPKdTree::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPKdTree::NewInstance());

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
PyvtkPKdTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPKdTree *tempr = vtkPKdTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkPKdTree::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfCells() :
      op->vtkPKdTree::GetTotalNumberOfCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_CreateProcessCellCountData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateProcessCellCountData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->CreateProcessCellCountData() :
      op->vtkPKdTree::CreateProcessCellCountData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_CreateGlobalDataArrayBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGlobalDataArrayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->CreateGlobalDataArrayBounds() :
      op->vtkPKdTree::CreateGlobalDataArrayBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPKdTree::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPKdTree::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionAssignment() :
      op->vtkPKdTree::GetRegionAssignment());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_AssignRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AssignRegions(temp0, temp1) :
      op->vtkPKdTree::AssignRegions(temp0, temp1));

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
PyvtkPKdTree_AssignRegionsRoundRobin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegionsRoundRobin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->AssignRegionsRoundRobin() :
      op->vtkPKdTree::AssignRegionsRoundRobin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_AssignRegionsContiguous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegionsContiguous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->AssignRegionsContiguous() :
      op->vtkPKdTree::AssignRegionsContiguous());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const int *tempr = (ap.IsBound() ?
      op->GetRegionAssignmentMap() :
      op->vtkPKdTree::GetRegionAssignmentMap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentMapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentMapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionAssignmentMapLength() :
      op->vtkPKdTree::GetRegionAssignmentMapLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionAssignmentList(temp0, temp1) :
      op->vtkPKdTree::GetRegionAssignmentList(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetAllProcessesBorderingOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllProcessesBorderingOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  float temp0;
  float temp1;
  float temp2;
  vtkIntArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->GetAllProcessesBorderingOnPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPKdTree::GetAllProcessesBorderingOnPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessAssignedToRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessAssignedToRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessAssignedToRegion(temp0) :
      op->vtkPKdTree::GetProcessAssignedToRegion(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->HasData(temp0, temp1) :
      op->vtkPKdTree::HasData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessCellCountForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessCellCountForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessCellCountForRegion(temp0, temp1) :
      op->vtkPKdTree::GetProcessCellCountForRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalProcessesInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalProcessesInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTotalProcessesInRegion(temp0) :
      op->vtkPKdTree::GetTotalProcessesInRegion(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessListForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessListForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessListForRegion(temp0, temp1) :
      op->vtkPKdTree::GetProcessListForRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessesCellCountForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessesCellCountForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetProcessesCellCountForRegion(temp0, temp1, temp2) :
      op->vtkPKdTree::GetProcessesCellCountForRegion(temp0, temp1, temp2));

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
PyvtkPKdTree_GetTotalRegionsForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalRegionsForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTotalRegionsForProcess(temp0) :
      op->vtkPKdTree::GetTotalRegionsForProcess(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionListForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionListForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetRegionListForProcess(temp0, temp1) :
      op->vtkPKdTree::GetRegionListForProcess(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionsCellCountForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionsCellCountForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
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

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRegionsCellCountForProcess(temp0, temp1, temp2) :
      op->vtkPKdTree::GetRegionsCellCountForProcess(temp0, temp1, temp2));

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
PyvtkPKdTree_GetCellListsForProcessRegions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellListsForProcessRegions(temp0, temp1, temp2, temp3) :
      op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkDataSet *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  vtkIdList *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellListsForProcessRegions(temp0, temp1, temp2, temp3) :
      op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellListsForProcessRegions(temp0, temp1, temp2) :
      op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetCellListsForProcessRegions_Methods[] = {
  {NULL, PyvtkPKdTree_GetCellListsForProcessRegions_s1, METH_VARARGS,
   (char*)"@iiOO *vtkIdList *vtkIdList"},
  {NULL, PyvtkPKdTree_GetCellListsForProcessRegions_s2, METH_VARARGS,
   (char*)"@iOOO *vtkDataSet *vtkIdList *vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetCellListsForProcessRegions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPKdTree_GetCellListsForProcessRegions_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellListsForProcessRegions");
  return NULL;
}



static PyObject *
PyvtkPKdTree_ViewOrderAllProcessesInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllProcessesInDirection(temp0, temp1) :
      op->vtkPKdTree::ViewOrderAllProcessesInDirection(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_ViewOrderAllProcessesFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIntArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
    {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllProcessesFromPosition(temp0, temp1) :
      op->vtkPKdTree::ViewOrderAllProcessesFromPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  char *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCellArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetCellArrayGlobalRange(temp0, temp1));

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
PyvtkPKdTree_GetCellArrayGlobalRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCellArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetCellArrayGlobalRange(temp0, temp1));

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

static PyMethodDef PyvtkPKdTree_GetCellArrayGlobalRange_Methods[] = {
  {NULL, PyvtkPKdTree_GetCellArrayGlobalRange_s1, METH_VARARGS,
   (char*)"@zO *d"},
  {NULL, PyvtkPKdTree_GetCellArrayGlobalRange_s2, METH_VARARGS,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetCellArrayGlobalRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellArrayGlobalRange");
  return NULL;
}



static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  char *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetPointArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetPointArrayGlobalRange(temp0, temp1));

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
PyvtkPKdTree_GetPointArrayGlobalRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetPointArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetPointArrayGlobalRange(temp0, temp1));

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

static PyMethodDef PyvtkPKdTree_GetPointArrayGlobalRange_Methods[] = {
  {NULL, PyvtkPKdTree_GetPointArrayGlobalRange_s1, METH_VARARGS,
   (char*)"@zO *d"},
  {NULL, PyvtkPKdTree_GetPointArrayGlobalRange_s2, METH_VARARGS,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetPointArrayGlobalRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayGlobalRange");
  return NULL;
}


static PyMethodDef PyvtkPKdTree_Methods[] = {
  {(char*)"GetClassName", PyvtkPKdTree_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPKdTree_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPKdTree_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPKdTree\nC++: vtkPKdTree *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPKdTree_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPKdTree\nC++: vtkPKdTree *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BuildLocator", PyvtkPKdTree_BuildLocator, METH_VARARGS,
   (char*)"V.BuildLocator()\nC++: void BuildLocator()\n\nBuild the spatial decomposition.  Call this explicitly\n  after changing any parameters affecting the build of the\n  tree.  It must be called by all processes in the parallel\n  application, or it will hang.\n"},
  {(char*)"GetTotalNumberOfCells", PyvtkPKdTree_GetTotalNumberOfCells, METH_VARARGS,
   (char*)"V.GetTotalNumberOfCells() -> int\nC++: vtkIdType GetTotalNumberOfCells()\n\nGet the total number of cells distributed across the data\n  files read by all processes.  You must have called BuildLocator\n  before calling this method.\n"},
  {(char*)"CreateProcessCellCountData", PyvtkPKdTree_CreateProcessCellCountData, METH_VARARGS,
   (char*)"V.CreateProcessCellCountData() -> int\nC++: int CreateProcessCellCountData()\n\nCreate tables of counts of cells per process per region.\n  These tables can be accessed with queries like\n  \"HasData\", \"GetProcessCellCountForRegion\", and so on.\n  You must have called BuildLocator() beforehand.  This\n  method must be called by all processes or it will hang.\n  Returns 1 on error, 0 when no error.\n"},
  {(char*)"CreateGlobalDataArrayBounds", PyvtkPKdTree_CreateGlobalDataArrayBounds, METH_VARARGS,
   (char*)"V.CreateGlobalDataArrayBounds() -> int\nC++: int CreateGlobalDataArrayBounds()\n\nA convenience function which compiles the global\n  bounds of the data arrays across processes.\n  These bounds can be accessed with\n  \"GetCellArrayGlobalRange\" and \"GetPointArrayGlobalRange\".\n  This method must be called by all processes or it will hang.\n  Returns 1 on error, 0 when no error.\n"},
  {(char*)"SetController", PyvtkPKdTree_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object\n"},
  {(char*)"GetController", PyvtkPKdTree_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the communicator object\n"},
  {(char*)"GetRegionAssignment", PyvtkPKdTree_GetRegionAssignment, METH_VARARGS,
   (char*)"V.GetRegionAssignment() -> int\nC++: int GetRegionAssignment()\n\nThe PKdTree class can assign spatial regions to processors after\n  building the k-d tree, using one of several partitioning\ncriteria.\n  These functions Set/Get whether this assignment is computed.\n  The default is \"Off\", no assignment is computed.   If \"On\", and\n  no assignment scheme is specified, contiguous assignment will\nbe\n  computed.  Specifying an assignment scheme (with\nAssignRegions*())\n  automatically turns on RegionAssignment.\n"},
  {(char*)"AssignRegions", PyvtkPKdTree_AssignRegions, METH_VARARGS,
   (char*)"V.AssignRegions([int, ...], int) -> int\nC++: int AssignRegions(int *map, int numRegions)\n\nAssign spatial regions to processes via a user defined map.\n  The user-supplied map is indexed by region ID, and provides a\n  process ID for each region.\n"},
  {(char*)"AssignRegionsRoundRobin", PyvtkPKdTree_AssignRegionsRoundRobin, METH_VARARGS,
   (char*)"V.AssignRegionsRoundRobin() -> int\nC++: int AssignRegionsRoundRobin()\n\nLet the PKdTree class assign a process to each region in a\n  round robin fashion.  If the k-d tree has not yet been\n  built, the regions will be assigned after BuildLocator\nexecutes.\n"},
  {(char*)"AssignRegionsContiguous", PyvtkPKdTree_AssignRegionsContiguous, METH_VARARGS,
   (char*)"V.AssignRegionsContiguous() -> int\nC++: int AssignRegionsContiguous()\n\nLet the PKdTree class assign a process to each region\n   by assigning contiguous sets of spatial regions to each\n   process.  The set of regions assigned to each process will\n   always have a union that is a convex space (a box).\n   If the k-d tree has not yet been built, the regions\n   will be assigned after BuildLocator executes.\n"},
  {(char*)"GetRegionAssignmentMap", PyvtkPKdTree_GetRegionAssignmentMap, METH_VARARGS,
   (char*)"V.GetRegionAssignmentMap() -> (int, ...)\nC++: const int *GetRegionAssignmentMap()\n\nReturns the region assignment map where index is the region and\nvalue is the processes id for that region.\n"},
  {(char*)"GetRegionAssignmentMapLength", PyvtkPKdTree_GetRegionAssignmentMapLength, METH_VARARGS,
   (char*)"V.GetRegionAssignmentMapLength() -> int\nC++: int GetRegionAssignmentMapLength()\n\n/ Returns the number of regions in the region assignment map.\n"},
  {(char*)"GetRegionAssignmentList", PyvtkPKdTree_GetRegionAssignmentList, METH_VARARGS,
   (char*)"V.GetRegionAssignmentList(int, vtkIntArray) -> int\nC++: int GetRegionAssignmentList(int procId, vtkIntArray *list)\n\nWrites the list of region IDs assigned to the specified\n   process.  Regions IDs start at 0 and increase by 1 from there.\n   Returns the number of regions in the list.\n"},
  {(char*)"GetAllProcessesBorderingOnPoint", PyvtkPKdTree_GetAllProcessesBorderingOnPoint, METH_VARARGS,
   (char*)"V.GetAllProcessesBorderingOnPoint(float, float, float,\n    vtkIntArray)\nC++: void GetAllProcessesBorderingOnPoint(float x, float y,\n    float z, vtkIntArray *list)\n\nThe k-d tree spatial regions have been assigned to processes.\n   Given a point on the boundary of one of the regions, this\n   method creates a list of all processes whose region\n   boundaries include that point.  This may be required when\n   looking for processes that have cells adjacent to the cells\n   of a given process.\n"},
  {(char*)"GetProcessAssignedToRegion", PyvtkPKdTree_GetProcessAssignedToRegion, METH_VARARGS,
   (char*)"V.GetProcessAssignedToRegion(int) -> int\nC++: int GetProcessAssignedToRegion(int regionId)\n\nReturns the ID of the process assigned to the region.\n"},
  {(char*)"HasData", PyvtkPKdTree_HasData, METH_VARARGS,
   (char*)"V.HasData(int, int) -> int\nC++: int HasData(int processId, int regionId)\n\nReturns 1 if the process has data for the given region,\n  0 otherwise.\n"},
  {(char*)"GetProcessCellCountForRegion", PyvtkPKdTree_GetProcessCellCountForRegion, METH_VARARGS,
   (char*)"V.GetProcessCellCountForRegion(int, int) -> int\nC++: int GetProcessCellCountForRegion(int processId, int regionId)\n\nReturns the number of cells the specified process has in the\n  specified region.\n"},
  {(char*)"GetTotalProcessesInRegion", PyvtkPKdTree_GetTotalProcessesInRegion, METH_VARARGS,
   (char*)"V.GetTotalProcessesInRegion(int) -> int\nC++: int GetTotalProcessesInRegion(int regionId)\n\nReturns the total number of processes that have data\n  falling within this spatial region.\n"},
  {(char*)"GetProcessListForRegion", PyvtkPKdTree_GetProcessListForRegion, METH_VARARGS,
   (char*)"V.GetProcessListForRegion(int, vtkIntArray) -> int\nC++: int GetProcessListForRegion(int regionId,\n    vtkIntArray *processes)\n\nAdds the list of processes having data for the given\n  region to the supplied list, returns the number of\n  processes added.\n"},
  {(char*)"GetProcessesCellCountForRegion", PyvtkPKdTree_GetProcessesCellCountForRegion, METH_VARARGS,
   (char*)"V.GetProcessesCellCountForRegion(int, [int, ...], int) -> int\nC++: int GetProcessesCellCountForRegion(int regionId, int *count,\n    int len)\n\nWrites the number of cells each process has for the region\n  to the supplied list of length len.  Returns the number of\n  cell counts written.  The order of the cell counts corresponds\n  to the order of process IDs in the process list returned by\n  GetProcessListForRegion.\n"},
  {(char*)"GetTotalRegionsForProcess", PyvtkPKdTree_GetTotalRegionsForProcess, METH_VARARGS,
   (char*)"V.GetTotalRegionsForProcess(int) -> int\nC++: int GetTotalRegionsForProcess(int processId)\n\nReturns the total number of spatial regions that a given\n  process has data for.\n"},
  {(char*)"GetRegionListForProcess", PyvtkPKdTree_GetRegionListForProcess, METH_VARARGS,
   (char*)"V.GetRegionListForProcess(int, vtkIntArray) -> int\nC++: int GetRegionListForProcess(int processId,\n    vtkIntArray *regions)\n\nAdds the region IDs for which this process has data to\n  the supplied vtkIntArray.  Retruns the number of regions.\n"},
  {(char*)"GetRegionsCellCountForProcess", PyvtkPKdTree_GetRegionsCellCountForProcess, METH_VARARGS,
   (char*)"V.GetRegionsCellCountForProcess(int, [int, ...], int) -> int\nC++: int GetRegionsCellCountForProcess(int ProcessId, int *count,\n    int len)\n\nWrites to the supplied integer array the number of cells this\n  process has for each region.  Returns the number of\n  cell counts written.  The order of the cell counts corresponds\n  to the order of region IDs in the region list returned by\n  GetRegionListForProcess.\n"},
  {(char*)"GetCellListsForProcessRegions", PyvtkPKdTree_GetCellListsForProcessRegions, METH_VARARGS,
   (char*)"V.GetCellListsForProcessRegions(int, int, vtkIdList, vtkIdList)\n    -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    int set, vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nV.GetCellListsForProcessRegions(int, vtkDataSet, vtkIdList,\n    vtkIdList) -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    vtkDataSet *set, vtkIdList *inRegionCells,\n    vtkIdList *onBoundaryCells)\nV.GetCellListsForProcessRegions(int, vtkIdList, vtkIdList) -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\n\nAfter regions have been assigned to processes, I may want to know\n  which cells I have that are in the regions assigned to a\nparticular\n  process.\n\n\n  This method takes a process ID and two vtkIdLists.  It\n  writes to the first list the IDs of the cells\n  contained in the process' regions.  (That is, their cell\n  centroid is contained in the region.)  To the second list it\n  write the IDs of the cells which intersect the process' regions\n  but whose cell centroid lies elsewhere.\n\n\n  The total number of cell IDs written to both lists is returned.\n  Either list pointer passed in can be NULL, and it will be\nignored.\n  If there are multiple data sets, you must specify which data\nset\n  you wish cell IDs for.\n\n\n  The caller should delete these two lists when done.  This\nmethod\n  uses the cell lists created in vtkKdTree::CreateCellLists().\n  If the cell lists for the process' regions do not exist, this\n  method will first build the cell lists for all regions by\ncalling\n  CreateCellLists().  You must remember to DeleteCellLists() when\n  done with all calls to this method, as cell lists can require a\n  great deal of memory.\n"},
  {(char*)"ViewOrderAllProcessesInDirection", PyvtkPKdTree_ViewOrderAllProcessesInDirection, METH_VARARGS,
   (char*)"V.ViewOrderAllProcessesInDirection((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na vector direction of projection.  Use this to do visibility\nsorts in parallel projection mode. `orderedList' will be resized\nto the number of processes. The return value is the number of\nprocesses.\n\\pre orderedList_exists: orderedList!=0\n"},
  {(char*)"ViewOrderAllProcessesFromPosition", PyvtkPKdTree_ViewOrderAllProcessesFromPosition, METH_VARARGS,
   (char*)"V.ViewOrderAllProcessesFromPosition((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesFromPosition(\n    const double cameraPosition[3], vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na camera position.  Use this to do visibility sorts in\nperspective projection mode. `orderedList' will be resized to the\nnumber of processes. The return value is the number of processes.\n\\pre orderedList_exists: orderedList!=0\n"},
  {(char*)"GetCellArrayGlobalRange", PyvtkPKdTree_GetCellArrayGlobalRange, METH_VARARGS,
   (char*)"V.GetCellArrayGlobalRange(string, [float, float]) -> int\nC++: int GetCellArrayGlobalRange(const char *name,\n    double range[2])\nV.GetCellArrayGlobalRange(int, [float, float]) -> int\nC++: int GetCellArrayGlobalRange(int arrayIndex, double range[2])\n\nAn added feature of vtkPKdTree is that it will calculate the\n   the global range of field arrays across all processes.  You\n   call CreateGlobalDataArrayBounds() to do this calculation.\n   Then the following methods return the ranges.\n   Returns 1 on error, 0 otherwise.\n"},
  {(char*)"GetPointArrayGlobalRange", PyvtkPKdTree_GetPointArrayGlobalRange, METH_VARARGS,
   (char*)"V.GetPointArrayGlobalRange(string, [float, float]) -> int\nC++: int GetPointArrayGlobalRange(const char *name,\n    double range[2])\nV.GetPointArrayGlobalRange(int, [float, float]) -> int\nC++: int GetPointArrayGlobalRange(int arrayIndex, double range[2])\n\nAn added feature of vtkPKdTree is that it will calculate the\n   the global range of field arrays across all processes.  You\n   call CreateGlobalDataArrayBounds() to do this calculation.\n   Then the following methods return the ranges.\n   Returns 1 on error, 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPKdTree_StaticNew()
{
  return vtkPKdTree::New();
}

PyObject *PyVTKClass_vtkPKdTreeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPKdTree_StaticNew,
    PyvtkPKdTree_Methods,
    "vtkPKdTree", modulename,
    NULL, NULL,
    PyvtkPKdTree_Doc(),
    PyVTKClass_vtkKdTreeNew(modulename));
  return cls;
}

const char **PyvtkPKdTree_Doc()
{
  static const char *docstring[] = {
    "vtkPKdTree - Build a k-d tree decomposition of a list of points.\n\n",
    "Superclass: vtkKdTree\n\n",
    "Build, in parallel, a k-d tree decomposition of one or more\n     vtkDataSets distributed across processors.  We assume each\n     process has read in one portion of a large distributed data set.\n     When done, each process has access to the k-d tree structure,\n     can obtain information about which process contains\n     data for each spatial region, and can depth sort the spatial\n     regions.\n\n\n",
    "     This class can also assign spatial regions to processors, based\n     on one of several region assignment schemes.  By default\n     a contiguous, convex region is assigned to each process. \nSeveral\n     queries return information about how many and what cells I have\n     that lie in a region assigned to another process.\n\nSee Also:\n\n\n     vtkKdTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPKdTree(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPKdTreeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPKdTree", o) != 0)
    {
    Py_DECREF(o);
    }

}

