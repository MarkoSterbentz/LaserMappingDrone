// python wrapper for vtkExtractCTHPart
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractCTHPart.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractCTHPart(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractCTHPartNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExtractCTHPart_Doc();


static PyObject *
PyvtkExtractCTHPart_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractCTHPart::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractCTHPart::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractCTHPart *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractCTHPart::NewInstance());

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
PyvtkExtractCTHPart_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractCTHPart *tempr = vtkExtractCTHPart::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_AddVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddVolumeArrayName(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::AddVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveVolumeArrayNames();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetNumberOfVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVolumeArrayNames() :
      op->vtkExtractCTHPart::GetNumberOfVolumeArrayNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVolumeArrayName(temp0) :
      op->vtkExtractCTHPart::GetVolumeArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

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
      op->vtkExtractCTHPart::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkExtractCTHPart::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapping(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkExtractCTHPart::GetCapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkExtractCTHPart::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkExtractCTHPart::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTriangles(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetGenerateTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkExtractCTHPart::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrianglesOn();
      }
    else
      {
      op->vtkExtractCTHPart::GenerateTrianglesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTrianglesOff();
      }
    else
      {
      op->vtkExtractCTHPart::GenerateTrianglesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetRemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoveGhostCells(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetRemoveGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetRemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveGhostCells() :
      op->vtkExtractCTHPart::GetRemoveGhostCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveGhostCellsOn();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveGhostCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveGhostCellsOff();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveGhostCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetClipPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->SetClipPlane(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetClipPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetClipPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetClipPlane() :
      op->vtkExtractCTHPart::GetClipPlane());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractCTHPart::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionSurfaceValue(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMinValue() :
      op->vtkExtractCTHPart::GetVolumeFractionSurfaceValueMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMaxValue() :
      op->vtkExtractCTHPart::GetVolumeFractionSurfaceValueMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkExtractCTHPart::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractCTHPart_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractCTHPart_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractCTHPart_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractCTHPart_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractCTHPart\nC++: vtkExtractCTHPart *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractCTHPart_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractCTHPart\nC++: vtkExtractCTHPart *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddVolumeArrayName", PyvtkExtractCTHPart_AddVolumeArrayName, METH_VARARGS,
   (char*)"V.AddVolumeArrayName(string)\nC++: void AddVolumeArrayName(const char *)\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {(char*)"RemoveVolumeArrayNames", PyvtkExtractCTHPart_RemoveVolumeArrayNames, METH_VARARGS,
   (char*)"V.RemoveVolumeArrayNames()\nC++: void RemoveVolumeArrayNames()\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {(char*)"GetNumberOfVolumeArrayNames", PyvtkExtractCTHPart_GetNumberOfVolumeArrayNames, METH_VARARGS,
   (char*)"V.GetNumberOfVolumeArrayNames() -> int\nC++: int GetNumberOfVolumeArrayNames()\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {(char*)"GetVolumeArrayName", PyvtkExtractCTHPart_GetVolumeArrayName, METH_VARARGS,
   (char*)"V.GetVolumeArrayName(int) -> string\nC++: const char *GetVolumeArrayName(int idx)\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {(char*)"SetController", PyvtkExtractCTHPart_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the parallel controller. By default, the value returned\nby vtkMultiBlockDataSetAlgorithm::GetGlobalController() when the\nobject is instantiated is used.\n"},
  {(char*)"GetController", PyvtkExtractCTHPart_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the parallel controller. By default, the value returned\nby vtkMultiBlockDataSetAlgorithm::GetGlobalController() when the\nobject is instantiated is used.\n"},
  {(char*)"SetCapping", PyvtkExtractCTHPart_SetCapping, METH_VARARGS,
   (char*)"V.SetCapping(bool)\nC++: void SetCapping(bool a)\n\nOn by default, enables logic to cap the material volume.\n"},
  {(char*)"GetCapping", PyvtkExtractCTHPart_GetCapping, METH_VARARGS,
   (char*)"V.GetCapping() -> bool\nC++: bool GetCapping()\n\nOn by default, enables logic to cap the material volume.\n"},
  {(char*)"CappingOn", PyvtkExtractCTHPart_CappingOn, METH_VARARGS,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nOn by default, enables logic to cap the material volume.\n"},
  {(char*)"CappingOff", PyvtkExtractCTHPart_CappingOff, METH_VARARGS,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nOn by default, enables logic to cap the material volume.\n"},
  {(char*)"SetGenerateTriangles", PyvtkExtractCTHPart_SetGenerateTriangles, METH_VARARGS,
   (char*)"V.SetGenerateTriangles(bool)\nC++: void SetGenerateTriangles(bool a)\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {(char*)"GetGenerateTriangles", PyvtkExtractCTHPart_GetGenerateTriangles, METH_VARARGS,
   (char*)"V.GetGenerateTriangles() -> bool\nC++: bool GetGenerateTriangles()\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {(char*)"GenerateTrianglesOn", PyvtkExtractCTHPart_GenerateTrianglesOn, METH_VARARGS,
   (char*)"V.GenerateTrianglesOn()\nC++: void GenerateTrianglesOn()\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {(char*)"GenerateTrianglesOff", PyvtkExtractCTHPart_GenerateTrianglesOff, METH_VARARGS,
   (char*)"V.GenerateTrianglesOff()\nC++: void GenerateTrianglesOff()\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {(char*)"SetRemoveGhostCells", PyvtkExtractCTHPart_SetRemoveGhostCells, METH_VARARGS,
   (char*)"V.SetRemoveGhostCells(bool)\nC++: void SetRemoveGhostCells(bool a)\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {(char*)"GetRemoveGhostCells", PyvtkExtractCTHPart_GetRemoveGhostCells, METH_VARARGS,
   (char*)"V.GetRemoveGhostCells() -> bool\nC++: bool GetRemoveGhostCells()\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {(char*)"RemoveGhostCellsOn", PyvtkExtractCTHPart_RemoveGhostCellsOn, METH_VARARGS,
   (char*)"V.RemoveGhostCellsOn()\nC++: void RemoveGhostCellsOn()\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {(char*)"RemoveGhostCellsOff", PyvtkExtractCTHPart_RemoveGhostCellsOff, METH_VARARGS,
   (char*)"V.RemoveGhostCellsOff()\nC++: void RemoveGhostCellsOff()\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {(char*)"SetClipPlane", PyvtkExtractCTHPart_SetClipPlane, METH_VARARGS,
   (char*)"V.SetClipPlane(vtkPlane)\nC++: void SetClipPlane(vtkPlane *clipPlane)\n\nSet, get or manipulate the implicit clipping plane.\n"},
  {(char*)"GetClipPlane", PyvtkExtractCTHPart_GetClipPlane, METH_VARARGS,
   (char*)"V.GetClipPlane() -> vtkPlane\nC++: vtkPlane *GetClipPlane()\n\nSet, get or manipulate the implicit clipping plane.\n"},
  {(char*)"GetMTime", PyvtkExtractCTHPart_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nLook at clip plane to compute MTime.\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkExtractCTHPart_SetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double)\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {(char*)"GetVolumeFractionSurfaceValueMinValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMinValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValueMinValue() -> float\nC++: double GetVolumeFractionSurfaceValueMinValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {(char*)"GetVolumeFractionSurfaceValueMaxValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMaxValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValueMaxValue() -> float\nC++: double GetVolumeFractionSurfaceValueMaxValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValue, METH_VARARGS,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractCTHPart_StaticNew()
{
  return vtkExtractCTHPart::New();
}

PyObject *PyVTKClass_vtkExtractCTHPartNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractCTHPart_StaticNew,
    PyvtkExtractCTHPart_Methods,
    "vtkExtractCTHPart", modulename,
    NULL, NULL,
    PyvtkExtractCTHPart_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractCTHPart_Doc()
{
  static const char *docstring[] = {
    "vtkExtractCTHPart - Generates surface of a CTH volume fraction.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExtractCTHPart is a filter that is specialized for creating\nvisualizations for a CTH simulation. CTH datasets comprise of either\nvtkNonOverlappingAMR or a multiblock of non-overlapping rectilinear\ngrids with cell-data. Certain cell-arrays in the dataset identify the\nfraction of a particular material present in a given cell. This goal\nwith this filter is to extract a surface contour demarcating ",
    "the\nsurface where the volume fraction for a particular material is equal\nto the user chosen value.\n\nTo achieve that, this filter first converts the cell-data to\npoint-data and then simply apply vtkContourFilter filter to extract\nthe contour.\n\nvtkExtractCTHPart also provides the user with an option to clip the\nresultant contour using a vtkPlane. Internally, it uses\nvtkClipClosedSurface to clip the ",
    "contour using the vtkPlane provided.\n\nThe output of this filter is a vtkMultiBlockDataSet with one block\ncorresponding to each volume-fraction array requested. Each block\nitself is a vtkPolyData for the contour generated on the current\nprocess (which may be null, for processes where no contour is\ngenerated).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractCTHPart(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractCTHPartNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractCTHPart", o) != 0)
    {
    Py_DECREF(o);
    }

}

