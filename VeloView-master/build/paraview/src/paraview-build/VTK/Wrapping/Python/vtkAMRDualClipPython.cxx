// python wrapper for vtkAMRDualClip
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMRDualClip.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMRDualClip(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMRDualClipNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkAMRDualClip_Doc();


static PyObject *
PyvtkAMRDualClip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMRDualClip::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDualClip::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMRDualClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDualClip::NewInstance());

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
PyvtkAMRDualClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMRDualClip *tempr = vtkAMRDualClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

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
      op->vtkAMRDualClip::SetIsoValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIsoValue() :
      op->vtkAMRDualClip::GetIsoValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableInternalDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableInternalDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableInternalDecimation(temp0);
      }
    else
      {
      op->vtkAMRDualClip::SetEnableInternalDecimation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableInternalDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableInternalDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableInternalDecimation() :
      op->vtkAMRDualClip::GetEnableInternalDecimation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

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
      op->vtkAMRDualClip::SetEnableDegenerateCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableDegenerateCells() :
      op->vtkAMRDualClip::GetEnableDegenerateCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableDegenerateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableDegenerateCellsOn();
      }
    else
      {
      op->vtkAMRDualClip::EnableDegenerateCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableDegenerateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableDegenerateCellsOff();
      }
    else
      {
      op->vtkAMRDualClip::EnableDegenerateCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

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
      op->vtkAMRDualClip::SetEnableMultiProcessCommunication(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableMultiProcessCommunication() :
      op->vtkAMRDualClip::GetEnableMultiProcessCommunication());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMultiProcessCommunicationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMultiProcessCommunicationOn();
      }
    else
      {
      op->vtkAMRDualClip::EnableMultiProcessCommunicationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMultiProcessCommunicationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMultiProcessCommunicationOff();
      }
    else
      {
      op->vtkAMRDualClip::EnableMultiProcessCommunicationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

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
      op->vtkAMRDualClip::SetEnableMergePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableMergePoints() :
      op->vtkAMRDualClip::GetEnableMergePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMergePointsOn();
      }
    else
      {
      op->vtkAMRDualClip::EnableMergePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableMergePointsOff();
      }
    else
      {
      op->vtkAMRDualClip::EnableMergePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRDualClip::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

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
      op->vtkAMRDualClip::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMRDualClip_Methods[] = {
  {(char*)"GetClassName", PyvtkAMRDualClip_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMRDualClip_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMRDualClip_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMRDualClip\nC++: vtkAMRDualClip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMRDualClip_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMRDualClip\nC++: vtkAMRDualClip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIsoValue", PyvtkAMRDualClip_SetIsoValue, METH_VARARGS,
   (char*)"V.SetIsoValue(float)\nC++: void SetIsoValue(double a)\n\n"},
  {(char*)"GetIsoValue", PyvtkAMRDualClip_GetIsoValue, METH_VARARGS,
   (char*)"V.GetIsoValue() -> float\nC++: double GetIsoValue()\n\n"},
  {(char*)"SetEnableInternalDecimation", PyvtkAMRDualClip_SetEnableInternalDecimation, METH_VARARGS,
   (char*)"V.SetEnableInternalDecimation(int)\nC++: void SetEnableInternalDecimation(int a)\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"GetEnableInternalDecimation", PyvtkAMRDualClip_GetEnableInternalDecimation, METH_VARARGS,
   (char*)"V.GetEnableInternalDecimation() -> int\nC++: int GetEnableInternalDecimation()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"SetEnableDegenerateCells", PyvtkAMRDualClip_SetEnableDegenerateCells, METH_VARARGS,
   (char*)"V.SetEnableDegenerateCells(int)\nC++: void SetEnableDegenerateCells(int a)\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"GetEnableDegenerateCells", PyvtkAMRDualClip_GetEnableDegenerateCells, METH_VARARGS,
   (char*)"V.GetEnableDegenerateCells() -> int\nC++: int GetEnableDegenerateCells()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"EnableDegenerateCellsOn", PyvtkAMRDualClip_EnableDegenerateCellsOn, METH_VARARGS,
   (char*)"V.EnableDegenerateCellsOn()\nC++: void EnableDegenerateCellsOn()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"EnableDegenerateCellsOff", PyvtkAMRDualClip_EnableDegenerateCellsOff, METH_VARARGS,
   (char*)"V.EnableDegenerateCellsOff()\nC++: void EnableDegenerateCellsOff()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"SetEnableMultiProcessCommunication", PyvtkAMRDualClip_SetEnableMultiProcessCommunication, METH_VARARGS,
   (char*)"V.SetEnableMultiProcessCommunication(int)\nC++: void SetEnableMultiProcessCommunication(int a)\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"GetEnableMultiProcessCommunication", PyvtkAMRDualClip_GetEnableMultiProcessCommunication, METH_VARARGS,
   (char*)"V.GetEnableMultiProcessCommunication() -> int\nC++: int GetEnableMultiProcessCommunication()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"EnableMultiProcessCommunicationOn", PyvtkAMRDualClip_EnableMultiProcessCommunicationOn, METH_VARARGS,
   (char*)"V.EnableMultiProcessCommunicationOn()\nC++: void EnableMultiProcessCommunicationOn()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"EnableMultiProcessCommunicationOff", PyvtkAMRDualClip_EnableMultiProcessCommunicationOff, METH_VARARGS,
   (char*)"V.EnableMultiProcessCommunicationOff()\nC++: void EnableMultiProcessCommunicationOff()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess comunication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {(char*)"SetEnableMergePoints", PyvtkAMRDualClip_SetEnableMergePoints, METH_VARARGS,
   (char*)"V.SetEnableMergePoints(int)\nC++: void SetEnableMergePoints(int a)\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"GetEnableMergePoints", PyvtkAMRDualClip_GetEnableMergePoints, METH_VARARGS,
   (char*)"V.GetEnableMergePoints() -> int\nC++: int GetEnableMergePoints()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"EnableMergePointsOn", PyvtkAMRDualClip_EnableMergePointsOn, METH_VARARGS,
   (char*)"V.EnableMergePointsOn()\nC++: void EnableMergePointsOn()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"EnableMergePointsOff", PyvtkAMRDualClip_EnableMergePointsOff, METH_VARARGS,
   (char*)"V.EnableMergePointsOff()\nC++: void EnableMergePointsOff()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {(char*)"GetController", PyvtkAMRDualClip_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {(char*)"SetController", PyvtkAMRDualClip_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMRDualClip_StaticNew()
{
  return vtkAMRDualClip::New();
}

PyObject *PyVTKClass_vtkAMRDualClipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMRDualClip_StaticNew,
    PyvtkAMRDualClip_Methods,
    "vtkAMRDualClip", modulename,
    NULL, NULL,
    PyvtkAMRDualClip_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAMRDualClip_Doc()
{
  static const char *docstring[] = {
    "vtkAMRDualClip - Clip (with scalars) an AMR volume to unstructured\ngrid.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter clips an AMR volume but does not copy attributes yet.\nThis filter has two important features.  First is that the level\ntransitions are handled correctly, and second is that interal cells\nare decimated.  I use a variation of degenerate points/cells used for\nlevel transitions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMRDualClip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMRDualClipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMRDualClip", o) != 0)
    {
    Py_DECREF(o);
    }

}

