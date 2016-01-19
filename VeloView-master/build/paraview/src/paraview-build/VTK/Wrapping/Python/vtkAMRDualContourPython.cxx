// python wrapper for vtkAMRDualContour
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRDualContour.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRDualContour(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRDualContourNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRDualContour_Doc();


static PyObject *
PyvtkAMRDualContour_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRDualContour::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDualContour::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRDualContour *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDualContour::NewInstance());

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
PyvtkAMRDualContour_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRDualContour *tempr = vtkAMRDualContour::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsoValue(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetIsoValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIsoValue() :
      op->vtkAMRDualContour::GetIsoValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableCapping(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetEnableCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableCapping() :
      op->vtkAMRDualContour::GetEnableCapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableCappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableCappingOn();
      }
    else
      {
      op->vtkAMRDualContour::EnableCappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableCappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableCappingOff();
      }
    else
      {
      op->vtkAMRDualContour::EnableCappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableDegenerateCells(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetEnableDegenerateCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableDegenerateCells() :
      op->vtkAMRDualContour::GetEnableDegenerateCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableDegenerateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableDegenerateCellsOn();
      }
    else
      {
      op->vtkAMRDualContour::EnableDegenerateCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableDegenerateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableDegenerateCellsOff();
      }
    else
      {
      op->vtkAMRDualContour::EnableDegenerateCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableMultiProcessCommunication(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetEnableMultiProcessCommunication(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableMultiProcessCommunication() :
      op->vtkAMRDualContour::GetEnableMultiProcessCommunication());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMultiProcessCommunicationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMultiProcessCommunicationOn();
      }
    else
      {
      op->vtkAMRDualContour::EnableMultiProcessCommunicationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMultiProcessCommunicationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMultiProcessCommunicationOff();
      }
    else
      {
      op->vtkAMRDualContour::EnableMultiProcessCommunicationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableMergePoints(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetEnableMergePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableMergePoints() :
      op->vtkAMRDualContour::GetEnableMergePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMergePointsOn();
      }
    else
      {
      op->vtkAMRDualContour::EnableMergePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMergePointsOff();
      }
    else
      {
      op->vtkAMRDualContour::EnableMergePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetTriangulateCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulateCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTriangulateCap(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetTriangulateCap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetTriangulateCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulateCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTriangulateCap() :
      op->vtkAMRDualContour::GetTriangulateCap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_TriangulateCapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateCapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulateCapOn();
      }
    else
      {
      op->vtkAMRDualContour::TriangulateCapOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_TriangulateCapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateCapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriangulateCapOff();
      }
    else
      {
      op->vtkAMRDualContour::TriangulateCapOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetSkipGhostCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipGhostCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSkipGhostCopy(temp0);
      }
    else
      {
      op->vtkAMRDualContour::SetSkipGhostCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetSkipGhostCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipGhostCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSkipGhostCopy() :
      op->vtkAMRDualContour::GetSkipGhostCopy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SkipGhostCopyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipGhostCopyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipGhostCopyOn();
      }
    else
      {
      op->vtkAMRDualContour::SkipGhostCopyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SkipGhostCopyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipGhostCopyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SkipGhostCopyOff();
      }
    else
      {
      op->vtkAMRDualContour::SkipGhostCopyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRDualContour::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

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
      op->vtkAMRDualContour::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRDualContour_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRDualContour_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRDualContour_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRDualContour_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRDualContour\nC++: vtkAMRDualContour *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRDualContour_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRDualContour\nC++: vtkAMRDualContour *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIsoValue", PyvtkAMRDualContour_SetIsoValue, METH_VARARGS,
   (char*)"V.SetIsoValue(float)\nC++: void SetIsoValue(double a)\n\n"},
  {(char*)"GetIsoValue", PyvtkAMRDualContour_GetIsoValue, METH_VARARGS,
   (char*)"V.GetIsoValue() -> float\nC++: double GetIsoValue()\n\n"},
  {(char*)"SetEnableCapping", PyvtkAMRDualContour_SetEnableCapping, METH_VARARGS,
   (char*)"V.SetEnableCapping(int)\nC++: void SetEnableCapping(int a)\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"GetEnableCapping", PyvtkAMRDualContour_GetEnableCapping, METH_VARARGS,
   (char*)"V.GetEnableCapping() -> int\nC++: int GetEnableCapping()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"EnableCappingOn", PyvtkAMRDualContour_EnableCappingOn, METH_VARARGS,
   (char*)"V.EnableCappingOn()\nC++: void EnableCappingOn()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"EnableCappingOff", PyvtkAMRDualContour_EnableCappingOff, METH_VARARGS,
   (char*)"V.EnableCappingOff()\nC++: void EnableCappingOff()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"SetEnableDegenerateCells", PyvtkAMRDualContour_SetEnableDegenerateCells, METH_VARARGS,
   (char*)"V.SetEnableDegenerateCells(int)\nC++: void SetEnableDegenerateCells(int a)\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"GetEnableDegenerateCells", PyvtkAMRDualContour_GetEnableDegenerateCells, METH_VARARGS,
   (char*)"V.GetEnableDegenerateCells() -> int\nC++: int GetEnableDegenerateCells()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"EnableDegenerateCellsOn", PyvtkAMRDualContour_EnableDegenerateCellsOn, METH_VARARGS,
   (char*)"V.EnableDegenerateCellsOn()\nC++: void EnableDegenerateCellsOn()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"EnableDegenerateCellsOff", PyvtkAMRDualContour_EnableDegenerateCellsOff, METH_VARARGS,
   (char*)"V.EnableDegenerateCellsOff()\nC++: void EnableDegenerateCellsOff()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"SetEnableMultiProcessCommunication", PyvtkAMRDualContour_SetEnableMultiProcessCommunication, METH_VARARGS,
   (char*)"V.SetEnableMultiProcessCommunication(int)\nC++: void SetEnableMultiProcessCommunication(int a)\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"GetEnableMultiProcessCommunication", PyvtkAMRDualContour_GetEnableMultiProcessCommunication, METH_VARARGS,
   (char*)"V.GetEnableMultiProcessCommunication() -> int\nC++: int GetEnableMultiProcessCommunication()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"EnableMultiProcessCommunicationOn", PyvtkAMRDualContour_EnableMultiProcessCommunicationOn, METH_VARARGS,
   (char*)"V.EnableMultiProcessCommunicationOn()\nC++: void EnableMultiProcessCommunicationOn()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"EnableMultiProcessCommunicationOff", PyvtkAMRDualContour_EnableMultiProcessCommunicationOff, METH_VARARGS,
   (char*)"V.EnableMultiProcessCommunicationOff()\nC++: void EnableMultiProcessCommunicationOff()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess comunication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {(char*)"SetEnableMergePoints", PyvtkAMRDualContour_SetEnableMergePoints, METH_VARARGS,
   (char*)"V.SetEnableMergePoints(int)\nC++: void SetEnableMergePoints(int a)\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"GetEnableMergePoints", PyvtkAMRDualContour_GetEnableMergePoints, METH_VARARGS,
   (char*)"V.GetEnableMergePoints() -> int\nC++: int GetEnableMergePoints()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"EnableMergePointsOn", PyvtkAMRDualContour_EnableMergePointsOn, METH_VARARGS,
   (char*)"V.EnableMergePointsOn()\nC++: void EnableMergePointsOn()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"EnableMergePointsOff", PyvtkAMRDualContour_EnableMergePointsOff, METH_VARARGS,
   (char*)"V.EnableMergePointsOff()\nC++: void EnableMergePointsOff()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"SetTriangulateCap", PyvtkAMRDualContour_SetTriangulateCap, METH_VARARGS,
   (char*)"V.SetTriangulateCap(int)\nC++: void SetTriangulateCap(int a)\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {(char*)"GetTriangulateCap", PyvtkAMRDualContour_GetTriangulateCap, METH_VARARGS,
   (char*)"V.GetTriangulateCap() -> int\nC++: int GetTriangulateCap()\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {(char*)"TriangulateCapOn", PyvtkAMRDualContour_TriangulateCapOn, METH_VARARGS,
   (char*)"V.TriangulateCapOn()\nC++: void TriangulateCapOn()\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {(char*)"TriangulateCapOff", PyvtkAMRDualContour_TriangulateCapOff, METH_VARARGS,
   (char*)"V.TriangulateCapOff()\nC++: void TriangulateCapOff()\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {(char*)"SetSkipGhostCopy", PyvtkAMRDualContour_SetSkipGhostCopy, METH_VARARGS,
   (char*)"V.SetSkipGhostCopy(int)\nC++: void SetSkipGhostCopy(int a)\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {(char*)"GetSkipGhostCopy", PyvtkAMRDualContour_GetSkipGhostCopy, METH_VARARGS,
   (char*)"V.GetSkipGhostCopy() -> int\nC++: int GetSkipGhostCopy()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {(char*)"SkipGhostCopyOn", PyvtkAMRDualContour_SkipGhostCopyOn, METH_VARARGS,
   (char*)"V.SkipGhostCopyOn()\nC++: void SkipGhostCopyOn()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {(char*)"SkipGhostCopyOff", PyvtkAMRDualContour_SkipGhostCopyOff, METH_VARARGS,
   (char*)"V.SkipGhostCopyOff()\nC++: void SkipGhostCopyOff()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {(char*)"GetController", PyvtkAMRDualContour_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {(char*)"SetController", PyvtkAMRDualContour_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRDualContour_StaticNew()
{
  return vtkAMRDualContour::New();
}

PyObject *PyVTKClass_vtkAMRDualContourNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRDualContour_StaticNew,
    PyvtkAMRDualContour_Methods,
    "vtkAMRDualContour", modulename,
    NULL, NULL,
    PyvtkAMRDualContour_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRDualContour_Doc()
{
  static const char *docstring[] = {
    "vtkAMRDualContour - Extract particles and analyse them.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter takes a cell data volume fraction and generates a\npolydata surface.  It also performs connectivity on the particles and\ngenerates a particle index as part of the cell data of the output. \nIt computes the volume of each particle from the volume fraction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRDualContour(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRDualContourNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRDualContour", o) != 0)
    {
    Py_DECREF(o);
    }

}

