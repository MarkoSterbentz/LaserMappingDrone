// python wrapper for vtkHierarchicalFractal
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalFractal.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalFractal(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalFractalNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
#endif

static const char **PyvtkHierarchicalFractal_Doc();


static PyObject *
PyvtkHierarchicalFractal_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalFractal::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalFractal::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalFractal *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalFractal::NewInstance());

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
PyvtkHierarchicalFractal_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalFractal *tempr = vtkHierarchicalFractal::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFractalValue(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetFractalValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetFractalValue() :
      op->vtkHierarchicalFractal::GetFractalValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkHierarchicalFractal::GetMaximumLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkHierarchicalFractal::GetDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevels(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetGhostLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevels() :
      op->vtkHierarchicalFractal::GetGhostLevels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GhostLevelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GhostLevelsOn();
      }
    else
      {
      op->vtkHierarchicalFractal::GhostLevelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GhostLevelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GhostLevelsOff();
      }
    else
      {
      op->vtkHierarchicalFractal::GhostLevelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkHierarchicalFractal::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkHierarchicalFractal::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateRectilinearGrids(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetGenerateRectilinearGrids(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRectilinearGrids() :
      op->vtkHierarchicalFractal::GetGenerateRectilinearGrids());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GenerateRectilinearGridsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRectilinearGridsOn();
      }
    else
      {
      op->vtkHierarchicalFractal::GenerateRectilinearGridsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GenerateRectilinearGridsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateRectilinearGridsOff();
      }
    else
      {
      op->vtkHierarchicalFractal::GenerateRectilinearGridsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoDimensional(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetTwoDimensional(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTwoDimensional() :
      op->vtkHierarchicalFractal::GetTwoDimensional());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_TwoDimensionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalOn();
      }
    else
      {
      op->vtkHierarchicalFractal::TwoDimensionalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_TwoDimensionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalOff();
      }
    else
      {
      op->vtkHierarchicalFractal::TwoDimensionalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAsymetric(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetAsymetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetAsymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAsymetric() :
      op->vtkHierarchicalFractal::GetAsymetric());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_SetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOverlap(temp0);
      }
    else
      {
      op->vtkHierarchicalFractal::SetOverlap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalFractal_GetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalFractal *op = static_cast<vtkHierarchicalFractal *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOverlap() :
      op->vtkHierarchicalFractal::GetOverlap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalFractal_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalFractal_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalFractal_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalFractal_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalFractal\nC++: vtkHierarchicalFractal *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalFractal_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalFractal\nC++: vtkHierarchicalFractal *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFractalValue", PyvtkHierarchicalFractal_SetFractalValue, METH_VARARGS,
   (char*)"V.SetFractalValue(float)\nC++: void SetFractalValue(float a)\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {(char*)"GetFractalValue", PyvtkHierarchicalFractal_GetFractalValue, METH_VARARGS,
   (char*)"V.GetFractalValue() -> float\nC++: float GetFractalValue()\n\nEssentially the iso surface value. The fractal array is scaled to\nmap this value to 0.5 for use as a volume fraction.\n"},
  {(char*)"SetMaximumLevel", PyvtkHierarchicalFractal_SetMaximumLevel, METH_VARARGS,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(int a)\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {(char*)"GetMaximumLevel", PyvtkHierarchicalFractal_GetMaximumLevel, METH_VARARGS,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {(char*)"SetDimensions", PyvtkHierarchicalFractal_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(int)\nC++: void SetDimensions(int a)\n\nXYZ dimensions of cells.\n"},
  {(char*)"GetDimensions", PyvtkHierarchicalFractal_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> int\nC++: int GetDimensions()\n\nXYZ dimensions of cells.\n"},
  {(char*)"SetGhostLevels", PyvtkHierarchicalFractal_SetGhostLevels, METH_VARARGS,
   (char*)"V.SetGhostLevels(int)\nC++: void SetGhostLevels(int a)\n\nFor testing ghost levels.\n"},
  {(char*)"GetGhostLevels", PyvtkHierarchicalFractal_GetGhostLevels, METH_VARARGS,
   (char*)"V.GetGhostLevels() -> int\nC++: int GetGhostLevels()\n\nFor testing ghost levels.\n"},
  {(char*)"GhostLevelsOn", PyvtkHierarchicalFractal_GhostLevelsOn, METH_VARARGS,
   (char*)"V.GhostLevelsOn()\nC++: void GhostLevelsOn()\n\nFor testing ghost levels.\n"},
  {(char*)"GhostLevelsOff", PyvtkHierarchicalFractal_GhostLevelsOff, METH_VARARGS,
   (char*)"V.GhostLevelsOff()\nC++: void GhostLevelsOff()\n\nFor testing ghost levels.\n"},
  {(char*)"SetTimeStep", PyvtkHierarchicalFractal_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nDummy time-step\n"},
  {(char*)"GetTimeStep", PyvtkHierarchicalFractal_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nDummy time-step\n"},
  {(char*)"GetTimeStepRange", PyvtkHierarchicalFractal_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetGenerateRectilinearGrids", PyvtkHierarchicalFractal_SetGenerateRectilinearGrids, METH_VARARGS,
   (char*)"V.SetGenerateRectilinearGrids(int)\nC++: void SetGenerateRectilinearGrids(int a)\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GetGenerateRectilinearGrids", PyvtkHierarchicalFractal_GetGenerateRectilinearGrids, METH_VARARGS,
   (char*)"V.GetGenerateRectilinearGrids() -> int\nC++: int GetGenerateRectilinearGrids()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GenerateRectilinearGridsOn", PyvtkHierarchicalFractal_GenerateRectilinearGridsOn, METH_VARARGS,
   (char*)"V.GenerateRectilinearGridsOn()\nC++: void GenerateRectilinearGridsOn()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"GenerateRectilinearGridsOff", PyvtkHierarchicalFractal_GenerateRectilinearGridsOff, METH_VARARGS,
   (char*)"V.GenerateRectilinearGridsOff()\nC++: void GenerateRectilinearGridsOff()\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {(char*)"SetTwoDimensional", PyvtkHierarchicalFractal_SetTwoDimensional, METH_VARARGS,
   (char*)"V.SetTwoDimensional(int)\nC++: void SetTwoDimensional(int a)\n\nMake a 2D data set to test.\n"},
  {(char*)"GetTwoDimensional", PyvtkHierarchicalFractal_GetTwoDimensional, METH_VARARGS,
   (char*)"V.GetTwoDimensional() -> int\nC++: int GetTwoDimensional()\n\nMake a 2D data set to test.\n"},
  {(char*)"TwoDimensionalOn", PyvtkHierarchicalFractal_TwoDimensionalOn, METH_VARARGS,
   (char*)"V.TwoDimensionalOn()\nC++: void TwoDimensionalOn()\n\nMake a 2D data set to test.\n"},
  {(char*)"TwoDimensionalOff", PyvtkHierarchicalFractal_TwoDimensionalOff, METH_VARARGS,
   (char*)"V.TwoDimensionalOff()\nC++: void TwoDimensionalOff()\n\nMake a 2D data set to test.\n"},
  {(char*)"SetAsymetric", PyvtkHierarchicalFractal_SetAsymetric, METH_VARARGS,
   (char*)"V.SetAsymetric(int)\nC++: void SetAsymetric(int a)\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {(char*)"GetAsymetric", PyvtkHierarchicalFractal_GetAsymetric, METH_VARARGS,
   (char*)"V.GetAsymetric() -> int\nC++: int GetAsymetric()\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {(char*)"SetOverlap", PyvtkHierarchicalFractal_SetOverlap, METH_VARARGS,
   (char*)"V.SetOverlap(int)\nC++: void SetOverlap(int a)\n\nTest with lower levels overlapping higher levels. This is what I\nassume flash is like.\n"},
  {(char*)"GetOverlap", PyvtkHierarchicalFractal_GetOverlap, METH_VARARGS,
   (char*)"V.GetOverlap() -> int\nC++: int GetOverlap()\n\nTest with lower levels overlapping higher levels. This is what I\nassume flash is like.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalFractal_StaticNew()
{
  return vtkHierarchicalFractal::New();
}

PyObject *PyVTKClass_vtkHierarchicalFractalNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalFractal_StaticNew,
    PyvtkHierarchicalFractal_Methods,
    "vtkHierarchicalFractal", modulename,
    NULL, NULL,
    PyvtkHierarchicalFractal_Doc(),
    PyVTKClass_vtkCompositeDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalFractal_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalFractal - A source to test AMR data object.\n\n",
    "Superclass: vtkCompositeDataSetAlgorithm\n\n",
    "vtkHierarchicalFractal is a collection of uniform grids.  All have\nthe same dimensions. Each block has a different origin and spacing. \nIt uses mandelbrot to create cell data. I scale the fractal array to\nlook like a volme fraction. I may also add block id and level as\nextra cell arrays. If GenerateRectilinearGrids is true then this\nfilter outputs vtkHierarchicalBoxDataSet otherwise it generates a",
    "\nvtkMultiBlockDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalFractal(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalFractalNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalFractal", o) != 0)
    {
    Py_DECREF(o);
    }

}

