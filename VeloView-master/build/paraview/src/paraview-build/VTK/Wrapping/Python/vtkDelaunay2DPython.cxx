// python wrapper for vtkDelaunay2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDelaunay2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDelaunay2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDelaunay2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDelaunay2D_Doc();


static PyObject *
PyvtkDelaunay2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDelaunay2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelaunay2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDelaunay2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelaunay2D::NewInstance());

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
PyvtkDelaunay2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDelaunay2D *tempr = vtkDelaunay2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

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
      op->vtkDelaunay2D::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkDelaunay2D::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlpha(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAlphaMinValue() :
      op->vtkDelaunay2D::GetAlphaMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAlphaMaxValue() :
      op->vtkDelaunay2D::GetAlphaMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkDelaunay2D::GetAlpha());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkDelaunay2D::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkDelaunay2D::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkDelaunay2D::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkDelaunay2D::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkDelaunay2D::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkDelaunay2D::GetOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundingTriangulation(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetBoundingTriangulation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoundingTriangulation() :
      op->vtkDelaunay2D::GetBoundingTriangulation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_BoundingTriangulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundingTriangulationOn();
      }
    else
      {
      op->vtkDelaunay2D::BoundingTriangulationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_BoundingTriangulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundingTriangulationOff();
      }
    else
      {
      op->vtkDelaunay2D::BoundingTriangulationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkDelaunay2D::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetProjectionPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPlaneMode(temp0);
      }
    else
      {
      op->vtkDelaunay2D::SetProjectionPlaneMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetProjectionPlaneModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneModeMinValue() :
      op->vtkDelaunay2D::GetProjectionPlaneModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetProjectionPlaneModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneModeMaxValue() :
      op->vtkDelaunay2D::GetProjectionPlaneModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetProjectionPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneMode() :
      op->vtkDelaunay2D::GetProjectionPlaneMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDelaunay2D_Methods[] = {
  {(char*)"GetClassName", PyvtkDelaunay2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDelaunay2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDelaunay2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDelaunay2D\nC++: vtkDelaunay2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDelaunay2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDelaunay2D\nC++: vtkDelaunay2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceData", PyvtkDelaunay2D_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *)\n\nSpecify the source object used to specify constrained edges and\nloops. (This is optional.) If set, and lines/polygons are\ndefined, a constrained triangulation is created. The\nlines/polygons are assumed to reference points in the input point\nset (i.e. point ids are identical in the input and source). Note\nthat this method does not connect the pipeline. See\nSetSourceConnection for connecting the pipeline.\n"},
  {(char*)"SetSourceConnection", PyvtkDelaunay2D_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to specify constrained edges and\nloops. (This is optional.) If set, and lines/polygons are\ndefined, a constrained triangulation is created. The\nlines/polygons are assumed to reference points in the input point\nset (i.e. point ids are identical in the input and source). New\nstyle. This method is equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {(char*)"GetSource", PyvtkDelaunay2D_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nGet a pointer to the source object.\n"},
  {(char*)"SetAlpha", PyvtkDelaunay2D_SetAlpha, METH_VARARGS,
   (char*)"V.SetAlpha(float)\nC++: void SetAlpha(double)\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges or triangles\ncontained within a sphere centered at mesh vertices will be\noutput. Otherwise, only triangles will be output.\n"},
  {(char*)"GetAlphaMinValue", PyvtkDelaunay2D_GetAlphaMinValue, METH_VARARGS,
   (char*)"V.GetAlphaMinValue() -> float\nC++: double GetAlphaMinValue()\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges or triangles\ncontained within a sphere centered at mesh vertices will be\noutput. Otherwise, only triangles will be output.\n"},
  {(char*)"GetAlphaMaxValue", PyvtkDelaunay2D_GetAlphaMaxValue, METH_VARARGS,
   (char*)"V.GetAlphaMaxValue() -> float\nC++: double GetAlphaMaxValue()\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges or triangles\ncontained within a sphere centered at mesh vertices will be\noutput. Otherwise, only triangles will be output.\n"},
  {(char*)"GetAlpha", PyvtkDelaunay2D_GetAlpha, METH_VARARGS,
   (char*)"V.GetAlpha() -> float\nC++: double GetAlpha()\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges or triangles\ncontained within a sphere centered at mesh vertices will be\noutput. Otherwise, only triangles will be output.\n"},
  {(char*)"SetTolerance", PyvtkDelaunay2D_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"GetToleranceMinValue", PyvtkDelaunay2D_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkDelaunay2D_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"GetTolerance", PyvtkDelaunay2D_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"SetOffset", PyvtkDelaunay2D_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double)\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"GetOffsetMinValue", PyvtkDelaunay2D_GetOffsetMinValue, METH_VARARGS,
   (char*)"V.GetOffsetMinValue() -> float\nC++: double GetOffsetMinValue()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"GetOffsetMaxValue", PyvtkDelaunay2D_GetOffsetMaxValue, METH_VARARGS,
   (char*)"V.GetOffsetMaxValue() -> float\nC++: double GetOffsetMaxValue()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"GetOffset", PyvtkDelaunay2D_GetOffset, METH_VARARGS,
   (char*)"V.GetOffset() -> float\nC++: double GetOffset()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"SetBoundingTriangulation", PyvtkDelaunay2D_SetBoundingTriangulation, METH_VARARGS,
   (char*)"V.SetBoundingTriangulation(int)\nC++: void SetBoundingTriangulation(int a)\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"GetBoundingTriangulation", PyvtkDelaunay2D_GetBoundingTriangulation, METH_VARARGS,
   (char*)"V.GetBoundingTriangulation() -> int\nC++: int GetBoundingTriangulation()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"BoundingTriangulationOn", PyvtkDelaunay2D_BoundingTriangulationOn, METH_VARARGS,
   (char*)"V.BoundingTriangulationOn()\nC++: void BoundingTriangulationOn()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"BoundingTriangulationOff", PyvtkDelaunay2D_BoundingTriangulationOff, METH_VARARGS,
   (char*)"V.BoundingTriangulationOff()\nC++: void BoundingTriangulationOff()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"SetTransform", PyvtkDelaunay2D_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\n\nSet / get the transform which is applied to points to generate a\n2D problem.  This maps a 3D dataset into a 2D dataset where\ntriangulation can be done on the XY plane.  The points are\ntransformed and triangulated.  The topology of triangulated\npoints is used as the output topology.  The output points are the\noriginal (untransformed) points.  The transform can be any\nsubclass of vtkAbstractTransform (thus it does not need to be a\nlinear or invertible transform).\n"},
  {(char*)"GetTransform", PyvtkDelaunay2D_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nSet / get the transform which is applied to points to generate a\n2D problem.  This maps a 3D dataset into a 2D dataset where\ntriangulation can be done on the XY plane.  The points are\ntransformed and triangulated.  The topology of triangulated\npoints is used as the output topology.  The output points are the\noriginal (untransformed) points.  The transform can be any\nsubclass of vtkAbstractTransform (thus it does not need to be a\nlinear or invertible transform).\n"},
  {(char*)"SetProjectionPlaneMode", PyvtkDelaunay2D_SetProjectionPlaneMode, METH_VARARGS,
   (char*)"V.SetProjectionPlaneMode(int)\nC++: void SetProjectionPlaneMode(int)\n\nDefine\n"},
  {(char*)"GetProjectionPlaneModeMinValue", PyvtkDelaunay2D_GetProjectionPlaneModeMinValue, METH_VARARGS,
   (char*)"V.GetProjectionPlaneModeMinValue() -> int\nC++: int GetProjectionPlaneModeMinValue()\n\nDefine\n"},
  {(char*)"GetProjectionPlaneModeMaxValue", PyvtkDelaunay2D_GetProjectionPlaneModeMaxValue, METH_VARARGS,
   (char*)"V.GetProjectionPlaneModeMaxValue() -> int\nC++: int GetProjectionPlaneModeMaxValue()\n\nDefine\n"},
  {(char*)"GetProjectionPlaneMode", PyvtkDelaunay2D_GetProjectionPlaneMode, METH_VARARGS,
   (char*)"V.GetProjectionPlaneMode() -> int\nC++: int GetProjectionPlaneMode()\n\nDefine\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDelaunay2D_StaticNew()
{
  return vtkDelaunay2D::New();
}

PyObject *PyVTKClass_vtkDelaunay2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDelaunay2D_StaticNew,
    PyvtkDelaunay2D_Methods,
    "vtkDelaunay2D", modulename,
    NULL, NULL,
    PyvtkDelaunay2D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDelaunay2D_Doc()
{
  static const char *docstring[] = {
    "vtkDelaunay2D - create 2D Delaunay triangulation of input points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDelaunay2D is a filter that constructs a 2D Delaunay triangulation\nfrom a list of input points. These points may be represented by any\ndataset of type vtkPointSet and subclasses. The output of the filter\nis a polygonal dataset. Usually the output is a triangle mesh, but if\na non-zero alpha distance value is specified (called the \"alpha\"\nvalue), then only triangles, edges, and vertices laying wi",
    "thin the\nalpha radius are output. In other words, non-zero alpha values may\nresult in arbitrary combinations of triangles, lines, and vertices.\n(The notion of alpha value is derived from Edelsbrunner's work on \"alpha\nshapes\".) Also, it is possible to generate \"constrained\ntriangulations\" using this filter. A constrained triangulation is one\nwhere edges and loops (i.e., polygons) can be defined and",
    " the\ntriangulation will preserve them (read on for more information).\n\nThe 2D Delaunay triangulation is defined as the triangulation that\nsatisfies the Delaunay criterion for n-dimensional simplexes (in this\ncase n=2 and the simplexes are triangles). This criterion states that\na circumsphere of each simplex in a triangulation contains only the\nn+1 defining points of the simplex. (See \"The Visualiz",
    "ation Toolkit\"\ntext for more information.) In two dimensions, this translates into\nan optimal triangulation. That is, the maximum interior angle of any\ntriangle is less than or equal to that of any possible triangulation.\n\nDelaunay triangulations are used to build topological structures from\nunorganized (or unstructured) points. The input to this filter is a\nlist of points specified in 3D, even th",
    "ough the triangulation is 2D.\nThus the triangulation is constructed in the x-y plane, and the z\ncoordinate is ignored (although carried through to the output). If\nyou desire to triangulate in a different plane, you can use the\nvtkTransformFilter to transform the points into and out of the x-y\nplane or you can specify a transform to the Delaunay2D directly.  In\nthe latter case, the input points are",
    " transformed, the transformed\npoints are triangulated, and the output will use the triangulated\ntopology for the original (non-transformed) points.  This avoids\ntransforming the data back as would be required when using the\nvtkTransformFilter method.  Specifying a transform directly also\nallows any transform to be used: rigid, non-rigid, non-invertible,\netc.\n\nIf an input transform is used, then al",
    "pha values are applied (for the\nmost part) in the original data space.  The exception is when\nBoundingTriangulation is on.  In this case, alpha values are applied\nin the original data space unless a cell uses a bounding vertex.\n\nThe Delaunay triangulation can be numerically sensitive in some\ncases. To prevent problems, try to avoid injecting points that will\nresult in triangles with bad aspect rat",
    "ios (1000:1 or greater). In\npractice this means inserting points that are \"widely dispersed\", and\nenables smooth transition of triangle sizes throughout the mesh. (You\nmay even want to add extra points to create a better point\ndistribution.) If numerical problems are present, you will see a\nwarning message to this effect at the end of the triangulation\nprocess.\n\nTo create constrained meshes, you m",
    "ust define an additional input.\nThis input is an instance of vtkPolyData which contains lines,\npolylines, and/or polygons that define constrained edges and loops.\nOnly the topology of (lines and polygons) from this second input are\nused.  The topology is assumed to reference points in the input point\nset (the one to be triangulated). In other words, the lines and\npolygons use point ids from the fi",
    "rst input point set. Lines and\npolylines found in the input will be mesh edges in the output.\nPolygons define a loop with inside and outside regions. The inside of\nthe polygon is determined by using the right-hand-rule, i.e., looking\ndown the z-axis a polygon should be ordered counter-clockwise. Holes\nin a polygon should be ordered clockwise. If you choose to create a\nconstrained triangulation, th",
    "e final mesh may not satisfy the\nDelaunay criterion. (Noted: the lines/polygon edges must not\nintersect when projected onto the 2D plane.  It may not be possible\nto recover all edges due to not enough points in the triangulation,\nor poorly defined edges (coincident or excessively long).  The form\nof the lines or polygons is a list of point ids that correspond to\nthe input point ids used to generat",
    "e the triangulation.)\n\nIf an input transform is used, constraints are defined in the\n\"transformed\" space.  So when the right hand rule is used for a\npolygon constraint, that operation is applied using the transformed\npoints.  Since the input transform can be any transformation (rigid\nor non-rigid), care must be taken in constructing constraints when an\ninput transform is used.\n\nCaveats:\n\nPoints ar",
    "ranged on a regular lattice (termed degenerate cases) can be\ntriangulated in more than one way (at least according to the Delaunay\ncriterion). The choice of triangulation (as implemented by this\nalgorithm) depends on the order of the input points. The first three\npoints will form a triangle; other degenerate points will not break\nthis triangle.\n\nPoints that are coincident (or nearly so) may be dis",
    "carded by the\nalgorithm. This is because the Delaunay triangulation requires unique\ninput points. You can control the definition of coincidence with the\n\"Tolerance\" instance variable.\n\nThe output of the Delaunay triangulation is supposedly a convex hull.\nIn certain cases this implementation may not generate the convex\nhull. This behavior can be controlled by the Offset instance\nvariable. Offset is",
    " a multiplier used to control the size of the\ninitial triangulation. The larger the offset value, the more likely\nyou will generate a convex hull; but the more likely you are to see\nnumerical problems.\n\nSee Also:\n\nvtkDelaunay3D vtkTransformFilter vtkGaussianSplatter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDelaunay2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDelaunay2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDelaunay2D", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_DELAUNAY_XY_PLANE", 0 },
        { "VTK_SET_TRANSFORM_PLANE", 1 },
        { "VTK_BEST_FITTING_PLANE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

