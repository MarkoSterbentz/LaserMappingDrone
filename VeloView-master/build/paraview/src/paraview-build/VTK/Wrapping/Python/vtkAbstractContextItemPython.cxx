// python wrapper for vtkAbstractContextItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextKeyEvent.h"
#include "vtkVector.h"
#include "vtkAbstractContextItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractContextItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractContextItem_Doc();


static PyObject *
PyvtkAbstractContextItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractContextItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractContextItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractContextItem::NewInstance());

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
PyvtkAbstractContextItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractContextItem *tempr = vtkAbstractContextItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAbstractContextItem::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkAbstractContextItem::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_PaintChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->PaintChildren(temp0) :
      op->vtkAbstractContextItem::PaintChildren(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources();
      }
    else
      {
      op->vtkAbstractContextItem::ReleaseGraphicsResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->AddItem(temp0) :
      op->vtkAbstractContextItem::AddItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkAbstractContextItem::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractContextItem_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0) :
      op->vtkAbstractContextItem::RemoveItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractContextItem_RemoveItem_Methods[] = {
  {NULL, PyvtkAbstractContextItem_RemoveItem_s1, METH_VARARGS,
   (char*)"@O *vtkAbstractContextItem"},
  {NULL, PyvtkAbstractContextItem_RemoveItem_s2, METH_VARARGS,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAbstractContextItem_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractContextItem_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return NULL;
}



static PyObject *
PyvtkAbstractContextItem_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetItem(temp0) :
      op->vtkAbstractContextItem::GetItem(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetItemIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetItemIndex(temp0) :
      op->vtkAbstractContextItem::GetItemIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkAbstractContextItem::GetNumberOfItems());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_ClearItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearItems();
      }
    else
      {
      op->vtkAbstractContextItem::ClearItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Raise(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Raise");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Raise(temp0) :
      op->vtkAbstractContextItem::Raise(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_StackAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->StackAbove(temp0, temp1) :
      op->vtkAbstractContextItem::StackAbove(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_Lower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Lower(temp0) :
      op->vtkAbstractContextItem::Lower(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_StackUnder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackUnder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->StackUnder(temp0, temp1) :
      op->vtkAbstractContextItem::StackUnder(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkContextScene *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
    {
    if (ap.IsBound())
      {
      op->SetScene(temp0);
      }
    else
      {
      op->vtkAbstractContextItem::SetScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextScene *tempr = (ap.IsBound() ?
      op->GetScene() :
      op->vtkAbstractContextItem::GetScene());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    if (ap.IsBound())
      {
      op->SetParent(temp0);
      }
    else
      {
      op->vtkAbstractContextItem::SetParent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkAbstractContextItem::GetParent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapToParent(*temp0) :
      op->vtkAbstractContextItem::MapToParent(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapFromParent(*temp0) :
      op->vtkAbstractContextItem::MapFromParent(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapToScene(*temp0) :
      op->vtkAbstractContextItem::MapToScene(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_MapFromScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapFromScene(*temp0) :
      op->vtkAbstractContextItem::MapFromScene(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetVisible() :
      op->vtkAbstractContextItem::GetVisible());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisible(temp0);
      }
    else
      {
      op->vtkAbstractContextItem::SetVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkAbstractContextItem::GetInteractive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextItem_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextItem *op = static_cast<vtkAbstractContextItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractive(temp0);
      }
    else
      {
      op->vtkAbstractContextItem::SetInteractive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractContextItem_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractContextItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractContextItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractContextItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractContextItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkAbstractContextItem_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkAbstractContextItem_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {(char*)"PaintChildren", PyvtkAbstractContextItem_PaintChildren, METH_VARARGS,
   (char*)"V.PaintChildren(vtkContext2D) -> bool\nC++: virtual bool PaintChildren(vtkContext2D *painter)\n\nPaint the children of the item, should be called whenever the\nchildren need to be rendered.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAbstractContextItem_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources()\nC++: virtual void ReleaseGraphicsResources()\n\nRelease graphics resources hold by the item. The default\nimplementation is empty.\n"},
  {(char*)"AddItem", PyvtkAbstractContextItem_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkAbstractContextItem) -> int\nC++: unsigned int AddItem(vtkAbstractContextItem *item)\n\nAdd child items to this item. Increments reference count of item.\n\\return the index of the child item.\n"},
  {(char*)"RemoveItem", PyvtkAbstractContextItem_RemoveItem, METH_VARARGS,
   (char*)"V.RemoveItem(vtkAbstractContextItem) -> bool\nC++: bool RemoveItem(vtkAbstractContextItem *item)\nV.RemoveItem(int) -> bool\nC++: bool RemoveItem(unsigned int index)\n\nRemove child item from this item. Decrements reference count of\nitem.\n\\param item the item to be removed.\n\\return true on success, false otherwise.\n"},
  {(char*)"GetItem", PyvtkAbstractContextItem_GetItem, METH_VARARGS,
   (char*)"V.GetItem(int) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetItem(unsigned int index)\n\nGet the item at the specified index.\n\\return the item at the specified index (null if index is\n    invalid).\n"},
  {(char*)"GetItemIndex", PyvtkAbstractContextItem_GetItemIndex, METH_VARARGS,
   (char*)"V.GetItemIndex(vtkAbstractContextItem) -> int\nC++: unsigned int GetItemIndex(vtkAbstractContextItem *item)\n\nGet the index of the specified item.\n\\return the index of the item (-1 if item is not a valid child).\n"},
  {(char*)"GetNumberOfItems", PyvtkAbstractContextItem_GetNumberOfItems, METH_VARARGS,
   (char*)"V.GetNumberOfItems() -> int\nC++: unsigned int GetNumberOfItems()\n\nGet the number of child items.\n"},
  {(char*)"ClearItems", PyvtkAbstractContextItem_ClearItems, METH_VARARGS,
   (char*)"V.ClearItems()\nC++: void ClearItems()\n\nRemove all child items from this item.\n"},
  {(char*)"Raise", PyvtkAbstractContextItem_Raise, METH_VARARGS,
   (char*)"V.Raise(int) -> int\nC++: unsigned int Raise(unsigned int index)\n\nRaises the child to the top of the item's stack.\n\\return The new index of the item\\sa StackAbove(), Lower(),\n    LowerUnder()\n"},
  {(char*)"StackAbove", PyvtkAbstractContextItem_StackAbove, METH_VARARGS,
   (char*)"V.StackAbove(int, int) -> int\nC++: virtual unsigned int StackAbove(unsigned int index,\n    unsigned int under)\n\nRaises the child above the under sibling. If under is invalid,\nthe item is raised to the top of the item's stack.\n\\return The new index of the item\\sa Raise(), Lower(),\n    StackUnder()\n"},
  {(char*)"Lower", PyvtkAbstractContextItem_Lower, METH_VARARGS,
   (char*)"V.Lower(int) -> int\nC++: unsigned int Lower(unsigned int index)\n\nLowers the child to the bottom of the item's stack.\n\\return The new index of the item\\sa StackUnder(), Raise(),\n    StackAbove()\n"},
  {(char*)"StackUnder", PyvtkAbstractContextItem_StackUnder, METH_VARARGS,
   (char*)"V.StackUnder(int, int) -> int\nC++: virtual unsigned int StackUnder(unsigned int child,\n    unsigned int above)\n\nLowers the child under the above sibling. If above is invalid,\nthe item is lowered to the bottom of the item's stack\n\\return The new index of the item\\sa Lower(), Raise(),\n    StackAbove()\n"},
  {(char*)"SetScene", PyvtkAbstractContextItem_SetScene, METH_VARARGS,
   (char*)"V.SetScene(vtkContextScene)\nC++: virtual void SetScene(vtkContextScene *scene)\n\nSet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {(char*)"GetScene", PyvtkAbstractContextItem_GetScene, METH_VARARGS,
   (char*)"V.GetScene() -> vtkContextScene\nC++: vtkContextScene *GetScene()\n\nGet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {(char*)"SetParent", PyvtkAbstractContextItem_SetParent, METH_VARARGS,
   (char*)"V.SetParent(vtkAbstractContextItem)\nC++: virtual void SetParent(vtkAbstractContextItem *parent)\n\nSet the parent item. The parent will be set for all items except\ntop level items in a scene.\n"},
  {(char*)"GetParent", PyvtkAbstractContextItem_GetParent, METH_VARARGS,
   (char*)"V.GetParent() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetParent()\n\nGet the parent item. The parent will be set for all items except\ntop level items in a tree.\n"},
  {(char*)"MapToParent", PyvtkAbstractContextItem_MapToParent, METH_VARARGS,
   (char*)"V.MapToParent(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapToParent(const vtkVector2f &point)\n\nMaps the point to the parent coordinate system.\n"},
  {(char*)"MapFromParent", PyvtkAbstractContextItem_MapFromParent, METH_VARARGS,
   (char*)"V.MapFromParent(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapFromParent(const vtkVector2f &point)\n\nMaps the point from the parent coordinate system.\n"},
  {(char*)"MapToScene", PyvtkAbstractContextItem_MapToScene, METH_VARARGS,
   (char*)"V.MapToScene(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapToScene(const vtkVector2f &point)\n\nMaps the point to the scene coordinate system.\n"},
  {(char*)"MapFromScene", PyvtkAbstractContextItem_MapFromScene, METH_VARARGS,
   (char*)"V.MapFromScene(vtkVector2f) -> vtkVector2f\nC++: virtual vtkVector2f MapFromScene(const vtkVector2f &point)\n\nMaps the point from the scene coordinate system.\n"},
  {(char*)"GetVisible", PyvtkAbstractContextItem_GetVisible, METH_VARARGS,
   (char*)"V.GetVisible() -> bool\nC++: bool GetVisible()\n\nGet the visibility of the item (should it be drawn).\n"},
  {(char*)"SetVisible", PyvtkAbstractContextItem_SetVisible, METH_VARARGS,
   (char*)"V.SetVisible(bool)\nC++: void SetVisible(bool a)\n\nSet the visibility of the item (should it be drawn). Visible by\ndefault.\n"},
  {(char*)"GetInteractive", PyvtkAbstractContextItem_GetInteractive, METH_VARARGS,
   (char*)"V.GetInteractive() -> bool\nC++: bool GetInteractive()\n\nGet if the item is interactive (should respond to mouse events).\n"},
  {(char*)"SetInteractive", PyvtkAbstractContextItem_SetInteractive, METH_VARARGS,
   (char*)"V.SetInteractive(bool)\nC++: void SetInteractive(bool a)\n\nSet if the item is interactive (should respond to mouse events).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractContextItem_Methods,
    "vtkAbstractContextItem", modulename,
    NULL, NULL,
    PyvtkAbstractContextItem_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractContextItem_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractContextItem - base class for items that are part of a\n\n",
    "Superclass: vtkObject\n\n",
    "This class is the common base for all context scene items. You should\ngenerally derive from vtkContextItem, rather than this class, as it\nprovides most of the commonly used API.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractContextItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractContextItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractContextItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

