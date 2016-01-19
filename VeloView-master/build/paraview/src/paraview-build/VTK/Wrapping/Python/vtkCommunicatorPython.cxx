// python wrapper for vtkCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkCommunicator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCommunicator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCommunicator_Doc();

#ifndef DECLARED_PyvtkCommunicator_Tags_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCommunicator_Tags_Type;
#define DECLARED_PyvtkCommunicator_Tags_Type
#endif

PyTypeObject PyvtkCommunicator_Tags_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Tags", // tp_name
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

PyObject *PyvtkCommunicator_Tags_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCommunicator_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkCommunicator_StandardOperations_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCommunicator_StandardOperations_Type;
#define DECLARED_PyvtkCommunicator_StandardOperations_Type
#endif

PyTypeObject PyvtkCommunicator_StandardOperations_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"StandardOperations", // tp_name
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

PyObject *PyvtkCommunicator_StandardOperations_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCommunicator_StandardOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCommunicator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommunicator::NewInstance());

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
PyvtkCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCommunicator *tempr = vtkCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkCommunicator::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkCommunicator::GetLocalProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkCommunicator::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkCommunicator::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
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
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Send_Methods[] = {
  {NULL, PyvtkCommunicator_Send_s1, METH_VARARGS,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkCommunicator_Send_s2, METH_VARARGS,
   (char*)"@Oii *vtkDataArray"},
  {NULL, PyvtkCommunicator_Send_s3, METH_VARARGS,
   (char*)"@OLii *i"},
  {NULL, PyvtkCommunicator_Send_s4, METH_VARARGS,
   (char*)"@OLii *k"},
  {NULL, PyvtkCommunicator_Send_s5, METH_VARARGS,
   (char*)"@zLii"},
  {NULL, PyvtkCommunicator_Send_s6, METH_VARARGS,
   (char*)"@OLii *d"},
  {NULL, PyvtkCommunicator_Send_s7, METH_VARARGS,
   (char*)"@OLii *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return NULL;
}



static PyObject *
PyvtkCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = op->SendVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long *save0 = NULL;
  unsigned long small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
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
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Receive_Methods[] = {
  {NULL, PyvtkCommunicator_Receive_s1, METH_VARARGS,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkCommunicator_Receive_s2, METH_VARARGS,
   (char*)"@Oii *vtkDataArray"},
  {NULL, PyvtkCommunicator_Receive_s3, METH_VARARGS,
   (char*)"@OLii *i"},
  {NULL, PyvtkCommunicator_Receive_s4, METH_VARARGS,
   (char*)"@OLii *k"},
  {NULL, PyvtkCommunicator_Receive_s5, METH_VARARGS,
   (char*)"@zLii"},
  {NULL, PyvtkCommunicator_Receive_s6, METH_VARARGS,
   (char*)"@OLii *d"},
  {NULL, PyvtkCommunicator_Receive_s7, METH_VARARGS,
   (char*)"@OLii *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return NULL;
}



static PyObject *
PyvtkCommunicator_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ReceiveDataObject(temp0, temp1) :
      op->vtkCommunicator::ReceiveDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCount() :
      op->vtkCommunicator::GetCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkCommunicator::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long *save0 = NULL;
  unsigned long small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkCommunicator::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkCommunicator::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Broadcast_Methods[] = {
  {NULL, PyvtkCommunicator_Broadcast_s1, METH_VARARGS,
   (char*)"@OLi *i"},
  {NULL, PyvtkCommunicator_Broadcast_s2, METH_VARARGS,
   (char*)"@OLi *k"},
  {NULL, PyvtkCommunicator_Broadcast_s3, METH_VARARGS,
   (char*)"@zLi"},
  {NULL, PyvtkCommunicator_Broadcast_s4, METH_VARARGS,
   (char*)"@OLi *d"},
  {NULL, PyvtkCommunicator_Broadcast_s5, METH_VARARGS,
   (char*)"@OLi *L"},
  {NULL, PyvtkCommunicator_Broadcast_s6, METH_VARARGS,
   (char*)"@Oi *vtkDataObject"},
  {NULL, PyvtkCommunicator_Broadcast_s7, METH_VARARGS,
   (char*)"@Oi *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return NULL;
}



static PyObject *
PyvtkCommunicator_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Gather_Methods[] = {
  {NULL, PyvtkCommunicator_Gather_s1, METH_VARARGS,
   (char*)"@OOLi *i *i"},
  {NULL, PyvtkCommunicator_Gather_s2, METH_VARARGS,
   (char*)"@OOLi *k *k"},
  {NULL, PyvtkCommunicator_Gather_s3, METH_VARARGS,
   (char*)"@zzLi"},
  {NULL, PyvtkCommunicator_Gather_s4, METH_VARARGS,
   (char*)"@OOLi *d *d"},
  {NULL, PyvtkCommunicator_Gather_s5, METH_VARARGS,
   (char*)"@OOLi *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCommunicator_Gather_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return NULL;
}



static PyObject *
PyvtkCommunicator_GatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
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
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
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
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_GatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
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
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
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
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_GatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_GatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
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
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_GatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
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
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
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
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_GatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  int temp4;
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

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_GatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_GatherV_Methods[] = {
  {NULL, PyvtkCommunicator_GatherV_s1, METH_VARARGS,
   (char*)"@OOLOOi *i *i *L *L"},
  {NULL, PyvtkCommunicator_GatherV_s2, METH_VARARGS,
   (char*)"@OOLOOi *k *k *L *L"},
  {NULL, PyvtkCommunicator_GatherV_s3, METH_VARARGS,
   (char*)"@zzLOOi *L *L"},
  {NULL, PyvtkCommunicator_GatherV_s4, METH_VARARGS,
   (char*)"@OOLOOi *d *d *L *L"},
  {NULL, PyvtkCommunicator_GatherV_s5, METH_VARARGS,
   (char*)"@OOLOOi *L *L *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_GatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_GatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkCommunicator_GatherV_s6(self, args);
    case 3:
      return PyvtkCommunicator_GatherV_s7(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GatherV");
  return NULL;
}



static PyObject *
PyvtkCommunicator_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Scatter_Methods[] = {
  {NULL, PyvtkCommunicator_Scatter_s1, METH_VARARGS,
   (char*)"@OOLi *i *i"},
  {NULL, PyvtkCommunicator_Scatter_s2, METH_VARARGS,
   (char*)"@OOLi *k *k"},
  {NULL, PyvtkCommunicator_Scatter_s3, METH_VARARGS,
   (char*)"@zzLi"},
  {NULL, PyvtkCommunicator_Scatter_s4, METH_VARARGS,
   (char*)"@OOLi *d *d"},
  {NULL, PyvtkCommunicator_Scatter_s5, METH_VARARGS,
   (char*)"@OOLi *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Scatter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Scatter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCommunicator_Scatter_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return NULL;
}



static PyObject *
PyvtkCommunicator_ScatterV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
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
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_ScatterV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
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
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_ScatterV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_ScatterV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_ScatterV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
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
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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

static PyMethodDef PyvtkCommunicator_ScatterV_Methods[] = {
  {NULL, PyvtkCommunicator_ScatterV_s1, METH_VARARGS,
   (char*)"@OOOOLi *i *i *L *L"},
  {NULL, PyvtkCommunicator_ScatterV_s2, METH_VARARGS,
   (char*)"@OOOOLi *k *k *L *L"},
  {NULL, PyvtkCommunicator_ScatterV_s3, METH_VARARGS,
   (char*)"@zzOOLi *L *L"},
  {NULL, PyvtkCommunicator_ScatterV_s4, METH_VARARGS,
   (char*)"@OOOOLi *d *d *L *L"},
  {NULL, PyvtkCommunicator_ScatterV_s5, METH_VARARGS,
   (char*)"@OOOOLi *L *L *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_ScatterV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_ScatterV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ScatterV");
  return NULL;
}



static PyObject *
PyvtkCommunicator_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkCommunicator::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllGather_Methods[] = {
  {NULL, PyvtkCommunicator_AllGather_s1, METH_VARARGS,
   (char*)"@OOL *i *i"},
  {NULL, PyvtkCommunicator_AllGather_s2, METH_VARARGS,
   (char*)"@OOL *k *k"},
  {NULL, PyvtkCommunicator_AllGather_s3, METH_VARARGS,
   (char*)"@zzL"},
  {NULL, PyvtkCommunicator_AllGather_s4, METH_VARARGS,
   (char*)"@OOL *d *d"},
  {NULL, PyvtkCommunicator_AllGather_s5, METH_VARARGS,
   (char*)"@OOL *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_AllGather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllGather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCommunicator_AllGather_s6(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return NULL;
}



static PyObject *
PyvtkCommunicator_AllGatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_AllGatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_AllGatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
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

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_AllGatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_AllGatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
  vtkIdType *temp4 = NULL;
  vtkIdType *save4 = NULL;
  vtkIdType small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
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

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
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
PyvtkCommunicator_AllGatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkIdType *temp2 = NULL;
  vtkIdType *save2 = NULL;
  vtkIdType small2[8];
  int size2 = 0;
  vtkIdType *temp3 = NULL;
  vtkIdType *save3 = NULL;
  vtkIdType small3[8];
  int size3 = 0;
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

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllGatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1) :
      op->vtkCommunicator::AllGatherV(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllGatherV_Methods[] = {
  {NULL, PyvtkCommunicator_AllGatherV_s1, METH_VARARGS,
   (char*)"@OOLOO *i *i *L *L"},
  {NULL, PyvtkCommunicator_AllGatherV_s2, METH_VARARGS,
   (char*)"@OOLOO *k *k *L *L"},
  {NULL, PyvtkCommunicator_AllGatherV_s3, METH_VARARGS,
   (char*)"@zzLOO *L *L"},
  {NULL, PyvtkCommunicator_AllGatherV_s4, METH_VARARGS,
   (char*)"@OOLOO *d *d *L *L"},
  {NULL, PyvtkCommunicator_AllGatherV_s5, METH_VARARGS,
   (char*)"@OOLOO *L *L *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_AllGatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllGatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_AllGatherV_s6(self, args);
    case 2:
      return PyvtkCommunicator_AllGatherV_s7(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllGatherV");
  return NULL;
}



static PyObject *
PyvtkCommunicator_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Reduce_Methods[] = {
  {NULL, PyvtkCommunicator_Reduce_s1, METH_VARARGS,
   (char*)"@OOLii *i *i"},
  {NULL, PyvtkCommunicator_Reduce_s2, METH_VARARGS,
   (char*)"@OOLii *k *k"},
  {NULL, PyvtkCommunicator_Reduce_s3, METH_VARARGS,
   (char*)"@zzLii"},
  {NULL, PyvtkCommunicator_Reduce_s4, METH_VARARGS,
   (char*)"@OOLii *d *d"},
  {NULL, PyvtkCommunicator_Reduce_s5, METH_VARARGS,
   (char*)"@OOLii *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Reduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Reduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_Reduce_s6(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return NULL;
}



static PyObject *
PyvtkCommunicator_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  unsigned long *temp0 = NULL;
  unsigned long small0[4];
  int size0 = 0;
  unsigned long *temp1 = NULL;
  unsigned long *save1 = NULL;
  unsigned long small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned long[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned long[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType small0[4];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  vtkIdType temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllReduce_Methods[] = {
  {NULL, PyvtkCommunicator_AllReduce_s1, METH_VARARGS,
   (char*)"@OOLi *i *i"},
  {NULL, PyvtkCommunicator_AllReduce_s2, METH_VARARGS,
   (char*)"@OOLi *k *k"},
  {NULL, PyvtkCommunicator_AllReduce_s3, METH_VARARGS,
   (char*)"@zzLi"},
  {NULL, PyvtkCommunicator_AllReduce_s4, METH_VARARGS,
   (char*)"@OOLi *d *d"},
  {NULL, PyvtkCommunicator_AllReduce_s5, METH_VARARGS,
   (char*)"@OOLi *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_AllReduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllReduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCommunicator_AllReduce_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return NULL;
}



static PyObject *
PyvtkCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_SetUseCopy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseCopy");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCommunicator::SetUseCopy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetParentProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParentProcessor");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkCommunicator::GetParentProcessor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLeftChildProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLeftChildProcessor");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkCommunicator::GetLeftChildProcessor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_MarshalDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarshalDataObject");

  vtkDataObject *temp0 = NULL;
  vtkCharArray *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetVTKObject(temp1, "vtkCharArray"))
    {
    int tempr = vtkCommunicator::MarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_UnMarshalDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnMarshalDataObject");

  vtkCharArray *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCharArray") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    int tempr = vtkCommunicator::UnMarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkCommunicator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommunicator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommunicator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCommunicator\nC++: vtkCommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCommunicator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCommunicator\nC++: vtkCommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfProcesses", PyvtkCommunicator_SetNumberOfProcesses, METH_VARARGS,
   (char*)"V.SetNumberOfProcesses(int)\nC++: virtual void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkCommunicator_GetNumberOfProcesses, METH_VARARGS,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"GetLocalProcessId", PyvtkCommunicator_GetLocalProcessId, METH_VARARGS,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {(char*)"Send", PyvtkCommunicator_Send, METH_VARARGS,
   (char*)"V.Send(vtkDataObject, int, int) -> int\nC++: int Send(vtkDataObject *data, int remoteHandle, int tag)\nV.Send(vtkDataArray, int, int) -> int\nC++: int Send(vtkDataArray *data, int remoteHandle, int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const int *data, vtkIdType length, int remoteHandle,\n     int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const unsigned long *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send(string, int, int, int) -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send((float, ...), int, int, int) -> int\nC++: int Send(const double *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const vtkIdType *data, vtkIdType length,\n    int remoteHandle, int tag)\n\nThis method sends a data object to a destination. Tag eliminates\nambiguity and is used to match sends to receives.\n"},
  {(char*)"SendVoidArray", PyvtkCommunicator_SendVoidArray, METH_VARARGS,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to send various arrays of\ndata. The type arg is one of the VTK type constants recognized by\nthe vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  length is\nmeasured in number of values (as opposed to number of bytes).\n"},
  {(char*)"Receive", PyvtkCommunicator_Receive, METH_VARARGS,
   (char*)"V.Receive(vtkDataObject, int, int) -> int\nC++: int Receive(vtkDataObject *data, int remoteHandle, int tag)\nV.Receive(vtkDataArray, int, int) -> int\nC++: int Receive(vtkDataArray *data, int remoteHandle, int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(int *data, vtkIdType maxlength, int remoteHandle,\n     int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(unsigned long *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive(string, int, int, int) -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive([float, ...], int, int, int) -> int\nC++: int Receive(double *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(vtkIdType *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\n\nThis method receives a data object from a corresponding send. It\nblocks until the receive is finished.\n"},
  {(char*)"ReceiveDataObject", PyvtkCommunicator_ReceiveDataObject, METH_VARARGS,
   (char*)"V.ReceiveDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteHandle, int tag)\n\nThe caller does not have to know the data type before this call\nis made. It returns the newly created object.\n"},
  {(char*)"ReceiveVoidArray", PyvtkCommunicator_ReceiveVoidArray, METH_VARARGS,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType maxlength,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to receive various arrays\nof data. The type arg is one of the VTK type constants recognized\nby the vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  maxlength is\nmeasured in number of values (as opposed to number of bytes) and\nis the maxmum length of the data to receive.  If the maxlength is\nless than the length of the message sent by the sender, an error\nwill be flagged. Once a message is received, use the GetCount()\nmethod to determine the actual size of the data received.\n"},
  {(char*)"GetCount", PyvtkCommunicator_GetCount, METH_VARARGS,
   (char*)"V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {(char*)"Barrier", PyvtkCommunicator_Barrier, METH_VARARGS,
   (char*)"V.Barrier()\nC++: virtual void Barrier()\n\nWill block the processes until all other processes reach the\nBarrier function.\n"},
  {(char*)"Broadcast", PyvtkCommunicator_Broadcast, METH_VARARGS,
   (char*)"V.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(int *data, vtkIdType length, int srcProcessId)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(unsigned long *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nV.Broadcast([float, ...], int, int) -> int\nC++: int Broadcast(double *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(vtkIdType *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast(vtkDataObject, int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nV.Broadcast(vtkDataArray, int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {(char*)"Gather", PyvtkCommunicator_Gather, METH_VARARGS,
   (char*)"V.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length,\n    int destProcessId)\nV.Gather(string, string, int, int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((float, ...), [float, ...], int, int) -> int\nC++: int Gather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int destProcessId)\nV.Gather(vtkDataArray, vtkDataArray, int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on te destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {(char*)"GatherV", PyvtkCommunicator_GatherV, METH_VARARGS,
   (char*)"V.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nV.GatherV(string, string, int, [int, ...], [int, ...], int) -> int\nC++: int GatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((float, ...), [float, ...], int, [int, ...], [int, ...],\n     int) -> int\nC++: int GatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, [int, ...], [int, ...], int)\n     -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, int) -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGatherV is the vector variant of Gather.  It extends the\nfunctionality of Gather by allowing a varying count of data from\neach process. GatherV collects arrays in the process with id\ndestProcessId.  Each process (including the destination) sends\nthe contents of its send buffer to the destination process.  The\ndestination process receives the messages and stores them in rank\norder.  The sendLength argument defines how much the local\nprocess ...\n [Truncated]\n"},
  {(char*)"Scatter", PyvtkCommunicator_Scatter, METH_VARARGS,
   (char*)"V.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length, int srcProcessId)\nV.Scatter(string, string, int, int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((float, ...), [float, ...], int, int) -> int\nC++: int Scatter(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int srcProcessId)\nV.Scatter(vtkDataArray, vtkDataArray, int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {(char*)"ScatterV", PyvtkCommunicator_ScatterV, METH_VARARGS,
   (char*)"V.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\nV.ScatterV(string, string, [int, ...], [int, ...], int, int)\n    -> int\nC++: int ScatterV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((float, ...), [float, ...], [int, ...], [int, ...],\n    int, int) -> int\nC++: int ScatterV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\n\nScatterV is the vector variant of Scatter.  It extends the\nfunctionality of Scatter by allowing a varying count of data to\neach process. ScatterV takes an array in the process with id\nsrcProcessId and distributes it.  Each process (including the\nsource) receives a portion of the send buffer defined by the\nsendLengths and offsets arrays.\n"},
  {(char*)"AllGather", PyvtkCommunicator_AllGather, METH_VARARGS,
   (char*)"V.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length)\nV.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length)\nV.AllGather(string, string, int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nV.AllGather((float, ...), [float, ...], int) -> int\nC++: int AllGather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length)\nV.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length)\nV.AllGather(vtkDataArray, vtkDataArray) -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {(char*)"AllGatherV", PyvtkCommunicator_AllGatherV, METH_VARARGS,
   (char*)"V.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nV.AllGatherV(string, string, int, [int, ...], [int, ...]) -> int\nC++: int AllGatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((float, ...), [float, ...], int, [int, ...], [int,\n    ...]) -> int\nC++: int AllGatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nV.AllGatherV(vtkDataArray, vtkDataArray, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV(vtkDataArray, vtkDataArray) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as GatherV except that the result is placed in all\nprocesses.\n"},
  {(char*)"Reduce", PyvtkCommunicator_Reduce, METH_VARARGS,
   (char*)"V.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nV.Reduce(string, string, int, int, int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((float, ...), [float, ...], int, int, int) -> int\nC++: int Reduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nV.Reduce(vtkDataArray, vtkDataArray, int, int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {(char*)"AllReduce", PyvtkCommunicator_AllReduce, METH_VARARGS,
   (char*)"V.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const unsigned long *sendBuffer,\n    unsigned long *recvBuffer, vtkIdType length, int operation)\nV.AllReduce(string, string, int, int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((float, ...), [float, ...], int, int) -> int\nC++: int AllReduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const vtkIdType *sendBuffer,\n    vtkIdType *recvBuffer, vtkIdType length, int operation)\nV.AllReduce(vtkDataArray, vtkDataArray, int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {(char*)"BroadcastVoidArray", PyvtkCommunicator_BroadcastVoidArray, METH_VARARGS,
   (char*)"V.BroadcastVoidArray(, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"GatherVoidArray", PyvtkCommunicator_GatherVoidArray, METH_VARARGS,
   (char*)"V.GatherVoidArray(, , int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"GatherVVoidArray", PyvtkCommunicator_GatherVVoidArray, METH_VARARGS,
   (char*)"V.GatherVVoidArray(, , int, [int, ...], [int, ...], int, int)\n    -> int\nC++: virtual int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"ScatterVoidArray", PyvtkCommunicator_ScatterVoidArray, METH_VARARGS,
   (char*)"V.ScatterVoidArray(, , int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"ScatterVVoidArray", PyvtkCommunicator_ScatterVVoidArray, METH_VARARGS,
   (char*)"V.ScatterVVoidArray(, , [int, ...], [int, ...], int, int, int)\n    -> int\nC++: virtual int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"AllGatherVoidArray", PyvtkCommunicator_AllGatherVoidArray, METH_VARARGS,
   (char*)"V.AllGatherVoidArray(, , int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"AllGatherVVoidArray", PyvtkCommunicator_AllGatherVVoidArray, METH_VARARGS,
   (char*)"V.AllGatherVVoidArray(, , int, [int, ...], [int, ...], int) -> int\nC++: virtual int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"ReduceVoidArray", PyvtkCommunicator_ReduceVoidArray, METH_VARARGS,
   (char*)"V.ReduceVoidArray(, , int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"AllReduceVoidArray", PyvtkCommunicator_AllReduceVoidArray, METH_VARARGS,
   (char*)"V.AllReduceVoidArray(, , int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"SetUseCopy", PyvtkCommunicator_SetUseCopy, METH_VARARGS | METH_STATIC,
   (char*)"V.SetUseCopy(int)\nC++: static void SetUseCopy(int useCopy)\n\n"},
  {(char*)"GetParentProcessor", PyvtkCommunicator_GetParentProcessor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetParentProcessor(int) -> int\nC++: static int GetParentProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorthims - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {(char*)"GetLeftChildProcessor", PyvtkCommunicator_GetLeftChildProcessor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLeftChildProcessor(int) -> int\nC++: static int GetLeftChildProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorthims - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {(char*)"MarshalDataObject", PyvtkCommunicator_MarshalDataObject, METH_VARARGS | METH_STATIC,
   (char*)"V.MarshalDataObject(vtkDataObject, vtkCharArray) -> int\nC++: static int MarshalDataObject(vtkDataObject *object,\n    vtkCharArray *buffer)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {(char*)"UnMarshalDataObject", PyvtkCommunicator_UnMarshalDataObject, METH_VARARGS | METH_STATIC,
   (char*)"V.UnMarshalDataObject(vtkCharArray, vtkDataObject) -> int\nC++: static int UnMarshalDataObject(vtkCharArray *buffer,\n    vtkDataObject *object)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCommunicator_Methods,
    "vtkCommunicator", modulename,
    NULL, NULL,
    PyvtkCommunicator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkCommunicator_Tags_Type);
    PyvtkCommunicator_Tags_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCommunicator_Tags_Type;
    if (o && PyDict_SetItemString(d, (char *)"Tags", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkCommunicator_StandardOperations_Type);
    PyvtkCommunicator_StandardOperations_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkCommunicator_StandardOperations_Type;
    if (o && PyDict_SetItemString(d, (char *)"StandardOperations", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 7; c++)
      {
      typedef vtkCommunicator::Tags cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[7] = {
          { "BROADCAST_TAG", vtkCommunicator::BROADCAST_TAG },
          { "GATHER_TAG", vtkCommunicator::GATHER_TAG },
          { "GATHERV_TAG", vtkCommunicator::GATHERV_TAG },
          { "SCATTER_TAG", vtkCommunicator::SCATTER_TAG },
          { "SCATTERV_TAG", vtkCommunicator::SCATTERV_TAG },
          { "REDUCE_TAG", vtkCommunicator::REDUCE_TAG },
          { "BARRIER_TAG", vtkCommunicator::BARRIER_TAG },
        };

      o = PyvtkCommunicator_Tags_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 10; c++)
      {
      typedef vtkCommunicator::StandardOperations cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[10] = {
          { "MAX_OP", vtkCommunicator::MAX_OP },
          { "MIN_OP", vtkCommunicator::MIN_OP },
          { "SUM_OP", vtkCommunicator::SUM_OP },
          { "PRODUCT_OP", vtkCommunicator::PRODUCT_OP },
          { "LOGICAL_AND_OP", vtkCommunicator::LOGICAL_AND_OP },
          { "BITWISE_AND_OP", vtkCommunicator::BITWISE_AND_OP },
          { "LOGICAL_OR_OP", vtkCommunicator::LOGICAL_OR_OP },
          { "BITWISE_OR_OP", vtkCommunicator::BITWISE_OR_OP },
          { "LOGICAL_XOR_OP", vtkCommunicator::LOGICAL_XOR_OP },
          { "BITWISE_XOR_OP", vtkCommunicator::BITWISE_XOR_OP },
        };

      o = PyvtkCommunicator_StandardOperations_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkCommunicator - Used to send/receive messages in a multiprocess\nenvironment.\n\n",
    "Superclass: vtkObject\n\n",
    "This is an abstact class which contains functionality for sending and\nreceiving inter-process messages. It contains methods for marshaling\nan object into a string (currently used by the MPI communicator but\nnot the shared memory communicator).\n\nCaveats:\n\nCommunication between systems with different vtkIdTypes is not\nsupported. All machines have to have the same vtkIdType.\n\nSee Also:\n\nvtkMPICommuni",
    "cator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

