// python wrapper for vtkTessellatorFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTessellatorFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTessellatorFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTessellatorFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkTessellatorFilter_Doc();


static PyObject *
PyvtkTessellatorFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTessellatorFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTessellatorFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTessellatorFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTessellatorFilter::NewInstance());

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
PyvtkTessellatorFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTessellatorFilter *tempr = vtkTessellatorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkStreamingTessellator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingTessellator"))
    {
    if (ap.IsBound())
      {
      op->SetTessellator(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetTessellator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamingTessellator *tempr = (ap.IsBound() ?
      op->GetTessellator() :
      op->vtkTessellatorFilter::GetTessellator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetSubdivider(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivider");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkDataSetEdgeSubdivisionCriterion *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetEdgeSubdivisionCriterion"))
    {
    if (ap.IsBound())
      {
      op->SetSubdivider(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetSubdivider(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetSubdivider(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivider");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->GetSubdivider() :
      op->vtkTessellatorFilter::GetSubdivider());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTessellatorFilter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetOutputDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDimension(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetOutputDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionMinValue() :
      op->vtkTessellatorFilter::GetOutputDimensionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionMaxValue() :
      op->vtkTessellatorFilter::GetOutputDimensionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimension() :
      op->vtkTessellatorFilter::GetOutputDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetMaximumNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkTessellatorFilter::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetChordError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChordError(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetChordError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetChordError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetChordError() :
      op->vtkTessellatorFilter::GetChordError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_ResetFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFieldCriteria();
      }
    else
      {
      op->vtkTessellatorFilter::ResetFieldCriteria();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetFieldCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFieldCriterion(temp0, temp1);
      }
    else
      {
      op->vtkTessellatorFilter::SetFieldCriterion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkTessellatorFilter::GetMergePoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergePoints(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetMergePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOn();
      }
    else
      {
      op->vtkTessellatorFilter::MergePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOff();
      }
    else
      {
      op->vtkTessellatorFilter::MergePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTessellatorFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTessellatorFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTessellatorFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTessellatorFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTessellatorFilter\nC++: vtkTessellatorFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTessellatorFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTessellatorFilter\nC++: vtkTessellatorFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTessellator", PyvtkTessellatorFilter_SetTessellator, METH_VARARGS,
   (char*)"V.SetTessellator(vtkStreamingTessellator)\nC++: virtual void SetTessellator(vtkStreamingTessellator *)\n\n"},
  {(char*)"GetTessellator", PyvtkTessellatorFilter_GetTessellator, METH_VARARGS,
   (char*)"V.GetTessellator() -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *GetTessellator()\n\n"},
  {(char*)"SetSubdivider", PyvtkTessellatorFilter_SetSubdivider, METH_VARARGS,
   (char*)"V.SetSubdivider(vtkDataSetEdgeSubdivisionCriterion)\nC++: virtual void SetSubdivider(\n    vtkDataSetEdgeSubdivisionCriterion *)\n\n"},
  {(char*)"GetSubdivider", PyvtkTessellatorFilter_GetSubdivider, METH_VARARGS,
   (char*)"V.GetSubdivider() -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *GetSubdivider()\n\n"},
  {(char*)"GetMTime", PyvtkTessellatorFilter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\n"},
  {(char*)"SetOutputDimension", PyvtkTessellatorFilter_SetOutputDimension, METH_VARARGS,
   (char*)"V.SetOutputDimension(int)\nC++: void SetOutputDimension(int)\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"GetOutputDimensionMinValue", PyvtkTessellatorFilter_GetOutputDimensionMinValue, METH_VARARGS,
   (char*)"V.GetOutputDimensionMinValue() -> int\nC++: int GetOutputDimensionMinValue()\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"GetOutputDimensionMaxValue", PyvtkTessellatorFilter_GetOutputDimensionMaxValue, METH_VARARGS,
   (char*)"V.GetOutputDimensionMaxValue() -> int\nC++: int GetOutputDimensionMaxValue()\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"GetOutputDimension", PyvtkTessellatorFilter_GetOutputDimension, METH_VARARGS,
   (char*)"V.GetOutputDimension() -> int\nC++: int GetOutputDimension()\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"SetMaximumNumberOfSubdivisions", PyvtkTessellatorFilter_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfSubdivisions(int)\nC++: virtual void SetMaximumNumberOfSubdivisions(\n    int num_subdiv_in)\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"GetMaximumNumberOfSubdivisions", PyvtkTessellatorFilter_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"SetChordError", PyvtkTessellatorFilter_SetChordError, METH_VARARGS,
   (char*)"V.SetChordError(float)\nC++: virtual void SetChordError(double ce)\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"GetChordError", PyvtkTessellatorFilter_GetChordError, METH_VARARGS,
   (char*)"V.GetChordError() -> float\nC++: double GetChordError()\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"ResetFieldCriteria", PyvtkTessellatorFilter_ResetFieldCriteria, METH_VARARGS,
   (char*)"V.ResetFieldCriteria()\nC++: virtual void ResetFieldCriteria()\n\nThese methods are for the ParaView client.\n"},
  {(char*)"SetFieldCriterion", PyvtkTessellatorFilter_SetFieldCriterion, METH_VARARGS,
   (char*)"V.SetFieldCriterion(int, float)\nC++: virtual void SetFieldCriterion(int field, double chord)\n\nThese methods are for the ParaView client.\n"},
  {(char*)"GetMergePoints", PyvtkTessellatorFilter_GetMergePoints, METH_VARARGS,
   (char*)"V.GetMergePoints() -> int\nC++: int GetMergePoints()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {(char*)"SetMergePoints", PyvtkTessellatorFilter_SetMergePoints, METH_VARARGS,
   (char*)"V.SetMergePoints(int)\nC++: void SetMergePoints(int a)\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {(char*)"MergePointsOn", PyvtkTessellatorFilter_MergePointsOn, METH_VARARGS,
   (char*)"V.MergePointsOn()\nC++: void MergePointsOn()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {(char*)"MergePointsOff", PyvtkTessellatorFilter_MergePointsOff, METH_VARARGS,
   (char*)"V.MergePointsOff()\nC++: void MergePointsOff()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTessellatorFilter_StaticNew()
{
  return vtkTessellatorFilter::New();
}

PyObject *PyVTKClass_vtkTessellatorFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTessellatorFilter_StaticNew,
    PyvtkTessellatorFilter_Methods,
    "vtkTessellatorFilter", modulename,
    NULL, NULL,
    PyvtkTessellatorFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTessellatorFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTessellatorFilter - approximate nonlinear FEM elements with\nsimplices\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "This class approximates nonlinear FEM elements with linear simplices.\n\nWarning: This class is temporary and will go away at some point after\nParaView 1.4.0.\n\nThis filter rifles through all the cells in an input vtkDataSet. It\ntesselates each cell and uses the vtkStreamingTessellator and\nvtkDataSetEdgeSubdivisionCriterion classes to generate simplices that\napproximate the nonlinear mesh using some ",
    "approximation metric\n(encoded in the particular\nvtkDataSetEdgeSubdivisionCriterion::EvaluateEdge implementation). The\nsimplices are placed into the filter's output vtkDataSet object by\nthe callback routines AddATetrahedron, AddATriangle, and AddALine,\nwhich are registered with the triangulator.\n\nThe output mesh will have geometry and any fields specified as\nattributes in the input mesh's point dat",
    "a.  The attribute's copy\nflags are honored, except for normals.\n\nInternals:\n\nThe filter's main member function is RequestData(). This function\nfirst calls SetupOutput() which allocates arrays and some temporary\nvariables for the primitive callbacks (OutputTriangle and OutputLine\nwhich are called by AddATriangle and AddALine, respectively).  Each\ncell is given an initial tesselation, which results ",
    "in one or more\ncalls to OutputTetrahedron, OutputTriangle or OutputLine to add\nelements to the OutputMesh. Finally, Teardown() is called to free the\nfilter's working space.\n\nSee Also:\n\nvtkDataSetToUnstructuredGridFilter vtkDataSet vtkStreamingTessellator\nvtkDataSetEdgeSubdivisionCriterion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTessellatorFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTessellatorFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTessellatorFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

