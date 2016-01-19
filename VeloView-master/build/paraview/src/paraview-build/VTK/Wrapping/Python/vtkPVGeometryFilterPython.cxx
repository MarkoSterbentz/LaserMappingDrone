// python wrapper for vtkPVGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVGeometryFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVGeometryFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVGeometryFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPVGeometryFilter_Doc();


static PyObject *
PyvtkPVGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVGeometryFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGeometryFilter::NewInstance());

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
PyvtkPVGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVGeometryFilter *tempr = vtkPVGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetOutlineFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFlag() :
      op->vtkPVGeometryFilter::GetOutlineFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOutline(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetUseOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseOutline() :
      op->vtkPVGeometryFilter::GetUseOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseStrips(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetUseStrips(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseStrips() :
      op->vtkPVGeometryFilter::GetUseStrips());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseStripsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStripsOn();
      }
    else
      {
      op->vtkPVGeometryFilter::UseStripsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseStripsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStripsOff();
      }
    else
      {
      op->vtkPVGeometryFilter::UseStripsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetForceUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceUseStrips(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetForceUseStrips(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetForceUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForceUseStrips() :
      op->vtkPVGeometryFilter::GetForceUseStrips());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_ForceUseStripsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUseStripsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceUseStripsOn();
      }
    else
      {
      op->vtkPVGeometryFilter::ForceUseStripsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_ForceUseStripsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUseStripsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceUseStripsOff();
      }
    else
      {
      op->vtkPVGeometryFilter::ForceUseStripsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellNormals(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetGenerateCellNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellNormals() :
      op->vtkPVGeometryFilter::GetGenerateCellNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateCellNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellNormalsOn();
      }
    else
      {
      op->vtkPVGeometryFilter::GenerateCellNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateCellNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateCellNormalsOff();
      }
    else
      {
      op->vtkPVGeometryFilter::GenerateCellNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTriangulate(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetTriangulate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTriangulate() :
      op->vtkPVGeometryFilter::GetTriangulate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_TriangulateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulateOn();
      }
    else
      {
      op->vtkPVGeometryFilter::TriangulateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_TriangulateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulateOff();
      }
    else
      {
      op->vtkPVGeometryFilter::TriangulateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonlinearSubdivisionLevel(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetNonlinearSubdivisionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNonlinearSubdivisionLevel() :
      op->vtkPVGeometryFilter::GetNonlinearSubdivisionLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

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
      op->vtkPVGeometryFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVGeometryFilter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkPVGeometryFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkPVGeometryFilter::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkPVGeometryFilter::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughPointIds(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetPassThroughPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkPVGeometryFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOn();
      }
    else
      {
      op->vtkPVGeometryFilter::PassThroughPointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughPointIdsOff();
      }
    else
      {
      op->vtkPVGeometryFilter::PassThroughPointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateProcessIds(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetGenerateProcessIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateProcessIds() :
      op->vtkPVGeometryFilter::GetGenerateProcessIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateProcessIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateProcessIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateProcessIdsOn();
      }
    else
      {
      op->vtkPVGeometryFilter::GenerateProcessIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateProcessIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateProcessIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateProcessIdsOff();
      }
    else
      {
      op->vtkPVGeometryFilter::GenerateProcessIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetHideInternalAMRFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideInternalAMRFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHideInternalAMRFaces(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetHideInternalAMRFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetHideInternalAMRFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideInternalAMRFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHideInternalAMRFaces() :
      op->vtkPVGeometryFilter::GetHideInternalAMRFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_HideInternalAMRFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideInternalAMRFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideInternalAMRFacesOn();
      }
    else
      {
      op->vtkPVGeometryFilter::HideInternalAMRFacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_HideInternalAMRFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideInternalAMRFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideInternalAMRFacesOff();
      }
    else
      {
      op->vtkPVGeometryFilter::HideInternalAMRFacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetUseNonOverlappingAMRMetaDataForOutlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNonOverlappingAMRMetaDataForOutlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNonOverlappingAMRMetaDataForOutlines(temp0);
      }
    else
      {
      op->vtkPVGeometryFilter::SetUseNonOverlappingAMRMetaDataForOutlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetUseNonOverlappingAMRMetaDataForOutlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNonOverlappingAMRMetaDataForOutlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseNonOverlappingAMRMetaDataForOutlines() :
      op->vtkPVGeometryFilter::GetUseNonOverlappingAMRMetaDataForOutlines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonOverlappingAMRMetaDataForOutlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNonOverlappingAMRMetaDataForOutlinesOn();
      }
    else
      {
      op->vtkPVGeometryFilter::UseNonOverlappingAMRMetaDataForOutlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonOverlappingAMRMetaDataForOutlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNonOverlappingAMRMetaDataForOutlinesOff();
      }
    else
      {
      op->vtkPVGeometryFilter::UseNonOverlappingAMRMetaDataForOutlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_POINT_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_OFFSETS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::POINT_OFFSETS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_VERTS_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VERTS_OFFSETS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::VERTS_OFFSETS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_LINES_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LINES_OFFSETS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::LINES_OFFSETS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_POLYS_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POLYS_OFFSETS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::POLYS_OFFSETS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_STRIPS_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "STRIPS_OFFSETS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::STRIPS_OFFSETS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVGeometryFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVGeometryFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVGeometryFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVGeometryFilter\nC++: vtkPVGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVGeometryFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVGeometryFilter\nC++: vtkPVGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutlineFlag", PyvtkPVGeometryFilter_GetOutlineFlag, METH_VARARGS,
   (char*)"V.GetOutlineFlag() -> int\nC++: int GetOutlineFlag()\n\nThis flag is set during the execute method.  It indicates that\nthe input was 3d and an outline representation was used.\n"},
  {(char*)"SetUseOutline", PyvtkPVGeometryFilter_SetUseOutline, METH_VARARGS,
   (char*)"V.SetUseOutline(int)\nC++: void SetUseOutline(int a)\n\nSet/get whether to produce outline (vs. surface).\n"},
  {(char*)"GetUseOutline", PyvtkPVGeometryFilter_GetUseOutline, METH_VARARGS,
   (char*)"V.GetUseOutline() -> int\nC++: int GetUseOutline()\n\nSet/get whether to produce outline (vs. surface).\n"},
  {(char*)"SetUseStrips", PyvtkPVGeometryFilter_SetUseStrips, METH_VARARGS,
   (char*)"V.SetUseStrips(int)\nC++: void SetUseStrips(int)\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"GetUseStrips", PyvtkPVGeometryFilter_GetUseStrips, METH_VARARGS,
   (char*)"V.GetUseStrips() -> int\nC++: int GetUseStrips()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"UseStripsOn", PyvtkPVGeometryFilter_UseStripsOn, METH_VARARGS,
   (char*)"V.UseStripsOn()\nC++: void UseStripsOn()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"UseStripsOff", PyvtkPVGeometryFilter_UseStripsOff, METH_VARARGS,
   (char*)"V.UseStripsOff()\nC++: void UseStripsOff()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {(char*)"SetForceUseStrips", PyvtkPVGeometryFilter_SetForceUseStrips, METH_VARARGS,
   (char*)"V.SetForceUseStrips(int)\nC++: void SetForceUseStrips(int)\n\n"},
  {(char*)"GetForceUseStrips", PyvtkPVGeometryFilter_GetForceUseStrips, METH_VARARGS,
   (char*)"V.GetForceUseStrips() -> int\nC++: int GetForceUseStrips()\n\n"},
  {(char*)"ForceUseStripsOn", PyvtkPVGeometryFilter_ForceUseStripsOn, METH_VARARGS,
   (char*)"V.ForceUseStripsOn()\nC++: void ForceUseStripsOn()\n\n"},
  {(char*)"ForceUseStripsOff", PyvtkPVGeometryFilter_ForceUseStripsOff, METH_VARARGS,
   (char*)"V.ForceUseStripsOff()\nC++: void ForceUseStripsOff()\n\n"},
  {(char*)"SetGenerateCellNormals", PyvtkPVGeometryFilter_SetGenerateCellNormals, METH_VARARGS,
   (char*)"V.SetGenerateCellNormals(int)\nC++: void SetGenerateCellNormals(int a)\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {(char*)"GetGenerateCellNormals", PyvtkPVGeometryFilter_GetGenerateCellNormals, METH_VARARGS,
   (char*)"V.GetGenerateCellNormals() -> int\nC++: int GetGenerateCellNormals()\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {(char*)"GenerateCellNormalsOn", PyvtkPVGeometryFilter_GenerateCellNormalsOn, METH_VARARGS,
   (char*)"V.GenerateCellNormalsOn()\nC++: void GenerateCellNormalsOn()\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {(char*)"GenerateCellNormalsOff", PyvtkPVGeometryFilter_GenerateCellNormalsOff, METH_VARARGS,
   (char*)"V.GenerateCellNormalsOff()\nC++: void GenerateCellNormalsOff()\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {(char*)"SetTriangulate", PyvtkPVGeometryFilter_SetTriangulate, METH_VARARGS,
   (char*)"V.SetTriangulate(int)\nC++: void SetTriangulate(int a)\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons.\n"},
  {(char*)"GetTriangulate", PyvtkPVGeometryFilter_GetTriangulate, METH_VARARGS,
   (char*)"V.GetTriangulate() -> int\nC++: int GetTriangulate()\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons.\n"},
  {(char*)"TriangulateOn", PyvtkPVGeometryFilter_TriangulateOn, METH_VARARGS,
   (char*)"V.TriangulateOn()\nC++: void TriangulateOn()\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons.\n"},
  {(char*)"TriangulateOff", PyvtkPVGeometryFilter_TriangulateOff, METH_VARARGS,
   (char*)"V.TriangulateOff()\nC++: void TriangulateOff()\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons.\n"},
  {(char*)"SetNonlinearSubdivisionLevel", PyvtkPVGeometryFilter_SetNonlinearSubdivisionLevel, METH_VARARGS,
   (char*)"V.SetNonlinearSubdivisionLevel(int)\nC++: virtual void SetNonlinearSubdivisionLevel(int)\n\nNonlinear faces are approximated with flat polygons.  This\nparameter controls how many times to subdivide nonlinear surface\ncells.  Higher subdivisions generate closer approximations but\ntake more memory and rendering time.  Subdivision is recursive,\nso the number of output polygons can grow exponentially with this\nparameter.\n"},
  {(char*)"GetNonlinearSubdivisionLevel", PyvtkPVGeometryFilter_GetNonlinearSubdivisionLevel, METH_VARARGS,
   (char*)"V.GetNonlinearSubdivisionLevel() -> int\nC++: int GetNonlinearSubdivisionLevel()\n\nNonlinear faces are approximated with flat polygons.  This\nparameter controls how many times to subdivide nonlinear surface\ncells.  Higher subdivisions generate closer approximations but\ntake more memory and rendering time.  Subdivision is recursive,\nso the number of output polygons can grow exponentially with this\nparameter.\n"},
  {(char*)"SetController", PyvtkPVGeometryFilter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPVGeometryFilter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkPVGeometryFilter_SetPassThroughCellIds, METH_VARARGS,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkPVGeometryFilter_GetPassThroughCellIds, METH_VARARGS,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkPVGeometryFilter_PassThroughCellIdsOn, METH_VARARGS,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkPVGeometryFilter_PassThroughCellIdsOff, METH_VARARGS,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {(char*)"SetPassThroughPointIds", PyvtkPVGeometryFilter_SetPassThroughPointIds, METH_VARARGS,
   (char*)"V.SetPassThroughPointIds(int)\nC++: void SetPassThroughPointIds(int)\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {(char*)"GetPassThroughPointIds", PyvtkPVGeometryFilter_GetPassThroughPointIds, METH_VARARGS,
   (char*)"V.GetPassThroughPointIds() -> int\nC++: int GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {(char*)"PassThroughPointIdsOn", PyvtkPVGeometryFilter_PassThroughPointIdsOn, METH_VARARGS,
   (char*)"V.PassThroughPointIdsOn()\nC++: void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {(char*)"PassThroughPointIdsOff", PyvtkPVGeometryFilter_PassThroughPointIdsOff, METH_VARARGS,
   (char*)"V.PassThroughPointIdsOff()\nC++: void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {(char*)"SetGenerateProcessIds", PyvtkPVGeometryFilter_SetGenerateProcessIds, METH_VARARGS,
   (char*)"V.SetGenerateProcessIds(bool)\nC++: void SetGenerateProcessIds(bool a)\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {(char*)"GetGenerateProcessIds", PyvtkPVGeometryFilter_GetGenerateProcessIds, METH_VARARGS,
   (char*)"V.GetGenerateProcessIds() -> bool\nC++: bool GetGenerateProcessIds()\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {(char*)"GenerateProcessIdsOn", PyvtkPVGeometryFilter_GenerateProcessIdsOn, METH_VARARGS,
   (char*)"V.GenerateProcessIdsOn()\nC++: void GenerateProcessIdsOn()\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {(char*)"GenerateProcessIdsOff", PyvtkPVGeometryFilter_GenerateProcessIdsOff, METH_VARARGS,
   (char*)"V.GenerateProcessIdsOff()\nC++: void GenerateProcessIdsOff()\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {(char*)"SetHideInternalAMRFaces", PyvtkPVGeometryFilter_SetHideInternalAMRFaces, METH_VARARGS,
   (char*)"V.SetHideInternalAMRFaces(bool)\nC++: void SetHideInternalAMRFaces(bool a)\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {(char*)"GetHideInternalAMRFaces", PyvtkPVGeometryFilter_GetHideInternalAMRFaces, METH_VARARGS,
   (char*)"V.GetHideInternalAMRFaces() -> bool\nC++: bool GetHideInternalAMRFaces()\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {(char*)"HideInternalAMRFacesOn", PyvtkPVGeometryFilter_HideInternalAMRFacesOn, METH_VARARGS,
   (char*)"V.HideInternalAMRFacesOn()\nC++: void HideInternalAMRFacesOn()\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {(char*)"HideInternalAMRFacesOff", PyvtkPVGeometryFilter_HideInternalAMRFacesOff, METH_VARARGS,
   (char*)"V.HideInternalAMRFacesOff()\nC++: void HideInternalAMRFacesOff()\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {(char*)"SetUseNonOverlappingAMRMetaDataForOutlines", PyvtkPVGeometryFilter_SetUseNonOverlappingAMRMetaDataForOutlines, METH_VARARGS,
   (char*)"V.SetUseNonOverlappingAMRMetaDataForOutlines(bool)\nC++: void SetUseNonOverlappingAMRMetaDataForOutlines(bool a)\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {(char*)"GetUseNonOverlappingAMRMetaDataForOutlines", PyvtkPVGeometryFilter_GetUseNonOverlappingAMRMetaDataForOutlines, METH_VARARGS,
   (char*)"V.GetUseNonOverlappingAMRMetaDataForOutlines() -> bool\nC++: bool GetUseNonOverlappingAMRMetaDataForOutlines()\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {(char*)"UseNonOverlappingAMRMetaDataForOutlinesOn", PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOn, METH_VARARGS,
   (char*)"V.UseNonOverlappingAMRMetaDataForOutlinesOn()\nC++: void UseNonOverlappingAMRMetaDataForOutlinesOn()\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {(char*)"UseNonOverlappingAMRMetaDataForOutlinesOff", PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOff, METH_VARARGS,
   (char*)"V.UseNonOverlappingAMRMetaDataForOutlinesOff()\nC++: void UseNonOverlappingAMRMetaDataForOutlinesOff()\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {(char*)"POINT_OFFSETS", PyvtkPVGeometryFilter_POINT_OFFSETS, METH_VARARGS | METH_STATIC,
   (char*)"V.POINT_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *POINT_OFFSETS()\n\n"},
  {(char*)"VERTS_OFFSETS", PyvtkPVGeometryFilter_VERTS_OFFSETS, METH_VARARGS | METH_STATIC,
   (char*)"V.VERTS_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *VERTS_OFFSETS()\n\n"},
  {(char*)"LINES_OFFSETS", PyvtkPVGeometryFilter_LINES_OFFSETS, METH_VARARGS | METH_STATIC,
   (char*)"V.LINES_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *LINES_OFFSETS()\n\n"},
  {(char*)"POLYS_OFFSETS", PyvtkPVGeometryFilter_POLYS_OFFSETS, METH_VARARGS | METH_STATIC,
   (char*)"V.POLYS_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *POLYS_OFFSETS()\n\n"},
  {(char*)"STRIPS_OFFSETS", PyvtkPVGeometryFilter_STRIPS_OFFSETS, METH_VARARGS | METH_STATIC,
   (char*)"V.STRIPS_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *STRIPS_OFFSETS()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVGeometryFilter_StaticNew()
{
  return vtkPVGeometryFilter::New();
}

PyObject *PyVTKClass_vtkPVGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVGeometryFilter_StaticNew,
    PyvtkPVGeometryFilter_Methods,
    "vtkPVGeometryFilter", modulename,
    NULL, NULL,
    PyvtkPVGeometryFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVGeometryFilter - Geometry filter that does outlines for volumes.\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "This filter defaults to using the outline filter unless the input is\na structured volume.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

