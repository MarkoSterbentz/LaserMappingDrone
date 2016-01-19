// python wrapper for vtkContourWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContourWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContourWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContourWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkContourWidget_Doc();


static PyObject *
PyvtkContourWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContourWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContourWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourWidget::NewInstance());

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
PyvtkContourWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContourWidget *tempr = vtkContourWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkContourWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  vtkContourRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContourRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkContourWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_GetContourRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContourRepresentation *tempr = (ap.IsBound() ?
      op->GetContourRepresentation() :
      op->vtkContourWidget::GetContourRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkContourWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_CloseLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseLoop();
      }
    else
      {
      op->vtkContourWidget::CloseLoop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_SetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetState(temp0);
      }
    else
      {
      op->vtkContourWidget::SetWidgetState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkContourWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_SetAllowNodePicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowNodePicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowNodePicking(temp0);
      }
    else
      {
      op->vtkContourWidget::SetAllowNodePicking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_GetAllowNodePicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowNodePicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllowNodePicking() :
      op->vtkContourWidget::GetAllowNodePicking());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_AllowNodePickingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowNodePickingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowNodePickingOn();
      }
    else
      {
      op->vtkContourWidget::AllowNodePickingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_AllowNodePickingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowNodePickingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowNodePickingOff();
      }
    else
      {
      op->vtkContourWidget::AllowNodePickingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_SetFollowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFollowCursor(temp0);
      }
    else
      {
      op->vtkContourWidget::SetFollowCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_GetFollowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFollowCursor() :
      op->vtkContourWidget::GetFollowCursor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_FollowCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FollowCursorOn();
      }
    else
      {
      op->vtkContourWidget::FollowCursorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_FollowCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FollowCursorOff();
      }
    else
      {
      op->vtkContourWidget::FollowCursorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_SetContinuousDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContinuousDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContinuousDraw(temp0);
      }
    else
      {
      op->vtkContourWidget::SetContinuousDraw(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_GetContinuousDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetContinuousDraw() :
      op->vtkContourWidget::GetContinuousDraw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_ContinuousDrawOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContinuousDrawOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ContinuousDrawOn();
      }
    else
      {
      op->vtkContourWidget::ContinuousDrawOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_ContinuousDrawOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContinuousDrawOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ContinuousDrawOff();
      }
    else
      {
      op->vtkContourWidget::ContinuousDrawOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContourWidget_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  vtkPolyData *temp0 = NULL;
  int temp1 = 1;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkIdList")))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContourWidget::Initialize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContourWidget_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkContourWidget::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContourWidget_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
    case 3:
      return PyvtkContourWidget_Initialize_s1(self, args);
    case 0:
      return PyvtkContourWidget_Initialize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}


static PyMethodDef PyvtkContourWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkContourWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkContourWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkContourWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContourWidget\nC++: vtkContourWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkContourWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContourWidget\nC++: vtkContourWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkContourWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetRepresentation", PyvtkContourWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkContourRepresentation)\nC++: void SetRepresentation(vtkContourRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetContourRepresentation", PyvtkContourWidget_GetContourRepresentation, METH_VARARGS,
   (char*)"V.GetContourRepresentation() -> vtkContourRepresentation\nC++: vtkContourRepresentation *GetContourRepresentation()\n\nReturn the representation as a vtkContourRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkContourWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"CloseLoop", PyvtkContourWidget_CloseLoop, METH_VARARGS,
   (char*)"V.CloseLoop()\nC++: void CloseLoop()\n\nConvenient method to close the contour loop.\n"},
  {(char*)"SetWidgetState", PyvtkContourWidget_SetWidgetState, METH_VARARGS,
   (char*)"V.SetWidgetState(int)\nC++: void SetWidgetState(int a)\n\nConvenient method to change what state the widget is in.\n"},
  {(char*)"GetWidgetState", PyvtkContourWidget_GetWidgetState, METH_VARARGS,
   (char*)"V.GetWidgetState() -> int\nC++: int GetWidgetState()\n\nConvenient method to determine the state of the method\n"},
  {(char*)"SetAllowNodePicking", PyvtkContourWidget_SetAllowNodePicking, METH_VARARGS,
   (char*)"V.SetAllowNodePicking(int)\nC++: void SetAllowNodePicking(int)\n\nSet / Get the AllowNodePicking value. This ivar indicates whether\nthe nodes and points between nodes can be picked/un-picked by\nCtrl+Click on the node.\n"},
  {(char*)"GetAllowNodePicking", PyvtkContourWidget_GetAllowNodePicking, METH_VARARGS,
   (char*)"V.GetAllowNodePicking() -> int\nC++: int GetAllowNodePicking()\n\nSet / Get the AllowNodePicking value. This ivar indicates whether\nthe nodes and points between nodes can be picked/un-picked by\nCtrl+Click on the node.\n"},
  {(char*)"AllowNodePickingOn", PyvtkContourWidget_AllowNodePickingOn, METH_VARARGS,
   (char*)"V.AllowNodePickingOn()\nC++: void AllowNodePickingOn()\n\nSet / Get the AllowNodePicking value. This ivar indicates whether\nthe nodes and points between nodes can be picked/un-picked by\nCtrl+Click on the node.\n"},
  {(char*)"AllowNodePickingOff", PyvtkContourWidget_AllowNodePickingOff, METH_VARARGS,
   (char*)"V.AllowNodePickingOff()\nC++: void AllowNodePickingOff()\n\nSet / Get the AllowNodePicking value. This ivar indicates whether\nthe nodes and points between nodes can be picked/un-picked by\nCtrl+Click on the node.\n"},
  {(char*)"SetFollowCursor", PyvtkContourWidget_SetFollowCursor, METH_VARARGS,
   (char*)"V.SetFollowCursor(int)\nC++: void SetFollowCursor(int a)\n\nFollow the cursor ? If this is ON, during definition, the last\nnode of the contour will automatically follow the cursor, without\nwaiting for the point to be dropped. This may be useful for some\ninterpolators, such as the live-wire interpolator to see the\nshape of the contour that will be placed as you move the mouse\ncursor.\n"},
  {(char*)"GetFollowCursor", PyvtkContourWidget_GetFollowCursor, METH_VARARGS,
   (char*)"V.GetFollowCursor() -> int\nC++: int GetFollowCursor()\n\nFollow the cursor ? If this is ON, during definition, the last\nnode of the contour will automatically follow the cursor, without\nwaiting for the point to be dropped. This may be useful for some\ninterpolators, such as the live-wire interpolator to see the\nshape of the contour that will be placed as you move the mouse\ncursor.\n"},
  {(char*)"FollowCursorOn", PyvtkContourWidget_FollowCursorOn, METH_VARARGS,
   (char*)"V.FollowCursorOn()\nC++: void FollowCursorOn()\n\nFollow the cursor ? If this is ON, during definition, the last\nnode of the contour will automatically follow the cursor, without\nwaiting for the point to be dropped. This may be useful for some\ninterpolators, such as the live-wire interpolator to see the\nshape of the contour that will be placed as you move the mouse\ncursor.\n"},
  {(char*)"FollowCursorOff", PyvtkContourWidget_FollowCursorOff, METH_VARARGS,
   (char*)"V.FollowCursorOff()\nC++: void FollowCursorOff()\n\nFollow the cursor ? If this is ON, during definition, the last\nnode of the contour will automatically follow the cursor, without\nwaiting for the point to be dropped. This may be useful for some\ninterpolators, such as the live-wire interpolator to see the\nshape of the contour that will be placed as you move the mouse\ncursor.\n"},
  {(char*)"SetContinuousDraw", PyvtkContourWidget_SetContinuousDraw, METH_VARARGS,
   (char*)"V.SetContinuousDraw(int)\nC++: void SetContinuousDraw(int a)\n\nDefine a contour by continuously drawing with the mouse cursor.\nPress and hold the left mouse button down to continuously draw.\nReleasing the left mouse button switches into a snap drawing\nmode. Terminate the contour by pressing the right mouse button. \nIf you do not want to see the nodes as they are added to the\ncontour, set the opacity to 0 of the representation's property. \nIf you do not want to see the last active node as it is being\nadded, set the opacity to 0 of the representation's active\nproperty.\n"},
  {(char*)"GetContinuousDraw", PyvtkContourWidget_GetContinuousDraw, METH_VARARGS,
   (char*)"V.GetContinuousDraw() -> int\nC++: int GetContinuousDraw()\n\nDefine a contour by continuously drawing with the mouse cursor.\nPress and hold the left mouse button down to continuously draw.\nReleasing the left mouse button switches into a snap drawing\nmode. Terminate the contour by pressing the right mouse button. \nIf you do not want to see the nodes as they are added to the\ncontour, set the opacity to 0 of the representation's property. \nIf you do not want to see the last active node as it is being\nadded, set the opacity to 0 of the representation's active\nproperty.\n"},
  {(char*)"ContinuousDrawOn", PyvtkContourWidget_ContinuousDrawOn, METH_VARARGS,
   (char*)"V.ContinuousDrawOn()\nC++: void ContinuousDrawOn()\n\nDefine a contour by continuously drawing with the mouse cursor.\nPress and hold the left mouse button down to continuously draw.\nReleasing the left mouse button switches into a snap drawing\nmode. Terminate the contour by pressing the right mouse button. \nIf you do not want to see the nodes as they are added to the\ncontour, set the opacity to 0 of the representation's property. \nIf you do not want to see the last active node as it is being\nadded, set the opacity to 0 of the representation's active\nproperty.\n"},
  {(char*)"ContinuousDrawOff", PyvtkContourWidget_ContinuousDrawOff, METH_VARARGS,
   (char*)"V.ContinuousDrawOff()\nC++: void ContinuousDrawOff()\n\nDefine a contour by continuously drawing with the mouse cursor.\nPress and hold the left mouse button down to continuously draw.\nReleasing the left mouse button switches into a snap drawing\nmode. Terminate the contour by pressing the right mouse button. \nIf you do not want to see the nodes as they are added to the\ncontour, set the opacity to 0 of the representation's property. \nIf you do not want to see the last active node as it is being\nadded, set the opacity to 0 of the representation's active\nproperty.\n"},
  {(char*)"Initialize", PyvtkContourWidget_Initialize, METH_VARARGS,
   (char*)"V.Initialize(vtkPolyData, int, vtkIdList)\nC++: virtual void Initialize(vtkPolyData *poly, int state=1,\n    vtkIdList *idList=NULL)\nV.Initialize()\nC++: virtual void Initialize()\n\nInitialize the contour widget from a user supplied set of points.\nThe state of the widget decides if you are still defining the\nwidget, or if you've finished defining (added the last point) are\nmanipulating it. Note that if the polydata supplied is closed,\nthe state will be set to manipulate.\n State: Define = 0, Manipulate = 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContourWidget_StaticNew()
{
  return vtkContourWidget::New();
}

PyObject *PyVTKClass_vtkContourWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContourWidget_StaticNew,
    PyvtkContourWidget_Methods,
    "vtkContourWidget", modulename,
    NULL, NULL,
    PyvtkContourWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "Start", vtkContourWidget::Start },
          { "Define", vtkContourWidget::Define },
          { "Manipulate", vtkContourWidget::Manipulate },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkContourWidget_Doc()
{
  static const char *docstring[] = {
    "vtkContourWidget - create a contour with a set of points\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkContourWidget is used to select a set of points, and draw\nlines between these points. The contour may be opened or closed,\ndepending on how the last point is added. The widget handles all\nprocessing of widget events (that are triggered by VTK events). The\nvtkContourRepresentation is responsible for all placement of the\npoints, calculation of the lines, and contour manipulation. This is\ndone",
    " through two main helper classes: vtkPointPlacer and\nvtkContourLineInterpolator. The representation is also responsible\nfor drawing the points and lines.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - triggers a Select event\n  RightButtonPressEvent - triggers a AddFinalPoint",
    " event\n  MouseMoveEvent - triggers a Move event\n  LeftButtonReleaseEvent - triggers an EndSelect event\n  Delete key event - triggers a Delete event\n  Shift + Delete key event - triggers a Reset event \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkContourWidget's widget events:\n\n\n  vtkWidgetEven",
    "t::Select\n       widget state is:\n           Start or\n           Define: If we already have at least 2 nodes, test\n                whether the current (X,Y) location is near an\nexisting\n                node. If so, close the contour and change to\nManipulate\n                state. Otherwise, attempt to add a node at this (X,Y)\n                location.\n           Manipulate: If this (X,Y) location ",
    "activates a node, then\n                set the current operation to Translate. Otherwise, if\n                this location is near the contour, attempt to add a\n                new node on the contour at this (X,Y) location.\n\n\n  vtkWidgetEvent::AddFinalPoint\n       widget state is:\n           Start: Do nothing.\n           Define: If we already have at least 2 nodes, test\n                whether th",
    "e current (X,Y) location is near an\nexisting\n                node. If so, close the contour and change to\nManipulate\n                state. Otherwise, attempt to add a node at this (X,Y)\n                location. If we do, then leave the contour open and\n                change to Manipulate state.\n           Manipulate: Do nothing.\n\n\n  vtkWidgetEvent::Move\n       widget state is:\n           Start ",
    "or\n           Define: Do nothing.\n           Manipulate: If our operation is Translate, then invoke\n                 WidgetInteraction() on the representation. If our\n                 operation is Inactive, then just attempt to activate\n                 a node at this (X,Y) location.\n\n\n  vtkWidgetEvent::EndSelect\n       widget state is:\n           Start or\n           Define: Do nothing.\n          ",
    " Manipulate: If our operation is not Inactive, set it to\n                 Inactive.\n\n\n  vtkWidgetEvent::Delete\n       widget state is:\n           Start: Do nothing.\n           Define: Remove the last point on the contour.\n           Manipulate: Attempt to activate a node at (X,Y). If\n                  we do activate a node, delete it. If we now\n                  have less than 3 nodes, go back to ",
    "Define state.\n\n\n  vtkWidgetEvent::Reset\n       widget state is:\n           Start: Do nothing.\n           Define: Remove all points and line segments of the\ncontour.\n                Essentially calls Initialize(NULL)\n           Manipulate: Do nothing. \n\nThis widget invokes the following VTK events on itself (which\nobservers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (beginning to intera",
    "ct)\n  vtkCommand::EndInteractionEvent (completing interaction)\n  vtkCommand::InteractionEvent (moving after selecting something)\n  vtkCommand::PlacePointEvent (after point is positioned;\n                               call data includes handle id (0,1))\n  vtkCommand::WidgetValueChangedEvent (Invoked when the contour is\nclosed\n                                       for the first time. ) \n\nSee Also:",
    "\n\nvtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContourWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContourWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContourWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

