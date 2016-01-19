// python wrapper for vtkClientServerMoveData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClientServerMoveData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClientServerMoveData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClientServerMoveDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkClientServerMoveData_Doc();

#ifndef DECLARED_PyvtkClientServerMoveData_ProcessTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkClientServerMoveData_ProcessTypes_Type;
#define DECLARED_PyvtkClientServerMoveData_ProcessTypes_Type
#endif

PyTypeObject PyvtkClientServerMoveData_ProcessTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ProcessTypes", // tp_name
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

PyObject *PyvtkClientServerMoveData_ProcessTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkClientServerMoveData_ProcessTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkClientServerMoveData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClientServerMoveData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClientServerMoveData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClientServerMoveData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClientServerMoveData::NewInstance());

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
PyvtkClientServerMoveData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClientServerMoveData *tempr = vtkClientServerMoveData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

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
      op->vtkClientServerMoveData::SetOutputDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_GetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataType() :
      op->vtkClientServerMoveData::GetOutputDataType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int temp0;
  int temp1;
  int temp2;
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
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkClientServerMoveData::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClientServerMoveData_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkClientServerMoveData::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkClientServerMoveData_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkClientServerMoveData_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkClientServerMoveData_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkClientServerMoveData_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkClientServerMoveData::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessType(temp0);
      }
    else
      {
      op->vtkClientServerMoveData::SetProcessType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessType() :
      op->vtkClientServerMoveData::GetProcessType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

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
      op->vtkClientServerMoveData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerMoveData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerMoveData *op = static_cast<vtkClientServerMoveData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkClientServerMoveData::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClientServerMoveData_Methods[] = {
  {(char*)"GetClassName", PyvtkClientServerMoveData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClientServerMoveData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClientServerMoveData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClientServerMoveData\nC++: vtkClientServerMoveData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClientServerMoveData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClientServerMoveData\nC++: vtkClientServerMoveData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputDataType", PyvtkClientServerMoveData_SetOutputDataType, METH_VARARGS,
   (char*)"V.SetOutputDataType(int)\nC++: void SetOutputDataType(int a)\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA. Make sure\nto call this before any pipeline updates occur.\n"},
  {(char*)"GetOutputDataType", PyvtkClientServerMoveData_GetOutputDataType, METH_VARARGS,
   (char*)"V.GetOutputDataType() -> int\nC++: int GetOutputDataType()\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA. Make sure\nto call this before any pipeline updates occur.\n"},
  {(char*)"SetWholeExtent", PyvtkClientServerMoveData_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkClientServerMoveData_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetProcessType", PyvtkClientServerMoveData_SetProcessType, METH_VARARGS,
   (char*)"V.SetProcessType(int)\nC++: void SetProcessType(int a)\n\nOptionally, set the process type. If set to AUTO, then the\nprocess type is tried to be determined using the active\nconnection.\n"},
  {(char*)"GetProcessType", PyvtkClientServerMoveData_GetProcessType, METH_VARARGS,
   (char*)"V.GetProcessType() -> int\nC++: int GetProcessType()\n\nOptionally, set the process type. If set to AUTO, then the\nprocess type is tried to be determined using the active\nconnection.\n"},
  {(char*)"SetController", PyvtkClientServerMoveData_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the controller to use. This is optional and needed only\nwhen ProcessType is set to something other than AUTO. If AUTO,\nthen the controller is obtained from the active session.\n"},
  {(char*)"GetController", PyvtkClientServerMoveData_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the controller to use. This is optional and needed only\nwhen ProcessType is set to something other than AUTO. If AUTO,\nthen the controller is obtained from the active session.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClientServerMoveData_StaticNew()
{
  return vtkClientServerMoveData::New();
}

PyObject *PyVTKClass_vtkClientServerMoveDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClientServerMoveData_StaticNew,
    PyvtkClientServerMoveData_Methods,
    "vtkClientServerMoveData", modulename,
    NULL, NULL,
    PyvtkClientServerMoveData_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkClientServerMoveData_ProcessTypes_Type);
    PyvtkClientServerMoveData_ProcessTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkClientServerMoveData_ProcessTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ProcessTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkClientServerMoveData::ProcessTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "AUTO", vtkClientServerMoveData::AUTO },
          { "SERVER", vtkClientServerMoveData::SERVER },
          { "CLIENT", vtkClientServerMoveData::CLIENT },
        };

      o = PyvtkClientServerMoveData_ProcessTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkClientServerMoveData_Doc()
{
  static const char *docstring[] = {
    "vtkClientServerMoveData - Moves data from the server root node\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "This class moves all the input data available at the input on the\nroot server node to the client node. If not in server-client mode,\nthis filter behaves as a simple pass-through filter. This can work\nwith any data type, the application does not need to set the output\ntype before hand.\n\nWarning:\n\nThis filter may change the output in RequestData().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClientServerMoveData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClientServerMoveDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClientServerMoveData", o) != 0)
    {
    Py_DECREF(o);
    }

}

