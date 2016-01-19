// python wrapper for vtkImageSliceRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageSliceRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageSliceRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageSliceRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkImageSliceRepresentation_Doc();


static PyObject *
PyvtkImageSliceRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageSliceRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSliceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageSliceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSliceRepresentation::NewInstance());

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
PyvtkImageSliceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageSliceRepresentation *tempr = vtkImageSliceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSliceRepresentation_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkImageSliceRepresentation_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iiiiz"},
  {NULL, PyvtkImageSliceRepresentation_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@iiiii"},
  {NULL, PyvtkImageSliceRepresentation_SetInputArrayToProcess_s4, METH_VARARGS,
   (char*)"@iiizz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageSliceRepresentation_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageSliceRepresentation_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageSliceRepresentation_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkImageSliceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkImageSliceRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlice(temp0);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetSlice(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageSliceRepresentation::GetSlice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceMode(temp0);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetSliceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_GetSliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSliceMode() :
      op->vtkImageSliceRepresentation::GetSliceMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetPickable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

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
      op->vtkImageSliceRepresentation::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapScalars(temp0);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetMapScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_SetUseXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseXYPlane(temp0);
      }
    else
      {
      op->vtkImageSliceRepresentation::SetUseXYPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSliceRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceRepresentation *op = static_cast<vtkImageSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLODActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkImageSliceRepresentation::GetActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSliceRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSliceRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSliceRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSliceRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageSliceRepresentation\nC++: vtkImageSliceRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSliceRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSliceRepresentation\nC++: vtkImageSliceRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputArrayToProcess", PyvtkImageSliceRepresentation_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\nOverridden to pass the array selection to the mapper.\n"},
  {(char*)"ProcessViewRequest", PyvtkImageSliceRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {(char*)"MarkModified", PyvtkImageSliceRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkImageSliceRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {(char*)"SetVisibility", PyvtkImageSliceRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored. Overridden to propagate to the active representation.\n"},
  {(char*)"SetSlice", PyvtkImageSliceRepresentation_SetSlice, METH_VARARGS,
   (char*)"V.SetSlice(int)\nC++: virtual void SetSlice(unsigned int)\n\nGet set the slice number to extract.\n"},
  {(char*)"GetSlice", PyvtkImageSliceRepresentation_GetSlice, METH_VARARGS,
   (char*)"V.GetSlice() -> int\nC++: unsigned int GetSlice()\n\nGet set the slice number to extract.\n"},
  {(char*)"SetSliceMode", PyvtkImageSliceRepresentation_SetSliceMode, METH_VARARGS,
   (char*)"V.SetSliceMode(int)\nC++: virtual void SetSliceMode(int)\n\nGet/Set the direction in which to slice a 3D input data.\n"},
  {(char*)"GetSliceMode", PyvtkImageSliceRepresentation_GetSliceMode, METH_VARARGS,
   (char*)"V.GetSliceMode() -> int\nC++: int GetSliceMode()\n\nGet/Set the direction in which to slice a 3D input data.\n"},
  {(char*)"SetOrientation", PyvtkImageSliceRepresentation_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {(char*)"SetOrigin", PyvtkImageSliceRepresentation_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {(char*)"SetPickable", PyvtkImageSliceRepresentation_SetPickable, METH_VARARGS,
   (char*)"V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {(char*)"SetPosition", PyvtkImageSliceRepresentation_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {(char*)"SetScale", PyvtkImageSliceRepresentation_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {(char*)"SetOpacity", PyvtkImageSliceRepresentation_SetOpacity, METH_VARARGS,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(double val)\n\n"},
  {(char*)"SetLookupTable", PyvtkImageSliceRepresentation_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *val)\n\n"},
  {(char*)"SetMapScalars", PyvtkImageSliceRepresentation_SetMapScalars, METH_VARARGS,
   (char*)"V.SetMapScalars(int)\nC++: void SetMapScalars(int val)\n\n"},
  {(char*)"SetUseXYPlane", PyvtkImageSliceRepresentation_SetUseXYPlane, METH_VARARGS,
   (char*)"V.SetUseXYPlane(int)\nC++: void SetUseXYPlane(int val)\n\n"},
  {(char*)"GetActor", PyvtkImageSliceRepresentation_GetActor, METH_VARARGS,
   (char*)"V.GetActor() -> vtkPVLODActor\nC++: vtkPVLODActor *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSliceRepresentation_StaticNew()
{
  return vtkImageSliceRepresentation::New();
}

PyObject *PyVTKClass_vtkImageSliceRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSliceRepresentation_StaticNew,
    PyvtkImageSliceRepresentation_Methods,
    "vtkImageSliceRepresentation", modulename,
    NULL, NULL,
    PyvtkImageSliceRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "XY_PLANE", vtkImageSliceRepresentation::XY_PLANE },
          { "YZ_PLANE", vtkImageSliceRepresentation::YZ_PLANE },
          { "XZ_PLANE", vtkImageSliceRepresentation::XZ_PLANE },
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

const char **PyvtkImageSliceRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkImageSliceRepresentation - representation for showing slices from a\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkImageSliceRepresentation is a representation for showing slices\nfrom an image dataset. Currently, it does not support composite\ndatasets, however, we should be able to add such a support in future.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSliceRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSliceRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSliceRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

