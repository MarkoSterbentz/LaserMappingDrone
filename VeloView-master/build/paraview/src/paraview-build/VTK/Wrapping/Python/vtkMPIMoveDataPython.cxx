// python wrapper for vtkMPIMoveData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMPIMoveData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMPIMoveData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMPIMoveDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkMPIMoveData_Doc();

#ifndef DECLARED_PyvtkMPIMoveData_MoveModes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkMPIMoveData_MoveModes_Type;
#define DECLARED_PyvtkMPIMoveData_MoveModes_Type
#endif

PyTypeObject PyvtkMPIMoveData_MoveModes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"MoveModes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkMPIMoveData_MoveModes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMPIMoveData_MoveModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkMPIMoveData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMPIMoveData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMoveData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMPIMoveData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMoveData::NewInstance());

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
PyvtkMPIMoveData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMPIMoveData *tempr = vtkMPIMoveData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_InitializeForCommunicationForParaView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeForCommunicationForParaView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitializeForCommunicationForParaView();
      }
    else
      {
      op->vtkMPIMoveData::InitializeForCommunicationForParaView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  vtkMPIMToNSocketConnection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnection"))
    {
    if (ap.IsBound())
      {
      op->SetMPIMToNSocketConnection(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetMPIMToNSocketConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetClientDataServerSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientDataServerSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetClientDataServerSocketController(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetClientDataServerSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetClientDataServerSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientDataServerSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetClientDataServerSocketController() :
      op->vtkMPIMoveData::GetClientDataServerSocketController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServerToClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerToClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetServerToClient();
      }
    else
      {
      op->vtkMPIMoveData::SetServerToClient();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServerToDataServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerToDataServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetServerToDataServer();
      }
    else
      {
      op->vtkMPIMoveData::SetServerToDataServer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServerToRenderServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerToRenderServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetServerToRenderServer();
      }
    else
      {
      op->vtkMPIMoveData::SetServerToRenderServer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetServer(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetServer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetServerMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetServerMinValue() :
      op->vtkMPIMoveData::GetServerMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetServerMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetServerMaxValue() :
      op->vtkMPIMoveData::GetServerMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetServer() :
      op->vtkMPIMoveData::GetServer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveModeToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveModeToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMoveModeToPassThrough();
      }
    else
      {
      op->vtkMPIMoveData::SetMoveModeToPassThrough();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveModeToCollect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveModeToCollect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMoveModeToCollect();
      }
    else
      {
      op->vtkMPIMoveData::SetMoveModeToCollect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveModeToClone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveModeToClone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetMoveModeToClone();
      }
    else
      {
      op->vtkMPIMoveData::SetMoveModeToClone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMoveMode(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetMoveMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetMoveModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMoveModeMinValue() :
      op->vtkMPIMoveData::GetMoveModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetMoveModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMoveModeMaxValue() :
      op->vtkMPIMoveData::GetMoveModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDataType(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetOutputDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataType() :
      op->vtkMPIMoveData::GetOutputDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetUseZLibCompression(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseZLibCompression");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMPIMoveData::SetUseZLibCompression(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetUseZLibCompression(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseZLibCompression");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkMPIMoveData::GetUseZLibCompression();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetOutputGeneratedOnProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputGeneratedOnProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOutputGeneratedOnProcess() :
      op->vtkMPIMoveData::GetOutputGeneratedOnProcess());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetSkipDataServerGatherToZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipDataServerGatherToZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSkipDataServerGatherToZero(temp0);
      }
    else
      {
      op->vtkMPIMoveData::SetSkipDataServerGatherToZero(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetSkipDataServerGatherToZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDataServerGatherToZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSkipDataServerGatherToZero() :
      op->vtkMPIMoveData::GetSkipDataServerGatherToZero());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMPIMoveData_Methods[] = {
  {(char*)"GetClassName", PyvtkMPIMoveData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPIMoveData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPIMoveData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMPIMoveData\nC++: vtkMPIMoveData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPIMoveData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPIMoveData\nC++: vtkMPIMoveData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitializeForCommunicationForParaView", PyvtkMPIMoveData_InitializeForCommunicationForParaView, METH_VARARGS,
   (char*)"V.InitializeForCommunicationForParaView()\nC++: virtual void InitializeForCommunicationForParaView()\n\nUse this method to initialize all communicators/sockets using\nParaView defaults.\n"},
  {(char*)"SetController", PyvtkMPIMoveData_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {(char*)"SetMPIMToNSocketConnection", PyvtkMPIMoveData_SetMPIMToNSocketConnection, METH_VARARGS,
   (char*)"V.SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection)\nC++: void SetMPIMToNSocketConnection(\n    vtkMPIMToNSocketConnection *sc)\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {(char*)"SetClientDataServerSocketController", PyvtkMPIMoveData_SetClientDataServerSocketController, METH_VARARGS,
   (char*)"V.SetClientDataServerSocketController(vtkMultiProcessController)\nC++: void SetClientDataServerSocketController(\n    vtkMultiProcessController *)\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {(char*)"GetClientDataServerSocketController", PyvtkMPIMoveData_GetClientDataServerSocketController, METH_VARARGS,
   (char*)"V.GetClientDataServerSocketController()\n    -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetClientDataServerSocketController(\n    )\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {(char*)"SetServerToClient", PyvtkMPIMoveData_SetServerToClient, METH_VARARGS,
   (char*)"V.SetServerToClient()\nC++: void SetServerToClient()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"SetServerToDataServer", PyvtkMPIMoveData_SetServerToDataServer, METH_VARARGS,
   (char*)"V.SetServerToDataServer()\nC++: void SetServerToDataServer()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"SetServerToRenderServer", PyvtkMPIMoveData_SetServerToRenderServer, METH_VARARGS,
   (char*)"V.SetServerToRenderServer()\nC++: void SetServerToRenderServer()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"SetServer", PyvtkMPIMoveData_SetServer, METH_VARARGS,
   (char*)"V.SetServer(int)\nC++: void SetServer(int)\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"GetServerMinValue", PyvtkMPIMoveData_GetServerMinValue, METH_VARARGS,
   (char*)"V.GetServerMinValue() -> int\nC++: int GetServerMinValue()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"GetServerMaxValue", PyvtkMPIMoveData_GetServerMaxValue, METH_VARARGS,
   (char*)"V.GetServerMaxValue() -> int\nC++: int GetServerMaxValue()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"GetServer", PyvtkMPIMoveData_GetServer, METH_VARARGS,
   (char*)"V.GetServer() -> int\nC++: int GetServer()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {(char*)"SetMoveModeToPassThrough", PyvtkMPIMoveData_SetMoveModeToPassThrough, METH_VARARGS,
   (char*)"V.SetMoveModeToPassThrough()\nC++: void SetMoveModeToPassThrough()\n\nSpecify how the data is to be redistributed.\n"},
  {(char*)"SetMoveModeToCollect", PyvtkMPIMoveData_SetMoveModeToCollect, METH_VARARGS,
   (char*)"V.SetMoveModeToCollect()\nC++: void SetMoveModeToCollect()\n\nSpecify how the data is to be redistributed.\n"},
  {(char*)"SetMoveModeToClone", PyvtkMPIMoveData_SetMoveModeToClone, METH_VARARGS,
   (char*)"V.SetMoveModeToClone()\nC++: void SetMoveModeToClone()\n\nSpecify how the data is to be redistributed.\n"},
  {(char*)"SetMoveMode", PyvtkMPIMoveData_SetMoveMode, METH_VARARGS,
   (char*)"V.SetMoveMode(int)\nC++: void SetMoveMode(int)\n\nSpecify how the data is to be redistributed.\n"},
  {(char*)"GetMoveModeMinValue", PyvtkMPIMoveData_GetMoveModeMinValue, METH_VARARGS,
   (char*)"V.GetMoveModeMinValue() -> int\nC++: int GetMoveModeMinValue()\n\nSpecify how the data is to be redistributed.\n"},
  {(char*)"GetMoveModeMaxValue", PyvtkMPIMoveData_GetMoveModeMaxValue, METH_VARARGS,
   (char*)"V.GetMoveModeMaxValue() -> int\nC++: int GetMoveModeMaxValue()\n\nSpecify how the data is to be redistributed.\n"},
  {(char*)"SetOutputDataType", PyvtkMPIMoveData_SetOutputDataType, METH_VARARGS,
   (char*)"V.SetOutputDataType(int)\nC++: void SetOutputDataType(int a)\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA.\n"},
  {(char*)"GetOutputDataType", PyvtkMPIMoveData_GetOutputDataType, METH_VARARGS,
   (char*)"V.GetOutputDataType() -> int\nC++: int GetOutputDataType()\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA.\n"},
  {(char*)"SetUseZLibCompression", PyvtkMPIMoveData_SetUseZLibCompression, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUseZLibCompression(bool)\nC++: static void SetUseZLibCompression(bool b)\n\nWhen set to true, zlib compression is used. False by default.\nThis value has any effect only on the data-sender processes. The\nreceiver always checks the received data to see if zlib\ndecompression is required.\n"},
  {(char*)"GetUseZLibCompression", PyvtkMPIMoveData_GetUseZLibCompression, METH_VARARGS | METH_STATIC,
   (char*)"V.GetUseZLibCompression() -> bool\nC++: static bool GetUseZLibCompression()\n\nWhen set to true, zlib compression is used. False by default.\nThis value has any effect only on the data-sender processes. The\nreceiver always checks the received data to see if zlib\ndecompression is required.\n"},
  {(char*)"GetOutputGeneratedOnProcess", PyvtkMPIMoveData_GetOutputGeneratedOnProcess, METH_VARARGS,
   (char*)"V.GetOutputGeneratedOnProcess() -> bool\nC++: bool GetOutputGeneratedOnProcess()\n\nvtkMPIMoveData doesn't necessarily generate a valid output data\non all the involved processes (depending on the MoveMode and\nServer ivars). This returns true if valid data is available on\nthe current processes after successful Update() given the current\nivars).\n"},
  {(char*)"SetSkipDataServerGatherToZero", PyvtkMPIMoveData_SetSkipDataServerGatherToZero, METH_VARARGS,
   (char*)"V.SetSkipDataServerGatherToZero(bool)\nC++: void SetSkipDataServerGatherToZero(bool a)\n\nWhen set, vtkMPIMoveData will skip the gather-to-root-node\nprocess altogether. This is useful when the data is already\ncloned on the server-nodes or we are interested in the root-node\nresult alone.\n"},
  {(char*)"GetSkipDataServerGatherToZero", PyvtkMPIMoveData_GetSkipDataServerGatherToZero, METH_VARARGS,
   (char*)"V.GetSkipDataServerGatherToZero() -> bool\nC++: bool GetSkipDataServerGatherToZero()\n\nWhen set, vtkMPIMoveData will skip the gather-to-root-node\nprocess altogether. This is useful when the data is already\ncloned on the server-nodes or we are interested in the root-node\nresult alone.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPIMoveData_StaticNew()
{
  return vtkMPIMoveData::New();
}

PyObject *PyVTKClass_vtkMPIMoveDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPIMoveData_StaticNew,
    PyvtkMPIMoveData_Methods,
    "vtkMPIMoveData", modulename,
    NULL, NULL,
    PyvtkMPIMoveData_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkMPIMoveData_MoveModes_Type);
    PyvtkMPIMoveData_MoveModes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkMPIMoveData_MoveModes_Type;
    if (o && PyDict_SetItemString(d, (char *)"MoveModes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkMPIMoveData::MoveModes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "PASS_THROUGH", vtkMPIMoveData::PASS_THROUGH },
          { "COLLECT", vtkMPIMoveData::COLLECT },
          { "CLONE", vtkMPIMoveData::CLONE },
          { "COLLECT_AND_PASS_THROUGH", vtkMPIMoveData::COLLECT_AND_PASS_THROUGH },
        };

      o = PyvtkMPIMoveData_MoveModes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMPIMoveData_Doc()
{
  static const char *docstring[] = {
    "vtkMPIMoveData - Moves/redistributes data between processes.\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "This class combines all the duplicate and collection requirements\ninto one filter. It can move polydata and unstructured grid between\nprocesses. It can redistributed polydata from M to N processors.\nUpdate: This filter can now support delivering vtkUniformGridAMR\ndatasets in PASS_THROUGH and/or COLLECT modes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPIMoveData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPIMoveDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPIMoveData", o) != 0)
    {
    Py_DECREF(o);
    }

}

