// python wrapper for vtkFeatureEdges
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFeatureEdges.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFeatureEdges(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFeatureEdgesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkFeatureEdges_Doc();


static PyObject *
PyvtkFeatureEdges_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFeatureEdges::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFeatureEdges::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFeatureEdges *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFeatureEdges::NewInstance());

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
PyvtkFeatureEdges_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFeatureEdges *tempr = vtkFeatureEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundaryEdges(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetBoundaryEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryEdges() :
      op->vtkFeatureEdges::GetBoundaryEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_BoundaryEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundaryEdgesOn();
      }
    else
      {
      op->vtkFeatureEdges::BoundaryEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_BoundaryEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundaryEdgesOff();
      }
    else
      {
      op->vtkFeatureEdges::BoundaryEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureEdges(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetFeatureEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdges() :
      op->vtkFeatureEdges::GetFeatureEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_FeatureEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FeatureEdgesOn();
      }
    else
      {
      op->vtkFeatureEdges::FeatureEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_FeatureEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FeatureEdgesOff();
      }
    else
      {
      op->vtkFeatureEdges::FeatureEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureAngle(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkFeatureEdges::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkFeatureEdges::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkFeatureEdges::GetFeatureAngle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonManifoldEdges(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetNonManifoldEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNonManifoldEdges() :
      op->vtkFeatureEdges::GetNonManifoldEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NonManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NonManifoldEdgesOn();
      }
    else
      {
      op->vtkFeatureEdges::NonManifoldEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NonManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NonManifoldEdgesOff();
      }
    else
      {
      op->vtkFeatureEdges::NonManifoldEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManifoldEdges(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetManifoldEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetManifoldEdges() :
      op->vtkFeatureEdges::GetManifoldEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManifoldEdgesOn();
      }
    else
      {
      op->vtkFeatureEdges::ManifoldEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ManifoldEdgesOff();
      }
    else
      {
      op->vtkFeatureEdges::ManifoldEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColoring(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetColoring(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColoring() :
      op->vtkFeatureEdges::GetColoring());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ColoringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColoringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColoringOn();
      }
    else
      {
      op->vtkFeatureEdges::ColoringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ColoringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColoringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColoringOff();
      }
    else
      {
      op->vtkFeatureEdges::ColoringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkFeatureEdges::GetLocator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkFeatureEdges::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFeatureEdges::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkFeatureEdges::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkFeatureEdges::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFeatureEdges_Methods[] = {
  {(char*)"GetClassName", PyvtkFeatureEdges_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFeatureEdges_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFeatureEdges_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFeatureEdges\nC++: vtkFeatureEdges *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFeatureEdges_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFeatureEdges\nC++: vtkFeatureEdges *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBoundaryEdges", PyvtkFeatureEdges_SetBoundaryEdges, METH_VARARGS,
   (char*)"V.SetBoundaryEdges(int)\nC++: void SetBoundaryEdges(int a)\n\nTurn on/off the extraction of boundary edges.\n"},
  {(char*)"GetBoundaryEdges", PyvtkFeatureEdges_GetBoundaryEdges, METH_VARARGS,
   (char*)"V.GetBoundaryEdges() -> int\nC++: int GetBoundaryEdges()\n\nTurn on/off the extraction of boundary edges.\n"},
  {(char*)"BoundaryEdgesOn", PyvtkFeatureEdges_BoundaryEdgesOn, METH_VARARGS,
   (char*)"V.BoundaryEdgesOn()\nC++: void BoundaryEdgesOn()\n\nTurn on/off the extraction of boundary edges.\n"},
  {(char*)"BoundaryEdgesOff", PyvtkFeatureEdges_BoundaryEdgesOff, METH_VARARGS,
   (char*)"V.BoundaryEdgesOff()\nC++: void BoundaryEdgesOff()\n\nTurn on/off the extraction of boundary edges.\n"},
  {(char*)"SetFeatureEdges", PyvtkFeatureEdges_SetFeatureEdges, METH_VARARGS,
   (char*)"V.SetFeatureEdges(int)\nC++: void SetFeatureEdges(int a)\n\nTurn on/off the extraction of feature edges.\n"},
  {(char*)"GetFeatureEdges", PyvtkFeatureEdges_GetFeatureEdges, METH_VARARGS,
   (char*)"V.GetFeatureEdges() -> int\nC++: int GetFeatureEdges()\n\nTurn on/off the extraction of feature edges.\n"},
  {(char*)"FeatureEdgesOn", PyvtkFeatureEdges_FeatureEdgesOn, METH_VARARGS,
   (char*)"V.FeatureEdgesOn()\nC++: void FeatureEdgesOn()\n\nTurn on/off the extraction of feature edges.\n"},
  {(char*)"FeatureEdgesOff", PyvtkFeatureEdges_FeatureEdgesOff, METH_VARARGS,
   (char*)"V.FeatureEdgesOff()\nC++: void FeatureEdgesOff()\n\nTurn on/off the extraction of feature edges.\n"},
  {(char*)"SetFeatureAngle", PyvtkFeatureEdges_SetFeatureAngle, METH_VARARGS,
   (char*)"V.SetFeatureAngle(float)\nC++: void SetFeatureAngle(double)\n\nSpecify the feature angle for extracting feature edges.\n"},
  {(char*)"GetFeatureAngleMinValue", PyvtkFeatureEdges_GetFeatureAngleMinValue, METH_VARARGS,
   (char*)"V.GetFeatureAngleMinValue() -> float\nC++: double GetFeatureAngleMinValue()\n\nSpecify the feature angle for extracting feature edges.\n"},
  {(char*)"GetFeatureAngleMaxValue", PyvtkFeatureEdges_GetFeatureAngleMaxValue, METH_VARARGS,
   (char*)"V.GetFeatureAngleMaxValue() -> float\nC++: double GetFeatureAngleMaxValue()\n\nSpecify the feature angle for extracting feature edges.\n"},
  {(char*)"GetFeatureAngle", PyvtkFeatureEdges_GetFeatureAngle, METH_VARARGS,
   (char*)"V.GetFeatureAngle() -> float\nC++: double GetFeatureAngle()\n\nSpecify the feature angle for extracting feature edges.\n"},
  {(char*)"SetNonManifoldEdges", PyvtkFeatureEdges_SetNonManifoldEdges, METH_VARARGS,
   (char*)"V.SetNonManifoldEdges(int)\nC++: void SetNonManifoldEdges(int a)\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {(char*)"GetNonManifoldEdges", PyvtkFeatureEdges_GetNonManifoldEdges, METH_VARARGS,
   (char*)"V.GetNonManifoldEdges() -> int\nC++: int GetNonManifoldEdges()\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {(char*)"NonManifoldEdgesOn", PyvtkFeatureEdges_NonManifoldEdgesOn, METH_VARARGS,
   (char*)"V.NonManifoldEdgesOn()\nC++: void NonManifoldEdgesOn()\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {(char*)"NonManifoldEdgesOff", PyvtkFeatureEdges_NonManifoldEdgesOff, METH_VARARGS,
   (char*)"V.NonManifoldEdgesOff()\nC++: void NonManifoldEdgesOff()\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {(char*)"SetManifoldEdges", PyvtkFeatureEdges_SetManifoldEdges, METH_VARARGS,
   (char*)"V.SetManifoldEdges(int)\nC++: void SetManifoldEdges(int a)\n\nTurn on/off the extraction of manifold edges.\n"},
  {(char*)"GetManifoldEdges", PyvtkFeatureEdges_GetManifoldEdges, METH_VARARGS,
   (char*)"V.GetManifoldEdges() -> int\nC++: int GetManifoldEdges()\n\nTurn on/off the extraction of manifold edges.\n"},
  {(char*)"ManifoldEdgesOn", PyvtkFeatureEdges_ManifoldEdgesOn, METH_VARARGS,
   (char*)"V.ManifoldEdgesOn()\nC++: void ManifoldEdgesOn()\n\nTurn on/off the extraction of manifold edges.\n"},
  {(char*)"ManifoldEdgesOff", PyvtkFeatureEdges_ManifoldEdgesOff, METH_VARARGS,
   (char*)"V.ManifoldEdgesOff()\nC++: void ManifoldEdgesOff()\n\nTurn on/off the extraction of manifold edges.\n"},
  {(char*)"SetColoring", PyvtkFeatureEdges_SetColoring, METH_VARARGS,
   (char*)"V.SetColoring(int)\nC++: void SetColoring(int a)\n\nTurn on/off the coloring of edges by type.\n"},
  {(char*)"GetColoring", PyvtkFeatureEdges_GetColoring, METH_VARARGS,
   (char*)"V.GetColoring() -> int\nC++: int GetColoring()\n\nTurn on/off the coloring of edges by type.\n"},
  {(char*)"ColoringOn", PyvtkFeatureEdges_ColoringOn, METH_VARARGS,
   (char*)"V.ColoringOn()\nC++: void ColoringOn()\n\nTurn on/off the coloring of edges by type.\n"},
  {(char*)"ColoringOff", PyvtkFeatureEdges_ColoringOff, METH_VARARGS,
   (char*)"V.ColoringOff()\nC++: void ColoringOff()\n\nTurn on/off the coloring of edges by type.\n"},
  {(char*)"SetLocator", PyvtkFeatureEdges_SetLocator, METH_VARARGS,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkFeatureEdges_GetLocator, METH_VARARGS,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkFeatureEdges_CreateDefaultLocator, METH_VARARGS,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkFeatureEdges_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn MTime also considering the locator.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkFeatureEdges_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkFeatureEdges_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFeatureEdges_StaticNew()
{
  return vtkFeatureEdges::New();
}

PyObject *PyVTKClass_vtkFeatureEdgesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFeatureEdges_StaticNew,
    PyvtkFeatureEdges_Methods,
    "vtkFeatureEdges", modulename,
    NULL, NULL,
    PyvtkFeatureEdges_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFeatureEdges_Doc()
{
  static const char *docstring[] = {
    "vtkFeatureEdges - extract boundary, non-manifold, and/or sharp edges\nfrom polygonal data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkFeatureEdges is a filter to extract special types of edges from\ninput polygonal data. These edges are either 1) boundary (used by one\npolygon) or a line cell; 2) non-manifold (used by three or more\npolygons); 3) feature edges (edges used by two triangles and whose\ndihedral angle > FeatureAngle); or 4) manifold edges (edges used by\nexactly two polygons). These edges may be extracted in any\ncombi",
    "nation. Edges may also be \"colored\" (i.e., scalar values\nassigned) based on edge type. The cell coloring is assigned to the\ncell data of the extracted edges.\n\nCaveats:\n\nTo see the coloring of the liens you may have to set the ScalarMode\ninstance variable of the mapper to SetScalarModeToUseCellData().\n(This is only a problem if there are point data scalars.)\n\nSee Also:\n\nvtkExtractEdges\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFeatureEdges(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFeatureEdgesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFeatureEdges", o) != 0)
    {
    Py_DECREF(o);
    }

}

