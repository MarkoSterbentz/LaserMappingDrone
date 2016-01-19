// python wrapper for vtkSMProxySelectionModel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxySelectionModel.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxySelectionModel(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxySelectionModelNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRemoteObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMRemoteObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRemoteObjectNew
#endif

static const char **PyvtkSMProxySelectionModel_Doc();

#ifndef DECLARED_PyvtkSMProxySelectionModel_ProxySelectionFlag_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMProxySelectionModel_ProxySelectionFlag_Type;
#define DECLARED_PyvtkSMProxySelectionModel_ProxySelectionFlag_Type
#endif

PyTypeObject PyvtkSMProxySelectionModel_ProxySelectionFlag_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ProxySelectionFlag", // tp_name
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

PyObject *PyvtkSMProxySelectionModel_ProxySelectionFlag_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxySelectionModel_ProxySelectionFlag_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMProxySelectionModel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxySelectionModel::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxySelectionModel::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxySelectionModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxySelectionModel::NewInstance());

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
PyvtkSMProxySelectionModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxySelectionModel *tempr = vtkSMProxySelectionModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMSession *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
    {
    if (ap.IsBound())
      {
      op->SetSession(temp0);
      }
    else
      {
      op->vtkSMProxySelectionModel::SetSession(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_SetFollowingMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowingMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFollowingMaster(temp0);
      }
    else
      {
      op->vtkSMProxySelectionModel::SetFollowingMaster(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_IsFollowingMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFollowingMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsFollowingMaster() :
      op->vtkSMProxySelectionModel::IsFollowingMaster());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetCurrentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetCurrentProxy() :
      op->vtkSMProxySelectionModel::GetCurrentProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_SetCurrentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCurrentProxy(temp0, temp1);
      }
    else
      {
      op->vtkSMProxySelectionModel::SetCurrentProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_IsSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSelected(temp0) :
      op->vtkSMProxySelectionModel::IsSelected(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetNumberOfSelectedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfSelectedProxies() :
      op->vtkSMProxySelectionModel::GetNumberOfSelectedProxies());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetSelectedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetSelectedProxy(temp0) :
      op->vtkSMProxySelectionModel::GetSelectedProxy(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_Select_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Select(temp0, temp1);
      }
    else
      {
      op->vtkSMProxySelectionModel::Select(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxySelectionModel_Select_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->Select(temp0);
      }
    else
      {
      op->vtkSMProxySelectionModel::Select(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxySelectionModel_Select(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMProxySelectionModel_Select_s1(self, args);
    case 1:
      return PyvtkSMProxySelectionModel_Select_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Select");
  return NULL;
}



static PyObject *
PyvtkSMProxySelectionModel_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkSMProxySelectionModel::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_Deselect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deselect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->Deselect(temp0);
      }
    else
      {
      op->vtkSMProxySelectionModel::Deselect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_ClearAndSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAndSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->ClearAndSelect(temp0);
      }
    else
      {
      op->vtkSMProxySelectionModel::ClearAndSelect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetSelectionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetSelectionDataBounds(temp0) :
      op->vtkSMProxySelectionModel::GetSelectionDataBounds(temp0));

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

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMProxySelectionModel::GetFullState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxySelectionModel_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxySelectionModel *op = static_cast<vtkSMProxySelectionModel *>(vp);

  vtkSMMessage *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    if (ap.IsBound())
      {
      op->LoadState(temp0, temp1);
      }
    else
      {
      op->vtkSMProxySelectionModel::LoadState(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxySelectionModel_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxySelectionModel_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxySelectionModel_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxySelectionModel_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxySelectionModel_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSession", PyvtkSMProxySelectionModel_SetSession, METH_VARARGS,
   (char*)"V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\nOverride the set session, so we can attach an observer to the\nCollaboration manager in order to monitor master/slave changes.\n"},
  {(char*)"SetFollowingMaster", PyvtkSMProxySelectionModel_SetFollowingMaster, METH_VARARGS,
   (char*)"V.SetFollowingMaster(bool)\nC++: void SetFollowingMaster(bool following)\n\nAllow to synchronize the active object with master or just keep\nremote object out-of-synch. Only the state from the master will\nbe loaded.\n"},
  {(char*)"IsFollowingMaster", PyvtkSMProxySelectionModel_IsFollowingMaster, METH_VARARGS,
   (char*)"V.IsFollowingMaster() -> bool\nC++: bool IsFollowingMaster()\n\nAllow to synchronize the active object with master or just keep\nremote object out-of-synch. Only the state from the master will\nbe loaded.\n"},
  {(char*)"GetCurrentProxy", PyvtkSMProxySelectionModel_GetCurrentProxy, METH_VARARGS,
   (char*)"V.GetCurrentProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetCurrentProxy()\n\nReturns the proxy that is current, NULL if there is no current.\n"},
  {(char*)"SetCurrentProxy", PyvtkSMProxySelectionModel_SetCurrentProxy, METH_VARARGS,
   (char*)"V.SetCurrentProxy(vtkSMProxy, int)\nC++: void SetCurrentProxy(vtkSMProxy *proxy, int command)\n\nSets the current proxy. command is used to control how the\ncurrent selection is affected.\n\\li NO_UPDATE: change the current without affecting the selected\n    set of\nproxies.\n\\li CLEAR: clear current selection\n\\li SELECT: also select the proxy being set as current\n\\li DESELECT: deselect the proxy being set as current.\n"},
  {(char*)"IsSelected", PyvtkSMProxySelectionModel_IsSelected, METH_VARARGS,
   (char*)"V.IsSelected(vtkSMProxy) -> bool\nC++: bool IsSelected(vtkSMProxy *proxy)\n\nReturns true if the proxy is selected.\n"},
  {(char*)"GetNumberOfSelectedProxies", PyvtkSMProxySelectionModel_GetNumberOfSelectedProxies, METH_VARARGS,
   (char*)"V.GetNumberOfSelectedProxies() -> int\nC++: unsigned int GetNumberOfSelectedProxies()\n\n"},
  {(char*)"GetSelectedProxy", PyvtkSMProxySelectionModel_GetSelectedProxy, METH_VARARGS,
   (char*)"V.GetSelectedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetSelectedProxy(unsigned int index)\n\nReturns the selected proxy at the given index.\n"},
  {(char*)"Select", PyvtkSMProxySelectionModel_Select, METH_VARARGS,
   (char*)"V.Select(vtkSMProxy, int)\nC++: void Select(vtkSMProxy *proxy, int command)\nV.Select(vtkSMProxy)\nC++: void Select(vtkSMProxy *proxy)\n\nUpdate the selected set of proxies. command affects how the\nselection is updated.\n\\li NO_UPDATE: don't affect the selected set of proxies.\n\\li CLEAR: clear selection\n\\li SELECT: add the proxies to selection\n\\li DESELECT: deselect the proxies\n\\li CLEAR_AND_SELECT: clear selection and then add the specified\n    proxies as\nthe selection.\n"},
  {(char*)"Clear", PyvtkSMProxySelectionModel_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: void Clear()\n\nWrapper friendly methods to doing what Select() can do.\n"},
  {(char*)"Deselect", PyvtkSMProxySelectionModel_Deselect, METH_VARARGS,
   (char*)"V.Deselect(vtkSMProxy)\nC++: void Deselect(vtkSMProxy *proxy)\n\nWrapper friendly methods to doing what Select() can do.\n"},
  {(char*)"ClearAndSelect", PyvtkSMProxySelectionModel_ClearAndSelect, METH_VARARGS,
   (char*)"V.ClearAndSelect(vtkSMProxy)\nC++: void ClearAndSelect(vtkSMProxy *proxy)\n\nWrapper friendly methods to doing what Select() can do.\n"},
  {(char*)"GetSelectionDataBounds", PyvtkSMProxySelectionModel_GetSelectionDataBounds, METH_VARARGS,
   (char*)"V.GetSelectionDataBounds([float, float, float, float, float,\n    float]) -> bool\nC++: bool GetSelectionDataBounds(double bounds[6])\n\nUtility method to get the data bounds for the currently selected\nitems. This only makes sense for selections comprising of\nsource-proxies or output-port proxies. Returns true is the bounds\nare valid.\n"},
  {(char*)"GetFullState", PyvtkSMProxySelectionModel_GetFullState, METH_VARARGS,
   (char*)"V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overriden this will return NULL.\n"},
  {(char*)"LoadState", PyvtkSMProxySelectionModel_LoadState, METH_VARARGS,
   (char*)"V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxySelectionModel_StaticNew()
{
  return vtkSMProxySelectionModel::New();
}

PyObject *PyVTKClass_vtkSMProxySelectionModelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxySelectionModel_StaticNew,
    PyvtkSMProxySelectionModel_Methods,
    "vtkSMProxySelectionModel", modulename,
    NULL, NULL,
    PyvtkSMProxySelectionModel_Doc(),
    PyVTKClass_vtkSMRemoteObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMProxySelectionModel_ProxySelectionFlag_Type);
    PyvtkSMProxySelectionModel_ProxySelectionFlag_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMProxySelectionModel_ProxySelectionFlag_Type;
    if (o && PyDict_SetItemString(d, (char *)"ProxySelectionFlag", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 5; c++)
      {
      typedef vtkSMProxySelectionModel::ProxySelectionFlag cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[5] = {
          { "NO_UPDATE", vtkSMProxySelectionModel::NO_UPDATE },
          { "CLEAR", vtkSMProxySelectionModel::CLEAR },
          { "SELECT", vtkSMProxySelectionModel::SELECT },
          { "DESELECT", vtkSMProxySelectionModel::DESELECT },
          { "CLEAR_AND_SELECT", vtkSMProxySelectionModel::CLEAR_AND_SELECT },
        };

      o = PyvtkSMProxySelectionModel_ProxySelectionFlag_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMProxySelectionModel_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxySelectionModel - selects proxies. \n\n",
    "Superclass: vtkSMRemoteObject\n\n",
    "vtkSMProxySelectionModel is used to select proxies. vtkSMProxyManager\nuses two instances of vtkSMProxySelectionModel for keeping track of\nthe selected/active sources/filters and the active view.\n\nSee Also:\n\nvtkSMProxyManager\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxySelectionModel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxySelectionModelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxySelectionModel", o) != 0)
    {
    Py_DECREF(o);
    }

}

