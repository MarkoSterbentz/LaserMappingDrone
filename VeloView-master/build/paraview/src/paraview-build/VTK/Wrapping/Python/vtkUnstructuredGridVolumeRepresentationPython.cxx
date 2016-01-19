// python wrapper for vtkUnstructuredGridVolumeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredGridVolumeRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredGridVolumeRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkUnstructuredGridVolumeRepresentation_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredGridVolumeRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridVolumeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridVolumeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridVolumeRepresentation::NewInstance());

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
PyvtkUnstructuredGridVolumeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredGridVolumeRepresentation *tempr = vtkUnstructuredGridVolumeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_AddVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  char *temp0 = NULL;
  vtkUnstructuredGridVolumeMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGridVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->AddVolumeMapper(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::AddVolumeMapper(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetActiveVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveVolumeMapper(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetActiveVolumeMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_GetActiveVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredGridVolumeMapper *tempr = (ap.IsBound() ?
      op->GetActiveVolumeMapper() :
      op->vtkUnstructuredGridVolumeRepresentation::GetActiveVolumeMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkUnstructuredGridVolumeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetExtractedBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractedBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractedBlockIndex(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetExtractedBlockIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickable(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetPickable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolationType(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetInterpolationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacity(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetScalarOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarOpacityUnitDistance(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRepresentation::SetScalarOpacityUnitDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRepresentation *op = static_cast<vtkUnstructuredGridVolumeRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLODVolume *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkUnstructuredGridVolumeRepresentation::GetActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeRepresentation\nC++: vtkUnstructuredGridVolumeRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridVolumeRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridVolumeRepresentation\nC++: vtkUnstructuredGridVolumeRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"AddVolumeMapper", PyvtkUnstructuredGridVolumeRepresentation_AddVolumeMapper, METH_VARARGS,
   (char*)"V.AddVolumeMapper(string, vtkUnstructuredGridVolumeMapper)\nC++: void AddVolumeMapper(const char *name,\n    vtkUnstructuredGridVolumeMapper *)\n\nRegister a volume mapper with the representation.\n"},
  {(char*)"SetActiveVolumeMapper", PyvtkUnstructuredGridVolumeRepresentation_SetActiveVolumeMapper, METH_VARARGS,
   (char*)"V.SetActiveVolumeMapper(string)\nC++: virtual void SetActiveVolumeMapper(const char *)\n\nSet the active volume mapper to use.\n"},
  {(char*)"GetActiveVolumeMapper", PyvtkUnstructuredGridVolumeRepresentation_GetActiveVolumeMapper, METH_VARARGS,
   (char*)"V.GetActiveVolumeMapper() -> vtkUnstructuredGridVolumeMapper\nC++: vtkUnstructuredGridVolumeMapper *GetActiveVolumeMapper()\n\nSet the active volume mapper to use.\n"},
  {(char*)"ProcessViewRequest", PyvtkUnstructuredGridVolumeRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {(char*)"MarkModified", PyvtkUnstructuredGridVolumeRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {(char*)"SetVisibility", PyvtkUnstructuredGridVolumeRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored. Overridden to propagate to the active representation.\n"},
  {(char*)"SetExtractedBlockIndex", PyvtkUnstructuredGridVolumeRepresentation_SetExtractedBlockIndex, METH_VARARGS,
   (char*)"V.SetExtractedBlockIndex(int)\nC++: void SetExtractedBlockIndex(unsigned int index)\n\n"},
  {(char*)"SetOrientation", PyvtkUnstructuredGridVolumeRepresentation_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {(char*)"SetOrigin", PyvtkUnstructuredGridVolumeRepresentation_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {(char*)"SetPickable", PyvtkUnstructuredGridVolumeRepresentation_SetPickable, METH_VARARGS,
   (char*)"V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {(char*)"SetPosition", PyvtkUnstructuredGridVolumeRepresentation_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {(char*)"SetScale", PyvtkUnstructuredGridVolumeRepresentation_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {(char*)"SetInterpolationType", PyvtkUnstructuredGridVolumeRepresentation_SetInterpolationType, METH_VARARGS,
   (char*)"V.SetInterpolationType(int)\nC++: void SetInterpolationType(int val)\n\n"},
  {(char*)"SetColor", PyvtkUnstructuredGridVolumeRepresentation_SetColor, METH_VARARGS,
   (char*)"V.SetColor(vtkColorTransferFunction)\nC++: void SetColor(vtkColorTransferFunction *lut)\n\n"},
  {(char*)"SetScalarOpacity", PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacity, METH_VARARGS,
   (char*)"V.SetScalarOpacity(vtkPiecewiseFunction)\nC++: void SetScalarOpacity(vtkPiecewiseFunction *pwf)\n\n"},
  {(char*)"SetScalarOpacityUnitDistance", PyvtkUnstructuredGridVolumeRepresentation_SetScalarOpacityUnitDistance, METH_VARARGS,
   (char*)"V.SetScalarOpacityUnitDistance(float)\nC++: void SetScalarOpacityUnitDistance(double val)\n\n"},
  {(char*)"GetActor", PyvtkUnstructuredGridVolumeRepresentation_GetActor, METH_VARARGS,
   (char*)"V.GetActor() -> vtkPVLODVolume\nC++: vtkPVLODVolume *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridVolumeRepresentation_StaticNew()
{
  return vtkUnstructuredGridVolumeRepresentation::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridVolumeRepresentation_StaticNew,
    PyvtkUnstructuredGridVolumeRepresentation_Methods,
    "vtkUnstructuredGridVolumeRepresentation", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridVolumeRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeRepresentation - representation for showing\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkUnstructuredGridVolumeRepresentation is a representation for\nvolume rendering vtkUnstructuredGrid datasets. It simply renders a\ntranslucent surface for LOD i.e. interactive rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

