// python wrapper for vtkProjectedTerrainPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProjectedTerrainPath.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProjectedTerrainPath(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProjectedTerrainPathNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkProjectedTerrainPath_Doc();


static PyObject *
PyvtkProjectedTerrainPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProjectedTerrainPath::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTerrainPath::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProjectedTerrainPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTerrainPath::NewInstance());

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
PyvtkProjectedTerrainPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProjectedTerrainPath *tempr = vtkProjectedTerrainPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProjectedTerrainPath::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionMode(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionModeMinValue() :
      op->vtkProjectedTerrainPath::GetProjectionModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionModeMaxValue() :
      op->vtkProjectedTerrainPath::GetProjectionModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionMode() :
      op->vtkProjectedTerrainPath::GetProjectionMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionModeToSimple();
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionModeToSimple();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToNonOccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToNonOccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionModeToNonOccluded();
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionModeToNonOccluded();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToHug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToHug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionModeToHug();
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionModeToHug();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeightOffset(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetHeightOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightOffset() :
      op->vtkProjectedTerrainPath::GetHeightOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetHeightTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeightTolerance(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetHeightTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightToleranceMinValue() :
      op->vtkProjectedTerrainPath::GetHeightToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightToleranceMaxValue() :
      op->vtkProjectedTerrainPath::GetHeightToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHeightTolerance() :
      op->vtkProjectedTerrainPath::GetHeightTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetMaximumNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfLines(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetMaximumNumberOfLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLinesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLinesMinValue() :
      op->vtkProjectedTerrainPath::GetMaximumNumberOfLinesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLinesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLinesMaxValue() :
      op->vtkProjectedTerrainPath::GetMaximumNumberOfLinesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLines() :
      op->vtkProjectedTerrainPath::GetMaximumNumberOfLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedTerrainPath_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedTerrainPath_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"IsA", PyvtkProjectedTerrainPath_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"NewInstance", PyvtkProjectedTerrainPath_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProjectedTerrainPath\nC++: vtkProjectedTerrainPath *NewInstance()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SafeDownCast", PyvtkProjectedTerrainPath_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedTerrainPath\nC++: vtkProjectedTerrainPath *SafeDownCast(vtkObject* o)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SetSourceData", PyvtkProjectedTerrainPath_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkImageData)\nC++: void SetSourceData(vtkImageData *source)\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected. Note: This assigns a data object as the\ninput terrain. To establish a pipeline connection, use\nSetSourceConnection() method.\n"},
  {(char*)"GetSource", PyvtkProjectedTerrainPath_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkImageData\nC++: vtkImageData *GetSource()\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected. Note: This assigns a data object as the\ninput terrain. To establish a pipeline connection, use\nSetSourceConnection() method.\n"},
  {(char*)"SetSourceConnection", PyvtkProjectedTerrainPath_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected. Note: vtkImageData* is required\n"},
  {(char*)"SetProjectionMode", PyvtkProjectedTerrainPath_SetProjectionMode, METH_VARARGS,
   (char*)"V.SetProjectionMode(int)\nC++: void SetProjectionMode(int)\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"GetProjectionModeMinValue", PyvtkProjectedTerrainPath_GetProjectionModeMinValue, METH_VARARGS,
   (char*)"V.GetProjectionModeMinValue() -> int\nC++: int GetProjectionModeMinValue()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"GetProjectionModeMaxValue", PyvtkProjectedTerrainPath_GetProjectionModeMaxValue, METH_VARARGS,
   (char*)"V.GetProjectionModeMaxValue() -> int\nC++: int GetProjectionModeMaxValue()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"GetProjectionMode", PyvtkProjectedTerrainPath_GetProjectionMode, METH_VARARGS,
   (char*)"V.GetProjectionMode() -> int\nC++: int GetProjectionMode()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetProjectionModeToSimple", PyvtkProjectedTerrainPath_SetProjectionModeToSimple, METH_VARARGS,
   (char*)"V.SetProjectionModeToSimple()\nC++: void SetProjectionModeToSimple()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetProjectionModeToNonOccluded", PyvtkProjectedTerrainPath_SetProjectionModeToNonOccluded, METH_VARARGS,
   (char*)"V.SetProjectionModeToNonOccluded()\nC++: void SetProjectionModeToNonOccluded()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetProjectionModeToHug", PyvtkProjectedTerrainPath_SetProjectionModeToHug, METH_VARARGS,
   (char*)"V.SetProjectionModeToHug()\nC++: void SetProjectionModeToHug()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetHeightOffset", PyvtkProjectedTerrainPath_SetHeightOffset, METH_VARARGS,
   (char*)"V.SetHeightOffset(float)\nC++: void SetHeightOffset(double a)\n\nThis is the height above (or below) the terrain that the\nprojected path should be. Positive values indicate distances\nabove the terrain; negative values indicate distances below the\nterrain.\n"},
  {(char*)"GetHeightOffset", PyvtkProjectedTerrainPath_GetHeightOffset, METH_VARARGS,
   (char*)"V.GetHeightOffset() -> float\nC++: double GetHeightOffset()\n\nThis is the height above (or below) the terrain that the\nprojected path should be. Positive values indicate distances\nabove the terrain; negative values indicate distances below the\nterrain.\n"},
  {(char*)"SetHeightTolerance", PyvtkProjectedTerrainPath_SetHeightTolerance, METH_VARARGS,
   (char*)"V.SetHeightTolerance(float)\nC++: void SetHeightTolerance(double)\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"GetHeightToleranceMinValue", PyvtkProjectedTerrainPath_GetHeightToleranceMinValue, METH_VARARGS,
   (char*)"V.GetHeightToleranceMinValue() -> float\nC++: double GetHeightToleranceMinValue()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"GetHeightToleranceMaxValue", PyvtkProjectedTerrainPath_GetHeightToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetHeightToleranceMaxValue() -> float\nC++: double GetHeightToleranceMaxValue()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"GetHeightTolerance", PyvtkProjectedTerrainPath_GetHeightTolerance, METH_VARARGS,
   (char*)"V.GetHeightTolerance() -> float\nC++: double GetHeightTolerance()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"SetMaximumNumberOfLines", PyvtkProjectedTerrainPath_SetMaximumNumberOfLines, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfLines(int)\nC++: void SetMaximumNumberOfLines(vtkIdType)\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {(char*)"GetMaximumNumberOfLinesMinValue", PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMinValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfLinesMinValue() -> int\nC++: vtkIdType GetMaximumNumberOfLinesMinValue()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {(char*)"GetMaximumNumberOfLinesMaxValue", PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMaxValue, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfLinesMaxValue() -> int\nC++: vtkIdType GetMaximumNumberOfLinesMaxValue()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {(char*)"GetMaximumNumberOfLines", PyvtkProjectedTerrainPath_GetMaximumNumberOfLines, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfLines() -> int\nC++: vtkIdType GetMaximumNumberOfLines()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedTerrainPath_StaticNew()
{
  return vtkProjectedTerrainPath::New();
}

PyObject *PyVTKClass_vtkProjectedTerrainPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedTerrainPath_StaticNew,
    PyvtkProjectedTerrainPath_Methods,
    "vtkProjectedTerrainPath", modulename,
    NULL, NULL,
    PyvtkProjectedTerrainPath_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "SIMPLE_PROJECTION", vtkProjectedTerrainPath::SIMPLE_PROJECTION },
          { "NONOCCLUDED_PROJECTION", vtkProjectedTerrainPath::NONOCCLUDED_PROJECTION },
          { "HUG_PROJECTION", vtkProjectedTerrainPath::HUG_PROJECTION },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkProjectedTerrainPath_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedTerrainPath - project a polyline onto a terrain\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkProjectedTerrainPath projects an input polyline onto a terrain.\n(The terrain is defined by a 2D height image and is the second input\nto the filter.) The polyline projection is controlled via several\nmodes as follows. 1) Simple mode projects the polyline points onto\nthe terrain, taking into account the height offset instance variable.\n2) Non-occluded mode insures that no parts of the polyline ar",
    "e\noccluded by the terrain (e.g. a line passes through a mountain). This\nmay require recursive subdivision of the polyline. 3) Hug mode\ninsures that the polyine points remain within a constant distance\nfrom the surface. This may also require recursive subdivision of the\npolyline. Note that both non-occluded mode and hug mode also take\ninto account the height offset, so it is possible to create path",
    "s\nthat hug terrain a certain distance above it. To use this filter,\ndefine two inputs: 1) a polyline, and 2) an image whose scalar values\nrepresent a height field. Then specify the mode, and the height\noffset to use.\n\nAn description of the algorithm is as follows. The filter begins by\nprojecting the polyline points to the image (offset by the specified\nheight offset).  If the mode is non-occluded ",
    "or hug, then the maximum\nerror along each line segment is computed and placed into a priority\nqueue. Each line segment is then split at the point of maximum error,\nand the two new line segments are evaluated for maximum error. This\nprocess continues until the line is not occluded by the terrain\n(non-occluded mode) or satisfies the error on variation from the\nsurface (hug mode). (Note this process ",
    "is repeated for each polyline\nin the input. Also, the maximum error is computed in two parts: a\nmaximum positive error and maximum negative error. If the polyline is\nabove the terrain--i.e., the height offset is positive--in\nnon-occluded or hug mode all negative errors are eliminated. If the\npolyline is below the terrain--i.e., the height offset is\nnegative--in non-occluded or hug mode all positiv",
    "e errors are\neliminated.)\n\nCaveats:\n\nThis algorithm requires the entire input image to be in memory, hence\nit may not work for extremely large images.\n\nThe input height image is assumed to be positioned in the x-y plane\nso the scalar value is the z-coordinate, height value.\n\nA priority queue is used so that the 1) the total number of line\nsegments can be controlled, and 2) the algorithm can termin",
    "ate when\nthe errors in the queue are less than the specified error tolerance.\n\nSee Also:\n\nvtkGreedyTerrainDecimation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedTerrainPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedTerrainPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedTerrainPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

