// python wrapper for vtkSMViewLayoutProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMViewLayoutProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMViewLayoutProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMViewLayoutProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMViewLayoutProxy_Doc();

#ifndef DECLARED_PyvtkSMViewLayoutProxy_Direction_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkSMViewLayoutProxy_Direction_Type;
#define DECLARED_PyvtkSMViewLayoutProxy_Direction_Type
#endif

PyTypeObject PyvtkSMViewLayoutProxy_Direction_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Direction", // tp_name
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

PyObject *PyvtkSMViewLayoutProxy_Direction_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMViewLayoutProxy_Direction_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMViewLayoutProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewLayoutProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewLayoutProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewLayoutProxy::NewInstance());

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
PyvtkSMViewLayoutProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMViewLayoutProxy *tempr = vtkSMViewLayoutProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Split(temp0, temp1, temp2) :
      op->vtkSMViewLayoutProxy::Split(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SplitVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SplitVertical(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SplitVertical(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SplitHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SplitHorizontal(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SplitHorizontal(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_AssignView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  vtkSMViewProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMViewProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->AssignView(temp0, temp1) :
      op->vtkSMViewLayoutProxy::AssignView(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_AssignViewToAnyCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignViewToAnyCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->AssignViewToAnyCell(temp0, temp1) :
      op->vtkSMViewLayoutProxy::AssignViewToAnyCell(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_RemoveView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveView(temp0) :
      op->vtkSMViewLayoutProxy::RemoveView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_RemoveView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveView(temp0) :
      op->vtkSMViewLayoutProxy::RemoveView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMViewLayoutProxy_RemoveView_Methods[] = {
  {NULL, PyvtkSMViewLayoutProxy_RemoveView_s1, METH_VARARGS,
   (char*)"@O *vtkSMViewProxy"},
  {NULL, PyvtkSMViewLayoutProxy_RemoveView_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMViewLayoutProxy_RemoveView(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMViewLayoutProxy_RemoveView_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveView");
  return NULL;
}



static PyObject *
PyvtkSMViewLayoutProxy_Collapse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Collapse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->Collapse(temp0) :
      op->vtkSMViewLayoutProxy::Collapse(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SwapCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SwapCells(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SwapCells(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    bool tempr = (ap.IsBound() ?
      op->SetSplitFraction(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SetSplitFraction(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_MaximizeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximizeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->MaximizeCell(temp0) :
      op->vtkSMViewLayoutProxy::MaximizeCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_RestoreMaximizedState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreMaximizedState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestoreMaximizedState();
      }
    else
      {
      op->vtkSMViewLayoutProxy::RestoreMaximizedState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetMaximizedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximizedCell() :
      op->vtkSMViewLayoutProxy::GetMaximizedCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_IsSplitCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSplitCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSplitCell(temp0) :
      op->vtkSMViewLayoutProxy::IsSplitCell(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSplitDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    typedef vtkSMViewLayoutProxy::Direction tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetSplitDirection(temp0) :
      op->vtkSMViewLayoutProxy::GetSplitDirection(temp0));

    if (!ap.ErrorOccurred())
      {
      result = PyvtkSMViewLayoutProxy_Direction_FromEnum(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSplitFraction(temp0) :
      op->vtkSMViewLayoutProxy::GetSplitFraction(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetFirstChild(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFirstChild");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkSMViewLayoutProxy::GetFirstChild(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetSecondChild(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSecondChild");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkSMViewLayoutProxy::GetSecondChild(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetParent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParent");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkSMViewLayoutProxy::GetParent(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetView(temp0) :
      op->vtkSMViewLayoutProxy::GetView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetViewLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    int tempr = (ap.IsBound() ?
      op->GetViewLocation(temp0) :
      op->vtkSMViewLayoutProxy::GetViewLocation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_UpdateViewPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViewPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateViewPositions();
      }
    else
      {
      op->vtkSMViewLayoutProxy::UpdateViewPositions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_ShowViewsOnTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowViewsOnTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowViewsOnTileDisplay();
      }
    else
      {
      op->vtkSMViewLayoutProxy::ShowViewsOnTileDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_CaptureWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0) :
      op->vtkSMViewLayoutProxy::CaptureWindow(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMViewLayoutProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMPropertyIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMViewLayoutProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMViewLayoutProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSMViewLayoutProxy_SaveXMLState_s1(self, args);
    case 2:
      return PyvtkSMViewLayoutProxy_SaveXMLState_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return NULL;
}



static PyObject *
PyvtkSMViewLayoutProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  vtkSMProxyLocator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
    {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMViewLayoutProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewLayoutProxy *op = static_cast<vtkSMViewLayoutProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkSMViewLayoutProxy::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_FindLayout(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindLayout");

  vtkSMViewProxy *temp0 = NULL;
  const char *temp1 = "layouts";
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkSMViewLayoutProxy *tempr = vtkSMViewLayoutProxy::FindLayout(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SetMultiViewImageBorderColor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMultiViewImageBorderColor");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkSMViewLayoutProxy::SetMultiViewImageBorderColor(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_SetMultiViewImageBorderWidth(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMultiViewImageBorderWidth");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMViewLayoutProxy::SetMultiViewImageBorderWidth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetMultiViewImageBorderColor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMultiViewImageBorderColor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const double *tempr = vtkSMViewLayoutProxy::GetMultiViewImageBorderColor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewLayoutProxy_GetMultiViewImageBorderWidth(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMultiViewImageBorderWidth");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkSMViewLayoutProxy::GetMultiViewImageBorderWidth();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMViewLayoutProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMViewLayoutProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMViewLayoutProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMViewLayoutProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMViewLayoutProxy\nC++: vtkSMViewLayoutProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMViewLayoutProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMViewLayoutProxy\nC++: vtkSMViewLayoutProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Split", PyvtkSMViewLayoutProxy_Split, METH_VARARGS,
   (char*)"V.Split(int, int, float) -> int\nC++: int Split(int location, int direction, double fraction)\n\nSplit a frame at the given location. Location must point to an\nexisting cell that's not split. If the location does not exist or\nis already split, then returns -1, to indicate failure. Otherwise\nreturns the index of the left (or top) child node. The index for\nthe sibling can be computed as (ret_val + 1). fraction indicates\na value in the range [0.0, 1.0] at which the cell is split. If a\nView is set at the given location, it will be moved to the left\n(or top) child after the split.\n"},
  {(char*)"SplitVertical", PyvtkSMViewLayoutProxy_SplitVertical, METH_VARARGS,
   (char*)"V.SplitVertical(int, float) -> int\nC++: int SplitVertical(int location, double fraction)\n\nSplit a frame at the given location. Location must point to an\nexisting cell that's not split. If the location does not exist or\nis already split, then returns -1, to indicate failure. Otherwise\nreturns the index of the left (or top) child node. The index for\nthe sibling can be computed as (ret_val + 1). fraction indicates\na value in the range [0.0, 1.0] at which the cell is split. If a\nView is set at the given location, it will be moved to the left\n(or top) child after the split.\n"},
  {(char*)"SplitHorizontal", PyvtkSMViewLayoutProxy_SplitHorizontal, METH_VARARGS,
   (char*)"V.SplitHorizontal(int, float) -> int\nC++: int SplitHorizontal(int location, double fraction)\n\nSplit a frame at the given location. Location must point to an\nexisting cell that's not split. If the location does not exist or\nis already split, then returns -1, to indicate failure. Otherwise\nreturns the index of the left (or top) child node. The index for\nthe sibling can be computed as (ret_val + 1). fraction indicates\na value in the range [0.0, 1.0] at which the cell is split. If a\nView is set at the given location, it will be moved to the left\n(or top) child after the split.\n"},
  {(char*)"AssignView", PyvtkSMViewLayoutProxy_AssignView, METH_VARARGS,
   (char*)"V.AssignView(int, vtkSMViewProxy) -> bool\nC++: bool AssignView(int location, vtkSMViewProxy *view)\n\nAssign a view at a particular location. Note that the view's\nposition may be changed by Split() calls. Returns true on\nsuccess.\n"},
  {(char*)"AssignViewToAnyCell", PyvtkSMViewLayoutProxy_AssignViewToAnyCell, METH_VARARGS,
   (char*)"V.AssignViewToAnyCell(vtkSMViewProxy, int) -> int\nC++: int AssignViewToAnyCell(vtkSMViewProxy *view,\n    int location_hint)\n\nSimilar to AssignView() except that is location specified is not\navailable, then this method treats the location merely as a hint\nand tries to find a suitable place. First, if any empty cell is\navailable, then that is used. Second, if no empty cell is\navailable and location is a valid cell, then we either split the\ncell or traverse down the sub-tree from the cell and split a cell\nto make room for the view. Thus, this method will always assign\nthe view to a frame. Returns the assigned location.\n"},
  {(char*)"RemoveView", PyvtkSMViewLayoutProxy_RemoveView, METH_VARARGS,
   (char*)"V.RemoveView(vtkSMViewProxy) -> int\nC++: int RemoveView(vtkSMViewProxy *view)\nV.RemoveView(int) -> bool\nC++: bool RemoveView(int index)\n\nRemoves a view. Returns the location of the cell emptied by the\nview, if any, otherwise -1.\n"},
  {(char*)"Collapse", PyvtkSMViewLayoutProxy_Collapse, METH_VARARGS,
   (char*)"V.Collapse(int) -> bool\nC++: bool Collapse(int location)\n\nCollapses a cell. Only leaf cells without any assigned views can\nbe collapsed. If the cell has a sibling, then that sibling is\nassigned to the parent node and the sibling cell is destroyed as\nwell. Returns true on success, else false.\n"},
  {(char*)"SwapCells", PyvtkSMViewLayoutProxy_SwapCells, METH_VARARGS,
   (char*)"V.SwapCells(int, int) -> bool\nC++: bool SwapCells(int location1, int location2)\n\nSwaps the cells at the two locations. Both locations must be leaf\nlocations i.e. cannot be split-cells.\n"},
  {(char*)"SetSplitFraction", PyvtkSMViewLayoutProxy_SetSplitFraction, METH_VARARGS,
   (char*)"V.SetSplitFraction(int, float) -> bool\nC++: bool SetSplitFraction(int location, double fraction)\n\nUpdate the split fraction for a split cell. If\nIsSplitCell(location) returns false, this method does not update\nthe fraction.\n"},
  {(char*)"MaximizeCell", PyvtkSMViewLayoutProxy_MaximizeCell, METH_VARARGS,
   (char*)"V.MaximizeCell(int) -> bool\nC++: bool MaximizeCell(int location)\n\nOne can maximize a particular (non-split) cell. Note the\nmaximized state is restored as soon as the layout is changed or\nwhen RestoreMaximizedState() is called. Returns false if the cell\nat the location cannot be maximized since it's a split cell or\ninvalid cell, true otherwise.\n"},
  {(char*)"RestoreMaximizedState", PyvtkSMViewLayoutProxy_RestoreMaximizedState, METH_VARARGS,
   (char*)"V.RestoreMaximizedState()\nC++: void RestoreMaximizedState()\n\nRestores the maximized state.\n"},
  {(char*)"GetMaximizedCell", PyvtkSMViewLayoutProxy_GetMaximizedCell, METH_VARARGS,
   (char*)"V.GetMaximizedCell() -> int\nC++: int GetMaximizedCell()\n\nReturns the maximized cell, if any. Returns -1 if no cell is\ncurrently maximized.\n"},
  {(char*)"IsSplitCell", PyvtkSMViewLayoutProxy_IsSplitCell, METH_VARARGS,
   (char*)"V.IsSplitCell(int) -> bool\nC++: bool IsSplitCell(int location)\n\nReturns true if the cell identified by the location is a split\ncell.\n"},
  {(char*)"GetSplitDirection", PyvtkSMViewLayoutProxy_GetSplitDirection, METH_VARARGS,
   (char*)"V.GetSplitDirection(int) ->\nC++: Direction GetSplitDirection(int location)\n\nReturns the split direction for a split cell at the given\nlocation.\n"},
  {(char*)"GetSplitFraction", PyvtkSMViewLayoutProxy_GetSplitFraction, METH_VARARGS,
   (char*)"V.GetSplitFraction(int) -> float\nC++: double GetSplitFraction(int location)\n\nReturns the split-fraction for a split cell at the given\nlocation.\n"},
  {(char*)"GetFirstChild", PyvtkSMViewLayoutProxy_GetFirstChild, METH_VARARGS | METH_STATIC,
   (char*)"V.GetFirstChild(int) -> int\nC++: static int GetFirstChild(int location)\n\nReturns the index for the first child of the given location. This\ndoes not do any validity checks for the location, nor that of the\nchild.\n"},
  {(char*)"GetSecondChild", PyvtkSMViewLayoutProxy_GetSecondChild, METH_VARARGS | METH_STATIC,
   (char*)"V.GetSecondChild(int) -> int\nC++: static int GetSecondChild(int location)\n\nReturns the index for the second child of the given location.\nThis does not do any validity checks for the location, nor that\nof the child.\n"},
  {(char*)"GetParent", PyvtkSMViewLayoutProxy_GetParent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetParent(int) -> int\nC++: static int GetParent(int location)\n\nReturns the parent index.\n"},
  {(char*)"GetView", PyvtkSMViewLayoutProxy_GetView, METH_VARARGS,
   (char*)"V.GetView(int) -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetView(int location)\n\nReturns the view, if any, assigned to the given cell location.\n"},
  {(char*)"GetViewLocation", PyvtkSMViewLayoutProxy_GetViewLocation, METH_VARARGS,
   (char*)"V.GetViewLocation(vtkSMViewProxy) -> int\nC++: int GetViewLocation(vtkSMViewProxy *)\n\nReturns the location for the view, of any. Returns -1 if the view\nis not found.\n"},
  {(char*)"UpdateViewPositions", PyvtkSMViewLayoutProxy_UpdateViewPositions, METH_VARARGS,
   (char*)"V.UpdateViewPositions()\nC++: void UpdateViewPositions()\n\nUpdates positions for all views using the layout and current\nsizes. This method is called automatically when the layout\nchanges or the \"ViewSize\" property on the assigned views changes.\n"},
  {(char*)"ShowViewsOnTileDisplay", PyvtkSMViewLayoutProxy_ShowViewsOnTileDisplay, METH_VARARGS,
   (char*)"V.ShowViewsOnTileDisplay()\nC++: void ShowViewsOnTileDisplay()\n\nWhen in tile-display configuration, only 1 view-layout is shown\non the tile-display (for obvious reasons). To show any particular\nlayout on the tile display, simply call this method.\n"},
  {(char*)"CaptureWindow", PyvtkSMViewLayoutProxy_CaptureWindow, METH_VARARGS,
   (char*)"V.CaptureWindow(int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magnification)\n\nCaptures an image from the layout (including all the views in the\nlayout.\n"},
  {(char*)"SaveXMLState", PyvtkSMViewLayoutProxy_SaveXMLState, METH_VARARGS,
   (char*)"V.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\nV.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter)\n\nOverridden to save custom XML state.\n"},
  {(char*)"LoadXMLState", PyvtkSMViewLayoutProxy_LoadXMLState, METH_VARARGS,
   (char*)"V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: virtual int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator)\n\nOverridden to load custom XML state.\n"},
  {(char*)"Reset", PyvtkSMViewLayoutProxy_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\nResets the layout.\n"},
  {(char*)"FindLayout", PyvtkSMViewLayoutProxy_FindLayout, METH_VARARGS | METH_STATIC,
   (char*)"V.FindLayout(vtkSMViewProxy, string) -> vtkSMViewLayoutProxy\nC++: static vtkSMViewLayoutProxy *FindLayout(vtkSMViewProxy *,\n    const char *reggroup=\"layouts\")\n\nHelper method to locate a layout, if any that contains the\nspecified view proxy.\n"},
  {(char*)"SetMultiViewImageBorderColor", PyvtkSMViewLayoutProxy_SetMultiViewImageBorderColor, METH_VARARGS | METH_STATIC,
   (char*)"V.SetMultiViewImageBorderColor(float, float, float)\nC++: static void SetMultiViewImageBorderColor(double r, double g,\n    double b)\n\nSet border size/color to use when capturing multiview images.\n"},
  {(char*)"SetMultiViewImageBorderWidth", PyvtkSMViewLayoutProxy_SetMultiViewImageBorderWidth, METH_VARARGS | METH_STATIC,
   (char*)"V.SetMultiViewImageBorderWidth(int)\nC++: static void SetMultiViewImageBorderWidth(int width)\n\nSet border size/color to use when capturing multiview images.\n"},
  {(char*)"GetMultiViewImageBorderColor", PyvtkSMViewLayoutProxy_GetMultiViewImageBorderColor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetMultiViewImageBorderColor() -> (float, ...)\nC++: static const double *GetMultiViewImageBorderColor()\n\nSet border size/color to use when capturing multiview images.\n"},
  {(char*)"GetMultiViewImageBorderWidth", PyvtkSMViewLayoutProxy_GetMultiViewImageBorderWidth, METH_VARARGS | METH_STATIC,
   (char*)"V.GetMultiViewImageBorderWidth() -> int\nC++: static int GetMultiViewImageBorderWidth()\n\nSet border size/color to use when capturing multiview images.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMViewLayoutProxy_StaticNew()
{
  return vtkSMViewLayoutProxy::New();
}

PyObject *PyVTKClass_vtkSMViewLayoutProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMViewLayoutProxy_StaticNew,
    PyvtkSMViewLayoutProxy_Methods,
    "vtkSMViewLayoutProxy", modulename,
    NULL, NULL,
    PyvtkSMViewLayoutProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkSMViewLayoutProxy_Direction_Type);
    PyvtkSMViewLayoutProxy_Direction_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkSMViewLayoutProxy_Direction_Type;
    if (o && PyDict_SetItemString(d, (char *)"Direction", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkSMViewLayoutProxy::Direction cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "NONE", vtkSMViewLayoutProxy::NONE },
          { "VERTICAL", vtkSMViewLayoutProxy::VERTICAL },
          { "HORIZONTAL", vtkSMViewLayoutProxy::HORIZONTAL },
        };

      o = PyvtkSMViewLayoutProxy_Direction_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMViewLayoutProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMViewLayoutProxy - vtkSMViewLayoutProxy is used by ParaView to\nlayout\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMViewLayoutProxy is used by ParaView to layout multiple views in\na 2D KD-Tree layout. This is proxy, hence can be registered with the\nproxy manager just like other regular proxies; participates in xml\nstate saving/restoring, undo-redo, etc. Users can affects the GUI\nlayout using this proxy instance from Python as well.\n\nEvery time the vtkSMViewLayoutProxy changes so that it would affect\nthe UI",
    ", this class fires vtkCommand::ConfigureEvent.\n\nView proxies that are to laid out in an layout should be \"assigned\"\nto a particular cell in a vtkSMViewLayoutProxy instance.\nvtkSMViewLayoutProxy takes over the responsibility of updating the\nview's Position property correctly.\n\nAlthough, currently, there are no safe guards against assigning a\nview to more than one layout, this is strictly prohibited",
    " and can\ncause unexpected problems at run-time.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMViewLayoutProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMViewLayoutProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMViewLayoutProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

