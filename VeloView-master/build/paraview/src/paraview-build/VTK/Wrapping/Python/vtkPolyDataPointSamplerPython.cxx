// python wrapper for vtkPolyDataPointSampler
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyDataPointSampler.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyDataPointSampler(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyDataPointSamplerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPolyDataPointSampler_Doc();


static PyObject *
PyvtkPolyDataPointSampler_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyDataPointSampler::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataPointSampler::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataPointSampler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataPointSampler::NewInstance());

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
PyvtkPolyDataPointSampler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyDataPointSampler *tempr = vtkPolyDataPointSampler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMinValue() :
      op->vtkPolyDataPointSampler::GetDistanceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMaxValue() :
      op->vtkPolyDataPointSampler::GetDistanceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkPolyDataPointSampler::GetDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertexPoints() :
      op->vtkPolyDataPointSampler::GetGenerateVertexPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertexPoints(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateVertexPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexPointsOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexPointsOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateEdgePoints() :
      op->vtkPolyDataPointSampler::GetGenerateEdgePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateEdgePoints(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateEdgePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePointsOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePointsOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateInteriorPoints() :
      op->vtkPolyDataPointSampler::GetGenerateInteriorPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateInteriorPoints(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateInteriorPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateInteriorPointsOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateInteriorPointsOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkPolyDataPointSampler::GetGenerateVertices());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertices(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataPointSampler_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataPointSampler_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros for type information and printing.\n"},
  {(char*)"IsA", PyvtkPolyDataPointSampler_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkPolyDataPointSampler_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyDataPointSampler\nC++: vtkPolyDataPointSampler *NewInstance()\n\nStandard macros for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataPointSampler_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataPointSampler\nC++: vtkPolyDataPointSampler *SafeDownCast(vtkObject* o)\n\nStandard macros for type information and printing.\n"},
  {(char*)"SetDistance", PyvtkPolyDataPointSampler_SetDistance, METH_VARARGS,
   (char*)"V.SetDistance(float)\nC++: void SetDistance(double)\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetDistanceMinValue", PyvtkPolyDataPointSampler_GetDistanceMinValue, METH_VARARGS,
   (char*)"V.GetDistanceMinValue() -> float\nC++: double GetDistanceMinValue()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetDistanceMaxValue", PyvtkPolyDataPointSampler_GetDistanceMaxValue, METH_VARARGS,
   (char*)"V.GetDistanceMaxValue() -> float\nC++: double GetDistanceMaxValue()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetDistance", PyvtkPolyDataPointSampler_GetDistance, METH_VARARGS,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetGenerateVertexPoints", PyvtkPolyDataPointSampler_GetGenerateVertexPoints, METH_VARARGS,
   (char*)"V.GetGenerateVertexPoints() -> int\nC++: int GetGenerateVertexPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"SetGenerateVertexPoints", PyvtkPolyDataPointSampler_SetGenerateVertexPoints, METH_VARARGS,
   (char*)"V.SetGenerateVertexPoints(int)\nC++: void SetGenerateVertexPoints(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"GenerateVertexPointsOn", PyvtkPolyDataPointSampler_GenerateVertexPointsOn, METH_VARARGS,
   (char*)"V.GenerateVertexPointsOn()\nC++: void GenerateVertexPointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"GenerateVertexPointsOff", PyvtkPolyDataPointSampler_GenerateVertexPointsOff, METH_VARARGS,
   (char*)"V.GenerateVertexPointsOff()\nC++: void GenerateVertexPointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"GetGenerateEdgePoints", PyvtkPolyDataPointSampler_GetGenerateEdgePoints, METH_VARARGS,
   (char*)"V.GetGenerateEdgePoints() -> int\nC++: int GetGenerateEdgePoints()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"SetGenerateEdgePoints", PyvtkPolyDataPointSampler_SetGenerateEdgePoints, METH_VARARGS,
   (char*)"V.SetGenerateEdgePoints(int)\nC++: void SetGenerateEdgePoints(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateEdgePointsOn", PyvtkPolyDataPointSampler_GenerateEdgePointsOn, METH_VARARGS,
   (char*)"V.GenerateEdgePointsOn()\nC++: void GenerateEdgePointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateEdgePointsOff", PyvtkPolyDataPointSampler_GenerateEdgePointsOff, METH_VARARGS,
   (char*)"V.GenerateEdgePointsOff()\nC++: void GenerateEdgePointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GetGenerateInteriorPoints", PyvtkPolyDataPointSampler_GetGenerateInteriorPoints, METH_VARARGS,
   (char*)"V.GetGenerateInteriorPoints() -> int\nC++: int GetGenerateInteriorPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"SetGenerateInteriorPoints", PyvtkPolyDataPointSampler_SetGenerateInteriorPoints, METH_VARARGS,
   (char*)"V.SetGenerateInteriorPoints(int)\nC++: void SetGenerateInteriorPoints(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateInteriorPointsOn", PyvtkPolyDataPointSampler_GenerateInteriorPointsOn, METH_VARARGS,
   (char*)"V.GenerateInteriorPointsOn()\nC++: void GenerateInteriorPointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateInteriorPointsOff", PyvtkPolyDataPointSampler_GenerateInteriorPointsOff, METH_VARARGS,
   (char*)"V.GenerateInteriorPointsOff()\nC++: void GenerateInteriorPointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GetGenerateVertices", PyvtkPolyDataPointSampler_GetGenerateVertices, METH_VARARGS,
   (char*)"V.GetGenerateVertices() -> int\nC++: int GetGenerateVertices()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {(char*)"SetGenerateVertices", PyvtkPolyDataPointSampler_SetGenerateVertices, METH_VARARGS,
   (char*)"V.SetGenerateVertices(int)\nC++: void SetGenerateVertices(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {(char*)"GenerateVerticesOn", PyvtkPolyDataPointSampler_GenerateVerticesOn, METH_VARARGS,
   (char*)"V.GenerateVerticesOn()\nC++: void GenerateVerticesOn()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {(char*)"GenerateVerticesOff", PyvtkPolyDataPointSampler_GenerateVerticesOff, METH_VARARGS,
   (char*)"V.GenerateVerticesOff()\nC++: void GenerateVerticesOff()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataPointSampler_StaticNew()
{
  return vtkPolyDataPointSampler::New();
}

PyObject *PyVTKClass_vtkPolyDataPointSamplerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataPointSampler_StaticNew,
    PyvtkPolyDataPointSampler_Methods,
    "vtkPolyDataPointSampler", modulename,
    NULL, NULL,
    PyvtkPolyDataPointSampler_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataPointSampler_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataPointSampler - generate points from vtkPolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPolyDataPointSampler generates points from input vtkPolyData. The\npoints are placed approximately a specified distance apart.\n\nThis filter functions as follows. First, it regurgitates all input\npoints, then samples all lines, plus edges associated with the input\npolygons and triangle strips to produce edge points. Finally, the\ninteriors of polygons and triangle strips are subsampled to produce\n",
    "points.  All of these functiona can be enabled or disabled\nseparately. Note that this algorithm only approximately generates\npoints the specified distance apart. Generally the point density is\nfiner than requested.\n\nCaveats:\n\nPoint generation can be useful in a variety of applications. For\nexample, generating seed points for glyphing or streamline\ngeneration. Another useful application is generati",
    "ng points for\nimplicit modeling. In many cases implicit models can be more\nefficiently generated from points than from polygons or other\nprimitives.\n\nSee Also:\n\nvtkImplicitModeller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataPointSampler(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataPointSamplerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataPointSampler", o) != 0)
    {
    Py_DECREF(o);
    }

}

