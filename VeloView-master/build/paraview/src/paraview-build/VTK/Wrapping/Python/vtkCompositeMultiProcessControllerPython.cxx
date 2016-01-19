// python wrapper for vtkCompositeMultiProcessController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeMultiProcessController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeMultiProcessController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeMultiProcessControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkCompositeMultiProcessController_Doc();

#ifndef DECLARED_PyvtkCompositeMultiProcessController_EventId_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCompositeMultiProcessController_EventId_Type;
#define DECLARED_PyvtkCompositeMultiProcessController_EventId_Type
#endif

PyTypeObject PyvtkCompositeMultiProcessController_EventId_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"EventId", // tp_name
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

PyObject *PyvtkCompositeMultiProcessController_EventId_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCompositeMultiProcessController_EventId_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeMultiProcessController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeMultiProcessController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeMultiProcessController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeMultiProcessController::NewInstance());

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
PyvtkCompositeMultiProcessController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeMultiProcessController *tempr = vtkCompositeMultiProcessController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetActiveControllerID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveControllerID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveControllerID() :
      op->vtkCompositeMultiProcessController::GetActiveControllerID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetNumberOfControllers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfControllers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfControllers() :
      op->vtkCompositeMultiProcessController::GetNumberOfControllers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetControllerId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControllerId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetControllerId(temp0) :
      op->vtkCompositeMultiProcessController::GetControllerId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_SetMasterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMasterController(temp0);
      }
    else
      {
      op->vtkCompositeMultiProcessController::SetMasterController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetMasterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMasterController() :
      op->vtkCompositeMultiProcessController::GetMasterController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RegisterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->RegisterController(temp0);
      }
    else
      {
      op->vtkCompositeMultiProcessController::RegisterController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_UnRegisterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->UnRegisterController(temp0);
      }
    else
      {
      op->vtkCompositeMultiProcessController::UnRegisterController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_UnRegisterActiveController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterActiveController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UnRegisterActiveController() :
      op->vtkCompositeMultiProcessController::UnRegisterActiveController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetActiveController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetActiveController() :
      op->vtkCompositeMultiProcessController::GetActiveController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_TriggerRMI2All(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI2All");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  void  *temp1 = NULL;
  int temp2;
  int temp3;
  bool temp4 = false;
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
      op->TriggerRMI2All(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkCompositeMultiProcessController::TriggerRMI2All(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCompositeMultiProcessController::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkCompositeMultiProcessController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeMultiProcessController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Finalize(temp0);
      }
    else
      {
      op->vtkCompositeMultiProcessController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeMultiProcessController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCompositeMultiProcessController_Finalize_s1(self, args);
    case 1:
      return PyvtkCompositeMultiProcessController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkCompositeMultiProcessController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkCompositeMultiProcessController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkCompositeMultiProcessController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkCompositeMultiProcessController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetCommunicator() :
      op->vtkCompositeMultiProcessController::GetCommunicator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RemoveAllRMICallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRMICallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRMICallbacks(temp0);
      }
    else
      {
      op->vtkCompositeMultiProcessController::RemoveAllRMICallbacks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RemoveFirstRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveFirstRMI(temp0) :
      op->vtkCompositeMultiProcessController::RemoveFirstRMI(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveRMICallback(temp0) :
      op->vtkCompositeMultiProcessController::RemoveRMICallback(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeMultiProcessController_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeMultiProcessController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeMultiProcessController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeMultiProcessController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeMultiProcessController\nC++: vtkCompositeMultiProcessController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeMultiProcessController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeMultiProcessController\nC++: vtkCompositeMultiProcessController *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetActiveControllerID", PyvtkCompositeMultiProcessController_GetActiveControllerID, METH_VARARGS,
   (char*)"V.GetActiveControllerID() -> int\nC++: int GetActiveControllerID()\n\nReturn a unique identifier for the given selected controller.\nThis is only used as information to id which client is currently\ntalking to the server. In fact it is used inside\nvtkPVServerInformation so the client could know what is its\nunique ID in respect to the server.\n"},
  {(char*)"GetNumberOfControllers", PyvtkCompositeMultiProcessController_GetNumberOfControllers, METH_VARARGS,
   (char*)"V.GetNumberOfControllers() -> int\nC++: int GetNumberOfControllers()\n\nReturn the number of currently connected controllers.\n"},
  {(char*)"GetControllerId", PyvtkCompositeMultiProcessController_GetControllerId, METH_VARARGS,
   (char*)"V.GetControllerId(int) -> int\nC++: int GetControllerId(int idx)\n\nReturn the id of the nth controller.\n"},
  {(char*)"SetMasterController", PyvtkCompositeMultiProcessController_SetMasterController, METH_VARARGS,
   (char*)"V.SetMasterController(int)\nC++: void SetMasterController(int id)\n\nPromote the given controller (ID) to be the next master\ncontroller. Making a controller to be the master one, doesn't\nchange anything on the controller itself. It is just a meta-data\ninformation that helps client application to build master/slave\ncollaborative mechanism on top\n"},
  {(char*)"GetMasterController", PyvtkCompositeMultiProcessController_GetMasterController, METH_VARARGS,
   (char*)"V.GetMasterController() -> int\nC++: int GetMasterController()\n\nRetrun the ID of the designed \"Master\" controller. That master\ncontroller is nothing else than a tag that can only be set on a\nsingle controller at a time.\n"},
  {(char*)"RegisterController", PyvtkCompositeMultiProcessController_RegisterController, METH_VARARGS,
   (char*)"V.RegisterController(vtkMultiProcessController)\nC++: void RegisterController(\n    vtkMultiProcessController *controller)\n\nAppend the given controller to the composite set. We focus on\nvtkSocketController because most of the API method are empty\n"},
  {(char*)"UnRegisterController", PyvtkCompositeMultiProcessController_UnRegisterController, METH_VARARGS,
   (char*)"V.UnRegisterController(vtkMultiProcessController)\nC++: void UnRegisterController(\n    vtkMultiProcessController *controller)\n\nRemove the given controller to the composite set.\n"},
  {(char*)"UnRegisterActiveController", PyvtkCompositeMultiProcessController_UnRegisterActiveController, METH_VARARGS,
   (char*)"V.UnRegisterActiveController() -> int\nC++: int UnRegisterActiveController()\n\nRemove the active controller and return the number of registered\ncontroler left.\n"},
  {(char*)"GetActiveController", PyvtkCompositeMultiProcessController_GetActiveController, METH_VARARGS,
   (char*)"V.GetActiveController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetActiveController()\n\nProvides access to the active controller.\n"},
  {(char*)"TriggerRMI2All", PyvtkCompositeMultiProcessController_TriggerRMI2All, METH_VARARGS,
   (char*)"V.TriggerRMI2All(int, , int, int, bool)\nC++: virtual void TriggerRMI2All(int remote, void *data,\n    int length, int tag, bool sendToActiveToo)\n\nAllow server to broadcast data to all connected client with our\nwithout sending to the active client\n"},
  {(char*)"Initialize", PyvtkCompositeMultiProcessController_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\n"},
  {(char*)"Finalize", PyvtkCompositeMultiProcessController_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int)\n\n"},
  {(char*)"SingleMethodExecute", PyvtkCompositeMultiProcessController_SingleMethodExecute, METH_VARARGS,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\n"},
  {(char*)"MultipleMethodExecute", PyvtkCompositeMultiProcessController_MultipleMethodExecute, METH_VARARGS,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\n"},
  {(char*)"CreateOutputWindow", PyvtkCompositeMultiProcessController_CreateOutputWindow, METH_VARARGS,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\n"},
  {(char*)"GetCommunicator", PyvtkCompositeMultiProcessController_GetCommunicator, METH_VARARGS,
   (char*)"V.GetCommunicator() -> vtkCommunicator\nC++: virtual vtkCommunicator *GetCommunicator()\n\n"},
  {(char*)"RemoveAllRMICallbacks", PyvtkCompositeMultiProcessController_RemoveAllRMICallbacks, METH_VARARGS,
   (char*)"V.RemoveAllRMICallbacks(int)\nC++: virtual void RemoveAllRMICallbacks(int tag)\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {(char*)"RemoveFirstRMI", PyvtkCompositeMultiProcessController_RemoveFirstRMI, METH_VARARGS,
   (char*)"V.RemoveFirstRMI(int) -> int\nC++: virtual int RemoveFirstRMI(int tag)\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {(char*)"RemoveRMICallback", PyvtkCompositeMultiProcessController_RemoveRMICallback, METH_VARARGS,
   (char*)"V.RemoveRMICallback(int) -> bool\nC++: virtual bool RemoveRMICallback(unsigned long observerTagId)\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeMultiProcessController_StaticNew()
{
  return vtkCompositeMultiProcessController::New();
}

PyObject *PyVTKClass_vtkCompositeMultiProcessControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeMultiProcessController_StaticNew,
    PyvtkCompositeMultiProcessController_Methods,
    "vtkCompositeMultiProcessController", modulename,
    NULL, NULL,
    PyvtkCompositeMultiProcessController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCompositeMultiProcessController_EventId_Type);
    PyvtkCompositeMultiProcessController_EventId_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCompositeMultiProcessController_EventId_Type;
    if (o && PyDict_SetItemString(d, (char *)"EventId", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyvtkCompositeMultiProcessController_EventId_FromEnum(vtkCompositeMultiProcessController::CompositeMultiProcessControllerChanged);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"CompositeMultiProcessControllerChanged", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkCompositeMultiProcessController_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeMultiProcessController\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "vtkCompositeMultiProcessController offer a composite implementation\nof vtkMultiProcessController that allow us to deal with collaborative\nMultiProcessController by switching transparently underneath the\nactive one and forwarding the method call to that specific one.\nRMICallBack are simply set on all of the MultiProcessController\ninside the composite.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeMultiProcessController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeMultiProcessControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeMultiProcessController", o) != 0)
    {
    Py_DECREF(o);
    }

}

