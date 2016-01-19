// python wrapper for vtkDataObjectToDataSetFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataObjectToDataSetFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObjectToDataSetFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectToDataSetFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkDataObjectToDataSetFilter_Doc();


static PyObject *
PyvtkDataObjectToDataSetFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObjectToDataSetFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectToDataSetFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectToDataSetFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectToDataSetFilter::NewInstance());

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
PyvtkDataObjectToDataSetFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObjectToDataSetFilter *tempr = vtkDataObjectToDataSetFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkDataObjectToDataSetFilter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataSetType(temp0);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDataSetType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataSetType() :
      op->vtkDataObjectToDataSetFilter::GetDataSetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataSetTypeToPolyData();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToPolyData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToStructuredPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataSetTypeToStructuredPoints();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataSetTypeToStructuredGrid();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataSetTypeToRectilinearGrid();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToRectilinearGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataSetTypeToUnstructuredGrid();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToUnstructuredGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkDataObjectToDataSetFilter::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkDataObjectToDataSetFilter::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataObjectToDataSetFilter_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkDataObjectToDataSetFilter::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkDataObjectToDataSetFilter::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkDataObjectToDataSetFilter::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkDataObjectToDataSetFilter::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkDataObjectToDataSetFilter::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetPointComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetPointComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetPointComponent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPointComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPointComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetPointComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPointComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataObjectToDataSetFilter_SetPointComponent_s1(self, args);
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetPointComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPointComponentArrayName(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentArrayComponent(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentMinRange(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentMaxRange(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentNormailzeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentNormailzeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentNormailzeFlag(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentNormailzeFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetVertsComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetVertsComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetVertsComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetVertsComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVertsComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetVertsComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetVertsComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetVertsComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetVertsComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVertsComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVertsComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVertsComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVertsComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentMinRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVertsComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentMaxRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetLinesComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinesComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetLinesComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetLinesComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetLinesComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinesComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLinesComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetLinesComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetLinesComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetLinesComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetLinesComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLinesComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLinesComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLinesComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLinesComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentMinRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLinesComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentMaxRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetPolysComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolysComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetPolysComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetPolysComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPolysComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolysComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPolysComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetPolysComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPolysComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetPolysComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetPolysComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPolysComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetPolysComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolysComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolysComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentMinRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPolysComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentMaxRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetStripsComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetStripsComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetStripsComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetStripsComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStripsComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetStripsComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetStripsComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetStripsComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetStripsComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStripsComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetStripsComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStripsComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStripsComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentMinRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStripsComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentMaxRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetCellTypeComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetCellTypeComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellTypeComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetCellTypeComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellTypeComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellTypeComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellTypeComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellTypeComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellTypeComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentMinRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellTypeComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentMaxRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellConnectivityComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetCellConnectivityComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetCellConnectivityComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellConnectivityComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellConnectivityComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetCellConnectivityComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellConnectivityComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMinRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMaxRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormalize(temp0);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDefaultNormalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDefaultNormalize() :
      op->vtkDataObjectToDataSetFilter::GetDefaultNormalize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_DefaultNormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DefaultNormalizeOn();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::DefaultNormalizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_DefaultNormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DefaultNormalizeOff();
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::DefaultNormalizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetDimensions_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkDataObjectToDataSetFilter::GetDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetOrigin_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkDataObjectToDataSetFilter::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->SetSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetSpacing_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_SetSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkDataObjectToDataSetFilter::GetSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetDimensionsComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDimensionsComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDimensionsComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetDimensionsComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensionsComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensionsComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetSpacingComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetSpacingComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSpacingComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetSpacingComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacingComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacingComponent");
  return NULL;
}



static PyObject *
PyvtkDataObjectToDataSetFilter_SetOriginComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
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
    if (ap.IsBound())
      {
      op->SetOriginComponent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetOriginComponent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOriginComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOriginComponent(temp0, temp1);
      }
    else
      {
      op->vtkDataObjectToDataSetFilter::SetOriginComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOriginComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetOriginComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetOriginComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginComponent");
  return NULL;
}


static PyMethodDef PyvtkDataObjectToDataSetFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectToDataSetFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectToDataSetFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectToDataSetFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObjectToDataSetFilter\nC++: vtkDataObjectToDataSetFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectToDataSetFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectToDataSetFilter\nC++: vtkDataObjectToDataSetFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkDataObjectToDataSetFilter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet the input to the filter.\n"},
  {(char*)"SetDataSetType", PyvtkDataObjectToDataSetFilter_SetDataSetType, METH_VARARGS,
   (char*)"V.SetDataSetType(int)\nC++: void SetDataSetType(int)\n\nControl what type of data is generated for output.\n"},
  {(char*)"GetDataSetType", PyvtkDataObjectToDataSetFilter_GetDataSetType, METH_VARARGS,
   (char*)"V.GetDataSetType() -> int\nC++: int GetDataSetType()\n\nControl what type of data is generated for output.\n"},
  {(char*)"SetDataSetTypeToPolyData", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToPolyData, METH_VARARGS,
   (char*)"V.SetDataSetTypeToPolyData()\nC++: void SetDataSetTypeToPolyData()\n\nControl what type of data is generated for output.\n"},
  {(char*)"SetDataSetTypeToStructuredPoints", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredPoints, METH_VARARGS,
   (char*)"V.SetDataSetTypeToStructuredPoints()\nC++: void SetDataSetTypeToStructuredPoints()\n\nControl what type of data is generated for output.\n"},
  {(char*)"SetDataSetTypeToStructuredGrid", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredGrid, METH_VARARGS,
   (char*)"V.SetDataSetTypeToStructuredGrid()\nC++: void SetDataSetTypeToStructuredGrid()\n\nControl what type of data is generated for output.\n"},
  {(char*)"SetDataSetTypeToRectilinearGrid", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToRectilinearGrid, METH_VARARGS,
   (char*)"V.SetDataSetTypeToRectilinearGrid()\nC++: void SetDataSetTypeToRectilinearGrid()\n\nControl what type of data is generated for output.\n"},
  {(char*)"SetDataSetTypeToUnstructuredGrid", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToUnstructuredGrid, METH_VARARGS,
   (char*)"V.SetDataSetTypeToUnstructuredGrid()\nC++: void SetDataSetTypeToUnstructuredGrid()\n\nControl what type of data is generated for output.\n"},
  {(char*)"GetOutput", PyvtkDataObjectToDataSetFilter_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkDataSet\nC++: vtkDataSet *GetOutput()\nV.GetOutput(int) -> vtkDataSet\nC++: vtkDataSet *GetOutput(int idx)\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return NULL if the\nfilter aborted due to inconsistent data.)\n"},
  {(char*)"GetPolyDataOutput", PyvtkDataObjectToDataSetFilter_GetPolyDataOutput, METH_VARARGS,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return NULL if the\nfilter aborted due to inconsistent data.)\n"},
  {(char*)"GetStructuredPointsOutput", PyvtkDataObjectToDataSetFilter_GetStructuredPointsOutput, METH_VARARGS,
   (char*)"V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return NULL if the\nfilter aborted due to inconsistent data.)\n"},
  {(char*)"GetStructuredGridOutput", PyvtkDataObjectToDataSetFilter_GetStructuredGridOutput, METH_VARARGS,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return NULL if the\nfilter aborted due to inconsistent data.)\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkDataObjectToDataSetFilter_GetUnstructuredGridOutput, METH_VARARGS,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return NULL if the\nfilter aborted due to inconsistent data.)\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkDataObjectToDataSetFilter_GetRectilinearGridOutput, METH_VARARGS,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return NULL if the\nfilter aborted due to inconsistent data.)\n"},
  {(char*)"SetPointComponent", PyvtkDataObjectToDataSetFilter_SetPointComponent, METH_VARARGS,
   (char*)"V.SetPointComponent(int, string, int, int, int, int)\nC++: void SetPointComponent(int comp, char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetPointComponent(int, string, int)\nC++: void SetPointComponent(int comp, char *arrayName,\n    int arrayComp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {(char*)"GetPointComponentArrayName", PyvtkDataObjectToDataSetFilter_GetPointComponentArrayName, METH_VARARGS,
   (char*)"V.GetPointComponentArrayName(int) -> string\nC++: const char *GetPointComponentArrayName(int comp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {(char*)"GetPointComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetPointComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetPointComponentArrayComponent(int) -> int\nC++: int GetPointComponentArrayComponent(int comp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {(char*)"GetPointComponentMinRange", PyvtkDataObjectToDataSetFilter_GetPointComponentMinRange, METH_VARARGS,
   (char*)"V.GetPointComponentMinRange(int) -> int\nC++: int GetPointComponentMinRange(int comp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {(char*)"GetPointComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetPointComponentMaxRange, METH_VARARGS,
   (char*)"V.GetPointComponentMaxRange(int) -> int\nC++: int GetPointComponentMaxRange(int comp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {(char*)"GetPointComponentNormailzeFlag", PyvtkDataObjectToDataSetFilter_GetPointComponentNormailzeFlag, METH_VARARGS,
   (char*)"V.GetPointComponentNormailzeFlag(int) -> int\nC++: int GetPointComponentNormailzeFlag(int comp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {(char*)"SetVertsComponent", PyvtkDataObjectToDataSetFilter_SetVertsComponent, METH_VARARGS,
   (char*)"V.SetVertsComponent(string, int, int, int)\nC++: void SetVertsComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetVertsComponent(string, int)\nC++: void SetVertsComponent(char *arrayName, int arrayComp)\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetVertsComponentArrayName", PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayName, METH_VARARGS,
   (char*)"V.GetVertsComponentArrayName() -> string\nC++: const char *GetVertsComponentArrayName()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetVertsComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetVertsComponentArrayComponent() -> int\nC++: int GetVertsComponentArrayComponent()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetVertsComponentMinRange", PyvtkDataObjectToDataSetFilter_GetVertsComponentMinRange, METH_VARARGS,
   (char*)"V.GetVertsComponentMinRange() -> int\nC++: int GetVertsComponentMinRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetVertsComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetVertsComponentMaxRange, METH_VARARGS,
   (char*)"V.GetVertsComponentMaxRange() -> int\nC++: int GetVertsComponentMaxRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"SetLinesComponent", PyvtkDataObjectToDataSetFilter_SetLinesComponent, METH_VARARGS,
   (char*)"V.SetLinesComponent(string, int, int, int)\nC++: void SetLinesComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetLinesComponent(string, int)\nC++: void SetLinesComponent(char *arrayName, int arrayComp)\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetLinesComponentArrayName", PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayName, METH_VARARGS,
   (char*)"V.GetLinesComponentArrayName() -> string\nC++: const char *GetLinesComponentArrayName()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetLinesComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetLinesComponentArrayComponent() -> int\nC++: int GetLinesComponentArrayComponent()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetLinesComponentMinRange", PyvtkDataObjectToDataSetFilter_GetLinesComponentMinRange, METH_VARARGS,
   (char*)"V.GetLinesComponentMinRange() -> int\nC++: int GetLinesComponentMinRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetLinesComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetLinesComponentMaxRange, METH_VARARGS,
   (char*)"V.GetLinesComponentMaxRange() -> int\nC++: int GetLinesComponentMaxRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"SetPolysComponent", PyvtkDataObjectToDataSetFilter_SetPolysComponent, METH_VARARGS,
   (char*)"V.SetPolysComponent(string, int, int, int)\nC++: void SetPolysComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetPolysComponent(string, int)\nC++: void SetPolysComponent(char *arrayName, int arrayComp)\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetPolysComponentArrayName", PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayName, METH_VARARGS,
   (char*)"V.GetPolysComponentArrayName() -> string\nC++: const char *GetPolysComponentArrayName()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetPolysComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetPolysComponentArrayComponent() -> int\nC++: int GetPolysComponentArrayComponent()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetPolysComponentMinRange", PyvtkDataObjectToDataSetFilter_GetPolysComponentMinRange, METH_VARARGS,
   (char*)"V.GetPolysComponentMinRange() -> int\nC++: int GetPolysComponentMinRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetPolysComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetPolysComponentMaxRange, METH_VARARGS,
   (char*)"V.GetPolysComponentMaxRange() -> int\nC++: int GetPolysComponentMaxRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"SetStripsComponent", PyvtkDataObjectToDataSetFilter_SetStripsComponent, METH_VARARGS,
   (char*)"V.SetStripsComponent(string, int, int, int)\nC++: void SetStripsComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetStripsComponent(string, int)\nC++: void SetStripsComponent(char *arrayName, int arrayComp)\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetStripsComponentArrayName", PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayName, METH_VARARGS,
   (char*)"V.GetStripsComponentArrayName() -> string\nC++: const char *GetStripsComponentArrayName()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetStripsComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetStripsComponentArrayComponent() -> int\nC++: int GetStripsComponentArrayComponent()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetStripsComponentMinRange", PyvtkDataObjectToDataSetFilter_GetStripsComponentMinRange, METH_VARARGS,
   (char*)"V.GetStripsComponentMinRange() -> int\nC++: int GetStripsComponentMinRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetStripsComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetStripsComponentMaxRange, METH_VARARGS,
   (char*)"V.GetStripsComponentMaxRange() -> int\nC++: int GetStripsComponentMaxRange()\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"SetCellTypeComponent", PyvtkDataObjectToDataSetFilter_SetCellTypeComponent, METH_VARARGS,
   (char*)"V.SetCellTypeComponent(string, int, int, int)\nC++: void SetCellTypeComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetCellTypeComponent(string, int)\nC++: void SetCellTypeComponent(char *arrayName, int arrayComp)\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellTypeComponentArrayName", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayName, METH_VARARGS,
   (char*)"V.GetCellTypeComponentArrayName() -> string\nC++: const char *GetCellTypeComponentArrayName()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellTypeComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetCellTypeComponentArrayComponent() -> int\nC++: int GetCellTypeComponentArrayComponent()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellTypeComponentMinRange", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMinRange, METH_VARARGS,
   (char*)"V.GetCellTypeComponentMinRange() -> int\nC++: int GetCellTypeComponentMinRange()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellTypeComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMaxRange, METH_VARARGS,
   (char*)"V.GetCellTypeComponentMaxRange() -> int\nC++: int GetCellTypeComponentMaxRange()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"SetCellConnectivityComponent", PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent, METH_VARARGS,
   (char*)"V.SetCellConnectivityComponent(string, int, int, int)\nC++: void SetCellConnectivityComponent(char *arrayName,\n    int arrayComp, int min, int max)\nV.SetCellConnectivityComponent(string, int)\nC++: void SetCellConnectivityComponent(char *arrayName,\n    int arrayComp)\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellConnectivityComponentArrayName", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayName, METH_VARARGS,
   (char*)"V.GetCellConnectivityComponentArrayName() -> string\nC++: const char *GetCellConnectivityComponentArrayName()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellConnectivityComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayComponent, METH_VARARGS,
   (char*)"V.GetCellConnectivityComponentArrayComponent() -> int\nC++: int GetCellConnectivityComponentArrayComponent()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellConnectivityComponentMinRange", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMinRange, METH_VARARGS,
   (char*)"V.GetCellConnectivityComponentMinRange() -> int\nC++: int GetCellConnectivityComponentMinRange()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"GetCellConnectivityComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMaxRange, METH_VARARGS,
   (char*)"V.GetCellConnectivityComponentMaxRange() -> int\nC++: int GetCellConnectivityComponentMaxRange()\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {(char*)"SetDefaultNormalize", PyvtkDataObjectToDataSetFilter_SetDefaultNormalize, METH_VARARGS,
   (char*)"V.SetDefaultNormalize(int)\nC++: void SetDefaultNormalize(int a)\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetPointComponent).\n"},
  {(char*)"GetDefaultNormalize", PyvtkDataObjectToDataSetFilter_GetDefaultNormalize, METH_VARARGS,
   (char*)"V.GetDefaultNormalize() -> int\nC++: int GetDefaultNormalize()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetPointComponent).\n"},
  {(char*)"DefaultNormalizeOn", PyvtkDataObjectToDataSetFilter_DefaultNormalizeOn, METH_VARARGS,
   (char*)"V.DefaultNormalizeOn()\nC++: void DefaultNormalizeOn()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetPointComponent).\n"},
  {(char*)"DefaultNormalizeOff", PyvtkDataObjectToDataSetFilter_DefaultNormalizeOff, METH_VARARGS,
   (char*)"V.DefaultNormalizeOff()\nC++: void DefaultNormalizeOff()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetPointComponent).\n"},
  {(char*)"SetDimensions", PyvtkDataObjectToDataSetFilter_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(int, int, int)\nC++: void SetDimensions(int, int, int)\nV.SetDimensions((int, int, int))\nC++: void SetDimensions(int a[3])\n\n"},
  {(char*)"GetDimensions", PyvtkDataObjectToDataSetFilter_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> (int, int, int)\nC++: int *GetDimensions()\n\nSpecify the dimensions to use if generating a dataset that\nrequires dimensions specification (vtkStructuredPoints,\nvtkStructuredGrid, vtkRectilinearGrid).\n"},
  {(char*)"SetOrigin", PyvtkDataObjectToDataSetFilter_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkDataObjectToDataSetFilter_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSpecify the origin to use if generating a dataset whose origin\ncan be set (i.e., a vtkStructuredPoints dataset).\n"},
  {(char*)"SetSpacing", PyvtkDataObjectToDataSetFilter_SetSpacing, METH_VARARGS,
   (char*)"V.SetSpacing(float, float, float)\nC++: void SetSpacing(double, double, double)\nV.SetSpacing((float, float, float))\nC++: void SetSpacing(double a[3])\n\n"},
  {(char*)"GetSpacing", PyvtkDataObjectToDataSetFilter_GetSpacing, METH_VARARGS,
   (char*)"V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\nSpecify the spacing to use if generating a dataset whose spacing\ncan be set (i.e., a vtkStructuredPoints dataset).\n"},
  {(char*)"SetDimensionsComponent", PyvtkDataObjectToDataSetFilter_SetDimensionsComponent, METH_VARARGS,
   (char*)"V.SetDimensionsComponent(string, int, int, int)\nC++: void SetDimensionsComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetDimensionsComponent(string, int)\nC++: void SetDimensionsComponent(char *arrayName, int arrayComp)\n\nAlternative methods to specify the dimensions, spacing, and\norigin for those datasets requiring this information. You need to\nspecify the name of an array; the component of the array, and the\nrange of the array (min,max). These methods will override the\ninformation given by the previous methods.\n"},
  {(char*)"SetSpacingComponent", PyvtkDataObjectToDataSetFilter_SetSpacingComponent, METH_VARARGS,
   (char*)"V.SetSpacingComponent(string, int, int, int)\nC++: void SetSpacingComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetSpacingComponent(string, int)\nC++: void SetSpacingComponent(char *arrayName, int arrayComp)\n\nAlternative methods to specify the dimensions, spacing, and\norigin for those datasets requiring this information. You need to\nspecify the name of an array; the component of the array, and the\nrange of the array (min,max). These methods will override the\ninformation given by the previous methods.\n"},
  {(char*)"SetOriginComponent", PyvtkDataObjectToDataSetFilter_SetOriginComponent, METH_VARARGS,
   (char*)"V.SetOriginComponent(string, int, int, int)\nC++: void SetOriginComponent(char *arrayName, int arrayComp,\n    int min, int max)\nV.SetOriginComponent(string, int)\nC++: void SetOriginComponent(char *arrayName, int arrayComp)\n\nAlternative methods to specify the dimensions, spacing, and\norigin for those datasets requiring this information. You need to\nspecify the name of an array; the component of the array, and the\nrange of the array (min,max). These methods will override the\ninformation given by the previous methods.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectToDataSetFilter_StaticNew()
{
  return vtkDataObjectToDataSetFilter::New();
}

PyObject *PyVTKClass_vtkDataObjectToDataSetFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectToDataSetFilter_StaticNew,
    PyvtkDataObjectToDataSetFilter_Methods,
    "vtkDataObjectToDataSetFilter", modulename,
    NULL, NULL,
    PyvtkDataObjectToDataSetFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataObjectToDataSetFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectToDataSetFilter - map field data to concrete dataset\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkDataObjectToDataSetFilter is an class that maps a data object\n(i.e., a field) into a concrete dataset, i.e., gives structure to the\nfield by defining a geometry and topology.\n\nTo use this filter you associate components in the input field data\nwith portions of the output dataset. (A component is an array of\nvalues from the field.) For example, you would specify x-y-z points\nby assigning compone",
    "nts from the field for the x, then y, then z\nvalues of the points. You may also have to specify component ranges\n(for each z-y-z) to make sure that the number of x, y, and z values\nis the same. Also, you may want to normalize the components which\nhelps distribute the data uniformly. Once you've setup the filter to\ncombine all the pieces of data into a specified dataset (the\ngeometry, topology, poi",
    "nt and cell data attributes), the various\noutput methods (e.g., GetPolyData()) are used to retrieve the final\nproduct.\n\nThis filter is often used in conjunction with\nvtkFieldDataToAttributeDataFilter.  vtkFieldDataToAttributeDataFilter\ntakes field data and transforms it into attribute data (e.g., point\nand cell data attributes such as scalars and vectors).  To do this,\nuse this filter which constr",
    "ucts a concrete dataset and passes the\ninput data object field data to its output. and then use\nvtkFieldDataToAttributeDataFilter to generate the attribute data\nassociated with the dataset.\n\nCaveats:\n\nMake sure that the data you extract is consistent. That is, if you\nhave N points, extract N x, y, and z components. Also, all the\ninformation necessary to define a dataset must be given. For example,",
    "\nvtkPolyData requires points at a minimum; vtkStructuredPoints\nrequires setting the dimensions; vtkStructuredGrid requires defining\npoints and dimensions; vtkUnstructuredGrid requires setting points;\nand vtkRectilinearGrid requires that you define the x, y, and\nz-coordinate arrays (by specifying points) as well as the dimensions.\n\nIf you wish to create a dataset of just points (i.e., unstructured\n",
    "points dataset), create vtkPolyData consisting of points. There will\nbe no cells in such a dataset.\n\nSee Also:\n\nvtkDataObject vtkFieldData vtkDataSet vtkPolyData vtkStructuredPoints\nvtkStructuredGrid vtkUnstructuredGrid vtkRectilinearGrid\nvtkDataSetAttributes vtkDataArray\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectToDataSetFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectToDataSetFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectToDataSetFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

