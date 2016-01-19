// python wrapper for vtkSocketController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSocketController.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSocketController(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSocketControllerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkSocketController_Doc();

#ifndef DECLARED_PyvtkSocketController_Consts_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSocketController_Consts_Type;
#define DECLARED_PyvtkSocketController_Consts_Type
#endif

PyTypeObject PyvtkSocketController_Consts_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Consts", // tp_name
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

PyObject *PyvtkSocketController_Consts_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSocketController_Consts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSocketController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSocketController::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocketController::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocketController::NewInstance());

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
PyvtkSocketController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSocketController *tempr = vtkSocketController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSocketController::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkSocketController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSocketController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

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
      op->vtkSocketController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSocketController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSocketController_Finalize_s1(self, args);
    case 1:
      return PyvtkSocketController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkSocketController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkSocketController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkSocketController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkSocketController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_WaitForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkSocketController::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseConnection();
      }
    else
      {
      op->vtkSocketController::CloseConnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ConnectTo(temp0, temp1) :
      op->vtkSocketController::ConnectTo(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytesInReceivedData() :
      op->vtkSocketController::GetSwapBytesInReceivedData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  vtkSocketCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkSocketController::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_CreateCompliantController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCompliantController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->CreateCompliantController() :
      op->vtkSocketController::CreateCompliantController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketController_Methods[] = {
  {(char*)"GetClassName", PyvtkSocketController_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocketController_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocketController_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSocketController\nC++: vtkSocketController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSocketController_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSocketController\nC++: vtkSocketController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSocketController_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis method is for initialiazing sockets. One of these is\nREQUIRED for Windows.\n"},
  {(char*)"Finalize", PyvtkSocketController_Finalize, METH_VARARGS,
   (char*)"V.Finalize()\nC++: void Finalize()\nV.Finalize(int)\nC++: void Finalize(int)\n\nDoes not apply to sockets. Does nothing.\n"},
  {(char*)"SingleMethodExecute", PyvtkSocketController_SingleMethodExecute, METH_VARARGS,
   (char*)"V.SingleMethodExecute()\nC++: void SingleMethodExecute()\n\nDoes not apply to sockets. Does nothing.\n"},
  {(char*)"MultipleMethodExecute", PyvtkSocketController_MultipleMethodExecute, METH_VARARGS,
   (char*)"V.MultipleMethodExecute()\nC++: void MultipleMethodExecute()\n\nDoes not apply to sockets.  Does nothing.\n"},
  {(char*)"CreateOutputWindow", PyvtkSocketController_CreateOutputWindow, METH_VARARGS,
   (char*)"V.CreateOutputWindow()\nC++: void CreateOutputWindow()\n\nDoes not apply to sockets. Does nothing.\n"},
  {(char*)"WaitForConnection", PyvtkSocketController_WaitForConnection, METH_VARARGS,
   (char*)"V.WaitForConnection(int) -> int\nC++: virtual int WaitForConnection(int port)\n\nWait for connection on a given port, forwarded to the\ncommunicator\n"},
  {(char*)"CloseConnection", PyvtkSocketController_CloseConnection, METH_VARARGS,
   (char*)"V.CloseConnection()\nC++: virtual void CloseConnection()\n\nClose a connection, forwarded to the communicator\n"},
  {(char*)"ConnectTo", PyvtkSocketController_ConnectTo, METH_VARARGS,
   (char*)"V.ConnectTo(string, int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to a give machine, forwarded to the\ncommunicator\n"},
  {(char*)"GetSwapBytesInReceivedData", PyvtkSocketController_GetSwapBytesInReceivedData, METH_VARARGS,
   (char*)"V.GetSwapBytesInReceivedData() -> int\nC++: int GetSwapBytesInReceivedData()\n\n"},
  {(char*)"SetCommunicator", PyvtkSocketController_SetCommunicator, METH_VARARGS,
   (char*)"V.SetCommunicator(vtkSocketCommunicator)\nC++: void SetCommunicator(vtkSocketCommunicator *comm)\n\nSet the communicator used in normal and rmi communications.\n"},
  {(char*)"CreateCompliantController", PyvtkSocketController_CreateCompliantController, METH_VARARGS,
   (char*)"V.CreateCompliantController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *CreateCompliantController()\n\nFOOLISH MORTALS!  Thou hast forsaken the sacred laws of ad-hoc\npolymorphism when thou broke a critical assumption of the\nsuperclass (namely, each process has thine own id).  The time\nframe to fix thy error has passed. Too much code has come to rely\non this abhorrent behavior.  Instead, we offer this gift: a\nmethod for creating an equivalent communicator with correct\nprocess id semantics.  The calling code is responsible for\ndeleting this controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSocketController_StaticNew()
{
  return vtkSocketController::New();
}

PyObject *PyVTKClass_vtkSocketControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSocketController_StaticNew,
    PyvtkSocketController_Methods,
    "vtkSocketController", modulename,
    NULL, NULL,
    PyvtkSocketController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSocketController_Consts_Type);
    PyvtkSocketController_Consts_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSocketController_Consts_Type;
    if (o && PyDict_SetItemString(d, (char *)"Consts", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkSocketController::Consts cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "ENDIAN_TAG", vtkSocketController::ENDIAN_TAG },
          { "IDTYPESIZE_TAG", vtkSocketController::IDTYPESIZE_TAG },
          { "VERSION_TAG", vtkSocketController::VERSION_TAG },
          { "HASH_TAG", vtkSocketController::HASH_TAG },
        };

      o = PyvtkSocketController_Consts_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSocketController_Doc()
{
  static const char *docstring[] = {
    "vtkSocketController - Process communication using Sockets\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "This is a concrete implementation of vtkMultiProcessController. It\nsupports one-to-one communication using sockets. Note that process 0\nwill always correspond to self and process 1 to the remote process.\nThis class is best used with ports.\n\nSee Also:\n\nvtkMultiProcessController vtkSocketCommunicator vtkInputPort\nvtkOutputPort\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocketController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocketController", o) != 0)
    {
    Py_DECREF(o);
    }

}

