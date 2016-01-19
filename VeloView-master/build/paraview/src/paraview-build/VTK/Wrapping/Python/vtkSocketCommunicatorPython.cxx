// python wrapper for vtkSocketCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSocketCommunicator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSocketCommunicator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSocketCommunicatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCommunicatorNew
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommunicatorNew
#endif

static const char **PyvtkSocketCommunicator_Doc();


static PyObject *
PyvtkSocketCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSocketCommunicator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocketCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocketCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocketCommunicator::NewInstance());

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
PyvtkSocketCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSocketCommunicator *tempr = vtkSocketCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkSocketCommunicator::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkServerSocket *temp0 = NULL;
  unsigned long temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkServerSocket") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0, temp1) :
      op->vtkSocketCommunicator::WaitForConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_WaitForConnection_Methods[] = {
  {NULL, PyvtkSocketCommunicator_WaitForConnection_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkSocketCommunicator_WaitForConnection_s2, METH_VARARGS,
   (char*)"@O|k *vtkServerSocket"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSocketCommunicator_WaitForConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSocketCommunicator_WaitForConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSocketCommunicator_WaitForConnection_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "WaitForConnection");
  return NULL;
}



static PyObject *
PyvtkSocketCommunicator_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseConnection();
      }
    else
      {
      op->vtkSocketCommunicator::CloseConnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ConnectTo(temp0, temp1) :
      op->vtkSocketCommunicator::ConnectTo(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytesInReceivedData() :
      op->vtkSocketCommunicator::GetSwapBytesInReceivedData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIsConnected() :
      op->vtkSocketCommunicator::GetIsConnected());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfProcesses(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
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
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
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
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkSocketCommunicator::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->BroadcastVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkSocketCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
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
    int tempr = (ap.IsBound() ?
      op->GatherVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkSocketCommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
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
    int tempr = (ap.IsBound() ?
      op->ScatterVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new vtkIdType[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkSocketCommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->AllGatherVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkSocketCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new vtkIdType[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new vtkIdType[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkSocketCommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    int tempr = (ap.IsBound() ?
      op->ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkSocketCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
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
    int tempr = (ap.IsBound() ?
      op->AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPerformHandshake(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetPerformHandshake(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshakeMinValue() :
      op->vtkSocketCommunicator::GetPerformHandshakeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshakeMaxValue() :
      op->vtkSocketCommunicator::GetPerformHandshakeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PerformHandshakeOn();
      }
    else
      {
      op->vtkSocketCommunicator::PerformHandshakeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PerformHandshakeOff();
      }
    else
      {
      op->vtkSocketCommunicator::PerformHandshakeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshake() :
      op->vtkSocketCommunicator::GetPerformHandshake());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_LogToFile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->LogToFile(temp0) :
      op->vtkSocketCommunicator::LogToFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->LogToFile(temp0, temp1) :
      op->vtkSocketCommunicator::LogToFile(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSocketCommunicator_LogToFile_s1(self, args);
    case 2:
      return PyvtkSocketCommunicator_LogToFile_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LogToFile");
  return NULL;
}



static PyObject *
PyvtkSocketCommunicator_SetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReportErrors(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetReportErrors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReportErrors() :
      op->vtkSocketCommunicator::GetReportErrors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClientSocket *tempr = (ap.IsBound() ?
      op->GetSocket() :
      op->vtkSocketCommunicator::GetSocket());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkClientSocket *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientSocket"))
    {
    if (ap.IsBound())
      {
      op->SetSocket(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetSocket(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_Handshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Handshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Handshake() :
      op->vtkSocketCommunicator::Handshake());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ServerSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ServerSideHandshake() :
      op->vtkSocketCommunicator::ServerSideHandshake());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ClientSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClientSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ClientSideHandshake() :
      op->vtkSocketCommunicator::ClientSideHandshake());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIsServer() :
      op->vtkSocketCommunicator::GetIsServer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkSocketCommunicator::GetVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BufferCurrentMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferCurrentMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BufferCurrentMessage();
      }
    else
      {
      op->vtkSocketCommunicator::BufferCurrentMessage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_HasBufferredMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBufferredMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBufferredMessages() :
      op->vtkSocketCommunicator::HasBufferredMessages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkSocketCommunicator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocketCommunicator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocketCommunicator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSocketCommunicator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"WaitForConnection", PyvtkSocketCommunicator_WaitForConnection, METH_VARARGS,
   (char*)"V.WaitForConnection(int) -> int\nC++: virtual int WaitForConnection(int port)\nV.WaitForConnection(vtkServerSocket, int) -> int\nC++: virtual int WaitForConnection(vtkServerSocket *socket,\n    unsigned long msec=0)\n\nWait for connection on a given port. These methods return 1 on\nsuccess, 0 on error.\n"},
  {(char*)"CloseConnection", PyvtkSocketCommunicator_CloseConnection, METH_VARARGS,
   (char*)"V.CloseConnection()\nC++: virtual void CloseConnection()\n\nClose a connection.\n"},
  {(char*)"ConnectTo", PyvtkSocketCommunicator_ConnectTo, METH_VARARGS,
   (char*)"V.ConnectTo(string, int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to host.\n"},
  {(char*)"GetSwapBytesInReceivedData", PyvtkSocketCommunicator_GetSwapBytesInReceivedData, METH_VARARGS,
   (char*)"V.GetSwapBytesInReceivedData() -> int\nC++: int GetSwapBytesInReceivedData()\n\nReturns 1 if bytes must be swapped in received ints, floats, etc\n"},
  {(char*)"GetIsConnected", PyvtkSocketCommunicator_GetIsConnected, METH_VARARGS,
   (char*)"V.GetIsConnected() -> int\nC++: int GetIsConnected()\n\nIs the communicator connected?.\n"},
  {(char*)"SetNumberOfProcesses", PyvtkSocketCommunicator_SetNumberOfProcesses, METH_VARARGS,
   (char*)"V.SetNumberOfProcesses(int)\nC++: virtual void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.\n"},
  {(char*)"SendVoidArray", PyvtkSocketCommunicator_SendVoidArray, METH_VARARGS,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {(char*)"ReceiveVoidArray", PyvtkSocketCommunicator_ReceiveVoidArray, METH_VARARGS,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType length,\n    int type, int remoteHandle, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {(char*)"Barrier", PyvtkSocketCommunicator_Barrier, METH_VARARGS,
   (char*)"V.Barrier()\nC++: virtual void Barrier()\n\nThis class foolishly breaks the conventions of the superclass, so\nthis overload fixes the method.\n"},
  {(char*)"BroadcastVoidArray", PyvtkSocketCommunicator_BroadcastVoidArray, METH_VARARGS,
   (char*)"V.BroadcastVoidArray(, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"GatherVoidArray", PyvtkSocketCommunicator_GatherVoidArray, METH_VARARGS,
   (char*)"V.GatherVoidArray(, , int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"GatherVVoidArray", PyvtkSocketCommunicator_GatherVVoidArray, METH_VARARGS,
   (char*)"V.GatherVVoidArray(, , int, [int, ...], [int, ...], int, int)\n    -> int\nC++: virtual int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"ScatterVoidArray", PyvtkSocketCommunicator_ScatterVoidArray, METH_VARARGS,
   (char*)"V.ScatterVoidArray(, , int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"ScatterVVoidArray", PyvtkSocketCommunicator_ScatterVVoidArray, METH_VARARGS,
   (char*)"V.ScatterVVoidArray(, , [int, ...], [int, ...], int, int, int)\n    -> int\nC++: virtual int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"AllGatherVoidArray", PyvtkSocketCommunicator_AllGatherVoidArray, METH_VARARGS,
   (char*)"V.AllGatherVoidArray(, , int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"AllGatherVVoidArray", PyvtkSocketCommunicator_AllGatherVVoidArray, METH_VARARGS,
   (char*)"V.AllGatherVVoidArray(, , int, [int, ...], [int, ...], int) -> int\nC++: virtual int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"ReduceVoidArray", PyvtkSocketCommunicator_ReduceVoidArray, METH_VARARGS,
   (char*)"V.ReduceVoidArray(, , int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"AllReduceVoidArray", PyvtkSocketCommunicator_AllReduceVoidArray, METH_VARARGS,
   (char*)"V.AllReduceVoidArray(, , int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"SetPerformHandshake", PyvtkSocketCommunicator_SetPerformHandshake, METH_VARARGS,
   (char*)"V.SetPerformHandshake(int)\nC++: void SetPerformHandshake(int)\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"GetPerformHandshakeMinValue", PyvtkSocketCommunicator_GetPerformHandshakeMinValue, METH_VARARGS,
   (char*)"V.GetPerformHandshakeMinValue() -> int\nC++: int GetPerformHandshakeMinValue()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"GetPerformHandshakeMaxValue", PyvtkSocketCommunicator_GetPerformHandshakeMaxValue, METH_VARARGS,
   (char*)"V.GetPerformHandshakeMaxValue() -> int\nC++: int GetPerformHandshakeMaxValue()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"PerformHandshakeOn", PyvtkSocketCommunicator_PerformHandshakeOn, METH_VARARGS,
   (char*)"V.PerformHandshakeOn()\nC++: void PerformHandshakeOn()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"PerformHandshakeOff", PyvtkSocketCommunicator_PerformHandshakeOff, METH_VARARGS,
   (char*)"V.PerformHandshakeOff()\nC++: void PerformHandshakeOff()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"GetPerformHandshake", PyvtkSocketCommunicator_GetPerformHandshake, METH_VARARGS,
   (char*)"V.GetPerformHandshake() -> int\nC++: int GetPerformHandshake()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"LogToFile", PyvtkSocketCommunicator_LogToFile, METH_VARARGS,
   (char*)"V.LogToFile(string) -> int\nC++: virtual int LogToFile(const char *name)\nV.LogToFile(string, int) -> int\nC++: virtual int LogToFile(const char *name, int append)\n\nLog messages to the given file.  The file is truncated unless the\nsecond argument is non-zero (default is to truncate).  If the\nfile name is empty or NULL, logging is disabled.  Returns 0 if\nthe file failed to open, and 1 otherwise.\n"},
  {(char*)"SetReportErrors", PyvtkSocketCommunicator_SetReportErrors, METH_VARARGS,
   (char*)"V.SetReportErrors(int)\nC++: void SetReportErrors(int a)\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {(char*)"GetReportErrors", PyvtkSocketCommunicator_GetReportErrors, METH_VARARGS,
   (char*)"V.GetReportErrors() -> int\nC++: int GetReportErrors()\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {(char*)"GetSocket", PyvtkSocketCommunicator_GetSocket, METH_VARARGS,
   (char*)"V.GetSocket() -> vtkClientSocket\nC++: vtkClientSocket *GetSocket()\n\nGet/Set the actual socket used for communication.\n"},
  {(char*)"SetSocket", PyvtkSocketCommunicator_SetSocket, METH_VARARGS,
   (char*)"V.SetSocket(vtkClientSocket)\nC++: void SetSocket(vtkClientSocket *)\n\nGet/Set the actual socket used for communication.\n"},
  {(char*)"Handshake", PyvtkSocketCommunicator_Handshake, METH_VARARGS,
   (char*)"V.Handshake() -> int\nC++: int Handshake()\n\nPerforms handshake. This uses vtkClientSocket::ConnectingSide to\ndecide whether to perform ServerSideHandshake or\nClientSideHandshake.\n"},
  {(char*)"ServerSideHandshake", PyvtkSocketCommunicator_ServerSideHandshake, METH_VARARGS,
   (char*)"V.ServerSideHandshake() -> int\nC++: int ServerSideHandshake()\n\nPerforms ServerSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {(char*)"ClientSideHandshake", PyvtkSocketCommunicator_ClientSideHandshake, METH_VARARGS,
   (char*)"V.ClientSideHandshake() -> int\nC++: int ClientSideHandshake()\n\nPerforms ClientSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {(char*)"GetIsServer", PyvtkSocketCommunicator_GetIsServer, METH_VARARGS,
   (char*)"V.GetIsServer() -> int\nC++: int GetIsServer()\n\nReturns true if this side of the socket is the server.  The\nresult is invalid if the socket is not connected.\n"},
  {(char*)"GetVersion", PyvtkSocketCommunicator_GetVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVersion() -> int\nC++: static int GetVersion()\n\nUniquely identifies the version of this class.  If the versions\nmatch, then the socket communicators should be compatible.\n"},
  {(char*)"BufferCurrentMessage", PyvtkSocketCommunicator_BufferCurrentMessage, METH_VARARGS,
   (char*)"V.BufferCurrentMessage()\nC++: void BufferCurrentMessage()\n\nThis flag is cleared before vtkCommand::WrongTagEvent is fired\nwhen ever a message with mismatched tag is received. If the\nhandler wants the message to be buffered for later use, it should\nset this flag to true. In which case the vtkSocketCommunicator\nwill  buffer the messsage and it will be automatically processed\nthe next time one does a ReceiveTagged() with a matching tag.\n"},
  {(char*)"HasBufferredMessages", PyvtkSocketCommunicator_HasBufferredMessages, METH_VARARGS,
   (char*)"V.HasBufferredMessages() -> bool\nC++: bool HasBufferredMessages()\n\nReturns true if there are any messages in the receive buffer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSocketCommunicator_StaticNew()
{
  return vtkSocketCommunicator::New();
}

PyObject *PyVTKClass_vtkSocketCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSocketCommunicator_StaticNew,
    PyvtkSocketCommunicator_Methods,
    "vtkSocketCommunicator", modulename,
    NULL, NULL,
    PyvtkSocketCommunicator_Doc(),
    PyVTKClass_vtkCommunicatorNew(modulename));
  return cls;
}

const char **PyvtkSocketCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkSocketCommunicator - Process communication using Sockets\n\n",
    "Superclass: vtkCommunicator\n\n",
    "This is a concrete implementation of vtkCommunicator which supports\ninterprocess communication using BSD style sockets. It supports byte\nswapping for the communication of  machines with different\nendianness.\n\nCaveats:\n\nCommunication between 32 bit and 64 bit systems is not fully\nsupported. If a type does not have the same length on both systems,\nthis communicator can not be used to transfer data o",
    "f that type.\n\nSee Also:\n\nvtkCommunicator vtkSocketController\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocketCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocketCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

