// python wrapper for vtkPVDataDeliveryManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDataDeliveryManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDataDeliveryManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDataDeliveryManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVDataDeliveryManager_Doc();


static PyObject *
PyvtkPVDataDeliveryManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDataDeliveryManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataDeliveryManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataDeliveryManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataDeliveryManager::NewInstance());

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
PyvtkPVDataDeliveryManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDataDeliveryManager *tempr = vtkPVDataDeliveryManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetSynchronizationMagicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizationMagicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizationMagicNumber() :
      op->vtkPVDataDeliveryManager::GetSynchronizationMagicNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_RegisterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->RegisterRepresentation(temp0);
      }
    else
      {
      op->vtkPVDataDeliveryManager::RegisterRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_UnRegisterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterRepresentation(temp0);
      }
    else
      {
      op->vtkPVDataDeliveryManager::UnRegisterRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVDataRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation(temp0) :
      op->vtkPVDataDeliveryManager::GetRepresentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetPiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  bool temp2 = false;
  unsigned long temp3 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetPiece(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataDeliveryManager_SetPiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetPiece(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataDeliveryManager_SetPiece_Methods[] = {
  {NULL, PyvtkPVDataDeliveryManager_SetPiece_s1, METH_VARARGS,
   (char*)"@OOO|k *vtkPVDataRepresentation *vtkDataObject bool"},
  {NULL, PyvtkPVDataDeliveryManager_SetPiece_s2, METH_VARARGS,
   (char*)"@IOO *vtkDataObject bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVDataDeliveryManager_SetPiece(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataDeliveryManager_SetPiece_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPVDataDeliveryManager_SetPiece_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPiece");
  return NULL;
}



static PyObject *
PyvtkPVDataDeliveryManager_GetProducer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetProducer(temp0, temp1) :
      op->vtkPVDataDeliveryManager::GetProducer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPVDataDeliveryManager_GetProducer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetProducer(temp0, temp1) :
      op->vtkPVDataDeliveryManager::GetProducer(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDataDeliveryManager_GetProducer_Methods[] = {
  {NULL, PyvtkPVDataDeliveryManager_GetProducer_s1, METH_VARARGS,
   (char*)"@OO *vtkPVDataRepresentation bool"},
  {NULL, PyvtkPVDataDeliveryManager_GetProducer_s2, METH_VARARGS,
   (char*)"@IO bool"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVDataDeliveryManager_GetProducer(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataDeliveryManager_GetProducer_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProducer");
  return NULL;
}



static PyObject *
PyvtkPVDataDeliveryManager_SetDeliverToAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeliverToAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  bool temp1 = false;
  bool temp2 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDeliverToAllProcesses(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetDeliverToAllProcesses(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetDeliverToClientAndRenderingProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeliverToClientAndRenderingProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetDeliverToClientAndRenderingProcesses(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetDeliverToClientAndRenderingProcesses(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_MarkAsRedistributable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkAsRedistributable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  bool temp1 = true;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->MarkAsRedistributable(temp0, temp1);
      }
    else
      {
      op->vtkPVDataDeliveryManager::MarkAsRedistributable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetVisibleDataSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleDataSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetVisibleDataSize(temp0) :
      op->vtkPVDataDeliveryManager::GetVisibleDataSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkPVDataDeliveryManager::GetKdTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVRenderView *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderView"))
    {
    if (ap.IsBound())
      {
      op->SetRenderView(temp0);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetRenderView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRenderView *tempr = (ap.IsBound() ?
      op->GetRenderView() :
      op->vtkPVDataDeliveryManager::GetRenderView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_RedistributeDataForOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RedistributeDataForOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RedistributeDataForOrderedCompositing(temp0);
      }
    else
      {
      op->vtkPVDataDeliveryManager::RedistributeDataForOrderedCompositing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetOrderedCompositingInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrderedCompositingInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  vtkExtentTranslator *temp1 = NULL;
  int temp2[6];
  const int size2 = 6;
  double temp3[3];
  const int size3 = 3;
  double temp4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkExtentTranslator") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    if (ap.IsBound())
      {
      op->SetOrderedCompositingInformation(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetOrderedCompositingInformation(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_Deliver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deliver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  int temp0;
  unsigned int temp1;
  unsigned int *temp2 = NULL;
  unsigned int *save2 = NULL;
  unsigned int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Deliver(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVDataDeliveryManager::Deliver(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetStreamable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreamable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetStreamable(temp0, temp1);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetStreamable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetNextStreamedPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextStreamedPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetNextStreamedPiece(temp0, temp1);
      }
    else
      {
      op->vtkPVDataDeliveryManager::SetNextStreamedPiece(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetCurrentStreamedPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentStreamedPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentStreamedPiece(temp0) :
      op->vtkPVDataDeliveryManager::GetCurrentStreamedPiece(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_ClearStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearStreamedPieces();
      }
    else
      {
      op->vtkPVDataDeliveryManager::ClearStreamedPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_DeliverStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeliverStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  unsigned int *temp1 = NULL;
  unsigned int *save1 = NULL;
  unsigned int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->DeliverStreamedPieces(temp0, temp1);
      }
    else
      {
      op->vtkPVDataDeliveryManager::DeliverStreamedPieces(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkPVDataDeliveryManager_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDataDeliveryManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDataDeliveryManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDataDeliveryManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDataDeliveryManager\nC++: vtkPVDataDeliveryManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDataDeliveryManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDataDeliveryManager\nC++: vtkPVDataDeliveryManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSynchronizationMagicNumber", PyvtkPVDataDeliveryManager_GetSynchronizationMagicNumber, METH_VARARGS,
   (char*)"V.GetSynchronizationMagicNumber() -> int\nC++: int GetSynchronizationMagicNumber()\n\nReturned a hash number that can be used to verify that both\nclient and server side are in synch representation wise for\ndelivery.\n"},
  {(char*)"RegisterRepresentation", PyvtkPVDataDeliveryManager_RegisterRepresentation, METH_VARARGS,
   (char*)"V.RegisterRepresentation(vtkPVDataRepresentation)\nC++: void RegisterRepresentation(vtkPVDataRepresentation *repr)\n\nView uses these methods to register a representation with the\nstorage. This makes it possible for representations to\ncommunicate with the storage directly using a self pointer, while\nenables views on different processes to communicate information\nabout representations using their unique ids.\n"},
  {(char*)"UnRegisterRepresentation", PyvtkPVDataDeliveryManager_UnRegisterRepresentation, METH_VARARGS,
   (char*)"V.UnRegisterRepresentation(vtkPVDataRepresentation)\nC++: void UnRegisterRepresentation(vtkPVDataRepresentation *)\n\nView uses these methods to register a representation with the\nstorage. This makes it possible for representations to\ncommunicate with the storage directly using a self pointer, while\nenables views on different processes to communicate information\nabout representations using their unique ids.\n"},
  {(char*)"GetRepresentation", PyvtkPVDataDeliveryManager_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation(int) -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *GetRepresentation(unsigned int)\n\nView uses these methods to register a representation with the\nstorage. This makes it possible for representations to\ncommunicate with the storage directly using a self pointer, while\nenables views on different processes to communicate information\nabout representations using their unique ids.\n"},
  {(char*)"SetPiece", PyvtkPVDataDeliveryManager_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(vtkPVDataRepresentation, vtkDataObject, bool, int)\nC++: void SetPiece(vtkPVDataRepresentation *repr,\n    vtkDataObject *data, bool low_res, unsigned long trueSize=0)\nV.SetPiece(int, vtkDataObject, bool)\nC++: void SetPiece(unsigned int repr_id, vtkDataObject *data,\n    bool low_res)\n\nRepresentations (indirectly via vtkPVRenderView::SetPiece()) call\nthis method to register the geometry type they are rendering.\nEvery representation that requires delivering of any geometry\nmust register with the vtkPVDataDeliveryManager and never manage\nthe delivery on its own.\n"},
  {(char*)"GetProducer", PyvtkPVDataDeliveryManager_GetProducer, METH_VARARGS,
   (char*)"V.GetProducer(vtkPVDataRepresentation, bool) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetProducer(vtkPVDataRepresentation *,\n    bool low_res)\nV.GetProducer(int, bool) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetProducer(unsigned int, bool low_res)\n\nProvides access to the producer port for the geometry of a\nregistered representation. Representations use these methods\n(indirectly via vtkPVRenderView::GetPieceProducer() and\nGetPieceProducerLOD()) to obtain the geometry producer for the\ngeometry to be rendered.\n"},
  {(char*)"SetDeliverToAllProcesses", PyvtkPVDataDeliveryManager_SetDeliverToAllProcesses, METH_VARARGS,
   (char*)"V.SetDeliverToAllProcesses(vtkPVDataRepresentation, bool, bool)\nC++: void SetDeliverToAllProcesses(vtkPVDataRepresentation *,\n    bool flag, bool low_res)\n\nBy default, this class only delivers geometries to nodes that are\ndoing the rendering at a given stage. However, certain\nrepresentations, such as data-label representation, or cube-axes\nrepresentation, need to the geometry to be delivered to all nodes\nalways. That can be done by using this method (via\nvtkPVRenderView::SetDeliverToAllProcesses()).\n"},
  {(char*)"SetDeliverToClientAndRenderingProcesses", PyvtkPVDataDeliveryManager_SetDeliverToClientAndRenderingProcesses, METH_VARARGS,
   (char*)"V.SetDeliverToClientAndRenderingProcesses(vtkPVDataRepresentation,\n     bool, bool, bool)\nC++: void SetDeliverToClientAndRenderingProcesses(\n    vtkPVDataRepresentation *, bool deliver_to_client,\n    bool gather_before_delivery, bool low_res)\n\nBy default, this class only delivers geometries to nodes that are\ndoing the rendering at a given stage. However, certain\nrepresentations, such as text-source representation, need to the\ngeometry to be delivered to  the client as well.  That can be\ndone by using this method (via\nvtkPVRenderView::SetDeliverToAllProcesses()). The different\nbetween SetDeliverToAllProcesses() and this is that the former\ngather-and-scatters the data on the server nodes, while the\nlatter will optionally gather the data to deliver to the client\nand never scatter.\n"},
  {(char*)"MarkAsRedistributable", PyvtkPVDataDeliveryManager_MarkAsRedistributable, METH_VARARGS,
   (char*)"V.MarkAsRedistributable(vtkPVDataRepresentation, bool)\nC++: void MarkAsRedistributable(vtkPVDataRepresentation *,\n    bool value=true)\n\nUnder certain cases, e.g. when remote rendering in parallel with\ntranslucent geometry, the geometry may need to be redistributed\nto ensure ordered compositing can be employed correctly. Marking\ngeometry provided by a representation as redistributable makes it\npossible for this class to redistribute the geometry as needed.\nOnly vtkPolyData, vtkUnstructuredGrid or a multi-block comprising\nof vtkPolyData is currently supported.\n"},
  {(char*)"GetVisibleDataSize", PyvtkPVDataDeliveryManager_GetVisibleDataSize, METH_VARARGS,
   (char*)"V.GetVisibleDataSize(bool) -> int\nC++: unsigned long GetVisibleDataSize(bool low_res)\n\nReturns the size for all visible geometry. If low_res is true,\nand low-res data is not available for a particular\nrepresentation, then it's high-res data size will be used\nassuming that the representation is going to render the high-res\ngeometry for low-res rendering as well.\n"},
  {(char*)"GetKdTree", PyvtkPVDataDeliveryManager_GetKdTree, METH_VARARGS,
   (char*)"V.GetKdTree() -> vtkPKdTree\nC++: vtkPKdTree *GetKdTree()\n\nProvides access to the partitioning kd-tree that was generated\nusing the data provided by the representations. The view uses\nthis kd-tree to decide on the compositing order when ordered\ncompositing is being used.\n"},
  {(char*)"SetRenderView", PyvtkPVDataDeliveryManager_SetRenderView, METH_VARARGS,
   (char*)"V.SetRenderView(vtkPVRenderView)\nC++: void SetRenderView(vtkPVRenderView *)\n\nGet/Set the render-view. The view is not reference counted.\n"},
  {(char*)"GetRenderView", PyvtkPVDataDeliveryManager_GetRenderView, METH_VARARGS,
   (char*)"V.GetRenderView() -> vtkPVRenderView\nC++: vtkPVRenderView *GetRenderView()\n\nGet/Set the render-view. The view is not reference counted.\n"},
  {(char*)"RedistributeDataForOrderedCompositing", PyvtkPVDataDeliveryManager_RedistributeDataForOrderedCompositing, METH_VARARGS,
   (char*)"V.RedistributeDataForOrderedCompositing(bool)\nC++: void RedistributeDataForOrderedCompositing(bool use_lod)\n\nCalled by the view on ever render when ordered compositing is to\nbe used to ensure that the geometries are redistributed, as\nneeded.\n"},
  {(char*)"SetOrderedCompositingInformation", PyvtkPVDataDeliveryManager_SetOrderedCompositingInformation, METH_VARARGS,
   (char*)"V.SetOrderedCompositingInformation(vtkPVDataRepresentation,\n    vtkExtentTranslator, (int, int, int, int, int, int), (float,\n    float, float), (float, float, float))\nC++: void SetOrderedCompositingInformation(\n    vtkPVDataRepresentation *repr,\n    vtkExtentTranslator *translator, const int whole_extents[6],\n    const double origin[3], const double spacing[3])\n\nPass the structured-meta-data for determining rendering order for\nordered compositing.\n"},
  {(char*)"Deliver", PyvtkPVDataDeliveryManager_Deliver, METH_VARARGS,
   (char*)"V.Deliver(int, int, [int, ...])\nC++: void Deliver(int use_low_res, unsigned int size,\n    unsigned int *keys)\n\nTriggers delivery for the geometries of indicated\nrepresentations.\n"},
  {(char*)"SetStreamable", PyvtkPVDataDeliveryManager_SetStreamable, METH_VARARGS,
   (char*)"V.SetStreamable(vtkPVDataRepresentation, bool)\nC++: void SetStreamable(vtkPVDataRepresentation *, bool)\n\nMark a representation as streamable. Any representation can\nindicate that it is streamable i.e. the view can call streaming\npassses on it and it will deliver data incrementally.\n"},
  {(char*)"SetNextStreamedPiece", PyvtkPVDataDeliveryManager_SetNextStreamedPiece, METH_VARARGS,
   (char*)"V.SetNextStreamedPiece(vtkPVDataRepresentation, vtkDataObject)\nC++: void SetNextStreamedPiece(vtkPVDataRepresentation *repr,\n    vtkDataObject *piece)\n\nPasses the current streamed piece. This is the piece that will be\ndelivered to the rendering node.\n"},
  {(char*)"GetCurrentStreamedPiece", PyvtkPVDataDeliveryManager_GetCurrentStreamedPiece, METH_VARARGS,
   (char*)"V.GetCurrentStreamedPiece(vtkPVDataRepresentation)\n    -> vtkDataObject\nC++: vtkDataObject *GetCurrentStreamedPiece(\n    vtkPVDataRepresentation *repr)\n\nPasses the current streamed piece. This is the piece that will be\ndelivered to the rendering node.\n"},
  {(char*)"ClearStreamedPieces", PyvtkPVDataDeliveryManager_ClearStreamedPieces, METH_VARARGS,
   (char*)"V.ClearStreamedPieces()\nC++: void ClearStreamedPieces()\n\nPasses the current streamed piece. This is the piece that will be\ndelivered to the rendering node.\n"},
  {(char*)"DeliverStreamedPieces", PyvtkPVDataDeliveryManager_DeliverStreamedPieces, METH_VARARGS,
   (char*)"V.DeliverStreamedPieces(int, [int, ...])\nC++: void DeliverStreamedPieces(unsigned int size,\n    unsigned int *keys)\n\nDeliver streamed pieces. Unlike regular data, streamed pieces are\ndelivered and released. Representations are expected to manage\nthe pieces once they are delivered to them.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDataDeliveryManager_StaticNew()
{
  return vtkPVDataDeliveryManager::New();
}

PyObject *PyVTKClass_vtkPVDataDeliveryManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDataDeliveryManager_StaticNew,
    PyvtkPVDataDeliveryManager_Methods,
    "vtkPVDataDeliveryManager", modulename,
    NULL, NULL,
    PyvtkPVDataDeliveryManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVDataDeliveryManager_Doc()
{
  static const char *docstring[] = {
    "vtkPVDataDeliveryManager - manager for data-delivery.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVDataDeliveryManager manages geometry delivering for rendering.\nIt is used by vtkPVRenderView to manage the delivery of geometry to\nthe nodes where rendering is happening. This class helps us\nconsolidate all the code for delivering different types of geometries\nto all the nodes involved as well we a managing idiosyncrasies like\nrequiring delivering to all nodes, redistributing for ordered\ncomp",
    "ositing, etc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDataDeliveryManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDataDeliveryManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDataDeliveryManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

