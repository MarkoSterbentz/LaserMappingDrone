// python wrapper for vtkPVDataRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDataRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataRepresentationNew
#endif

static const char **PyvtkPVDataRepresentation_Doc();


static PyObject *
PyvtkPVDataRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataRepresentation::NewInstance());

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
PyvtkPVDataRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataRepresentation *tempr = vtkPVDataRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

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
      op->vtkPVDataRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkPVDataRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkPVDataRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetUniqueIdentifier() :
      op->vtkPVDataRepresentation::GetUniqueIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

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
      op->vtkPVDataRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkPVDataRepresentation::GetVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkPVDataRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateTime(temp0);
      }
    else
      {
      op->vtkPVDataRepresentation::SetUpdateTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetUpdateTime() :
      op->vtkPVDataRepresentation::GetUpdateTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUpdateTimeValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTimeValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUpdateTimeValid() :
      op->vtkPVDataRepresentation::GetUpdateTimeValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCache(temp0);
      }
    else
      {
      op->vtkPVDataRepresentation::SetUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheKey(temp0);
      }
    else
      {
      op->vtkPVDataRepresentation::SetCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForcedCacheKey(temp0);
      }
    else
      {
      op->vtkPVDataRepresentation::SetForcedCacheKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceUseCache(temp0);
      }
    else
      {
      op->vtkPVDataRepresentation::SetForceUseCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCacheKey() :
      op->vtkPVDataRepresentation::GetCacheKey());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseCache() :
      op->vtkPVDataRepresentation::GetUseCache());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetUsingCacheForUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsingCacheForUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUsingCacheForUpdate() :
      op->vtkPVDataRepresentation::GetUsingCacheForUpdate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetNeedUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetNeedUpdate() :
      op->vtkPVDataRepresentation::GetNeedUpdate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_AddToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkView"))
    {
    bool tempr = (ap.IsBound() ?
      op->AddToView(temp0) :
      op->vtkPVDataRepresentation::AddToView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_RemoveFromView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFromView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  vtkView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkView"))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveFromView(temp0) :
      op->vtkPVDataRepresentation::RemoveFromView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort() :
      op->vtkPVDataRepresentation::GetInternalOutputPort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0) :
      op->vtkPVDataRepresentation::GetInternalOutputPort(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataRepresentation *op = static_cast<vtkPVDataRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInternalOutputPort(temp0, temp1) :
      op->vtkPVDataRepresentation::GetInternalOutputPort(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataRepresentation_GetInternalOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPVDataRepresentation_GetInternalOutputPort_s1(self, args);
    case 1:
      return PyvtkPVDataRepresentation_GetInternalOutputPort_s2(self, args);
    case 2:
      return PyvtkPVDataRepresentation_GetInternalOutputPort_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInternalOutputPort");
  return NULL;
}


static PyMethodDef PyvtkPVDataRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkPVDataRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {(char*)"MarkModified", PyvtkPVDataRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {(char*)"Initialize", PyvtkPVDataRepresentation_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int) -> int\nC++: virtual unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable)\n\nInitialize the representation with an identifier range so each\ninternal representation can own a unique ID. If a representation\nrequires more IDs than the set of ids provided, the\nrepresentation MUST complains by an error or abort explaining how\nmany ids where expected so the number of reserved ids could be\neasily adjust. Unless noted otherwise, this method must be called\nbefore calling any other methods on this\nclass.@CallOnAllProcessess Internally you can pick an id that\nfollow that condition minIdAvailable <= id <= maxIdAvailable\nReturn the minIdAvailable after initialization so that new range\ncould be used\n"},
  {(char*)"GetUniqueIdentifier", PyvtkPVDataRepresentation_GetUniqueIdentifier, METH_VARARGS,
   (char*)"V.GetUniqueIdentifier() -> int\nC++: unsigned int GetUniqueIdentifier()\n\nReturn 0 if the Initialize() method was not called otherwise a\nunique ID that will be shared across the processes for that same\nobject.\n"},
  {(char*)"SetVisibility", PyvtkPVDataRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"GetVisibility", PyvtkPVDataRepresentation_GetVisibility, METH_VARARGS,
   (char*)"V.GetVisibility() -> bool\nC++: bool GetVisibility()\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"GetRenderedDataObject", PyvtkPVDataRepresentation_GetRenderedDataObject, METH_VARARGS,
   (char*)"V.GetRenderedDataObject(int) -> vtkDataObject\nC++: virtual vtkDataObject *GetRenderedDataObject(int port)\n\nReturns the data object that is rendered from the given input\nport.\n"},
  {(char*)"SetUpdateTime", PyvtkPVDataRepresentation_SetUpdateTime, METH_VARARGS,
   (char*)"V.SetUpdateTime(float)\nC++: virtual void SetUpdateTime(double time)\n\nSet the update time.\n"},
  {(char*)"GetUpdateTime", PyvtkPVDataRepresentation_GetUpdateTime, METH_VARARGS,
   (char*)"V.GetUpdateTime() -> float\nC++: double GetUpdateTime()\n\nSet the update time.\n"},
  {(char*)"GetUpdateTimeValid", PyvtkPVDataRepresentation_GetUpdateTimeValid, METH_VARARGS,
   (char*)"V.GetUpdateTimeValid() -> bool\nC++: bool GetUpdateTimeValid()\n\nSet whether the UpdateTime is valid.\n"},
  {(char*)"SetUseCache", PyvtkPVDataRepresentation_SetUseCache, METH_VARARGS,
   (char*)"V.SetUseCache(bool)\nC++: virtual void SetUseCache(bool use)\n\nThis controls when to use cache and when using cache, what cached\nvalue to use for the next update. This class using a special\nexecutive so that is a data is cached, then it does not propagate\nany pipeline requests upstream. These ivars are updated by\nvtkPVView::Update() based on the corresponding variable values on\nthe vtkPVView itself.\n"},
  {(char*)"SetCacheKey", PyvtkPVDataRepresentation_SetCacheKey, METH_VARARGS,
   (char*)"V.SetCacheKey(float)\nC++: virtual void SetCacheKey(double val)\n\nThis controls when to use cache and when using cache, what cached\nvalue to use for the next update. This class using a special\nexecutive so that is a data is cached, then it does not propagate\nany pipeline requests upstream. These ivars are updated by\nvtkPVView::Update() based on the corresponding variable values on\nthe vtkPVView itself.\n"},
  {(char*)"SetForcedCacheKey", PyvtkPVDataRepresentation_SetForcedCacheKey, METH_VARARGS,
   (char*)"V.SetForcedCacheKey(float)\nC++: virtual void SetForcedCacheKey(double val)\n\nTypically UseCache and CacheKey are updated by the View and\nrepresentations cache based on what the view tells it. However in\nsome cases we may want to force a representation to cache\nirrespective of the view (e.g. comparative views). In which case\nthese ivars can up set. If ForcedCacheKey is true, it overrides\nUseCache and CacheKey. Instead, ForcedCacheKey is used.\n"},
  {(char*)"SetForceUseCache", PyvtkPVDataRepresentation_SetForceUseCache, METH_VARARGS,
   (char*)"V.SetForceUseCache(bool)\nC++: virtual void SetForceUseCache(bool val)\n\nTypically UseCache and CacheKey are updated by the View and\nrepresentations cache based on what the view tells it. However in\nsome cases we may want to force a representation to cache\nirrespective of the view (e.g. comparative views). In which case\nthese ivars can up set. If ForcedCacheKey is true, it overrides\nUseCache and CacheKey. Instead, ForcedCacheKey is used.\n"},
  {(char*)"GetCacheKey", PyvtkPVDataRepresentation_GetCacheKey, METH_VARARGS,
   (char*)"V.GetCacheKey() -> float\nC++: virtual double GetCacheKey()\n\nReturns whether caching is used and what key to use when caching\nis enabled.\n"},
  {(char*)"GetUseCache", PyvtkPVDataRepresentation_GetUseCache, METH_VARARGS,
   (char*)"V.GetUseCache() -> bool\nC++: virtual bool GetUseCache()\n\nReturns whether caching is used and what key to use when caching\nis enabled.\n"},
  {(char*)"GetUsingCacheForUpdate", PyvtkPVDataRepresentation_GetUsingCacheForUpdate, METH_VARARGS,
   (char*)"V.GetUsingCacheForUpdate() -> bool\nC++: bool GetUsingCacheForUpdate()\n\nCalled by vtkPVDataRepresentationPipeline to see if using cache\nis valid and will be used for the update. If so, it bypasses all\npipeline passes. Subclasses should override IsCached(double) to\nindicate if a particular entry is cached.\n"},
  {(char*)"GetNeedUpdate", PyvtkPVDataRepresentation_GetNeedUpdate, METH_VARARGS,
   (char*)"V.GetNeedUpdate() -> bool\nC++: bool GetNeedUpdate()\n\n"},
  {(char*)"AddToView", PyvtkPVDataRepresentation_AddToView, METH_VARARGS,
   (char*)"V.AddToView(vtkView) -> bool\nC++: virtual bool AddToView(vtkView *view)\n\nMaking these methods public. When constructing composite\nrepresentations, we need to call these methods directly on\ninternal representations.\n"},
  {(char*)"RemoveFromView", PyvtkPVDataRepresentation_RemoveFromView, METH_VARARGS,
   (char*)"V.RemoveFromView(vtkView) -> bool\nC++: virtual bool RemoveFromView(vtkView *view)\n\nMaking these methods public. When constructing composite\nrepresentations, we need to call these methods directly on\ninternal representations.\n"},
  {(char*)"GetInternalOutputPort", PyvtkPVDataRepresentation_GetInternalOutputPort, METH_VARARGS,
   (char*)"V.GetInternalOutputPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort()\nV.GetInternalOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port)\nV.GetInternalOutputPort(int, int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInternalOutputPort(int port,\n    int conn)\n\nRetrieves an output port for the input data object at the\nspecified port and connection index. This may be connected to the\nrepresentation's internal pipeline. Overridden to use\nvtkPVTrivialProducer instead of vtkTrivialProducer\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVDataRepresentation_Methods,
    "vtkPVDataRepresentation", modulename,
    NULL, NULL,
    PyvtkPVDataRepresentation_Doc(),
    PyVTKClass_vtkDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVDataRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataRepresentation\n\n",
    "Superclass: vtkDataRepresentation\n\n",
    "vtkPVDataRepresentation adds some ParaView specific API to data\nrepresentations.\n\nSee Also:\n\nvtkPVDataRepresentationPipeline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

