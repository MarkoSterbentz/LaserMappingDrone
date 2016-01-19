// python wrapper for vtkSMTransferFunctionManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMTransferFunctionManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMTransferFunctionManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMTransferFunctionManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMTransferFunctionManager_Doc();

#ifndef DECLARED_PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type;
#define DECLARED_PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type
#endif

PyTypeObject PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"UpdateScalarBarsMode", // tp_name
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

PyObject *PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMTransferFunctionManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMTransferFunctionManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTransferFunctionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMTransferFunctionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTransferFunctionManager::NewInstance());

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
PyvtkSMTransferFunctionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMTransferFunctionManager *tempr = vtkSMTransferFunctionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  char *temp0 = NULL;
  vtkSMSessionProxyManager *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSessionProxyManager"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction(temp0, temp1) :
      op->vtkSMTransferFunctionManager::GetColorTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_GetOpacityTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  char *temp0 = NULL;
  vtkSMSessionProxyManager *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSessionProxyManager"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetOpacityTransferFunction(temp0, temp1) :
      op->vtkSMTransferFunctionManager::GetOpacityTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_GetScalarBarRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetScalarBarRepresentation(temp0, temp1) :
      op->vtkSMTransferFunctionManager::GetScalarBarRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_ResetAllTransferFunctionRangesUsingCurrentData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllTransferFunctionRangesUsingCurrentData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->ResetAllTransferFunctionRangesUsingCurrentData(temp0, temp1);
      }
    else
      {
      op->vtkSMTransferFunctionManager::ResetAllTransferFunctionRangesUsingCurrentData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_UpdateScalarBars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarBars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->UpdateScalarBars(temp0, temp1) :
      op->vtkSMTransferFunctionManager::UpdateScalarBars(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionManager_HideScalarBarIfNotNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideScalarBarIfNotNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionManager *op = static_cast<vtkSMTransferFunctionManager *>(vp);

  vtkSMProxy *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->HideScalarBarIfNotNeeded(temp0, temp1) :
      op->vtkSMTransferFunctionManager::HideScalarBarIfNotNeeded(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSMTransferFunctionManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMTransferFunctionManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMTransferFunctionManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMTransferFunctionManager\nC++: vtkSMTransferFunctionManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMTransferFunctionManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMTransferFunctionManager\nC++: vtkSMTransferFunctionManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetColorTransferFunction", PyvtkSMTransferFunctionManager_GetColorTransferFunction, METH_VARARGS,
   (char*)"V.GetColorTransferFunction(string, vtkSMSessionProxyManager)\n    -> vtkSMProxy\nC++: virtual vtkSMProxy *GetColorTransferFunction(\n    const char *arrayName, vtkSMSessionProxyManager *pxm)\n\nReturns a color transfer function proxy instance for mapping a\ndata array with the given name. If none exists in the given\nsession, a new instance will be created and returned.\n"},
  {(char*)"GetOpacityTransferFunction", PyvtkSMTransferFunctionManager_GetOpacityTransferFunction, METH_VARARGS,
   (char*)"V.GetOpacityTransferFunction(string, vtkSMSessionProxyManager)\n    -> vtkSMProxy\nC++: virtual vtkSMProxy *GetOpacityTransferFunction(\n    const char *arrayName, vtkSMSessionProxyManager *pxm)\n\nReturns a opacity transfer function proxy (aka Piecewise\nFunction) instance for mapping a data array with the given name.\nIf none exists in the given session, a new instance will be\ncreated and returned.\n"},
  {(char*)"GetScalarBarRepresentation", PyvtkSMTransferFunctionManager_GetScalarBarRepresentation, METH_VARARGS,
   (char*)"V.GetScalarBarRepresentation(vtkSMProxy, vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetScalarBarRepresentation(\n    vtkSMProxy *colorTransferFunctionProxy, vtkSMProxy *view)\n\nReturns the scalar-bar (color-legend) representation\ncorresponding to the transfer function for the view (currently\nonly render-views are supported). Thus returns an existing proxy,\nif present, otherwise a new one is created, if possible.\n"},
  {(char*)"ResetAllTransferFunctionRangesUsingCurrentData", PyvtkSMTransferFunctionManager_ResetAllTransferFunctionRangesUsingCurrentData, METH_VARARGS,
   (char*)"V.ResetAllTransferFunctionRangesUsingCurrentData(\n    vtkSMSessionProxyManager, bool)\nC++: void ResetAllTransferFunctionRangesUsingCurrentData(\n    vtkSMSessionProxyManager *pxm, bool extend=false)\n\nIterates over all \"known\" transfer function proxies and request\neach one of them to update its range using data information\ncurrently available. If extend is true, the transfer function is\nexpanded to accommodate current data range rather then resetting\nit to the range.\n"},
  {(char*)"UpdateScalarBars", PyvtkSMTransferFunctionManager_UpdateScalarBars, METH_VARARGS,
   (char*)"V.UpdateScalarBars(vtkSMProxy, int) -> bool\nC++: virtual bool UpdateScalarBars(vtkSMProxy *viewProxy,\n    unsigned int mode)\n\nUpdates the scalar bar visibility in the view. Based on the\nspecified mode, scalars bars representing non-represented arrays\ncan be automatically hidden; and those corresponding to arrays\nused for coloring can be automatically shown.\n"},
  {(char*)"HideScalarBarIfNotNeeded", PyvtkSMTransferFunctionManager_HideScalarBarIfNotNeeded, METH_VARARGS,
   (char*)"V.HideScalarBarIfNotNeeded(vtkSMProxy, vtkSMProxy) -> bool\nC++: virtual bool HideScalarBarIfNotNeeded(vtkSMProxy *lutProxy,\n    vtkSMProxy *view)\n\nHides the scalar bar, if any, for the lutProxy in the view if\nit's not being used. Returns true if the scalar bar visibility\nwas changed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMTransferFunctionManager_StaticNew()
{
  return vtkSMTransferFunctionManager::New();
}

PyObject *PyVTKClass_vtkSMTransferFunctionManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMTransferFunctionManager_StaticNew,
    PyvtkSMTransferFunctionManager_Methods,
    "vtkSMTransferFunctionManager", modulename,
    NULL, NULL,
    PyvtkSMTransferFunctionManager_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type);
    PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_Type;
    if (o && PyDict_SetItemString(d, (char *)"UpdateScalarBarsMode", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkSMTransferFunctionManager::UpdateScalarBarsMode cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "HIDE_UNUSED_SCALAR_BARS", vtkSMTransferFunctionManager::HIDE_UNUSED_SCALAR_BARS },
          { "SHOW_USED_SCALAR_BARS", vtkSMTransferFunctionManager::SHOW_USED_SCALAR_BARS },
        };

      o = PyvtkSMTransferFunctionManager_UpdateScalarBarsMode_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMTransferFunctionManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMTransferFunctionManager - manages transfer functions i.e. color\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMTransferFunctionManager manages transfer functions i.e. color\nlookuptables and opacity piecewise functions for ParaView\napplications. vtkSMTransferFunctionManager implements the ParaView\nspecific mechanism for managing such transfer function proxies where\nthere's one transfer function created and maintained per data array\nname.\n\nvtkSMTransferFunctionManager has no state. You can create as man",
    "y\ninstances as per your choosing to call the methods. It uses the\nsession proxy manager to locate proxies registered using specific\nnames under specific groups. Thus, the state is maintained by the\nproxy manager itself.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMTransferFunctionManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMTransferFunctionManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMTransferFunctionManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

