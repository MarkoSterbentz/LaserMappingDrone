// python wrapper for vtkHAVSVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHAVSVolumeMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHAVSVolumeMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHAVSVolumeMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkHAVSVolumeMapper_Doc();


static PyObject *
PyvtkHAVSVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHAVSVolumeMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHAVSVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHAVSVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHAVSVolumeMapper::NewInstance());

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
PyvtkHAVSVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHAVSVolumeMapper *tempr = vtkHAVSVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetPartiallyRemoveNonConvexities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartiallyRemoveNonConvexities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPartiallyRemoveNonConvexities(temp0);
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetPartiallyRemoveNonConvexities(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_GetPartiallyRemoveNonConvexities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartiallyRemoveNonConvexities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPartiallyRemoveNonConvexities() :
      op->vtkHAVSVolumeMapper::GetPartiallyRemoveNonConvexities());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetLevelOfDetailTargetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfDetailTargetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelOfDetailTargetTime(temp0);
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetLevelOfDetailTargetTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_GetLevelOfDetailTargetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOfDetailTargetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetLevelOfDetailTargetTime() :
      op->vtkHAVSVolumeMapper::GetLevelOfDetailTargetTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetLevelOfDetail(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfDetail");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelOfDetail(temp0);
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetLevelOfDetail(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_GetLevelOfDetail(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOfDetail");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLevelOfDetail() :
      op->vtkHAVSVolumeMapper::GetLevelOfDetail());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetLevelOfDetailMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfDetailMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevelOfDetailMethod(temp0);
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetLevelOfDetailMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_GetLevelOfDetailMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOfDetailMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLevelOfDetailMethod() :
      op->vtkHAVSVolumeMapper::GetLevelOfDetailMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetLevelOfDetailMethodField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfDetailMethodField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLevelOfDetailMethodField();
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetLevelOfDetailMethodField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetLevelOfDetailMethodArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfDetailMethodArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLevelOfDetailMethodArea();
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetLevelOfDetailMethodArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetKBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKBufferSize(temp0);
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetKBufferSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_GetKBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetKBufferSize() :
      op->vtkHAVSVolumeMapper::GetKBufferSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetKBufferSizeTo2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKBufferSizeTo2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetKBufferSizeTo2();
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetKBufferSizeTo2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetKBufferSizeTo6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKBufferSizeTo6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetKBufferSizeTo6();
      }
    else
      {
      op->vtkHAVSVolumeMapper::SetKBufferSizeTo6();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SupportedByHardware(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportedByHardware");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    bool tempr = (ap.IsBound() ?
      op->SupportedByHardware(temp0) :
      op->vtkHAVSVolumeMapper::SupportedByHardware(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_SetGPUDataStructures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUDataStructures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetGPUDataStructures(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHAVSVolumeMapper_GetGPUDataStructures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUDataStructures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHAVSVolumeMapper *op = static_cast<vtkHAVSVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGPUDataStructures() :
      op->vtkHAVSVolumeMapper::GetGPUDataStructures());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHAVSVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkHAVSVolumeMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHAVSVolumeMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHAVSVolumeMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHAVSVolumeMapper\nC++: vtkHAVSVolumeMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHAVSVolumeMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHAVSVolumeMapper\nC++: vtkHAVSVolumeMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPartiallyRemoveNonConvexities", PyvtkHAVSVolumeMapper_SetPartiallyRemoveNonConvexities, METH_VARARGS,
   (char*)"V.SetPartiallyRemoveNonConvexities(bool)\nC++: void SetPartiallyRemoveNonConvexities(bool a)\n\nregions by removing ray segments larger than the max cell size.\n"},
  {(char*)"GetPartiallyRemoveNonConvexities", PyvtkHAVSVolumeMapper_GetPartiallyRemoveNonConvexities, METH_VARARGS,
   (char*)"V.GetPartiallyRemoveNonConvexities() -> bool\nC++: bool GetPartiallyRemoveNonConvexities()\n\nregions by removing ray segments larger than the max cell size.\n"},
  {(char*)"SetLevelOfDetailTargetTime", PyvtkHAVSVolumeMapper_SetLevelOfDetailTargetTime, METH_VARARGS,
   (char*)"V.SetLevelOfDetailTargetTime(float)\nC++: void SetLevelOfDetailTargetTime(float a)\n\nSet/get the desired level of detail target time measured in\nframes/sec.\n"},
  {(char*)"GetLevelOfDetailTargetTime", PyvtkHAVSVolumeMapper_GetLevelOfDetailTargetTime, METH_VARARGS,
   (char*)"V.GetLevelOfDetailTargetTime() -> float\nC++: float GetLevelOfDetailTargetTime()\n\nSet/get the desired level of detail target time measured in\nframes/sec.\n"},
  {(char*)"SetLevelOfDetail", PyvtkHAVSVolumeMapper_SetLevelOfDetail, METH_VARARGS,
   (char*)"V.SetLevelOfDetail(bool)\nC++: void SetLevelOfDetail(bool a)\n\nTurn on/off level-of-detail volume rendering\n"},
  {(char*)"GetLevelOfDetail", PyvtkHAVSVolumeMapper_GetLevelOfDetail, METH_VARARGS,
   (char*)"V.GetLevelOfDetail() -> bool\nC++: bool GetLevelOfDetail()\n\nTurn on/off level-of-detail volume rendering\n"},
  {(char*)"SetLevelOfDetailMethod", PyvtkHAVSVolumeMapper_SetLevelOfDetailMethod, METH_VARARGS,
   (char*)"V.SetLevelOfDetailMethod(int)\nC++: void SetLevelOfDetailMethod(int)\n\nSet/get the current level-of-detail method\n"},
  {(char*)"GetLevelOfDetailMethod", PyvtkHAVSVolumeMapper_GetLevelOfDetailMethod, METH_VARARGS,
   (char*)"V.GetLevelOfDetailMethod() -> int\nC++: int GetLevelOfDetailMethod()\n\nSet/get the current level-of-detail method\n"},
  {(char*)"SetLevelOfDetailMethodField", PyvtkHAVSVolumeMapper_SetLevelOfDetailMethodField, METH_VARARGS,
   (char*)"V.SetLevelOfDetailMethodField()\nC++: void SetLevelOfDetailMethodField()\n\nSet/get the current level-of-detail method\n"},
  {(char*)"SetLevelOfDetailMethodArea", PyvtkHAVSVolumeMapper_SetLevelOfDetailMethodArea, METH_VARARGS,
   (char*)"V.SetLevelOfDetailMethodArea()\nC++: void SetLevelOfDetailMethodArea()\n\nSet/get the current level-of-detail method\n"},
  {(char*)"SetKBufferSize", PyvtkHAVSVolumeMapper_SetKBufferSize, METH_VARARGS,
   (char*)"V.SetKBufferSize(int)\nC++: void SetKBufferSize(int a)\n\nSet the kbuffer size\n"},
  {(char*)"GetKBufferSize", PyvtkHAVSVolumeMapper_GetKBufferSize, METH_VARARGS,
   (char*)"V.GetKBufferSize() -> int\nC++: int GetKBufferSize()\n\nSet the kbuffer size\n"},
  {(char*)"SetKBufferSizeTo2", PyvtkHAVSVolumeMapper_SetKBufferSizeTo2, METH_VARARGS,
   (char*)"V.SetKBufferSizeTo2()\nC++: void SetKBufferSizeTo2()\n\nSet the kbuffer size\n"},
  {(char*)"SetKBufferSizeTo6", PyvtkHAVSVolumeMapper_SetKBufferSizeTo6, METH_VARARGS,
   (char*)"V.SetKBufferSizeTo6()\nC++: void SetKBufferSizeTo6()\n\nSet the kbuffer size\n"},
  {(char*)"SupportedByHardware", PyvtkHAVSVolumeMapper_SupportedByHardware, METH_VARARGS,
   (char*)"V.SupportedByHardware(vtkRenderer) -> bool\nC++: virtual bool SupportedByHardware(vtkRenderer *r)\n\nCheck hardware support for the HAVS algorithm.  Necessary\nfeatures include off-screen rendering, 32-bit fp textures,\nmultiple render targets, and framebuffer objects. Subclasses must\noverride this method to indicate if supported by Hardware.\n"},
  {(char*)"SetGPUDataStructures", PyvtkHAVSVolumeMapper_SetGPUDataStructures, METH_VARARGS,
   (char*)"V.SetGPUDataStructures(bool)\nC++: virtual void SetGPUDataStructures(bool)\n\nSet/get whether or not the data structures should be stored on\nthe GPU for better peformance.\n"},
  {(char*)"GetGPUDataStructures", PyvtkHAVSVolumeMapper_GetGPUDataStructures, METH_VARARGS,
   (char*)"V.GetGPUDataStructures() -> bool\nC++: bool GetGPUDataStructures()\n\nSet/get whether or not the data structures should be stored on\nthe GPU for better peformance.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHAVSVolumeMapper_StaticNew()
{
  return vtkHAVSVolumeMapper::New();
}

PyObject *PyVTKClass_vtkHAVSVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHAVSVolumeMapper_StaticNew,
    PyvtkHAVSVolumeMapper_Methods,
    "vtkHAVSVolumeMapper", modulename,
    NULL, NULL,
    PyvtkHAVSVolumeMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkHAVSVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkHAVSVolumeMapper - Hardware-Assisted Visibility Sorting\nunstructured grid mapper\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "vtkHAVSVolumeMapper is a class that renders polygonal data\n(represented as an unstructured grid) using the Hardware-Assisted\nVisibility Sorting (HAVS) algorithm.  First the unique triangles are\nsorted in object space, then they are sorted in image space using a\nfixed size A-buffer implemented on the GPU called the k-buffer.  The\nHAVS algorithm excels at rendering large datasets quickly.  The\ntrade",
    "-off is that the algorithm may produce some rendering artifacts\ndue to an insufficient k size (currently 2 or 6 is supported) or\nread/write race conditions.\n\nA built in level-of-detail (LOD) approach samples the geometry using\none of two heuristics (field or area).  If LOD is enabled, the amount\nof geometry that is sampled and rendered changes dynamically to stay\nwithin the target frame rate.  The",
    " field sampling method generally\nworks best for datasets with cell sizes that don't vary much in size.\n On the contrary, the area sampling approach gives better\napproximations when the volume has a lot of variation in cell size.\n\nThe HAVS algorithm uses several advanced features on graphics\nhardware. The k-buffer sorting network is implemented using\nframebuffer objects (FBOs) with multiple render ",
    "targets (MRTs). \nTherefore, only cards that support these features can run the\nalgorithm (at least an ATI 9500 or an NVidia NV40 (6600)).\n\nNotes:\n\nSeveral issues had to be addressed to get the HAVS algorithm working\nwithin the vtk framework.  These additions forced the code to forsake\nspeed for the sake of compliance and robustness.\n\nThe HAVS algorithm operates on the triangles that compose the me",
    "sh.\nTherefore, before rendering, the cells are decomposed into unique\ntriangles and stored on the GPU for efficient rendering.  The use of\nGPU data structures is only recommended if the entire geometry can\nfit in graphics memory.  Otherwise this feature should be disabled.\n\nAnother new feature is the handling of mixed data types (eg.,\npolygonal data with volume data).  This is handled by reading t",
    "he\nz-buffer from the current window and copying it into the framebuffer\nobject for off-screen rendering.  The depth test is then enabled so\nthat the volume only appears over the opaque geometry.  Finally, the\nresults of the off-screen rendering are blended into the framebuffer\nas a transparent, view-aligned texture.\n\nInstead of using a preintegrated 3D lookup table for storing the ray\nintegral, th",
    "is implementation uses partial pre-integration.  This\nimproves the performance of dynamic transfer function updates by\navoiding a costly preprocess of the table.\n\nA final change to the original algorithm is the handling of\nnon-convexities in the mesh.  Due to read/write hazards that may\ncreate undesired artifacts with non-convexities when using a\ninside/outside toggle in the fragment program, anot",
    "her approach was\nemployed.  To handle non-convexities, the fragment shader determines\nif a ray-gap is larger than the max cell size and kill the fragment\nif so.  This approximation performs rather well in practice but may\nmiss small non-convexities.\n\nFor more information on the HAVS algorithm see:\n\n\n \"Hardware-Assisted Visibility Sorting for Unstructured Volume\nRendering\" by S. P. Callahan, M. Iki",
    "ts, J. L. D. Comba, and C. T.\nSilva, IEEE Transactions of Visualization and Computer Graphics;\nMay/June 2005.\n\nFor more information on the Level-of-Detail algorithm, see:\n\n\"Interactive Rendering of Large Unstructured Grids Using Dynamic\nLevel-of-Detail\" by S. P. Callahan, J. L. D. Comba, P. Shirley, and\nC. T. Silva, Proceedings of IEEE Visualization '05, Oct. 2005.\n\nAcknowledgments:\n\nThis code was",
    " developed by Steven P. Callahan under the supervision\nof Prof. Claudio T. Silva. The code also contains contributions from\nMilan Ikits, Linh Ha, Huy T. Vo, Carlos E. Scheidegger, and Joao L.\nD. Comba.\n\nThe work was supported by grants, contracts, and gifts from the\nNational Science Foundation, the Department of Energy, the Army\nResearch Office, and IBM.\n\nThe port of HAVS to VTK and ParaView has b",
    "een primarily supported by\nSandia National Labs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHAVSVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHAVSVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHAVSVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 4; c++)
    {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_KBUFFER_SIZE_2", 0 },
        { "VTK_KBUFFER_SIZE_6", 1 },
        { "VTK_FIELD_LEVEL_OF_DETAIL", 0 },
        { "VTK_AREA_LEVEL_OF_DETAIL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

