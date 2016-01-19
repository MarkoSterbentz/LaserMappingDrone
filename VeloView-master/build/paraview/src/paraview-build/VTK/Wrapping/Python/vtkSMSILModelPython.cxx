// python wrapper for vtkSMSILModel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSILModel.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSILModel(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSILModelNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMSILModel_Doc();

#ifndef DECLARED_PyvtkSMSILModel_CheckState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMSILModel_CheckState_Type;
#define DECLARED_PyvtkSMSILModel_CheckState_Type
#endif

PyTypeObject PyvtkSMSILModel_CheckState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"CheckState", // tp_name
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

PyObject *PyvtkSMSILModel_CheckState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMSILModel_CheckState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMSILModel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSILModel::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSILModel::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSILModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSILModel::NewInstance());

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
PyvtkSMSILModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSILModel *tempr = vtkSMSILModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkSMSILModel::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSILModel_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  vtkSMStringVectorProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMStringVectorProperty"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkSMSILModel::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMSILModel_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMSILModel_Initialize_s1(self, args);
    case 2:
      return PyvtkSMSILModel_Initialize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkSMSILModel_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSMSILModel::GetSIL());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMSILModel::GetProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMStringVectorProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMSILModel::GetProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren(temp0) :
      op->vtkSMSILModel::GetNumberOfChildren(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetChildVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChildVertex(temp0, temp1) :
      op->vtkSMSILModel::GetChildVertex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetParentVertex(temp0) :
      op->vtkSMSILModel::GetParentVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetName(temp0) :
      op->vtkSMSILModel::GetName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_GetCheckStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCheckStatus(temp0) :
      op->vtkSMSILModel::GetCheckStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_SetCheckState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetCheckState(temp0, temp1) :
      op->vtkSMSILModel::SetCheckState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMSILModel_SetCheckState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetCheckState(temp0, temp1) :
      op->vtkSMSILModel::SetCheckState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSILModel_SetCheckState_Methods[] = {
  {NULL, PyvtkSMSILModel_SetCheckState_s1, METH_VARARGS,
   (char*)"@Li"},
  {NULL, PyvtkSMSILModel_SetCheckState_s2, METH_VARARGS,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMSILModel_SetCheckState(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSILModel_SetCheckState_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCheckState");
  return NULL;
}



static PyObject *
PyvtkSMSILModel_CheckAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckAll();
      }
    else
      {
      op->vtkSMSILModel::CheckAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_UncheckAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UncheckAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UncheckAll();
      }
    else
      {
      op->vtkSMSILModel::UncheckAll();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_UpdatePropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkSMStringVectorProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStringVectorProperty"))
    {
    if (ap.IsBound())
      {
      op->UpdatePropertyValue(temp0);
      }
    else
      {
      op->vtkSMSILModel::UpdatePropertyValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_UpdateStateFromProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateStateFromProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  vtkSMStringVectorProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStringVectorProperty"))
    {
    if (ap.IsBound())
      {
      op->UpdateStateFromProperty(temp0);
      }
    else
      {
      op->vtkSMSILModel::UpdateStateFromProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSILModel_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILModel *op = static_cast<vtkSMSILModel *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindVertex(temp0) :
      op->vtkSMSILModel::FindVertex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSILModel_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSILModel_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSILModel_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSILModel_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSILModel\nC++: vtkSMSILModel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSILModel_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSILModel\nC++: vtkSMSILModel *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSMSILModel_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkGraph)\nC++: void Initialize(vtkGraph *sil)\nV.Initialize(vtkSMProxy, vtkSMStringVectorProperty)\nC++: void Initialize(vtkSMProxy *, vtkSMStringVectorProperty *)\n\nInitialize the model using a SIL. There are two ways of\ninitializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck\nelements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n"},
  {(char*)"GetSIL", PyvtkSMSILModel_GetSIL, METH_VARARGS,
   (char*)"V.GetSIL() -> vtkGraph\nC++: vtkGraph *GetSIL()\n\nInitialize the model using a SIL. There are two ways of\ninitializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck\nelements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n"},
  {(char*)"GetProxy", PyvtkSMSILModel_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nInitialize the model using a proxy and its property. If a\nproperty is set, then the model keeps the property updated when\nthe check states are changed or when the property changes, the\nmodel's internal check states are updated. If the property has a\nSILDomain, then the model attaches itself to the domain so that\nwhenever the domains is updated (i.e. a new SIL is obtained from\nthe server) the model updates the sil as well.\n\nThere are two ways of initializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck\nelements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n"},
  {(char*)"GetProperty", PyvtkSMSILModel_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty() -> vtkSMStringVectorProperty\nC++: vtkSMStringVectorProperty *GetProperty()\n\nInitialize the model using a proxy and its property. If a\nproperty is set, then the model keeps the property updated when\nthe check states are changed or when the property changes, the\nmodel's internal check states are updated. If the property has a\nSILDomain, then the model attaches itself to the domain so that\nwhenever the domains is updated (i.e. a new SIL is obtained from\nthe server) the model updates the sil as well.\n\nThere are two ways of initializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck\nelements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkSMProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n"},
  {(char*)"GetNumberOfChildren", PyvtkSMSILModel_GetNumberOfChildren, METH_VARARGS,
   (char*)"V.GetNumberOfChildren(int) -> int\nC++: int GetNumberOfChildren(vtkIdType vertexid)\n\nReturns the number of children for the given vertex. A node is a\nchild node if it has no out-going edges or all out-going edges\nhave \"CrossEdges\" set to 1. If vertex id is invalid, returns -1.\n"},
  {(char*)"GetChildVertex", PyvtkSMSILModel_GetChildVertex, METH_VARARGS,
   (char*)"V.GetChildVertex(int, int) -> int\nC++: vtkIdType GetChildVertex(vtkIdType parentid, int child_index)\n\nReturns the vertex id for the n-th child where n=child_index.\nReturns 0 if request is invalid.\n"},
  {(char*)"GetParentVertex", PyvtkSMSILModel_GetParentVertex, METH_VARARGS,
   (char*)"V.GetParentVertex(int) -> int\nC++: vtkIdType GetParentVertex(vtkIdType parent)\n\nReturns the parent vertex i.e. the vertex at the end of an\nin-edge which is not a cross-edge. It's an error to call this\nmethod for the root vertex id i.e. 0.\n"},
  {(char*)"GetName", PyvtkSMSILModel_GetName, METH_VARARGS,
   (char*)"V.GetName(int) -> string\nC++: const char *GetName(vtkIdType vertex)\n\nGet the name for the vertex.\n"},
  {(char*)"GetCheckStatus", PyvtkSMSILModel_GetCheckStatus, METH_VARARGS,
   (char*)"V.GetCheckStatus(int) -> int\nC++: int GetCheckStatus(vtkIdType vertex)\n\nGet the check state for a vertex.\n"},
  {(char*)"SetCheckState", PyvtkSMSILModel_SetCheckState, METH_VARARGS,
   (char*)"V.SetCheckState(int, int) -> bool\nC++: bool SetCheckState(vtkIdType vertex, int status)\nV.SetCheckState(string, int) -> bool\nC++: bool SetCheckState(const char *name, int status)\n\nSet the check state for a vertex. Returns true if the status was\nchanged, false if unaffected.\n"},
  {(char*)"CheckAll", PyvtkSMSILModel_CheckAll, METH_VARARGS,
   (char*)"V.CheckAll()\nC++: void CheckAll()\n\nConvenience methods to check/uncheck all items.\n"},
  {(char*)"UncheckAll", PyvtkSMSILModel_UncheckAll, METH_VARARGS,
   (char*)"V.UncheckAll()\nC++: void UncheckAll()\n\nConvenience methods to check/uncheck all items.\n"},
  {(char*)"UpdatePropertyValue", PyvtkSMSILModel_UpdatePropertyValue, METH_VARARGS,
   (char*)"V.UpdatePropertyValue(vtkSMStringVectorProperty)\nC++: void UpdatePropertyValue(vtkSMStringVectorProperty *)\n\nUpdates the property using the check states maintained by the\nmodel.\n"},
  {(char*)"UpdateStateFromProperty", PyvtkSMSILModel_UpdateStateFromProperty, METH_VARARGS,
   (char*)"V.UpdateStateFromProperty(vtkSMStringVectorProperty)\nC++: void UpdateStateFromProperty(vtkSMStringVectorProperty *)\n\nUpdates the check states maintained internally by the model using\nthe status from the property.\n"},
  {(char*)"FindVertex", PyvtkSMSILModel_FindVertex, METH_VARARGS,
   (char*)"V.FindVertex(string) -> int\nC++: vtkIdType FindVertex(const char *name)\n\nLocate a vertex with the given name. Returns -1 if the vertex is\nnot found.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSILModel_StaticNew()
{
  return vtkSMSILModel::New();
}

PyObject *PyVTKClass_vtkSMSILModelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSILModel_StaticNew,
    PyvtkSMSILModel_Methods,
    "vtkSMSILModel", modulename,
    NULL, NULL,
    PyvtkSMSILModel_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMSILModel_CheckState_Type);
    PyvtkSMSILModel_CheckState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMSILModel_CheckState_Type;
    if (o && PyDict_SetItemString(d, (char *)"CheckState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMSILModel::CheckState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "UNCHECKED", vtkSMSILModel::UNCHECKED },
          { "PARTIAL", vtkSMSILModel::PARTIAL },
          { "CHECKED", vtkSMSILModel::CHECKED },
        };

      o = PyvtkSMSILModel_CheckState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMSILModel_Doc()
{
  static const char *docstring[] = {
    "vtkSMSILModel - is a helper for to work with SILs.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMSILModel makes it easier to make checks/unchecks for the SIL\nwhile respecting the links/dependencies defined by the SIL.\n\nThere are two ways of initializing the model:\n\\li One way is to initialize it with a SIL (using\n    Initialize(vtkGraph*).\nThen the model can be used as a simple API to check/uncheck elements.\n\\li Second way is to initialize with a proxy and property (using\nInitialize(vtkS",
    "MProxy, vtkSMProperty*). In that case, the SIL is\nobtained from  the property's vtkSMSILDomain. Also as the user\nchanges the check states, the property is updated/pushed.\n\nEvents:\n\n\\li vtkCommand::UpdateDataEvent -- fired when the check state of any\n    element\nchanges. calldata = vertexid for the element whose check state\nchanged.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSILModel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSILModelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSILModel", o) != 0)
    {
    Py_DECREF(o);
    }

}

